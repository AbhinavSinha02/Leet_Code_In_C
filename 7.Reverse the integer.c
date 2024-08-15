#include <stdio.h>
#include <limits.h>
int reverse(int x){
    int num,reversed=0;
    while(x!=0){
        num=x%10;
        x/=10;
        if(reversed>INT_MAX/10 || (reversed==INT_MAX/10 && num>7) ){
            return 0;
        }
        if(reversed<INT_MIN/10 || (reversed==INT_MIN/10 && num<-8 )){
            return 0;
        }
        reversed=reversed*10+num;

        


    }
    return reversed;

}
//driver code
int main(){
  printf("%d",reverse(123));
  printf("%d",reverse(-321));
  printf("%d",reverse(120));
  printf("%d",reverse(873984));
  return 0;
}
