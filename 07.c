//     第 7 章   C控制语句：分支和跳转

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>


//int main() {
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1) {
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total: %.1f%% were below freezing.\n",
//			all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//	return 0;
//}

//#define SPACE ' '
//int main() {
//	char ch;
//	ch = getchar();
//	while (ch != '\n') {
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//	return 0;
//}

//int main() {
//	char ch;
//	while ((ch = getchar()) != '\n') {
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	putchar(ch);
//	return 0;
//}

//#define RATE1  0.13230            // 首次使用 360 kwh 的费率
//#define RATE2  0.15040            // 接着使用 108 kwh 的费率
//#define RATE3  0.30025            // 接着使用 252 kwh 的费率
//#define RATE4  0.34025            // 使用超过 720 kwh 的费率
//#define BREAK1 360.0              // 费率的第 1 个分界点
//#define BREAK2 468.0              // 费率的第 2 个分界点
//#define BREAK3 720.0              // 费率的第 3 个分界点
//#define BASE1 (RATE1*BREAK1)      // 使用 360 kwh 的费用
//#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))  // 使用 468 kwh 的费用
//#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))  // 使用 720 kwh 的费用
//int main() {
//	double kwh, bill;    // 使用的千瓦时，电费
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//	return 0;
//}

//int main() {
//	unsigned long num;
//	unsigned long div;
//	bool isPrime;
//	printf("Please enter an integer for analysis. Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1) {
//		for (div = 2, isPrime = true; (div * div) <= num; div++) {
//			if (num % div == 0) {
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n", num, div);
//				isPrime = false;      // 该数不是素数
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter an integer for analysis. Enter q to quit.\n");
//	}
//	printf("Bye!\n");
//	return 0;
//}

//#define PERIOD '.'
//int main() {
//	char ch;
//	int charcount = 0;
//	while ((ch = getchar()) != PERIOD) {
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("These are %d non-quote characters.\n", charcount);
//	return 0;
//}

//int main() {
//	char c, prev = '\n';
//	long n_chars = 0L;     // 字符数
//	int n_lines = 0, n_words = 0, p_lines = 0;    // 行数，单词数，不完整的行数
//	bool inword = false;      // 如果 c 在单词中，inword 等于 true
//	printf("Enter text to be analyzed (| to terminate):\n");
//	while ((c = getchar()) != '|') {
//		n_chars++;         // 统计字符
//		if (c == '\n')
//			n_lines++;     // 统计行
//		if (!isspace(c) && !inword) {
//			inword = true;    // 开始一个新的单词
//			n_words++;      // 统计单词
//		}
//		if (isspace(c) && inword)
//			inword = false;    // 达到单词的末尾
//		prev = c;      // 保存字符的值
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, partial line = %d\n", n_chars, n_words, n_lines, p_lines);
//	return 0;
//}

//#define COVERAGE  350     // 每罐油漆可刷的面积（单位：平方英尺）
//int main() {
//	int sq_feet, cans;
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1) {
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	return 0;
//}

//int main() {
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//	float score, total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1) {
//		if (score<MIN || score>MAX) {
//			printf("%0.1f is an invalid value. Try again: ", score);
//			continue;     // 跳转至 while 循环的测试条件
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0) {
//		printf("Average of %d score is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//	return 0;
//}

//int main() {
//	float length, width;
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1) {
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//	printf("Done.\n");
//	return 0;
//}

//int main() {
//	char ch;
//	printf("Give me a letter of the alphabet ,and I will give an animal name beginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#') {
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))     // 只接收小写字母
//			switch (ch) {
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//			}
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//	return 0;
//}

//int main() {
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#') {
//		switch (ch) {
//		case 'a':
//		case 'A':  a_ct++;
//			break;
//		case 'e':
//		case 'E':  e_ct++;
//			break;
//		case 'i':
//		case 'I':  i_ct++;
//			break;
//		case 'o':
//		case 'O':  o_ct++;
//			break;
//		case 'u':
//		case 'U':  u_ct++;
//			break;
//		default:   break;
//		}
//	}
//	printf("number of vowels:   A    E    I    O    U\n");
//	printf("                 %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
//	return 0;
//}


              // 复习题
              // 复习题
              // 复习题
              // 复习题


//1.     a.false    b.true   c.false

//2.     a.number >= 90 && number < 100       b.ch != 'q' || ch != 'k'
//       c.number >= 1 && number <= 9 && number != 5        d.number < 1 || number > 9

//int main() {
//    int weight, height;
//    scanf("%d %d", &weight, &height);
//    if (weight < 100 && height > 64) {
//        if (height >= 72)
//            printf("You are very tall for your weight.\n");
//        else
//            printf("You are tall for your weight.\n");
//    }
//    else if (weight > 300 && height < 48)
//        printf("You are quite short for your weight.\n");
//    else
//        printf("Your weight is ideal.\n");
//    return 0;
//}

//4.  a.true  b.false  c.true  d.6  e.10  f.false

