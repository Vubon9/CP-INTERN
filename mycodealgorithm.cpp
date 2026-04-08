#include<bits/stdc++.h>
using namespace std;
void selectSort(int array[], int n)
{
    int i, j, min_index;
    for(i=0; i<n-1; i++){
        min_index = i;
        for(j=i+1; j<n; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        if(min_index != i)
            swap(array[min_index], array[i]);
    }
}
void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[]={64,25,12,22,11};
    int n = 5;
    selectSort(arr, n);
    printArray(arr, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[]={5,3,2,4,1};
    int n=5;
    bubbleSort(arr,n);

    for(int i=0;i < n; i++){
        cout<<arr[i]<< " " ;
    }
    return 0;
}
