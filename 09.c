//           第 9 章    函数

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>


//void starbar() {
//	for (int count = 1; count <= 40; count++)
//		putchar('*');
//	putchar('\n');
//}
//int main() {
//	starbar();
//	printf("%s\n", "GIGATHINK, INC.");
//	printf("%s\n", "101 Megabuck Plaza");
//	printf("%s\n", "Megapolis, CA 94904");
//	starbar();
//	return 0;
//}

//void show_n_char(char ch, int num) {
//	for (int count = 1; count <= num; count++)
//		putchar(ch);
//}
//int main() {
//	int spaces;
//	show_n_char('*', 40);
//	putchar('\n');
//	show_n_char(' ', 12);
//	printf("%s\n", "GIGATHINK, INC.");
//	spaces = (40 - strlen("101 Megabuck Plaza")) / 2;
//	show_n_char(' ', spaces);
//	printf("%s\n", "101 Megabuck Plaza");
//	show_n_char(' ', (40 - strlen("Megapolis, CA 94904")) / 2);
//	printf("%s\n", "Megapolis, CA 94904");
//	show_n_char('*', 40);
//	putchar('\n');
//	return 0;
//}

//int imin(int n, int m) {
//	int min;
//	if (n < m)
//		min = n;
//	else
//		min = m;
//	return min;
//}
//int main() {
//	int evil1, evil2;
//	printf("Enter a pair of integers (q to quit):\n");
//	while (scanf("%d %d", &evil1, &evil2) == 2) {
//		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
//		printf("Enter a pair of integers (q to quit):\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}

//int imax(n, m) int n, m; {
//	return (n > m ? n : m);
//}
//int main() {
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
//	return 0;
//}

//int imax(int n, int m) {
//	return (n > m ? n : m);
//}
//int main() {
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
//	return 0;
//}

//void up_and_down(int n) {
//	printf("Level %d: n location %p\n", n, &n);
//	if (n < 4)
//		up_and_down(n + 1);
//	printf("LEVEL %d: n location %p\n", n, &n);
//}
//int main() {
//	up_and_down(1);
//	return 0;
//}

//long fact(int n) {
//	long ans;
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//	return ans;
//}
//long rfact(int n) {
//	long ans;
//	if (n > 0)
//		ans = n * rfact(n - 1);
//	else
//		ans = 1;
//	return ans;
//}
//int main() {
//	int num;
//	printf("This program calculates factorials.\n");
//	printf("Enter a value in the range 0-12 (q to quit):\n");
//	while (scanf("%d", &num) == 1) {
//		if (num < 0)
//			printf("No negative numbers, please.\n");
//		else if (num > 12)
//			printf("Keep input under 13.\n");
//		else {
//			printf("loop: %d factorial = %ld\n", num, fact(num));
//			printf("recursion: %d factorial = %ld\n", num, rfact(num));
//		}
//		printf("Enter a value in the range 0-12 (q to quit):\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}

//void to_binary(unsigned long n) {
//	if (n > 1)
//		to_binary(n / 2);
//	printf("%d", n % 2);
//}
//int main() {
//	unsigned long number;
//	printf("Enter an integer (q to quit):\n");
//	while (scanf("%lu", &number) == 1) {
//		printf("Binary equivalent: ");
//		to_binary(number);
//		putchar('\n');
//		printf("Enter an integer (q to quit):\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}

//#define QUIT    5
//#define HOTEL1 180.00
//#define HOTEL2 225.00
//#define HOTEL3 255.00
//#define HOTEL4 355.00
//#define DISCOUNT 0.95
//int menu() {
//	int code, status;
//	printf("\n*****************************************\n");
//	printf("Enter the number of the desired hotel:\n");
//	printf("1) Fairfield Arms       2) Hotel Olympic\n");
//	printf("3) Chertworthy Plaza    4) The Stockton\n5) quit\n");
//	printf("*****************************************\n");
//	while ((status = scanf("%d", &code)) != 1 || (code < 1 || code>5)) {
//		if (status != 1)
//			scanf("%*s");      // 处理非整数输入
//		printf("Enter an integer from 1 to 5, please.\n");
//	}
//	return code;
//}
//int getnights() {
//	int nights;
//	printf("How many night are needed? ");
//	while (scanf("%d", &nights) != 1) {
//		scanf("%*s");          // 处理非整数输入
//		printf("Please enter an integer, such as 2.\n");
//	}
//	return nights;
//}
//void showprice(double rate, int nights) {
//	int n;
//	double total = 0.0, factor = 1.0;
//	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
//		total += rate * factor;
//	printf("The total cost will be $%.2f.\n", total);
//}
//int main() {
//	int nights, code;
//	double hotel_rate;
//	while ((code = menu()) != QUIT) {
//		switch (code) {
//		case 1:hotel_rate = HOTEL1;
//			break;
//		case 2:hotel_rate = HOTEL2;
//			break;
//		case 3:hotel_rate = HOTEL3;
//			break;
//		case 4:hotel_rate = HOTEL4;
//			break;
//		default:hotel_rate = 0.0;
//			printf("Oops!\n");
//		}
//		nights = getnights();
//		showprice(hotel_rate, nights);
//	}
//	printf("Thank you and goodbye.\n");
//	return 0;
//}

//void mikado(int bah) {
//	int pooh = 10;
//	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
//}
//int main() {
//	int pooh = 2, bah = 5;
//	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//	return 0;
//}