//int main() {
//    int num;
//    for (num = 1; num <= 11; num++) {
//        if (num % 3 == 0)
//            putchar('$');
//        else
//            putchar('*');
//        putchar('#');
//        putchar('%');
//    }
//    putchar('\n');
//    return 0;
//}

//int main() {
//    int i = 0;
//    while (i < 3) {
//        switch (i++) {      //不加 break 余下全部执行
//        case 0:  printf("fat ");
//        case 1:  printf("hat ");
//        case 2:  printf("cat ");
//        default: printf("Oh no!");
//        }
//        putchar('\n');
//    }
//    return 0;
//}

//int main() {
//    char ch;
//    int lc = 0, uc = 0, oc = 0;  // 统计小写，大写，其他字母
//    while ((ch = getchar()) != '#') {
//        if ('a' <= ch && ch <= 'z')
//            lc++;
//        else if (ch >= 'A' && ch <= 'Z')
//            uc++;
//        else
//            oc++;
//    }
//    printf("%d lowercase, %d uppercase, %d other,", lc, uc, oc);
//    return 0;
//}

//int main() {
//    int age = 20;
//    while (age++ <= 65) {
//        if ((age % 20) == 0)
//            printf("You are %d. Here is a raise.\n", age);
//        if (age = 65)
//            printf("You are %d. Here is your gold watch.\n", age);
//    }
//    return 0;
//}

//int main() {
//    char ch;
//    while ((ch = getchar()) != '#') {
//        if (ch == '\n')
//            continue;
//        printf("Step 1\n");
//        if (ch == 'c')
//            continue;
//        else if (ch == 'b')
//            break;
//        else if (ch == 'h')
//            goto laststep;
//        printf("Step 2\n");
//    laststep: printf("Step 3\n");
//    }
//    printf("Done\n");
//    return 0;
//}

//int main() {
//    char ch;
//    while ((ch = getchar()) != '#') {
//       
//        if (ch != '\n') {
//            printf("Step 1\n");
//            if (ch == 'b')  break;
//            if (ch != 'c') {
//                if (ch == 'h')
//                    printf("Step 3\n");
//                else {
//                    printf("Step 2\n");
//                    printf("Step 3\n");
//                }
//            }
//        }        
//    }
//    printf("Done\n");
//    return 0;
//}


            // 编程练习
            // 编程练习
            // 编程练习
            // 编程练习


//int main() {
//    char ch;
//    int blank = 0, endline = 0, others = 0;
//    while ((ch = getchar()) != '#') {
//        if (ch == ' ')
//            blank++;
//        else if (ch == '\n')
//            endline++;
//        else
//            others++;
//    }
//    printf("%d blank, %d endline, %d others\n", blank, endline, others);
//    return 0;
//}

//int main() {
//    char ch;
//    int counter = 0;
//    while ((ch = getchar()) != '#') {
//        if (ch == '\n')
//            printf("'\\n'-%-3d  ", ch);
//        else if (ch == '\t')
//            printf("'\\t'-%-3d  ", ch);
//        else
//            printf("'%c'-%-3d  ", ch, ch);
//        if (++counter % 8 == 0)
//            printf("\n");
//    }
//    return 0;
//}

//int main() {
//    int num;
//    int odd_count = 0, odd_sum = 0, even_count = 0, even_sum = 0;
//    while (scanf("%d", &num)) {
//        if (num == 0)  break;
//        if (num % 2 == 1) {
//            odd_count++;
//            odd_sum += num;
//        } else {
//            even_count++;
//            even_sum += num;
//        }
//    }
//    printf("Have %d even number, average is %d\n", even_count, even_sum / even_count);
//    printf("Have %d odd number, average is %d\n", odd_count, odd_sum / odd_count);
//    return 0;
//}

//int main() {
//    char ch;
//    int counter = 0;
//    while ((ch = getchar()) != '#') {
//        if (ch == '!') {
//            printf("!!");
//            counter++;
//        }else if (ch == '.') {
//            printf("!");
//            counter++;
//        }else
//            printf("%c ", ch);
//    }
//    printf("\nTotal replace %d times\n", counter);
//    return 0;
//}

//int main() {
//    char ch;
//    int counter = 0;
//    while ((ch = getchar()) != '#') {
//        switch (ch) {
//        case '!':   printf("!!");
//                    counter++;
//                    break;
//        case '.':   printf("!");
//                    counter++;
//                    break;
//        default:    printf("%c ", ch);
//        } 
//    }
//    printf("\nTotal replace %d times\n", counter);
//    return 0;
//}

//int main() {
//    char ch;
//    int counter = 0, halfpair;
//    while ((ch = getchar()) != '#') {
//        if (ch == 'e')
//            halfpair = 1;
//        else if (ch == 'i' && halfpair == 1) {
//            counter++;
//            halfpair = 0;
//        }else
//            halfpair = 0;
//    }
//    printf("Totally exist %d \'ei\' in all char!\n", counter);
//    return 0;
//}

