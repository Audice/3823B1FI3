#include <iostream>
#include <random>

using namespace std;

void itog_system(long double** matrix, int size){
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            cout << matrix[i][j]; cout << "*x"; cout << j+1;
            if (j!=size-1)
                cout << " + ";}
        cout << " = "; cout << matrix[i][size] << endl;}
    cout << endl;
}

void itog_reshenie(long double** matrix, int size){
    cout << "Itogovoe Reshenie: " << endl;
    for (int i = 0; i<size; i++){
        cout << "x"; cout << i+1 << " = "; cout << matrix[i][size]/matrix[i][i] << endl;}
}

void print_matrix_gaussa(long double** matrix, int size){
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            std::cout << matrix[i][j] << " ";}
        std::cout << "\n";}
    std::cout << "\n";
}

void vector_neviazki(long double** matrix, long double** matrix_copy, long double* vector_b,  int size){
    long double* mas = new long double [size];
    long double* array = new long double [size];
    for (int i = 0; i<size; i++){
        mas[i] = matrix[i][size]/matrix[i][i];}
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            array[i]+= matrix_copy[i][j]*mas[j];}}
    cout << "Vector neviazki: " << endl; 
    for (int i = 0; i<size; i++){
        cout << vector_b[i] - array[i] << " ";}
    cout << "\n" << endl;
    delete[] mas;
    delete[] array;
}

int replace_zero(long double** matrix, int size, int col, int b_col){
    int no_zero = 0;
    for (int j = 0; j<size; j++){
        if (matrix[j][col]!=0){
            no_zero = j; break;}}
    
    if (no_zero == 0){
        cout << "Система: " << endl;
        itog_system(matrix, size);
        if (b_col == 0){
            cout << "имеет множество решений" << endl;}
        else {
            cout << "не имеет решений" << endl;}
        return 1;}
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            if (i == no_zero){
                long double a = matrix[col][j];
                matrix[col][j] = matrix[i][j];
                matrix[i][j] = a;}}}
    return 0;
}

int reverse_method_gaussa(long double** matrix, int size){
    cout << "Reverse Method Gaussa: " << endl;
    long double ved_elem = 0;
    for (int i = 0; i<size; i++){
        if (matrix[i][i] == 0){
            if (replace_zero(matrix, size, i, matrix[i][size]) == 1){
                return 1;}}
        ved_elem = matrix[i][i];
        print_matrix_gaussa(matrix, size);
        for (int j = 0; j<size; j++){
            long double subtra = matrix[j][i]/ved_elem;
            if (j!=i){
                for(int k = 0; k<size+1; k++){
                    matrix[j][k] = matrix[j][k]-(subtra*matrix[i][k]);}}}}
    print_matrix_gaussa(matrix, size);
    return 0;
}

void straight_method_gaussa(long double** matrix, int size){
    cout << "Straight Method Gaussa: " << endl;
    long double ved_elem = 0;
    for (int i = 0; i<size; i++){
        if (matrix[i][i] == 0){
            if (replace_zero(matrix, size, i, matrix[i][size]) == 1){
                break;}}
        ved_elem = matrix[i][i];
        print_matrix_gaussa(matrix, size);
        for (int j = 0; j<size; j++){
            long double subtra = matrix[j][i]/ved_elem;
            if (j>i){
                for(int k = 0; k<size+1; k++){
                    matrix[j][k] = matrix[j][k]-(subtra*matrix[i][k]);}}}}
    print_matrix_gaussa(matrix, size);
}

int main(){
    int size, a;
    random_device rd; mt19937 gen(rd()); uniform_int_distribution<> dist(-9,9);
    std::cout << "Введите размер массива: " << endl; cin >> size;
    long double** matrix = new long double* [size];
    long double** matrix_copy = new long double* [size];
    long double** matrix_copy2 = new long double* [size];
    long double* vector_b = new long double [size];
    for (int i = 0; i<size; i++){
        matrix[i] = new long double [size+1];}
    for (int i = 0; i<size; i++){
        matrix_copy[i] = new long double [size+1];}
    for (int i = 0; i<size; i++){
        matrix_copy2[i] = new long double [size+1];}


    std::cout << "Начальная матрица: " << endl;
    /*for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            matrix[i][j] = dist(gen); vector_b[i] = matrix[i][j]; cout << matrix[i][j] << " ";}
        cout << "\n";}
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            matrix_copy[i][j] = matrix[i][j];}}
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            matrix_copy2[i][j] = matrix[i][j];}}*/

            
    
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            cout << "arr"; cout << "["; cout << j+(i*(size+1)); cout << "] = "; cin >> a; cout << endl;
            matrix[i][j] = a; 
            vector_b[i] = matrix[i][j];
            }
        cout << "\n";}

    cout << "Начальная маьрица:" << endl;
    
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            cout << matrix[i][j] << " ";}
        cout << endl;}

        
    
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            matrix_copy[i][j] = matrix[i][j];}}
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size+1; j++){
            matrix_copy2[i][j] = matrix[i][j];}}
    std::cout << "\n";



    if (reverse_method_gaussa(matrix, size) == 0){
        itog_system(matrix, size);
        straight_method_gaussa(matrix_copy2, size);
        itog_system(matrix_copy2, size);
        vector_neviazki (matrix, matrix_copy, vector_b, size);
        itog_reshenie(matrix, size);}
    
    for (int i = 0; i<size; i++){
        delete[] matrix[i]; delete[] matrix_copy[i]; delete[] matrix_copy2[i];
    }
    delete[] matrix; delete[] matrix_copy; delete[] matrix_copy2; delete[] vector_b;
}
