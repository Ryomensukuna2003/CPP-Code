#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int val=arr[n-1]%10;
    if(val%10==0){
        printf("Yes");
    }
    else{
        printf("No");
    }


    return 0;
}