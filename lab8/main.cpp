#include <iostream>
#include <iomanip>
using namespace std;

int** init_matrix(int *n, int *m); //создает матрицу m*n
void print_matrix(int **matrix, int n, int m);//печатает
void print_array(int *array, int length);//выводит массив
double average(int *array, int length);//вычисляет ср.арифметическое массива
void create_x (int **matrix, int n, int m);//создает и выводит X(n)

int main(){
    int n, m, **matrix = init_matrix(&n, &m);
    cout << "The matrix is generated: \n";
    print_matrix(matrix, n, m);
    cout << "X(n): ";
    create_x(matrix, n, m);
    return 0;
}

int** init_matrix(int *n, int *m) {
    srand(time(NULL));

    cout << "Enter n: ";
    cin >> *n;
    cout << "Enter m: ";
    cin >> *m;

    int **matrix = new int* [*n];
    for (int i = 0; i < *n; i++) {
        matrix[i] = new int [*n];

        for (int j = 0; j < *m; j++)
            matrix[i][j] = rand()%19 - 9;
    }
    return matrix;
}

void print_matrix(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++)
        print_array(matrix[i], m);
    cout << endl;
}

void print_array(int *array, int length) {
    for (int i = 0; i < length; i++)
        cout << setw(3) << array[i];
    cout << endl;
}

double average(int *array, int length) {
    int s = 0;
    for (int i = 0; i < length; i++){
        s += array[i];
    }
    return double(s)/length;
}

void create_x (int **matrix, int n, int m) {
    double x[m];
    for (int i = 0; i < n; i++){
        x[i] = average(matrix[i], m);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (x[i] < x[j])
            {
                double temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << x[i] << " ";
    }
}