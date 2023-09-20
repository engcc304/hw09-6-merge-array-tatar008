/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    
    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] : 
            9
        --| Array1 [1] : 
            7
        --| Array1 [2] : 
            6
        --| Array1 [3] : 
            3
        Enter element of Array2 :
            5
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            3
        --| Array2 [2] : 
            5
        --| Array2 [3] : 
            8
        --| Array2 [4] : 
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
    
    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] : 
            7
        --| Array1 [1] : 
            8
        --| Array1 [2] : 
            9
        --| Array1 [3] : 
            6
        --| Array1 [4] : 
            1
        --| Array1 [5] : 
            2
        --| Array1 [6] : 
            8
        --| Array1 [7] : 
            3
            
        Enter element of Array2 :
            6
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            1
        --| Array2 [2] : 
            3
        --| Array2 [3] : 
            5
        --| Array2 [4] : 
            3
        --| Array2 [5] : 
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/
#include<stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200]; 
    int num1, num2;
    int i = 0, j = 0, k = 0;

    printf("Enter element of Array1:\n");
    scanf("%d", &num1);

    for (i = 0; i < num1; i++) {
        printf("--| Array1 [%d]:\n", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter element of Array2:\n");
    scanf("%d", &num2);

    for (i = 0; i < num2; i++) {
        printf("--| Array2 [%d]:\n", i);
        scanf("%d", &arr2[i]);
    }

    while (j < num1 && k < num2) {
        if (arr1[j] > arr2[k]) {
            arr3[i++] = arr1[j++];
        } else {
            arr3[i++] = arr2[k++];
        }
    }

    while (j < num1) {
        arr3[i++] = arr1[j++];
    }

    while (k < num2) {
        arr3[i++] = arr2[k++];
    }

    printf("Merge Array1 & Array2 to Array3\nArray3 = ");
    for (int x = i - 1; x >= 0; x--) {
        printf("%d ", arr3[x]);
    }

    return 0;
}
