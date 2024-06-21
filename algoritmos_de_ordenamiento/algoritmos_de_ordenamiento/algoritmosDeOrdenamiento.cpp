//
//  algoritmosDeOrdenamiento.cpp
//  algoritmos_de_ordenamiento
//
//  Created by Yadira Sainz on 31/03/23.
//


#include <iostream>
#include <cstdlib>
#include <ctime>

class AlgoritmoDeOrdenamiento{
public:
    void print(int *a, int n) {
        printf("[ ");
        for(int i = 0; i < n; i++) printf("%i ", a[i]);
        printf("]\n");
    }
    
    void swap(int &a, int &b){
        int c = a;
        a = b;
        b = c;
    }
    
    void quickSort(int *a, int left, int right){
        if (left >= right) {
                    return;
                }
                int pivot = a[(left + right) / 2];
                int i = left;
                int j = right;
                while (i <= j) {
                    while (a[i] < pivot) {
                        i++;
                    }
                    while (a[j] > pivot) {
                        j--;
                    }
                    if (i <= j) {
                        swap(a[i], a[j]);
                        i++;
                        j--;
                    }
                }
                quickSort(a, left, j);
                quickSort(a, i, right);
            }
    
    void mergeSort(int *a, int left, int right){
            if(left < right){
                int mid = (left + right) / 2;
                mergeSort(a, left, mid);
                mergeSort(a, mid+1, right);
                int *merged = merge(a+left, mid-left+1, a+mid+1, right-mid);
                for(int i = 0; i < right-left+1; i++){
                    a[left+i] = merged[i];
                }
                delete [] merged;
            }
        }

    int *merge(int *L1, int n, int *L2, int m){
        int *L = new int[n+m];
        int i = 0, j = 0, k = 0;
        while(i < n && j < m) L[k++] = L1[i] < L2[j] ? L1[i++] : L2[j++];
        while(i < n) L[k++] = L1[i++];
        while(j < m) L[k++] = L2[j++];
        return L;
    }

        void heapSort(int *a, int n) {
            for (int i = n / 2 - 1; i >= 0; i--) heap(a, n, i);
            for (int i = n-1; i >= 0; i--) {
                swap(a[0], a[i]);
                heap(a, i, 0);
            }
        }
    
    void heap(int *a, int n, int i) {
            int largest = i;
            int l = 2*i + 1;
            int r = 2*i + 2;
            if (l < n && a[l] > a[largest]) largest = l;
            if (r < n && a[r] > a[largest]) largest = r;
            if (largest != i) {
                swap(a[i], a[largest]);
                heap(a, n, largest);
            }
        }
};
