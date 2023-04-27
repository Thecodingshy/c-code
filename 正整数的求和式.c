//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX_N 100
//int n, k;
//int cnt;
//int path[MAX_N];
//int len;
//
//void dfs(int u, int sum)    //first 1  0      // 1  1
//{
//    if (sum == n)
//    {
//        cnt++;
//        if (1 || cnt == k)
//        {
//            // printf("k=%d\n", k);
//            for (int i = 0; i < len; i++)
//            {
//                printf("%d", path[i]);
//                if (i != len - 1)
//                    printf("+");
//            }
//            printf("\n");
//        }
//        return;
//    }
//    for (int i = u; i <= n - sum; i++)
//    {
//        path[len++] = i;
//        dfs(i, sum + i);
//        len--;
//    }
//}
//
//int main()
//{
//    scanf("%d%d", &n, &k);
//    dfs(1, 0);
//    if (k > cnt)
//        printf("k=%d,impossible.\n", k);
//    printf("Count=%d\n", cnt);
//    return 0;
//}