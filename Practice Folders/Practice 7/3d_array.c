/*
Create a three–dimensional array and print the address of its elements in
increasing order.
*/
#include<stdio.h>

int main() {

    int arr[2][2][2];
    int* inc_arr[2][2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                inc_arr[i][j][k] = &arr[i][j][k];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                printf("%d ", inc_arr[i][j][k]);
    

    return 0;
}