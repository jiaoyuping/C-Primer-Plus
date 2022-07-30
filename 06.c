//      第 6 章   C控制语句：循环

#include<stdio.h>
#include<string.h>
#include<math.h>



//int main(void) {
//	long num;
//	long sum = 0L;
//	int status;
//	printf("Please enter an integer to be summed (q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1) {
//		sum += num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//}

//int main(void) {
//	int n = 5;
//	while (n < 7) {
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//	}
//	printf("The loop has finished.\n");
//}

//int main(void) {
//	int n = 0;
//	while (n < 3)
//		printf("n is %d\n", n);
//		n++;
//		printf("That's all this progam does.\n");
//}

//int main(void) {
//	int n = 0;
//	while (n++ < 3);
//		printf("n is %d\n", n);
//	printf("That's all this progam does.\n");
//}

//int main(void) {
//	const double ANSWER = 3.14159;
//	double response;
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response - ANSWER) > 0.0001) {   // fabs 浮点数比较不丢失精度
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//}

//int main(void) {
//	int true_val, false_val;
//	true_val = (10 > 2);
//	false_val = (10 == 2);
//	printf("true = %d; false = %d \n", true_val, false_val);
//}

//int main(void) {
//	int n = 3;
//	while (n) printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//	n = -3;
//	while (n) printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//}

//int main(void) {
//	long num;
//	long sum = 0L;
//	int status;
//	printf("Please enter an integer to be summed (q to quit): ");
//	status = scanf("%ld", &num);
//	while (status = 1) {
//		sum += num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//}

//int main(void) {
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//	printf("Please enter an integer to be summed (q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good) {
//		sum += num;
//		printf("Please enter next integer (q to quit): ");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//}

//int main(void) {
//	const int NUMBER = 22;
//	int count = 1;
//	while (count <= NUMBER) {
//		printf("Be my Valentine!\n");
//		count++;
//	}
//}

//int main(void) {
//	const int NUMBER = 22;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//}

//int main(void) {
//	int num;
//	printf("    n   n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d    %5d\n", num, num * num * num);
//}

//int main(void) {
//	int secs, n, num=0, x, y=55, ans=2;
//	char ch;
//	double debt;
//
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//
//	for (n = 2; n < 60; n += 13)
//		printf("%d \n", n);
//
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n", ch, ch);
//
//	printf("    n   n cubed\n");
//	for (num = 1; num * num * num <= 216; num++)
//		printf("%5d    %5d\n", num, num * num * num);
//
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//		printf("Your debt is now $%.2f.\n", debt);
//
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//
//	for (n = 3; ans <= 25;)
//		ans *= n;
//	printf("n = %d; ans = %d.\n", n, ans);
//
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//}

//int main(void) {
//	const int FIRST_OZ = 46;    // 2013 邮资
//	const int NEXT_OZ = 20;     // 2013 邮资
//	int ounces, cost;
//	printf(" ounces   cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//		printf("%5d     $%4.2f\n", ounces, cost / 100.0);
//}

//int main(void) {
//	int t_ct, limit;
//	double time, power_of_2;
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0) {
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//}

//int main(void) {
//	const int secret_code = 13;
//	int code_entered;
//	do {
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulation! You are cured!\n");
//}

//int main(void) {
//	const int secret_code = 13;
//	int code_entered;
//	printf("To enter the triskaidekaphobia therapy club,\n");
//	printf("please enter the secret code number: ");
//	scanf("%d", &code_entered);
//	while (code_entered != secret_code) {
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	}
//	printf("Congratulation! You are cured!\n");
//}

//#define ROWS 6
//#define CHARS 10
//int main(void) {
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++) {
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}

//int main(void) {
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++) {
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}

//#define SIZE 10
//#define PAR 72
//int main(void) {
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//	return 0;
//}

//double power(double n, int p) {
//	double pow = 1;
//	int i;
//	for (i = 1; i <= p; i++)
//		pow *= n;
//	return pow;
//}
//int main(void) {
//	double x, xpow;
//	int exp;
//	printf("Enter a number and the positive integer power to which\n");
//	printf("the number will be raised. Enter q to quit.\n");
//	while (scanf("%lf %d", &x, &exp) == 2) {
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter next pair of number or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//	return 0;
//}



             // 6.15  复习题
             // 6.15  复习题
             // 6.15  复习题
             // 6.15  复习题


//1.     2  7  70  64  8  2

//int main(void) {   // 2.
//    double value;
//    for (value = 36; value > 0; value /= 2)
//        printf("%.3lf", value);
//}

