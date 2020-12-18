#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void init(float arr[],int size); //Генерируем массив 
void show (float arr[], int size); //Просто выводит массив, когда её вызывают
void max_negative_element (float arr[], int size, int &index_of_max_negative);//ищет наибольший отрицательный
void min_element (float arr[], int size, int &index_of_min);//поиск минимального элемента массива
void exchange (float arr[], int size, int &index_of_max_negative, int &index_of_min);
//exchange() аналогично swap() из <algorythms>, только частный случай

int main() {
    const int size = 10;
    float arr[size];

    init(arr, size);
    show(arr, size);
    
    int index_of_max_negative = 0;
    int index_of_min = 0;

    max_negative_element (arr, size, index_of_max_negative);
    min_element (arr, size, index_of_min);

    exchange (arr, size, index_of_max_negative, index_of_min);
    show(arr, size);
    return 0;
}

void init (float arr[], int size) {
    srand(time(NULL));

    for (int i = 0; i<size; i++) {
        arr[i] = rand()%21-10;
    }
}

void show (float arr[], int size) {
    cout << "Your array: ";
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void max_negative_element (float arr[], int size, int &index_of_max_negative) {
    int i = 0;
    while (arr[i] > 0) {
        i++;
    }
    float max = arr[i];
    index_of_max_negative = i;
    i++;
    for (i; i<size;i++) {
        if (arr[i] > max && arr[i] < 0) {
            max = arr[i];
            index_of_max_negative = i;
        }
    }
    
}

void min_element (float arr[], int size, int &index_of_min) {
    float min = arr[0];
    for (int i = 1; i<size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index_of_min = i;
        }
    }
}

void exchange (float arr[], int size, int &index_of_max_negative, int &index_of_min) {
    float t = arr[index_of_max_negative]; //Временная переменная
    arr[index_of_max_negative] = arr[index_of_min]; //Жаль, но мы не в питоне. Кортежей нет
    arr[index_of_min] = t;
}