#include<stdio.h>

int main() {
    int array[] = {8,5,1,9,3};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++) {
        printf("%d\t",array[i]);
    }
    int value;
    printf("moi ban nhap mot so nguyen bat ky");
    scanf("%d",&value);
    int start = 0;
    int end = size - 1, mid;
    int found = 0;
    while(start <= end) {
        mid = (start + end)/2;
        if(value == array[mid]) {
            printf("ton tai gia tri %d,",array[mid]);
            found = 1;
            break;
        }else if(value > array[mid]) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    if(!found) {
        printf("khong tim thay gia tri mang,",value);
    }


    return 0;
    }