//3.   x > 5;   scanf("%lf", &x) == 0;      x == 5;

//4.   scanf("%d", &x) == 1;     x != 5;     x >= 20;

//int main(void) {
//    int i, j, list[10];
//    for (i = 1; i <= 10; i++) {
//        list[i] = 2 * i + 3;
//        for (j = 1; j <= i; j++)
//            printf("%d ", list[j]);
//        printf("\n");
//    }
//    return 0;
//}

//int main(void) {
//    int i, j;
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 8; j++)
//            printf("$");
//        printf("\n");
//    }
//}

//int main(void) {
//    int i = 0;
//    while (++i < 4)
//        printf("Hi! ");
//    do
//        printf("Bye! ");
//    while (i++ < 8);
//    printf("\n");
//    char ch;
//    for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
//        printf("%c ", ch);
//}

//int main(void) {
//    char ch;
//    scanf("%c", &ch);
//    while (ch != 'g') {
//        printf("%c", ch);
//        scanf("%c", &ch);
//    }
//
//    scanf("%c", &ch);
//    while (ch != 'g') {
//        printf("%c", ++ch);
//        scanf("%c", &ch);
//    }
//
//    do {
//        scanf("%c", &ch);
//        printf("%c", ch);
//    } while (ch != 'g');
//
//    scanf("%c", &ch);
//    for (ch = '$'; ch != 'g'; scanf("%c", &ch))
//        printf("%c", ch);
//}

//int main(void) {
//    int n, m;
//    n = 30;
//    while (++n <= 33)
//        printf("%d|", n);
//    n = 30;
//    do
//        printf("%d|", n);
//    while (++n <= 33);
//    printf("\n***\n");
//    for (n = 1; n * n < 200; n += 4)
//        printf("%d\n", n);
//    printf("***\n");
//    for (n = 2, m = 6; n < m; n *= 2, m += 2)
//        printf("%d %d\n", n, m);
//    printf("***\n");
//    for (n = 5; n > 0; n--) {
//        for (m = 0; m <= n; m++)
//            printf("=");
//        printf("\n");
//    }
//}

//10.      mint;    10;    double;    ii;

//#define SIZE 8
//int main(void) {
//    int by_twos[SIZE], index;
//    for (index = 1; index < SIZE; index++)
//        by_twos[index] = 2 * index;
//    for (index = 1; index < SIZE; index++)
//        printf("%d ", by_twos[index]);
//}

//12.    函数声明部分要有long,返回值也是long类型

//13.    long square(int num) { return ((long)num) * num; }

//int main() {
//    int k;
//    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
//        printf("k is %d in the loop\n", k);
//    return 0;
//}



          // 6.16  编程练习
          // 6.16  编程练习
          // 6.16  编程练习
          // 6.16  编程练习


//int main() {
//    char alphabet[26];
//    int i;
//    for (i = 1, alphabet[0] = 'a'; i < 26; i++)
//        alphabet[i] = alphabet[i - 1] + 1;
//    for (i = 0; i < 26; i++)
//        printf("%c ", alphabet[i]);
//    return 0;
//}

//int main() {
//    int i, j;
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j <= i; j++)
//            printf("$");
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    int i, j;
//    for (i = 6; i > 0; i--) {
//        for (j = 6; j >= i; j--)
//            printf("%c", lets[j - 1]);
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    int i, j, k = 0;
//    for (i = 0; i < 6; i++) {
//        for (j = 0; j <= i; j++)
//            printf("%c", lets[k++]);
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    int i, j;
//    char ch;
//    printf("Enter the core char you want to print(A...Z): ");
//    scanf("%c", &ch);
//    for (i = 'A'; i <= ch; i++) {
//        for (j = i; j < ch; j++)
//            printf(" ");
//        for (j = 0; j <= i - 'A'; j++)
//            printf("%c", lets[j]);
//        for (j = i - 'B'; j >= 0; j--)
//            printf("%c", lets[j]);
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    int start, end, square, cubic;
//    printf("Please enter the start number: ");
//    scanf("%d", &start);
//    printf("Please enter the end number: ");
//    scanf("%d", &end);
//    printf("Orignal    Square    Cubic\n");
//    for (; start <= end; start++) {
//        square = start * start;
//        cubic = square * start;
//        printf("%6d    %6d    %6d\n", start, square, cubic);
//    }
//    return 0;
//}

//int main() {
//    char words[40];
//    printf("Please enter the words: ");
//    scanf("%s", &words);
//    int num = strlen(words);
//    while (num--)
//        printf("%c ", words[num]);
//    return 0;
//}

