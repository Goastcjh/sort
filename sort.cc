#include <iostream>

using namespace std;

void print(int a[], int len);
void BubbleSort(int a[], int len);
void SelectionSort(int a[], int len);
void ShellSort(int a[], int len);
void QuickSort(int a[], int l, int r);

int main() {
    int a[6] = {2,5,4,3,1,7};
    BubbleSort(a,6);
    SelectionSort(a,6);
    ShellSort(a,6);
    QuickSort(a,0,6);
    print(a,6);
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
    int temp = 0;
    for(int i = 0; i < len-1; i++) {
        for(int j = i+1; j > 0; j--) {
            if(a[j] < a[j-1]) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            else
                break;
        }
    }
    return;
}

void ShellSort(int a[], int len) {
    int temp = 0;
    int incre = len;

    while(1) {
        incre = incre / 2;
        for(int k = 0; k < incre; k++) {
            for(int i = k+incre; i < len; i += incre) {
                for(int j = i; j > k; j -= incre) {
                    if(a[j] < a[j-incre]) {
                        temp = a[j-incre];
                        a[j-incre] = a[j];
                        a[j] = temp;
                    } else {
                        break;
                    }
                }
            }
        }

        if(incre == 1)
            break;
    }
    print(a, len);
    return;
}

void QuickSort(int a[], int l, int r) {
    if(r <= 1) {
        return;
    }
    int i = l, j = r, key = a[l];
    
    while(i < j) {
        while(i < j && a[j] <= key)
            j--;
        if(i < j) {
            a[i] = a[j];
            i++;
        }
        
        while(i < j && a[i] >= key)
            i++;
        if(i < j) {
            a[j] = a[i];
            j--;
        }

        //i == j
        a[i] = key;
        QuickSort(a,l,i-1);
        QuickSort(a,i+1,r);
    }
    return;
}
