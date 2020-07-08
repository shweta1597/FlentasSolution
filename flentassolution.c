#include<stdio.h>
int main()
{
    int n = 0, b = 0;
    int num[1000000];
    int status = 0;
    int out = 0;
    int i = 0, j = 0, k = 0;
 
    scanf("%d %d", &n, &b);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]%b==0||b%num[i]==0){
            status=1;
            break;
        }
    }
    if(status) printf("Yes\n");
    else printf("No\n");
}