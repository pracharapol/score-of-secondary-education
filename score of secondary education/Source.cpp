#include<stdio.h>
void score() 
{
	printf("Credit of the 1st subject = 3 \n");
	printf("Credit of the 2nd subject = 2 \n");
	printf("Credit of the 2nd subject = 1 \n");
	float score1, score2, score3, total;
	printf("Enter score 1 [Max 100] : ");
	scanf_s("%f", &score1);
	printf("Enter score 2 [Max 100] : ");
	scanf_s("%f", &score2);
	printf("Enter score 3 [Max 100] : ");
	scanf_s("%f", &score3);
	int x[] = { score1,score2,score3 };
	score1 = score1 * 3.0;
	score2 = score2 * 2.0;
	total = (score1 + score2 + score3) / 6.0;
	if (total >= 50 && total <= 100) 
	{
		printf("Your pass\n");
		printf("TotalYour score = %.2f", total);
	}
	else if (total >= 0 && total < 50) 
	{
		printf("Your not pass\n");
		printf("Total Your score = %.2f", total);
	}
	else if (total < 0 || total>100) 
	{
		printf("E R R O R !!!\n");
		printf("E R R O R !!!\n");
		printf("PLEASE TRY AGAIN");
	}
}
int main() 
{
	printf("Secondary Education Year 4\n");
	score();
	printf("\n");
	printf("----------------------------------------------------------------------\n");
	printf("Secondary Education Year 5\n");
	score();
	printf("\n");
	printf("----------------------------------------------------------------------\n");
	printf("Secondary Education Year 6\n");
	score();
	printf("\n");
	printf("----------------------------------------------------------------------\n");
	return 0;
}