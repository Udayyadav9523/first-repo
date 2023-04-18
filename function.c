#include<stdio.h>
int getmax(int a,int b);
void printmin(int a,int b);

int main(){
    int c,d;
    scanf("%d",&c);
    scanf("%d",&d);
    printf("%d",getmax(c,d));
    printf("%d",getmax(c,d));
    printmin(d,c);



    
    return 0;
}
int getmax(int a,int b)
if(a>b){
    return a;

}else {
    return b;
}
void printmin(int a, int b);
if (a>b){
    printf("%d\n",a);

}else{
     printf("%d\n",b);
}

