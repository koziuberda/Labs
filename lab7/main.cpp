#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void init(float arr[],int size);
void max_negative_element (float arr[], int size, int &index_of_max_negative);

int main() {
    const int size = 10;
    float arr[size];

    init(arr, size);

    cout << "Your array: ";
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    int index_of_max_negative = 0;

    max_negative_element (arr, size, index_of_max_negative);

    cout << "Max negative element: " << index_of_max_negative;
    return 0;
}

void init (float arr[], int size) {
    //srand(time(NULL));

    for (int i = 0; i<size; i++) {
        arr[i] = rand()%21-10;
    }
}

void max_negative_element (float arr[], int size, int &index_of_max_negative) {
    int i = 0;
    while (arr[i] > 0) {
        i++;
    }
    float max = arr[i];
    i++;
    for (i; i<size;i++) {
        if (arr[i] > max && arr[i] < 0) {
            max = arr[i];
            index_of_max_negative = i;
        }
    }
    
}