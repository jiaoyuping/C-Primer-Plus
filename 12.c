//        第 12 章    存储类别、链接和内存管理

#include"primer.h"

//int main() {
//	int x = 30;
//	printf("x in outer block: %d at %p\n", x, &x);
//	{
//		int x = 77;
//		printf("x in inner block: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	while (x++ < 33) {
//		int x = 100;
//		x++;
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	return 0;
//}

//int main() {
//	int n = 8;
//	printf("   Initially, n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//		printf("      loop 1: n = %d at %p\n", n, &n);
//	printf("After loop 1: n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++) {
//		printf(" loop 2 index n = %d at %p\n", n, &n);
//		int n = 6;
//		printf("      loop 2: n = %d at %p\n", n, &n);
//	}
//	printf("After loop 2: n = %d at %p\n", n, &n);
//	return 0;
//}

//void trystat() {
//	int fade = 1;
//	static int stay = 1;
//	printf("fade = %d and stay = %d\n", fade++, stay++);
//}
//int main() {
//	int count;
//	for (count = 1; count <= 3; count++) {
//		printf("Here comes interation %d:\n", count);
//		trystat();
//	}
//	return 0;
//}

//int units = 0;
//void critic() {
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", &units);
//}
//int main() {
//	extern int units;
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//		critic();
//	printf("You must have looked it up!\n");
//	return 0;
//}

//int count = 0;
//void report_count() {
//	printf("Loop executed %d times\n", count);
//}
//static int total = 0;
//void accumulate(int k) {
//	static int subtotal = 0;
//	if (k <= 0) {
//		printf("loop cycle: %d\n", count);
//		printf("subtotal: %d; total: %d\n", subtotal, total);
//		subtotal = 0;
//	} else {
//		subtotal += k;
//		total += k;
//	}
//}
//int main() {
//	int value;
//	register int i;
//	printf("Enter a positive integer (0 to quit): ");
//	while (scanf("%d", &value) == 1 && value > 0) {
//		++count;
//		for (i = value; i >= 0; i--)
//			accumulate(i);
//		printf("Enter a positive integer (0 to quit): ");
//	}
//	report_count();
//	return 0;
//}

//static unsigned long int next = 1;
//unsigned int rand0() {
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//int main() {
//	for (int count = 0; count < 5; count++)
//		printf("%d\n", rand0());
//	return 0;
//}

