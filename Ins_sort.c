#include <stdio.h>

int main(void){
    int a[6] = {31,41,59,26,41,58};
    int j,i,key ;
    for (j = 1; j < 6; j ++){
        key = a[j];
        i = j - 1;
        while(i > -1 && a[i] > key){
            a[i + 1] = a[i];
            i = i - 1;
        a[i + 1] = key;
        } 
    }
    printf("%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5]);

    for (j = 1; j < 6; j ++){
        key = a[j];
        i = j - 1;
        while(i > -1 && a[i] < key){
            a[i+1] = a[i];
            i = i - 1;
        a[i + 1] = key;
        } 
    }
    printf("%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
}
