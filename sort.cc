#include <iostream>

using namespace std;

void print(int a[], int len);
void BubbleSort(int a[], int len);
void SelectionSort(int a[], int len);
void ShellSort(int a[], int len);
void QuickSort(int a[], int len);

int main() {
    int a[6] = {2,5,4,3,1,7};
    BubbleSort(a,6);
    SelectionSort(a,6);
    return 0;
}

void print(int a[], int len) {
    for(int i = 0; i < len; i++) {
        cout << a[i];
    }
    cout << endl;
    return;
}

void BubbleSort(int a[], int len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len-i-1; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    print(a,len);
    return;
}

void SelectionSort(int a[], int len) {
    int k = 0;
    int temp = 0;
    for(int i = 0; i < len-1; i++) {
        k = i;
        for(int j = i+1; j < len; j++) {
            if(a[j] > a[k])
                k = j;
        }
        if(k != i) {
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
    print(a,len);
    return;
}

void InsertSort(int a[], int len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            
        }
    }
    return;
}

void ShellSort(int a[], int len) {

    return;
}

void QuickSort(int a[], int len) {
    
    return;
}
