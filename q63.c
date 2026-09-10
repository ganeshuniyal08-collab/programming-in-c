/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
  int a,b;
  printf("Enter number of elements in 1st array: ");
    scanf("%d",&a);
  int c[a];
  for(int i=0;i<a;i++){
  printf("Enter elements for 1st array: ");
    scanf("%d",&c[i]);
  }
  printf("Enter number of elements in 2nd array: ");
    scanf("%d",&b);
    int d[b];
  for(int x=0;x<b;x++){
  printf("Enter elements for 2nd array: ");
    scanf("%d",&d[x]);
  }
int e[a+b];
int y;
  for(y=0;y<(a+b);y++){
    if (y<=a-1){
      e[y]=c[y];
    }
    else{
      e[y]=d[y-a];
    }
  }
  for(int p=0;p<y;p++){
    printf("%d ",e[p]);
  }
  return 0;
}