//int main() {
//    float hours, salary, tax, tax_salary;
//    printf("Please enter the number of hours worked per week: ");
//    scanf("%f", &hours);
//    if (hours <= 40)
//        salary = hours * 10;
//    else
//        salary = 400 + (hours - 40) * 10 * 1.5;
//    if (salary <= 300)
//        tax = salary * 0.15;
//    else if (300 < salary && salary <= 450)
//        tax = 300 * 0.15 + (salary - 300) * 0.2;
//    else
//        tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
//    tax_salary = salary - tax;
//    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, tax_salary);
//    return 0;
//}

//void menu() {
//    printf("*****************************************************************\n");
//    printf("Enter the number corresponding to the desired pay rate or action:\n");
//    printf("1) $8.75/hr                          2) $9.33/hr\n");
//    printf("3) $10.00/hr                         4) $11.20/hr\n");
//    printf("5) quit\n");
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
//    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, tax_salary);
//}
//int main() {
//    int input = 1;
//    while (input != 5){
//        menu();
//        scanf("%d", &input);
//        switch (input) {
//        case 1:     lalala(8.75);
//            break;
//        case 2:     lalala(9.33);
//            break;
//        case 3:     lalala(10.00);
//            break;
//        case 4:     lalala(11.20);
//            break;
//        case 5: break;
//        default:    printf("Error input! Please retry!\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int input;
//    printf("Please enter a number(> 0): ");
// haha:   scanf("%d", &input);
//    if (input == 1)
//        printf("no prime");
//    else if (input >= 2) {
//        printf("2 ");
//        int x, y;
//        for (x = 3; x <= input; x += 2) {
//            for (y = 3; y < x; y += 2) {
//                if (x % y == 0)
//                    break;
//            }
//            if (x == y)
//                printf("%d ", x);
//        }
//    }else {
//        printf("Please enter the correct number(> 0): ");
//        goto haha;
//    }
//    return 0;
//}

//void tax_calc(float base) {
//    float salary, tax, tax_salary;
//    printf("Please enter your salary: ");
//    scanf("%f", &salary);
//    if (salary <= base)
//        tax = salary * 0.15;
//    else
//        tax = base * 0.15 + (salary - base) * 0.28;
//    tax_salary = salary - tax;
//    printf("Hi, your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, tax_salary);
//}
//int main() {
//    char type;
//    do {
//        printf("1)single   2)house holder   3)married   4)divorced   5)quit\n");
//        printf("There are four type. Please select tax type: ");
//        scanf("%c", &type);        
//        switch (type) {
//        case '1':     tax_calc(17850.0);
//            break;
//        case '2':     tax_calc(23900.0);
//            break;
//        case '3':     tax_calc(29750.0);
//            break;
//        case '4':     tax_calc(14875.0);
//            break;
//        case '5':     break;
//        default:      printf("Please re-enter.\n");
//        }
//    } while (type != '5');
//    return 0;
//}

//void menu() {
//    printf("**********************************************************\n");
//    printf("*********   a) artichoke      b) beet       **************\n");
//    printf("*********   c) carrot         q) quit & checkout   *******\n");
//    printf("**********************************************************\n");
//    printf("Please input the vegetable you want to buy(a, b, c or q): ");
//}
//void category(float price, float* category_weight, float* category_price) {
//    float weight;
//    printf("Please input vegetable weight: ");
//    scanf("%f", &weight);
//    *category_price += weight * price;
//    *category_weight += weight;
//}
//int main() {
//    char type;
//    float artichoke_weight = 0, beet_weight = 0, carrot_weight = 0;
//    float artichoke_price = 0, beet_price = 0, carrot_price = 0;
//    do {
//        menu();
//        switch (type = getchar()) {
//        case 'a':    category((float)2.05, &artichoke_weight, &artichoke_price);
//            break;
//        case 'b':    category((float)1.15, &beet_weight, &beet_price);
//            break;
//        case 'c':    category((float)1.09, &carrot_weight, &carrot_price);
//            break;
//        case 'q':   break;
//        default:    printf("Error input, please re-enter.\n");
//        }
//    } while (type != 'q');
//    float weight = artichoke_weight + beet_weight + carrot_weight;
//    float price = artichoke_price + beet_price + carrot_price;
//    float freight_packaging = 0, discount = 0;
//    if (price >= 100)
//        discount = price * (float)0.05;
//    else
//        discount = 0;
//    if (weight <= 5.0)
//        freight_packaging = 6.5;
//    else if (5 < weight && weight <= 20)
//        freight_packaging = 14.0;
//    else
//        freight_packaging = (float)14.0 + (weight - (float)20) * (float)0.5;
//    printf("vegetables    price($/pound)    weight(pound)    total_price($)\n");
//    printf("artichoke     2.05              %-8.3f           %-8.3f\n", artichoke_weight, artichoke_price);
//    printf("beet          1.15              %-8.3f           %-8.3f\n", beet_weight, beet_price);
//    printf("carrot        1.09              %-8.3f           %-8.3f\n", carrot_weight, carrot_price);
//    printf("The total quality is %.3f pound, and the freight and packaging charges is $%.1f\n", weight, freight_packaging);
//    printf("The total price is $%.3f, the discount is $%.3f, and the actual cost is $%.3f\n",
//            price, discount, price - discount + freight_packaging);
//    return 0;
//}