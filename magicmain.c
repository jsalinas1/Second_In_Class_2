#include <stdio.h>
#include <time.h>


char is_Magic(int a[3][3], int n){
    return 'Y';
}

int main(){
    int n_size = 3;
    int arr[n_size][n_size];
    is_Magic(arr, n_size);
    return 0;
}
