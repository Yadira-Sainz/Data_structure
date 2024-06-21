//
//  algoritmos.cpp
//  prueba_de_eficiencia
//
//  Created by Yadira Sainz on 22/04/23.
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
    
    void quickSort(int *a, int left, int right, int &count){
        if (left >= right) {
                    return;
                }
                int pivot = a[(left + right) / 2];
                int i = left;
                int j = right;
                 do{
                    while (a[i] < pivot) {
                        count++; //Contador de eficiencia
                        i++;
                    }
                    while (a[j] > pivot) {
                        count++; //Contador de eficiencia
                        j--;
                    }
                    if (i <= j) {
                        count++; //Contador de eficiencia
                        swap(a[i], a[j]);
                        i++;
                        j--;
                    }
                 }while (i <= j);
        if(left < j){
            quickSort(a, left, j, count);
            
        }
        if(i< right){
            quickSort(a, i, right, count);
            
        }
            }
    
    void mergeSort(int *a, int left, int right, int &count){
        if(left < right){
                int mid = (left + right) / 2;
                mergeSort(a, left, mid, count);
                mergeSort(a, mid+1, right, count);
                int *merged = merge(a+left, mid-left+1, a+mid+1, right-mid, count);
                for(int i = 0; i < right-left+1; i++){
                    a[left+i] = merged[i];
                    count++; //Contador de eficiencia
                }
                delete [] merged;
            }
        }

    int *merge(int *L1, int n, int *L2, int m, int &count){
        count++; //Contador de eficiencia
        int *L = new int[n+m];
        int i = 0, j = 0, k = 0;
        while(i < n && j < m){
            L[k++] = L1[i] < L2[j] ? L1[i++] : L2[j++];
        }
        while(i < n){
            L[k++] = L1[i++];
        }
        while(j < m){
            L[k++] = L2[j++];
        }
        return L;
    }

    void heapSort(int *a, int n, int &count) {
        count++;
        for (int i = n / 2 - 1; i >= 0; i--){
            heap(a, n, i, count);
            count++; //Contador de eficiencia
        }
            for (int i = n-1; i >= 0; i--) {
                swap(a[0], a[i]);
                heap(a, i, 0, count);
                count++; //Contador de eficiencia
            }
        }
    
    void heap(int *a, int n, int i, int &count) {
            int largest = i;
            int l = 2*i + 1;
            int r = 2*i + 2;
        if (l < n && a[l] > a[largest]) largest = l;
        if (r < n && a[r] > a[largest]) largest = r;
            if (largest != i) {
                swap(a[i], a[largest]);
                heap(a, n, largest, count);
            }
        count++; //Contador de eficiencia
        }
};
