//        第 8 章     字符输入/输出和输入验证

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>

//int main() {
//	char ch;
//	while ((ch = getchar()) != '#')
//		putchar(ch);
//	return 0;
//}

//int main() {
//	int ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main() {
//	int ch;
//	FILE* fp;
//	char fname[50];
//	printf("Enter the name of the file: ");
//	scanf("%s", fname);
//	fp = fopen(fname, "r");
//	if (fp == NULL) {
//		printf("Failed to open file. Bye\n");
//		exit(1);
//	}
//	while ((ch = getc(fp)) != EOF)
//		putchar(ch);
//	fclose(fp);
//	return 0;
//}

//int main() {
//	int guess = 1;
//	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
//	printf("Respond with a y if my guess is right and with\n");
//	printf("an n if it is wrong.\n");
//	printf("Uh...is your number %d\n", guess);
//
//	//while (getchar() != 'y')
//	//	printf("Well, then, is it %d?\n", ++guess);
//
//	//while (getchar() != 'y') {
//	//	printf("Well, then, is it %d?\n", ++guess);
//	//	while (getchar() != '\n')
//	//		continue;
//	//}
//
//	//char response;
//	//while ((response = getchar()) != 'y') {
//	//	if (response == 'n')
//	//		printf("Well, then, is it %d?\n", ++guess);
//	//	else
//	//		printf("Sorry, I understand only y or n.\n");
//	//	while (getchar() != '\n')
//	//		continue;
//	//}
//
//	printf("I knew I could do it!\n");
//	return 0;
//}

//void display(char cr, int lines, int width) {
//	int row, col;
//	for (row = 1; row <= lines; row++) {
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//}
//int main() {
//	int ch, rows, cols;
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n') {
//		if (scanf("%d %d", &rows, &cols) != 2)
//			break;
//		display(ch, rows, cols);
//		while (getchar() != '\n')
//			continue;
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}

//long get_long(void) {
//	long input;
//	char ch;
//	while (scanf("%ld", &input) != 1) {
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an integer.\n""Please enter an integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}
//double sum_squares(long a, long b) {
//	double total = 0;
//	long i;
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//	return total;
//}
//bool bad_limits(long begin, long end, long low, long high) {
//	bool not_good = false;
//	if (begin > end) {
//		printf("%ld isn't smaller the %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low) {
//		printf("Value must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high) {
//		printf("Value must be %ld or less.\n", high);
//		not_good = true;
//	}
//	return not_good;
//}
//int main() {
//	const long MIN = -10000000L;    // 范围的下限
//	const long MAX = +10000000L;    // 范围的上限
//	long start, stop;       // 用户指定的范围的最小值，最大值
//	double answer;
//	printf("This program computes the sum of the squares of integers in a range.\n"
//		"The lower bound should not be less than -10000000 and the upper bound should not be more than +10000000.\n"
//		"Enter the limits (enter 0 for both limits to quit):\n" "lower limit: ");
//	start = get_long();
//	printf("upper limit: ");
//	stop = get_long();
//	while (start != 0 || stop != 0) {
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("Please try again.\n");
//		else {
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers from %ld to %ld is %g\n", start, stop, answer);
//		}
//		printf("Enter the limits (enter 0 for both limits to quit):\n""lower limit: ");
//		start = get_long();
//		printf("upper limit: ");
//		stop = get_long();
//	}
//	printf("Done.\n");
//	return 0;
//}

//int get_int() {
//	int input;
//	char ch;
//	while (scanf("%d", &input) != 1) {
//		while ((ch = getchar()) != '\n')
//			putchar(ch);
//		printf(" is not an integer.\n""Please enter an integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}
//char get_first() {
//	int ch = getchar();
//	while (getchar() != '\n')
//		continue;
//	return ch;
//}
//void count() {
//	int n, i;
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	while (getchar() != '\n')
//		continue;
//}
//char get_choice() {
//	int ch;
//	printf("Enter the letter of your choice:\n");
//	printf("a.advice          b.bell\n"
//		   "c.count           q.quit\n");
//	ch = get_first();
//	while ((ch < 'a' || ch>'c') && ch != 'q') {
//		printf("Please respond with a,b,c, or q.\n");
//		ch = get_first();
//	}
//	return ch;
//}
//int main() {
//	int choice;
//	while ((choice = get_choice()) != 'q') {
//		switch (choice) {
//		case 'a':printf("Buy low, sell high.\n");
//			break;
//		case 'b':putchar('\n');
//			break;
//		case 'c':count();
//			break;
//		default:printf("Program error!\n");
//		}
//	}
//	printf("Bye.\n");
//	return 0;
//}



             // 复习题
             // 复习题
             // 复习题
             // 复习题


//1.  先输入再输出，是有效表达式      先输出再输入，但输出完毕后没有东西输入，是无效表达式

//2.  a.H    b.007 = 7 = '\a' - 警报    c.换行    d.退格，即删除前一个字符

//3.  count < essay > eaasyct

//4.  a.只有两个文件，缺少程序    b.缺少重定向符号    c.程序和文件位置前后倒置

//5.  EOF表示C语言中getchar()和scanf()函数读取文件过程中检测到文件结尾时返回的一个特殊值。EOF = -1

//6.  a.If you qu    b.HJacrthjacrt

//7.  

//8.  



             // 编程练习
             // 编程练习
             // 编程练习
             // 编程练习



//int main() {
//    int counter = 0;
//    char ch;
//    while ((ch = getchar()) != EOF)
//        counter++;
//    printf("The File has %d characters.\n", counter);
//    return 0;
//}

