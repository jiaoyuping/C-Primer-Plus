//   第 5 章    运算符、表达式和语句

#include<stdio.h>
#include<string.h>
#include<math.h>


//#define ADJUST 7.31             //字符变量
//int main(void) {
//	const double SCALE = 0.333;  //const 变量
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's)   foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//}

//#define ADJUST 7.31           //字符变量
//int main(void) {
//	const double SCALE = 0.333;  //const 变量
//	double shoe, foot;
//	printf("Shoe size (men's)   foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5) {
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe += 1.0;
//	}
//	printf("If the shoe fits, wear it.\n");
//}

//int main(void) {
//	int jane, tarzan, cheeta;
//	cheeta = tarzan = jane = 68;
//	printf("                  cheeta   tarzan    jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
//}

//int main(void) {
//	int num = 1;
//	while (num < 21) {
//		printf("%4d %6d\n", num, num * num);
//		num += 1;
//	}
//}

//#define SQUARES 64
//int main(void) {
//	const double CROP = 2E16;     //世界小麦年产谷粒数
//	double current, total;
//	int count = 1;
//	printf("square    grains       total        fraction of \n");
//	printf("          added        grains       world total\n");
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//	while (count < SQUARES) {
//		count += 1;
//		current *= 2.0;
//		total += current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//	}
//	printf("That's all.\n");
//}

//int main(void) {
//	printf("integer division:  5/4   is  %d \n", 5 / 4);
//	printf("integer division:  6/3   is  %d \n", 6 / 3);
//	printf("integer division:  7/4   is  %d \n", 7 / 4);
//	printf("floating division: 7./4. is  %1.2f \n", 7. / 4.);
//	printf("mixed division:    7./4  is  %1.2f \n", 7. / 4);
//}

//int main(void) {
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//}

//int main(void) {
//	int n = 0;
//	size_t intsize;
//	intsize = sizeof(int);
//	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
//}

//#define SEC_PER_MIN 60
//int main(void) {
//	int sec, min, left;
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of second (<=0 to quit):\n");
//	scanf("%d", &sec);
//	while (sec > 0) {
//		min = sec / SEC_PER_MIN;
//		left = sec % SEC_PER_MIN;
//		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//}

//int main(void) {
//	int ultra = 0, super = 0;
//	while (super < 5) {
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//}

//int main(void) {
//	int a = 1, b = 1;
//	int a_post, pre_b;
//	a_post = a++;
//	pre_b = ++b;
//	printf("a  a_post   b   pre_b \n");
//	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
//}

//#define MAX 100
//int main(void) {
//	int count = MAX + 1;
//	while (--count > 0) {
//		printf("%d bottles of spring water on the wall, %d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around, \n%d bottles of spring water!\n\n", count - 1);
//	}
//}

//int main(void) {
//	int count = 0;
//	int sum = 0;
//	while (count++ < 20)
//		sum += count;
//	printf("sum = %d\n", sum);
//}

//int main(void) {
//	char ch;
//	int i;
//	float fl;
//	fl = i = ch = 'C';
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch += 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch = 1107;
//	printf("Now ch = %c\n", ch);
//	ch = 80.89;
//	printf("Now ch = %c\n", ch);
//}

//void pound(int n) {
//	while (n-- > 0) printf("#");
//	printf("\n");
//}
//int main(void) {
//	int times = 5;
//	char ch = '!';
//	float f = 6.0;
//	pound(times);
//	pound(ch);
//	pound(f);
//}

//const int S_PER_M = 60;             // 1 分钟的秒数
//const int S_PER_H = 3600;           // 1 小时的秒数
//const double M_PER_K = 0.62137;     // 1 公里的英里数
//int main(void) {
//	double distk, distm;   // 跑过的距离（分别以公里和英里为单位）
//	double rate;           // 平均速度（以英里/小时为单位）
//	int min, sec;          // 跑步用时（以分钟和秒为单位）
//	int time;              // 跑步用时（以秒为单位）
//	double mtime;          // 跑 1 英里需要的时间，以秒为单位
//	int mmin, msec;        // 跑 1 英里需要的时间，以分钟和秒为单位
//	printf("This program converts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in mile per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk);
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//
//	time = S_PER_M * min + sec;           // 把时间转换成秒
//	distm = M_PER_K * distk;              // 把公里转换成英里
//	rate = distm / time * S_PER_H;        // 英里/秒×秒/小时 = 英里/小时
//	mtime = (double)time / distm;         // 时间/距离 = 跑 1 英里所用的时间
//	mmin = (int)mtime / S_PER_M;          // 求出分钟数
//	msec = (int)mtime % S_PER_M;          // 求出剩余的秒数
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
//	printf("That pace corresponds to running a mile in %d  min, %d sec.\n", mmin, msec);
//	printf("Your average speed was %1.2f mph.\n", rate);
//}


//         5.10  复习题
//         5.10  复习题
//         5.10  复习题
//         5.10  复习题

//1.   30  27  1   9

//2.   6   52  0   13

//3.   37.5  1.5  35  37  37.5  35.0

//int main(void) {
//	int i = 1;
//	float n;
//	printf("Watch out! Here come a bunch of fractions!\n");
//	while (i < 30) {
//		n = 1.0 / i++;
//		printf(" %f\n", n);
//	}
//	printf("That's all, folks!\n");
//	return 0;
//}

