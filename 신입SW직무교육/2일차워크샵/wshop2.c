/*
이름: 배민지
날짜: 2022-08-23
Workshop #2 (회의실 예약 시스템)
*/

#include <stdio.h>

int mdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int get_weekday(int year, int month);
int leap_year(int year);
int get_days(int year, int month);
void disp_calender(int year, int month, int start, int days);

int main(void) {

	int year, month;
	int start;  	// 1일이 출력되는 시작위치를 맞추기 위한 변수  ( 0 ~ 6이 될 수 있으며, 0의 경우 일요일)
	int days;		// 각 월의 일 수를 저장할 변수

	// 입력 부분
	printf("# Input Year, Month : ");
	scanf("%d%d", &year, &month);

	// 출력할 년, 월에 해당하는 1일의 요일 계산
	start = get_weekday(year, month);

	// 출력할 달의 일수 계산
	days = get_days(year, month);

	// 달력 출력
	disp_calender(year, month, start, days);

	return 0;
}


// 윤년 검사 함수
int leap_check(int year)
{
	if(year%4!=0) return 0;
	else if(year%100!=0) return 1;
	else if(year%400==0) return 1;
	else return 0;
}

int get_weekday(int year, int month)
{
	int sum = 0;

	for (int i = 1; i < year; ++i)
	{
		if (leap_check(i)) sum += 366;
		else sum += 365;
	}

	for (int i = 0; i < month - 1; ++i)
	{
		sum += mdays[i];
	}

	return (sum + 1) % 7;
}

int get_days(int year, int month)
{
    if (leap_check(year) && month == 2) return 29;
    else return mdays[month - 1];
}

void disp_calender(int year, int month, int start, int days)
{
	printf("============< %d.  %d >============\n", year, month);
	printf("\n------------------------------------\n");
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");
	printf("------------------------------------\n");
    
    for (int i = 0; i < start; ++i) 
	{
		printf("     ");
	}
    
    int day = 0;
    for (int i = 0; i < days; ++i)
    {
        if ((start + day) % 7 == 0) printf("\n");
        printf("%5d", ++day);
    }
    
	printf("\n------------------------------------\n");
}