//int main() {
//    int counter = 0;
//    char ch;
//    while ((ch = getchar()) != EOF) {
//        if (ch >= ' ')
//            printf("%c--%-3d  ", ch, ch);
//        else if (ch == '\n')
//            printf("\\n--\\n   ");
//        else if (ch == '\t')
//            printf("\\t--\\t   ");
//        else
//            printf("%c--^%c  ", ch, (ch + 64));
//        if (++counter % 10 == 0)
//            printf("\n");
//    }
//    return 0;
//}

//int main() {
//    int big = 0, small = 0;
//    char ch;
//    while ((ch = getchar()) != EOF) {
//        if (isupper(ch))
//            big++;
//        if (islower(ch))
//            small++;
//    }
//    printf("There are %d uppercase, and %d lowercase in that file!\n", big, small);
//    return 0;
//}

//int main() {
//    int words = 1, letter = 0;
//    char ch;
//    while ((ch = getchar()) != EOF) {
//        if (isalpha(ch))
//            letter++;
//        if (ch == ' ')
//            words++;
//    }
//    printf("There are %d words, and %d character, %.2f C/W!\n", words, letter, 1.0 * letter / words);
//    return 0;
//}

//int main() {
//    int head = 1, tail = 100;
//    int guess = (head + tail) / 2;
//    char ch;
//    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
//    printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
//    do {
//        printf("Un...is your number %d ?: ", guess);
//        if ((ch = getchar()) == 'y') break;
//        while (getchar() != '\n') continue;
//        printf("Well, then, %d is larger or smaller then yours? (l or s): ", guess);
//        ch = getchar();
//        while (getchar() != '\n') continue;
//        if (ch == 'l' || ch == 'L') {
//            tail = guess - 1;
//            guess = (head + tail) / 2;
//        }else if (ch == 's' || ch == 'S') {
//            head = guess + 1;
//            guess = (head + tail) / 2;
//        }else continue;
//    } while (ch != 'y');
//    printf("I know i could do it!\n");
//    return 0;
//}

//char get_first() {
//    int ch;
//    while ((ch = getchar()) != '\n') {
//        if(isalpha(ch))  return ch;
//        else  continue;
//    }
//}
//int main() {
//    char ch = get_first();
//    printf("%c\n", ch);
//    return 0;
//}

//void menu() {
//    printf("*****************************************************************\n");
//    printf("Enter the number corresponding to the desired pay rate or action:\n");
//    printf("a) $8.75/hr                          b) $9.33/hr\n");
//    printf("c) $10.00/hr                         d) $11.20/hr\n");
//    printf("q) quit\n");
//    printf("*****************************************************************\n");
//}
//void lalala(float number) {
//    float hours, salary, tax, tax_salary;
//    printf("Please enter the number of hours worked per week: ");
//    scanf("%f", &hours);
//    if (hours <= 40)
//        salary = hours * number;
//    else
//        salary = 40 * number + (hours - 40) * number * 1.5;
//    if (salary <= 300)
//        tax = salary * 0.15;
//    else if (300 < salary && salary <= 450)
//        tax = 300 * 0.15 + (salary - 300) * 0.2;
//    else
//        tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
//    tax_salary = salary - tax;
//    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n\n\n", salary, tax, tax_salary);
//    getchar();
//}
//int main() {
//    char input = '1';
//    while (input != 'q' && input != 'Q') {
//        menu();
//        scanf("%c", &input);
//        switch (input) {
//        case 'A':
//        case 'a':     lalala(8.75);
//            break;
//        case 'B':
//        case 'b':     lalala(9.33);
//            break;
//        case 'C':
//        case 'c':     lalala(10.00);
//            break;
//        case 'D':
//        case 'd':     lalala(11.20);
//            break;
//        case 'Q':
//        case 'q':   break;
//        default:    printf("Error input! Please retry!\n");
//        }
//    }
//    return 0;
//}

//void show_menu() {
//    printf("Enter the operation of your choice:\n");
//    printf("a. add           s. subtract\n"
//           "m. multiply      d. divide\nq. quit\n");
//}
//void get_number(float* first, float* second, char select) {
//    char ch;
//    printf("Enter first number: ");
//    while (scanf("%f", first) != 1) {
//        while ((ch = getchar()) != '\n')
//            putchar(ch);
//        printf(" is not an number.\n");
//        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
//    }
//    while (getchar() != '\n') continue;
//    printf("Enter second number: ");
//la: while (scanf("%f", second) != 1) {
//        while ((ch = getchar()) != '\n')
//            putchar(ch);
//        printf(" is not an number.\n");
//        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
//    }
//    if (select == 'd' && *second == 0) {
//        printf("Enter a number other than 0: ");
//        goto la;
//    }
//    while (getchar() != '\n') continue;
//}
//int main() {
//    char select;
//    float first = 0, second = 0;
//    do {
//        show_menu();
//        scanf("%c", &select);
//        switch (select) {
//        case 'a':   get_number(&first, &second, select);
//            printf("%g + %g = %g\n", first, second, first + second);
//            break;
//        case 's':   get_number(&first, &second, select);
//            printf("%g - %g = %g\n", first, second, first - second);
//            break;
//        case 'm':   get_number(&first, &second, select);
//            printf("%g × %g = %g\n", first, second, first * second);  // Alt+0215 is × 
//            break;
//        case 'd':   get_number(&first, &second, select);
//            printf("%g ÷ %g = %g\n", first, second, first / second);  // Alt+247 is ÷
//            break;
//        case 'q':   break;
//        default:    printf("Error select, please re-enter!\n");
//            while (getchar() != '\n') continue;
//        }
//    } while (select != 'q');
//    printf("Bye.");
//    return 0;
//}