#include <stdio.h>

int main() {

    int n;scanf("%d",&n);
    int count=1;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        count*=x;

    }
    printf("%d",count);
}
