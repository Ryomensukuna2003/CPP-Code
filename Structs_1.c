#include <stdio.h>
#include <string.h>

struct person
{
    int age;
    char fname[100];
    char lname[100];
    int std;
};


int main() {
    int a,b;char s1[100] , s2[100];
    scanf("%d",&a);
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%d",&b);
    struct person p1;
    p1.age=a;
    strcpy(p1.fname,s1);
    strcpy(p1.lname,s2);
    p1.std=b;
    printf("%d ",p1.age);
    printf("%s ",p1.fname);
    printf("%s ",p1.lname);
    printf("%d ",p1.std);

}