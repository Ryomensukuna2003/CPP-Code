// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     char a[100];
//     scanf("%s",&a);
//     int b=atoi(a);
//     int arr[5];
//     for(int i=0;i<a.size();i++){
//         int x=b%10;
//         arr[i]=x;
//         b=b/10;
//     }

//     for(int i=0;i<a.size();i++){
//         printf("%d ",arr[i]);
//     }

// }


#include<stdio.h>  
#include<stdbool.h>

int main(){

    int n,r,sum=0,temp;  
    bool rev=false,prime=true;  
    scanf("%d",&n);    
    temp=n;    
    while(n>0)    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    } 
    if(temp==sum){
        rev=true;  
    }    
        
    if(temp==0 || temp==1 ){
        prime==false;
    }
    else {
        for(int i=2;i<temp;i++){
            if(temp%i==0){
                prime=false;
                
                break;
            }
        }
    }

    if(rev && prime){
        printf("YES");
    }
    else{
        printf("NO");
    }


}