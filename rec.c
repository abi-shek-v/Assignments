#include<stdio.h>
int main(){
int i,j,row,column;
printf("Enter the Row:");
scanf("%d",&row);
printf("Enter the Column:");
scanf("%d",&column);
for(i=0;i<row;i++){
for(j=0;j<column;j++){
printf("* ");
}
printf("\n");
}
return 0;
}



