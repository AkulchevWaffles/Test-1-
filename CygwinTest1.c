#include <stdio.h>

int main()
{
	int Input;
	int FirstDigit;
	int FirstDigitRemainder;
	int SecondDigit;
	int SecondDigitRemainder;
	int ThirdDigit;
	int ThirdDigitRemainder;
	int ForthDigit;
	int FirstDigitA;
	int SecondDigitA;
	int ThirdDigitA;
	int ForthDigitA;
	int Output;


	printf_s("please enter a four-digit code");
	scanf_s("%d", &Input);

	FirstDigit = (Input / 1000);
	FirstDigitRemainder = (Input % 1000);
	SecondDigit = (FirstDigitRemainder / 100);
	SecondDigitRemainder = (FirstDigitRemainder % 100);
	ThirdDigit = (SecondDigitRemainder / 10);
	ThirdDigitRemainder = (SecondDigitRemainder % 10);
	ForthDigit = (ThirdDigitRemainder);

	FirstDigitA = ((FirstDigit + 7) % 10);
	SecondDigitA = ((SecondDigit + 7) % 10);
	ThirdDigitA = ((ThirdDigit + 7) % 10);
	ForthDigitA = ((ForthDigit + 7) % 10);

	Output = (ThirdDigitA * 1000 + ForthDigitA * 100 + FirstDigitA * 10 + SecondDigitA);
	if (ThirdDigitA == 0) {
		printf_s("the encrypted code is 0%d", Output);
	}
	else {

		printf_s("the encrypted code is %d", Output);
	}







	system("pause");
	return 0;

}