//int main() {
//    float f, s, num;
//    printf("Please enter the two float data (seprate by blank):\n");
//    while (scanf("%f%f", &f, &s) == 2) {
//        num = (f - s) / (f * s);
//        printf("The answer is %f", num);
//        printf("Please enter the two float data (seprate by blank):\n");
//    }
//    printf("Program end!");
//    return 0;
//}

//float function(float x, float y) {
//    return (x - y) / (x * y);
//}
//int main() {
//    float x, y;
//    printf("Please enter the two float data (seprate by blank):\n");
//    while (scanf("%f%f", &x, &y) == 2) {
//        printf("The answer is %f\n", function(x,y));
//        printf("Please enter the two float data (seprate by blank):\n");
//    }
//    printf("Program end!");
//    return 0;
//}

//int main() {
//    int lower, upper;
//    printf("Enter lower and upper integer limits: ");
//    scanf("%d %d", &lower, &upper);
//    while (upper > lower) {
//        int sum = 0;
//        for (int i = lower; i <= upper; i++)
//            sum += i * i;
//        printf("The sums of the square from %d to %d is %d\n", lower * lower, upper * upper, sum);
//        printf("Enter next set of limits: ");
//        scanf("%d %d", &lower, &upper);
//    }
//    printf("Done!");
//    return 0;
//}

//int main() {
//    int data[8], i;
//    printf("Please enter eight number:\n");
//    for (i = 0; i < 8; i++)
//        scanf("%d", &data[i]);
//    printf("The reverse data is:\n");
//    while (--i >= 0)
//        printf("%d ", data[i]);
//    printf("\nDone!\n");
//    return 0;
//}

//int main() {
//    int length, sign;
//    printf("Enter the limit length: ");
//    scanf("%d", &length);
//    while (length) {
//        double sum1 = 0.0, sum2 = 0.0;
//        for (int i = 1, sign = -1; i <= length; i++) {
//            sum1 += 1.0 / i;
//            sign *= -1;
//            sum2 = sum2 + sign * 1.0 / i;
//        }
//        printf("The sum for 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 +...+1.0/%d.0 is %lf\n", length, sum1);
//        printf("The sum for 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 +...+1.0/%d.0 is %lf\n", length, sum2);
//        printf("Enter the limit length: ");
//        scanf("%d", &length);
//    }
//    printf("Done!");
//    return 0;
//}

//int main() {
//    int arr[8];
//    for (int i = 1; i <= 8; i++) {
//        arr[i - 1] = pow(2, i);
//    }
//    int i = 0;
//    do {
//        printf("%d  ", arr[i]);
//        i++;
//    } while (i < 8);
//    return 0;
//}

//int main() {
//    double arr1[8], arr2[8];
//    printf("Please enter eight number in the first array:\n");
//    for (int i = 0; i < 8; i++)
//        scanf("%lf", &arr1[i]);
//    arr2[0] = arr1[0];
//    for (int i = 1; i < 8; i++)
//        arr2[i] = arr2[i - 1] + arr1[i];
//    for (int i = 0; i < 8; i++)
//        printf("%12lf  ", arr1[i]);
//    printf("\n");
//    for (int i = 0; i < 8; i++)
//        printf("%12lf  ", arr2[i]);
//    return 0;
//}

//int main() {
//    char data[256];
//    printf("Enter the char in a line:\n");
//    scanf("%s", data);
//    printf("The reverse char of the data:\n");
//    int length = strlen(data) - 1;
//    for (int i = length; i >= 0; i--)
//        printf("%c ", data[i]);
//    printf("\nDone!\n");
//    return 0;
//}

//int main() {
//    float daphne = 100.0, deirdre = 100.0;
//    int year = 0;
//    while (deirdre <= daphne) {
//        year++;
//        daphne += 100 * 0.1;
//        deirdre *= 1.05;
//    }
//    printf("%d years later\nDaphne = %f\nDeirdre = %f\n", year, daphne, deirdre);
//    return 0;
//}

//int main() {
//    double Chuckie_Lucky = 1000000.0;
//    int year = 0;
//    while (Chuckie_Lucky > 0) {
//        Chuckie_Lucky *= 1.08;
//        Chuckie_Lucky -= 100000.0;
//        year++;
//    }
//    printf("%d years later. Chuckie Lucky's account is null.\n", year);
//    return 0;
//}

//int main() {
//    int Rabnud = 5, week = 0;
//    while (Rabnud < 150) {
//        Rabnud = (Rabnud - ++week) * 2;
//        printf("At %2d weeks later, Rabnud has %4d firends\n", week, Rabnud);
//    }
//    return 0;
//}