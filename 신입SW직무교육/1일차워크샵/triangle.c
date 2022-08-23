/*
Workshop #1-2 (삼각형 출력하기)
이름: 배민지
날짜: 2022-08-22
*/
#include <stdio.h>

int main()
{   
    int num;
    printf("Input number : ");
    scanf("%d", &num);
    if (num & 1)
    {
        for (int i = num; i > 0; --i)
        {
            for (int j = 1; j <= num; ++j)
            {
                if (j >= i) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        printf("\n");

        for (int i = 1; i <= num; ++i)
        {
            for (int j = 1; j <= num; ++j)
             {
                 if (j >= i) printf("*");
                 else printf(" ");
             }
            printf("\n");
        }
        printf("\n");

        int mid = num >> 1;
        for (int i = 0; i <= mid; ++i)
        {
            for (int j = 0; j < num; ++j)
            {
                if (j >= mid - i && j <= mid + i) {
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }

        for (int i = mid - 1; i >= 0; --i)
        {
            for (int j = 0; j < num; ++j)
            {
                if (j >= mid - i && j <= mid + i) {
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }

    }
    else printf("짝수가 입력 되었습니다!\n");

    return 0;
}
