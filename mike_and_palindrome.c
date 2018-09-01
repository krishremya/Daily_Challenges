#include<stdio.h>.
#include<string.h>
int main() {
   char str[15];
   scanf("%s",str);
   int beg = 0;
   int last = strlen(str) -1;
   int cnt =0;
   while(beg < last) {
       if(str[beg] != str[last]){
           cnt++;
       }
       beg++;
       last--;
   }
    if(cnt > 1) {
        printf("NO");
    }   else {
        if(cnt == 0 && strlen(str)%2 == 0) {
            printf("NO");
        } else {
            printf("YES");
        }
    }
    return 0;
}
