#include<stdio.h>
int dp[100]={0};
int main()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    int n;
    printf("Number of stairs:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    printf("Number of ways: %d ",dp[n]);
}