//static unsigned long int next = 1;
//unsigned int rand1() {
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand1(unsigned int seed) {
//	next = seed;
//}
//int main() {
//	int count;
//	unsigned seed;
//	printf("Please enter your choice for seed.\n");
//	while (scanf("%u", &seed) == 1) {
//		srand1(seed);
//		for (count = 0; count < 5; count++)
//			printf("%d\n", rand1());
//		printf("Please enter next seed (q to quit):\n");
//	}
//	printf("Done!\n");
//	return 0;
//}

//int roll_count = 0;
//static int rollem(int sides) {
//	int roll = rand() % sides + 1;
//	++roll_count;
//	return roll;
//}
//int roll_n_dice(int dice, int sides) {
//	int d, total = 0;
//	if (sides < 2) {
//		printf("Need at least 2 sides.\n");
//		return -2;
//	}
//	if (dice < 1) {
//		printf("Need at least 1 sides.\n");
//		return -1;
//	}
//	for (d = 0; d < dice; d++)
//		total += rollem(sides);
//	return total;
//}
//int main() {
//	int dice, roll, sides, status;
//	srand((unsigned int)time(0));
//	printf("Enter the number of sides per die, 0 to stop.\n");
//	while (scanf("%d", &sides) == 1 && sides > 0) {
//		printf("How many dice?\n");
//		if ((status = scanf("%d", &dice)) != 1) {
//			if (status == EOF)
//				break;
//			else {
//				printf("You should have entered an integer. Let's begin again.\n");
//				while (getchar() != '\n') continue;
//				printf("How many sides? Enter 0 to stop.\n");
//				continue;
//			}
//		}
//		roll = roll_n_dice(dice, sides);
//		printf("You have rolled a %d using %d %d-sides dice.\n", roll, dice, sides);
//		printf("How many sides? Enter 0 to stop.\n");
//	}
//	printf("The rollem() function was called %d times.\n", roll_count);
//	printf("GOOD FORTUNE TO YOU!\n");
//	return 0;
//}

//int main() {
//	double* ptd;
//	int max, number, i = 0;
//	puts("What is the maximum number of type double entries?");
//	if (scanf("%d", &max) != 1) {
//		puts("Number not correctly entered -- bye.");
//		exit(EXIT_FAILURE);
//	}
//	ptd = (double*)malloc(max * sizeof(double));
//	if (ptd == NULL) {
//		puts("Memory allocation failed. Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter the values (q to quit):");
//	while (i < max && scanf("%lf", &ptd[i]) == 1)		++i;
//	printf("Here are your %d entries:\n", number = i);
//	for (i = 0; i < number; i++) {
//		printf("%7.2f", ptd[i]);
//		if (i % 7 == 6)  putchar('\n');
//	}
//	if (i % 7 != 0)  putchar('\n');
//	puts("Done.");
//	free(ptd);
//	return 0;
//}

//int static_store = 30;
//const char* pcg = "String Literal";
//int main() {
//	int auto_store = 40;
//	char auto_string[] = "Auto char Array";
//	int* pi;
//	char* pc1;
//	pi = (int*)malloc(sizeof(int));
//	*pi = 35;
//	pc1 = (char*)malloc(strlen("Dynamic String") + 1);
//	strcpy(pc1, "Dynamic String");
//	printf("static_store: %d at %p\n", static_store, &static_store);
//	printf("  auto_store: %d at %p\n", auto_store, &auto_store);
//	printf("         *pi: %d at %p\n", *pi, pi);
//	printf("%16s at %p\n", pcg, pcg);
//	printf("%16s at %p\n", auto_string, auto_string);
//	printf("%16s at %p\n", pc1, pc1);
//	printf("%16s at %p\n", "Quoted String", "Quoted String");
//	free(pi);
//	free(pc1);
//	return 0;
//}



                // 复习题
                // 复习题
                // 复习题
                // 复习题



//1.  自动存储类别、寄存器存储类别、静态无链接存储类别;

//2.  静态无链接存储类别、静态内部链接存储类别、静态链接外部存储类别;

//3.  静态外部链接存储类别；静态内部链接存储类别;

//4.  自动存储类别、寄存器存储类别、静态无链接存储类别——无链接形式；静态无链接存储类别的变量存储期是静态的，与其他两个不同；

//5.  主要用于外部变量的重复声明，表明该变量或者函数已定义在别处；

//6.  都分配了100个int类型的数组；区别在于calloc会把数组初始化为0，malloc不会；

//7.  daisy在文件1和文件2均可见；main()中的lily仅内部可见；petal()内外部声明错误，外部没有可用的lily变量；
//    rose在文件2可见，但stem()中的rose与外部的rose不同；文件2中lily在文件2可见；

//8.  color in main() is B; color in first() is R; color in main() is B; color in second() is G; color in main() is G;

//9.  a.plink只在本文件使用，value_ct函数接收的数组不允许改变值；b.没有，value和n是形参，只传值不传址；



                // 编程练习
                // 编程练习
                // 编程练习
                // 编程练习



//void critic(int* units) {
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", units);
//}
//int main() {
//	int units;
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//		critic(&units);
//	printf("You must have looked it up!\n");
//	return 0;
//}

//int mode;
//float range, fuel;
//void set_mode(int n) {
//    if (n > 1) {
//        printf("Invalid mode specified. Mode 1(US) used.\n");
//        mode = 1;
//    } else mode = n;
//}
//void get_info() {
//    if (mode == 0) {
//        printf("Enter distance traveled in kilometers: ");
//        scanf("%f", &range);
//        printf("Enter fuel consumed in liters: ");
//        scanf("%f", &fuel);
//    }
//    if (mode == 1) {
//        printf("Enter distance traveled in miles: ");
//        scanf("%f", &range);
//        printf("Enter fuel consumed in gallons: ");
//        scanf("%f", &fuel);
//    }
//}
//void show_info() {
//    if (mode == 0)
//        printf("Fuel consumption is %.2f liters per 100 KM.\n", fuel / range * 100);
//    if (mode == 1)
//        printf("Fuel consumption is %.2f miles per gallons.\n", range / fuel);
//}
//int main() {
//    int mode;
//    printf("Enter 0 for metric mode, 1 for US mode: ");
//    scanf("%d", &mode);
//    while (mode >= 0) {
//        set_mode(mode);
//        get_info();
//        show_info();
//        printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ");
//        scanf("%d", &mode);
//    }
//    printf("Done!\n");
//    return 0;
//}

//void set_mode(int* mode) {
//    if (*mode > 1) {
//        printf("Invalid mode specified. Mode 1(US) used.\n");
//        *mode = 1;
//    }
//}
//void get_info(int mode,float*range,float*fuel) {
//    if (mode == 0) {
//        printf("Enter distance traveled in kilometers: ");
//        scanf("%f", range);
//        printf("Enter fuel consumed in liters: ");
//        scanf("%f", fuel);
//    }
//    if (mode == 1) {
//        printf("Enter distance traveled in miles: ");
//        scanf("%f", range);
//        printf("Enter fuel consumed in gallons: ");
//        scanf("%f", fuel);
//    }
//}
//void show_info(int mode, float range, float fuel) {
//    if (mode == 0)
//        printf("Fuel consumption is %.2f liters per 100 KM.\n", fuel / range * 100);
//    if (mode == 1)
//        printf("Fuel consumption is %.2f miles per gallons.\n", range / fuel);
//}
//int main() {
//    int mode;
//    float range, fuel;
//    printf("Enter 0 for metric mode, 1 for US mode: ");
//    scanf("%d", &mode);
//    while (mode >= 0) {
//        set_mode(&mode);
//        get_info(mode, &range, &fuel);
//        show_info(mode, range, fuel);
//        printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ");
//        scanf("%d", &mode);
//    }
//    printf("Done!\n");
//    return 0;
//}

//static int count = 0;
//int run_count() {
//    return ++count;
//}
//int main() {
//    for (int i = 0; i < 100; i++)
//        printf("The function run_count run %d times.\n", run_count());
//    return 0;
//}

//int main() {
//    int arr[100];
//    int i, j;
//    srand((unsigned int)time(NULL));
//    for (i = 0; i < 100; i++)
//        arr[i] = rand() % 10 + 1;
//    for (i = 0; i < 99; i++) 
//        for (j = i + 1; j < 100; j++)
//            if (arr[i] < arr[j]) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//    for (i = 0; i < 100; i++)
//        printf(" %d ", arr[i]);
//    return 0;
//}

//int main() {
//    int arr[1000];
//    int i, j;
//    srand((unsigned int)time(NULL));
//    for (i = 0; i < 1000; i++) {
//        arr[i] = rand() % 10 + 1;
//        printf("%2d ", arr[i]);
//    }
//    puts("\n");
//    for (j = 1; j <= 10; j++) {
//        int count = 0;
//        for (i = 0; i < 1000; i++) {
//            if (arr[i] == j)
//                count++;
//        }
//        printf("The number %2d appears %3d times\n", j, count);
//    }
//    return 0;
//}

//int roll_n_dice(int dice, int sides) {
//	int d, total = 0;
//	if (sides < 2) {
//		printf("Need at least 2 sides.\n");
//		return -2;
//	}
//	if (dice < 1) {
//		printf("Need at least 1 sides.\n");
//		return -1;
//	}
//	for (d = 0; d < dice; d++)
//		total += rand() % sides + 1;
//	return total;
//}
//int main() {
//	int dice, sides, sets;
//	srand((unsigned int)time(NULL));
//	printf("Enter the number of sets; enter q to stop: ");
//	while (scanf("%d", &sets) == 1 & sets > 0) {
//		printf("How many sides and how many dice? ");
//		if (scanf("%d %d", &sides, &dice) == 2 && sides > 0 && dice > 0) {
//			printf("Here are %d sets of %d %d-sides throws.\n", sets, dice, sides);
//			for (int i = 0; i < sets; i++)  printf(" %-2d", roll_n_dice(dice, sides));
//		}
//		printf("\nHow many sets? Enter q to stop: ");
//	}
//	printf("GOOD FORTUNE TO YOU!\n");
//	return 0;
//}

//int* make_array(int elem, int val) {
//    int* ptr = (int*)malloc(elem * sizeof(int));
//    if (ptr == NULL)  return NULL;
//    for (int i = 0; i < elem; i++)
//        ptr[i] = val;
//    return ptr;
//}
//void show_array(const int ar[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf(" %d ", ar[i]);
//        if (i % 8 == 7) printf("\n");
//    }
//}
//int main() {
//    int* pa;
//    int size, value;
//    printf("Enter the number of elements: ");
//    while (scanf("%d", &size) == 1 && size > 0) {
//        printf("Enter the initialization value: ");
//        scanf("%d", &value);
//        pa = make_array(size, value);
//        if (pa) {
//            show_array(pa, size);
//            free(pa);
//        }
//        printf("\nEnter the number of elements (<1 to quit): ");
//    }
//    puts("Done.");
//    return 0;
//}

//int main() {
//    int num;
//    printf("How many words do you wish to enter? ");
//    scanf("%d", &num); getchar();
//    char** words = (char**)malloc(num * sizeof(char*));
//    printf("Enter %d words now:\n", num);
//    for (int i = 0; i < num; i++) {
//        char temp[100];
//        scanf("%s", temp);
//        int length = strlen(temp);
//        char* str = (char*)malloc(length * sizeof(char));
//        strcpy(str, temp);
//        *(words + i) = str;
//    }
//    printf("Here are your words:\n");
//    for (int i = 0; i < num; i++)
//        printf("%s\n", *(words + i));
//    free(words);
//    return 0;
//}