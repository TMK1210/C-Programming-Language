//Tạo 1 mảng, các phần tử trong mảng chỉ đến các mảng khác

#include <stdio.h>

int main(){
    //Khai báo mảng chính
    int* main_arr[3];
    
    //Khai báo mảng con
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[] = {7, 8, 9};

    //Gán con trỏ
    main_arr[0] = arr1;
    main_arr[1] = arr2;
    main_arr[2] = arr3;

    //In phần tử
    for (int i = 0; i < 3; i++) {
        printf("Mảng %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", main_arr[i][j]);
        }
        printf("\n");
        printf("Số phần tử %d ", sizeof(main_arr[i]));
        printf("\n");
    }
    return 0;
}