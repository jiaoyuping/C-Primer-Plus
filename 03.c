//第3章  数据和C

#include<stdio.h>

//int main(void) {
//	float weight;    //你的体重
//	float value;    //相等重量的白金价值
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//
//	scanf_s("%f", &weight);   //获取用户输入
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);  //%.2f中的.2用于显示小数点后两位
//	printf("You are easily worth that! If platinum price drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

//int main(void) {
//	int ten = 10, two = 2;
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing is wrong:  ");
//	printf("%d minus %d is %d\n", ten);
//	return 0;
//}

//int main(void) {
//	int x = 100;
//	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
//	return 0;
//}

//int main(void) {
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//
//	return 0;
//}

//int main(void) {
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("verybig = %lld and not %ld\n", verybig, verybig);
//
//	return 0;
//}

//int main(void) {
//	printf("hello!\007\n");
//	printf("Gramps sez, \"a \\ is a backslash.\"\n");
//}

//int main(void) {
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	return 0;
//}

//#include<inttypes.h>
//int main() {
//	int32_t me32 = 45933945;
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next, let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);
//	return 0;
//}

//int main() {
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	float toobig = 3.4e38 * 100.0f;
//
//	printf("%e\n", toobig);
//	printf("%f can be written %e\n", aboat, aboat);
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//	return 0;
//}

//int main(void) {
//	float a, b;
//	b = 2.0e20 + 1.0;
//	a = b - 2.0e20;
//	printf("%f \n", a);
//	return 0;
//}

//int main(void) {
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//}

//int main() {
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);
//	printf("%d %d %d\n", n);
//	printf("%d %d\n", f, g);
//
//	return 0;
//}

//int main() {
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $______ \b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//	printf("\rGee!\n");
//
//	return 0;
//}



//3.10 复习题

//int main() {
//	int cows, legs;
//	printf("How many cows legs did you count?\n");
//	scanf("%d", &legs);
//	cows = legs / 4;
//	printf("That implies there are %d cows.\n", cows);
//	return 0;
//}


//3.11   编程练习

//#include<stdio.h>
//#include<float.h>
//#include<limits.h>
//void main() {
//	int big_int = 2147483647;  //有符号整型数据最大值是2^31-1
//	float big_float = 3.4e38;  //浮点型数据最大值一般为3.4e38
//	float small_float = 10.0 / 3;  //浮点型数据的有效位数为6位
//	printf("The big int data is %d\n", big_int + 1);
//	printf("The big float data is %f\n", big_float * 10);
//	printf("The big float data is %f\n", small_float);
//	printf("The MAX float data is %f\n", FLT_MAX);
//	printf("The MAX int data is %ld\n", INT_MAX);
//}

//int main() {
//	int input = 0;
//	printf("Enter a value of char int ASCII:");
//	scanf("%d", &input);
//	printf("You input value is %d, and char is %c\n", input, input);
//	return 0;
//}

//int main() {
//	float a;
//	printf("Enter a floating-point valur: ");
//	scanf("%f", &a);
//	printf("fixed-point notation: %f\n", a);
//	printf("exponential notation: %e\n", a);
//	printf("p notation: %a\n", a);
//	return 0;
//}

//#define light 3.156e7
//int main() {
//	float second, year;
//	printf("Please enter your age: ");
//	scanf("%f", &year);
//	second = year * light;
//	printf("You are: %0.1f years old.\nAnd you are %e seconds old, too.\n", year, second);
//	return 0;
//}

//#define one_water_weight 3.0e-23
//int main() {
//	float quart, count;
//	printf("Enter how many quart: ");
//	scanf("%f", &quart);
//	count = quart * 950 / one_water_weight;
//	printf("There are %e molecule.\n", count);
//	return 0;
//}

//int main() {
//	float inch, cm;
//	printf("Enter the inch of your heigh: ");
//	scanf("%f", &inch);
//	cm = inch * 2.54;
//	printf("Hi, your are %0.2f inch, or %0.2f cm heigh\n", inch, cm);
//	return 0;
//}

//#define PINT_CUP 2
//#define CUP_OUNCE 8
//#define OUNCE_SPOON 2
//#define SPOON_TEA 3
//int main() {
//	float pint, cup, ounce, spoon, tea_spoon;
//	printf("Enter how many cup: ");
//	scanf("%f", &cup);
//	pint = cup / PINT_CUP;
//	ounce = cup * CUP_OUNCE;
//	spoon = ounce * OUNCE_SPOON;
//	tea_spoon = spoon * SPOON_TEA;
//	printf("%.1f cup\n%.1f pint\n%.1f ounce\n%.1f spoon\n%.1f tea_spoon.", cup, pint, ounce, spoon, tea_spoon);
//	return 0;
//}