//#define S_TO_M 60
//int main(void) {
//	int sec = 1, min, left;
//	printf("This program convert seconds to minutes and seconds!\n");
//	printf("Just enter the number of seconds.\n");
//	printf("Enter 0 to end the program.\n");
//	while (sec > 0) {
//		scanf("%d", &sec);
//		min = sec / S_TO_M;
//		left = sec % S_TO_M;
//		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
//		printf("Next input?\n");
//	}
//	printf("Bye!\n");
//	return 0;
//}

//#define FORMAT "%s! C is cool!\n"
//int main(void) {
//	int num = 10;
//	printf(FORMAT, FORMAT);
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//	return 0;
//}

//int main(void) {
//	char c1, c2;
//	int diff;
//	float num;
//	c1 = 'S';
//	c2 = 'O';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
//	return 0;
//}

//#define TEN 10
//int main(void) {
//	int n = 0;
//	while (n++ < TEN) printf("%5d", n);
//	printf("\n");
//	return 0;
//}

//#define TEN 103
//int main(void) {
//	int n = 96;
//	while (n++ < TEN) printf("%5c", n);
//	printf("\n");
//	return 0;
//}

//int main(void) {
//	int x = 0;
//	while (++x < 3) printf("%4d", x);
//	printf("\n");
//
//	x = 100;
//	while (x++ < 103) printf("%4d", x);
//	printf("%4d", x);
//	printf("\n");
//
//	char ch = 's';
//	while (ch < 'w') {
//		printf("%c", ch);
//		ch++;
//	}
//	printf("%c\n", ch);
//}

//#define MESG "COMPUTER BYTES DOG"
//int main(void) {
//	int n = 0;
//	while (n < 5) {
//		printf("%s\n", MESG);
//		n++;
//	}
//	printf("That's all.\n");
//	return 0;
//}

//12.     x += 10;      x += 1;      c = 2*(a + b);      c = a + 2*b;

//13.     x -= 1;      m = n % k;    p = q / b - a;      x = (a + b) / (c * d);


//      5.11   编程练习
//      5.11   编程练习
//      5.11   编程练习
//      5.11   编程练习


//#define M_TO_H 60
//int main() {
//	int hours, minutes, input;
//	printf("CONVERT MINUTES TO HOURS!\n");
//	printf("PLEASE INPUT THE NUMBER OF MINUTES ( <=0 TO QUIT): ");
//	scanf("%d", &input);
//	while (input) {
//		hours = input / M_TO_H;
//		minutes = input % M_TO_H;
//		printf("CONVERT TO %d HOUR AND %d MINUTES\n", hours, minutes);
//		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES ( <=0 TO QUIT): ");
//		scanf("%d", &input);
//	}
//	printf("PROGAM EXIT!\n");
//	return 0;
//}

//int main() {
//	int input, i = 0;
//	printf("Print continue 10 number!\n");
//	printf("Please input the start number: ");
//	scanf("%d", &input);
//	while (i++ < 11) printf(" %d", input++);
//	printf("\nProgam exit!\n");
//	return 0;
//}

//#define WEEK_PER_DAY 7
//int main() {
//	int days, weeks, input;
//	printf("Convert days to weeks!\n");
//	printf("Please input the number of days( <=0 to quit): ");
//	scanf("%d", &input);
//	while (input) {
//		weeks = input / WEEK_PER_DAY;
//		days = input % WEEK_PER_DAY;
//		printf("%d days are %d weeks, %d days.\n", input, weeks, days);
//		printf("Please input the number of days(<=0 to quit): ");
//		scanf("%d", &input);
//	}
//	printf("Progam exit!\n");
//	return 0;
//}

//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main() {
//	int feet;
//	float inchs, cm;
//	printf("Convert cm to inchs!\n");
//	printf("Enter the height in centimeters: ");
//	scanf("%f", &cm);
//	while (cm) {
//		feet = cm / FEET_TO_CM;
//		inchs = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
//		printf(" %.1f cm = %d feet, %.1f inchs\n", cm, feet, inchs);
//		printf("Enter the height in centimeters (<=0 to quit): ");
//		scanf("%f", &cm);
//	}
//	printf("Progam exit!\n");
//	return 0;
//}

//int main(void) {
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work: ");
//	scanf("%d", &count);
//	while (count > 0) {
//		sum += count * count;
//		count--;
//	}
//	printf("You earned $%d total!\n", sum);
//	printf("Progam exit!\n");
//}

//double cubic(double n) {
//	double t = n * n * n;
//	printf("The %lg's cubic is %lg!\n", n, t);
//	return t;
//}
//int main() {
//	double input;
//	printf("Enter the double datum to calc cubic: ");
//	scanf("%lf", &input);
//	cubic(input);
//	printf("Progam exit!\n");
//	return 0;
//}

//int main() {
//	int first, second;
//	printf("This progam computes moduli.\n");
//	printf("Enter an integer to server as the second operand: ");
//	scanf("%d", &second);
//	printf("Now enter the first operand: ");
//	scanf("%d", &first);
//	while (first) {
//		printf("%d %% %d is %d\n", first, second, first % second);
//		printf("Enter next number for first operand (<=0 to quit): ");
//		scanf("%d", &first);
//	}
//	printf("Done!\n");
//	return 0;
//}

//void Temperatures(double fahrenheit) {
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
//}
//int main() {
//	double fahrenheit;
//	printf("This progam convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start: ");
//	while (scanf("%lf", &fahrenheit) == 1) {
//		Temperatures(fahrenheit);
//		printf("Enter next fahrenheit! (q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}