//void interchange(int u, int v) {
//	int temp = u;
//	u = v;
//	v = temp;
//}
//int main() {
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	return 0;
//}

//void interchange(int u, int v) {
//	printf("Originally u = %d and v = %d.\n", u, v);
//	int temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d.\n", u, v);
//}
//int main() {
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	return 0;
//}

//void interchange(int* u, int* v) {
//	int temp = *u;
//	*u = *v;
//	*v = temp;
//}
//int main() {
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	return 0;
//}



             // 复习题
             // 复习题
             // 复习题
             // 复习题


//1.  实参带入可能会改变变量的值，形参带入不改变变量的值

//2.  a.void donut(int i);   b.int gear(int x, int y);   c.int guess(void);   d.stuff_it(double x, double* y);

//3.  a.char n_to_char(int x);  b.int digit(double x, int y);  c.double* which(double* x, double* y);  d.int random(void);

//4.  int sum(int x, int y) { return x + y; }

//5.  把 int 改成 double

//6.  void alter(int* x, int* y) {    int temp = *x - *y;    *x = *x + *y; *y = temp; }

//void salami(int num) {
//    for (int count = 1; count <= num; count++)
//        printf(" O salami mio!\n"); }

//8.  int compare(int a, int b, int c) {    int temp = a > b ? a : b;    return temp > c ? temp : c; }

//void menu() {
//    printf("Please choose one of the following:\n");
//    printf("1) copy files         2) move files\n");
//    printf("3) remove files       4)quit\n");
//    printf("Enter the number of your choice: "); }
//int getchoice(int upper, int lower) {
//    int input;
//    while (scanf("%d", &input) == 1) {
//        if (input<lower && input>upper)
//            menu();
//        getchar();
//    }
//    if (isdigit(input))
//        return input;
//    else
//        return 4; }
//int main() {
//    int res;
//    menu();
//    while ((res = getchoice(1, 4)) != 4) {
//        printf("I like choice %d.\n");
//        menu();
//    }
//    printf("Bye!\n");
//    return 0;
//}



             // 编程练习
             // 编程练习
             // 编程练习
             // 编程练习



//1.  double min(double x, double y) {    return x > y ? y : x; }

//void chline(char ch, int i, int j) {
//    for (int m = 0; m < j; m++) {
//        for (int n = 0; n < i; n++)
//            printf("%c", ch);
//        printf("\n");
//    }
//}

//3.  和第 2 题一样

//4.  double harmean(double x, double y) {    return 2.0 / (1.0 / x + 1.0 / y); }

//5.  void larger_of(double* x, double* y) {    *x > * y ? (*y = *x) : (*x = *y); }

//void alter(double* x, double* y, double* z) {
//    double temp;
//    if (*x > *y) {
//        temp = *x;
//        *x = *y;
//        *y = temp;
//    }
//    if (*x > *z) {
//        temp = *x;
//        *x = *z;
//        *z = temp;
//    }
//    if (*y > *z) {
//        temp = *y;
//        *y = *z;
//        *z = temp;
//    }
//    printf("%g  %g  %g\n", *x, *y, *z);
//}

//int get_char_position() {
//    char ch;
//    while ((ch = getchar()) != EOF) {
//        if (islower(ch))
//            printf("The char %c's position in alphabet is %d.\n", ch, ch - 'a' + 1);
//        else if (isupper(ch))
//            printf("The char %c's position in alphabet is %d.\n", ch, ch - 'A' + 1);
//        else  continue;
//    }
//}

//double power(double n, int p) {
//    double pow = 1.0;
//    int i;
//    if (n > 0 && p > 0) {
//        for (i = 1; i <= p; i++)
//            pow *= n;
//        return pow;
//    } else if (n > 0 && p < 0) {
//        for (i = 1, p = -p; i <= p; i++)
//            pow *= n;
//        return 1.0 / pow;
//    } else if (n == 0 && p != 0) {
//        return 0;
//    } else if (n == 0 && p == 0) {
//        printf("The %g to the power %d is not define, return 1!\n", n, p);
//        return 1;
//    } else  return 1;
//}

//double power(double n, int p) {
//    if (n > 0 && p > 0) {
//        return n * power(n, p - 1);
//    } else if (n > 0 && p < 0) {
//        return power(n, p + 1) / n;
//    } else if (n == 0 && p != 0) {
//        return 0;
//    } else if (n == 0 && p == 0) {
//        printf("The %g to the power %d is not define, return 1!\n", n, p);
//        return 1;
//    } else  return 1;
//}

//void to_base_n(unsigned long n, unsigned long t) {
//    if (t < 2 || t>10) {
//        printf("The function only convert 2-10\n");
//        return;
//    }
//	if (n >= t)
//		to_base_n(n / t, t);
//	printf("%d", n % t);
//}

//void Fibonacci(int n) {
//    unsigned long first = 1, second = 1, temp;
//    for (int i = 0; i < n; i++) {
//        printf("%d ", first);
//        temp = first + second;
//        first = second;
//        second = temp;
//    }
//    printf("\n");
//}
//int main() {
//    int n;
//    printf("Enter the number of Fibonacci (q to quit): \n");
//    while (scanf("%d", &n) == 1) {
//        Fibonacci(n);
//        printf("Enter the number of Fibonacci (q to quit): \n");
//    }
//    return 0;
//}