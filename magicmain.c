#include <stdio.h>
#include <time.h>



const char YES = 'Y';
const char NO = 'N';

char is_Magic2D(int a[3][3], int n, int *value){

    for(int i = 0; i < n; i++)
        *value += a[0][i];

    int row = 0;
    int column = 0;
    int diagonal = 0;
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            row += a[i][j];
            column += a[j][i];
        }
        if(row != *value || column != *value) return NO;
        row = 0;
        column = 0;
        diagonal += a[i][i];
    }
    if(diagonal != *value) return NO;

    return YES;
}

void print_Matrix(int a[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d %c", a[i][j], (j+1) % 3 == 0 ? '\n' : ' ');
        }
    }
}



int main(){
    int n_size = 3;
    int value = 0;
    int arr_1[][3] = { {4,9,2}, {3,7,5}, {8,1,6} }; 
    print_Matrix(arr_1);      
    if(is_Magic2D(arr_1, n_size, &value) == YES)
        printf("This matrix is a Lo Shu Magic Square\n\n");
    else
        printf("This matrix is not a Lo Shu Magic Square\n\n");

    value = 0;
    int arr_2[][3] = { {4,9,2}, {3,5,7}, {8,1,6} }; 
    print_Matrix(arr_2);      
    if(is_Magic2D(arr_2, n_size, &value) == YES)
        printf("This matrix is a Lo Shu Magic Square\n\n");
    else
        printf("This matrix is not a Lo Shu Magic Square\n\n");
    return 0;
}
