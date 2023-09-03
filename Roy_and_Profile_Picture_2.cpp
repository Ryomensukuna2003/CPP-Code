#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        if(x>a || y>a){
            printf("UPLOAD ANOTHER\n");

        }
        else if(x!=y){
            printf("CROP IT\n");
        }
        else{
            printf("ACCEPTED\n");
        }
    }

    return 0;
}
