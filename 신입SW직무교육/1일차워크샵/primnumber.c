/*
Workshop #1-1 (소수 찾기)
이름: 배민지
날짜: 2022-08-22
*/
#include <stdio.h>

int main()
{   
    int num;
    int ch;
    while (1) {
        int flag = 1;
        printf("숫자를 입력하세요 (종료 : 0) :");
        scanf("%d", &num);
        if (num == 0) 
        {
            printf("Bye~~\n");
            printf("계속하려면 아무 키나 누르십시오...\n");
            scanf("%d", &ch);
        }
        else if (num == 1) printf("소수입니다.\n");
        else
        {
            for (int i = 2; i < num; ++i) {
                if (num % i == 0)
                {
                    printf("소수가 아닙니다.\n");
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                printf("소수입니다\n");
            }
        }
    }
    
    return 0;
}
