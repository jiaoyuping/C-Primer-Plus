//           第 11 章     字符串和字符串函数

#include"primer.h"


//#define MSG "I am a symbolic string constant."
//#define MAXLENGTH 81
//int main() {
//	char words[MAXLENGTH] = "I am a string in a array.";
//	const char* pt1 = "Something is pointing at me.";
//	puts("Here are some strings:");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//	return 0;
//}

//int main() {
//	printf("%s, %p, %c\n", "We", "are", *"space farers");
//	return 0;
//}

//#define MSG "I'm special"
//int main() {
//	char ar[] = MSG;
//	const char* pt = MSG;
//	printf("address of \"I'm special\": %p\n","I'm special");
//	printf("              address ar: %p\n", ar);
//	printf("              address pt: %p\n", pt);
//	printf("          address of MSG: %p\n", MSG);
//	printf("address of \"I'm special\": %p\n", "I'm special");
//	return 0;
//}
//
//#define SLEN 40
//#define LIM 5
//int main() {
//	const char* mytalents[LIM] = { "Adding numbers swiftly","Multiplying accurately","Stashing data",
//									"Following instructions to the letter","Understanding the C language" };
//	char yourtalents[LIM][SLEN] = { "Walking in a straight line","Sleeping","Watching television",
//									"Mailing letters","Reading email" };
//	int i;
//	puts("Let's compare talents.");
//	printf("%-36s  %-25s\n", "My Talents", "Your Talents");
//	for (i = 0; i < LIM; i++)
//		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
//	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));
//	return 0;
//}

//int main() {
//	const char* mesg = "Don't be a fool!";
//	const char* copy;
//	copy = mesg;
//	printf("%s\n", copy);
//	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
//	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
//	return 0;
//}

//#define STLEN 81
//int main() {
//	char words[STLEN];
//	puts("Enter a string, please.");
//	gets(words);
//	printf("Your string twice:\n");
//	printf("%s\n", words);
//	puts(words);
//	puts("Done.");
//	return 0;
//}

//#define STLEN 14
//int main() {
//	char words[STLEN];
//	puts("Enter a string, please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(), then fputs()):\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Enter another string. please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(), then fputs()):\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Done.");
//	return 0;
//}

//#define STLEN 10
//int main() {
//	char words[STLEN];
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//		fputs(words, stdout);
//	puts("Done.");
//	return 0;
//}
//
//#define STLEN 10
//int main() {
//	char words[STLEN];
//	int i;
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
//		i = 0;
//		while (words[i] != '\n' && words[i] != '\0')
//			i++;
//		if (words[i] == '\n')
//			words[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//		puts(words);
//	}
//	puts("Done.");
//	return 0;
//}

//char* s_gets(char* st, int n) {
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val) {
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//int main() {
//	char name1[11], name2[11];
//	int count;
//	printf("Please enter 2 names.\n");
//	count = scanf("%5s %10s", name1, name2);
//	printf("I read the %d names %s and %s.\n", count, name1, name2);
//	return 0;
//}
//
//#define DEF "I am a #defined string."
//int main() {
//	char str1[80] = "An array was initialized to me.";
//	const char* str2 = "An pointer was initialized to me.";
//	puts("I'm an argument to puts().");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]);
//	puts(str2 + 4);
//	return 0;
//}

//int main() {
//	char side_a[] = "Side A";
//	char dont[] = { 'W','O','W','!' };
//	char side_b[] = "Side B";
//	puts(dont);
//	return 0;
//}

//void put1(const char* string) {
//	while (*string != '\0')
//		putchar(*string++);
//}

//int put2(const char* string) {
//	int count = 0;
//	while (*string) {
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//	return count;
//}

//int main() {
//	put1("If I'd as much money");
//	put1(" as I could spend,\n");
//	printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));
//	return 0;
//}

//void fit(char* string, unsigned int size) {
//	if (strlen(string) > size)
//		string[size] = '\0';
//}
//int main() {
//	char mesg[] = "Things should be as simple as possible,"" but not simpler.";
//	puts(mesg);
//	fit(mesg, 38);
//	puts(mesg);
//	puts("Let's look at some more of the string.");
//	puts(mesg + 39);
//	return 0;
//}

//#define SIZE 80
//int main() {
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE)) {
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//	} else
//		puts("End of file encountered!");
//	puts("bye");
//	return 0;
//}

//#define SIZE 80
//#define BUGSIZE 13
//int main() {
//	char flower[SIZE], bug[BUGSIZE];
//	char addon[] = "s smell like old shoes.";
//	int available;
//	puts("What is your favorite flower?");
//	s_gets(flower, SIZE);
//	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
//		strcat(flower, addon);
//	puts(flower);
//	puts("What is your favorite bug?");
//	s_gets(bug, BUGSIZE);
//	available = BUGSIZE - strlen(bug) - 1;
//	strncat(bug, addon, available);
//	puts(bug);
//	return 0;
//}

//#define ANSWER "Grant"
//#define SIZE 40
//int main() {
//	char try[SIZE];
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (try != ANSWER) {
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//	return 0;
//}

//#define ANSWER "Grant"
//#define SIZE 40
//int main() {
//	char try[SIZE];
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (strcmp(try, ANSWER) != 0) {
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//	return 0;
//}

//int main() {
//	printf("strcmp(\"A\", \"A\") is ");
//	printf("%d\n", strcmp("A", "A"));
//
//	printf("strcmp(\"A\", \"B\") is ");
//	printf("%d\n", strcmp("A", "B"));
//
//	printf("strcmp(\"B\", \"A\") is ");
//	printf("%d\n", strcmp("B", "A"));
//
//	printf("strcmp(\"C\", \"A\") is ");
//	printf("%d\n", strcmp("C", "A"));
//
//	printf("strcmp(\"Z\", \"a\") is ");
//	printf("%d\n", strcmp("Z", "a"));
//
//	printf("strcmp(\"apples\", \"apple\") is ");
//	printf("%d\n", strcmp("apples", "apple"));
//	return 0;
//}

//#define SIZE 80
//#define LIM 10
//#define STOP "quit"
//int main() {
//	char input[LIM][SIZE];
//	int ct = 0;
//	printf("Enter up to %d lines (type quit to quit):\n", LIM);
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
//		ct++;
//	printf("%d string entered\n", ct);
//	return 0;
//}

//#define LISTSIZE 6
//int main() {
//	const char* list[LISTSIZE] = { "astronomy","astounding","astrophysics","ostracize","asterism","astrophobia" };
//	int count = 0, i;
//	for (i = 0; i < LISTSIZE; i++)
//		if (strncmp(list[i], "astro", 5) == 0) {
//			printf("Found: %s\n", list[i]);
//			count++;
//		}
//	printf("The list contained %d words beginning"" with astro.\n", count);
//	return 0;
//}

//#define SIZE 40
//#define LIM 5
//int main() {
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE)) {
//		if (temp[0] != 'q')
//			printf("%s doesn't begin with q!\n", temp);
//		else {
//			strcpy(qwords[i], temp);
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//	return 0;
//}

//#define WORDS "beast"
//#define SIZE 40
//int main() {
//	const char* orig = WORDS;
//	char copy[SIZE] = "Be the best that you can be.";
//	char* ps;
//	puts(orig);
//	puts(copy);
//	ps = strcpy(copy + 7, orig);
//	puts(copy);
//	puts(ps);
//	return 0;
//}

//#define SIZE 40
//#define TARGSIZE 7
//#define LIM 5
//int main() {
//	char qwords[LIM][TARGSIZE];
//	char temp[SIZE];
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE)) {
//		if (temp[0] != 'q')
//			printf("%s doesn't begin with q!\n", temp);
//		else {
//			strncpy(qwords[i], temp, TARGSIZE - 1);
//			qwords[i][TARGSIZE - 1] = '\0';
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//	return 0;
//}

//#define MAX 20
//int main() {
//	char first[MAX], last[MAX], formal[2 * MAX + 10];
//	double prize;
//	puts("Enter your first name:");
//	s_gets(first, MAX);
//	puts("Enter your last name:");
//	s_gets(last, MAX);
//	puts("Enter your prize name:");
//	scanf("%lf", &prize);
//	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
//	puts(formal);
//	return 0;
//}

//#define SIZE 81
//#define LIM 20
//void stsrt(char* strings[], int num) {
//	char* temp;
//	int top, seek;
//	for (top = 0; top < num - 1; top++)
//		for (seek = top + 1; seek < num; seek++) {
//			temp = strings[top];
//			strings[top] = strings[seek];
//			strings[seek] = temp;
//		}
//}
//int main() {
//	char input[LIM][SIZE];
//	char* ptstr[LIM];
//	int ct = 0, k;
//	printf("Input tp to %d lines, and I will sort them.\n", LIM);
//	printf("To stop, press the Enter key at a line's start.\n");
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0') {
//		ptstr[ct] = input[ct];
//		ct++;
//	}
//	stsrt(ptstr, ct);
//	puts("\nHere's the sorted list:\n");
//	for (k = 0; k < ct; k++)
//		puts(ptstr[k]);
//	return 0;
//}

//#define LIMIT 81
//void ToUpper(char* str) {
//	while (*str) {
//		*str = toupper(*str);
//		str++;
//	}
//}
//int PunctCount(const char* str) {
//	int ct = 0;
//	while (*str) {
//		if (ispunct(*str))
//			ct++;
//		str++;
//	}
//	return ct;
//}
//int main() {
//	char line[LIMIT];
//	char* find;
//	puts("Please enter a line:");
//	fgets(line, LIMIT, stdin);
//	find = strchr(line, '\n');    // 查找换行符
//	if (find)   // 如果地址不是 NULL
//		*find = '\0';
//	ToUpper(line);
//	puts(line);
//	printf("That line has %d punctuation characters.\n", PunctCount(line));
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int count;
//	printf("The command line has %d arguments:\n", argc - 1);
//	for (count = 1; count < argc; count++)
//		printf("%d: %s\n", count, argv[count]);
//	printf("\n");
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int i, times;
//	if (argc < 2 || (times = atoi(argv[1])) < 1)
//		printf("Usage: %s positive-number\n", argv[0]);
//	else
//		for (i = 0; i < times; i++)
//			puts("Hello, good looking!");
//	return 0;
//}

//#define LIM 30
//int main() {
//	char number[LIM];
//	char* end;
//	long value;
//	puts("Enter a number (empty line to quit):");
//	while (s_gets(number, LIM) && number[0] != '\0') {
//		value = strtol(number, &end, 10);
//		printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
//		value = strtol(number, &end, 16);
//		printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
//		puts("Next number:");
//	}
//	puts("Bye!\n");
//	return 0;
//}



            // 复习题
            // 复习题
            // 复习题
            // 复习题


//1.  缺少结尾空字符 '\0'

//2.  See you at the snack bar.
//    ee you at the snack bar.
//    See you
//    ee you

//3.  y   my   mmy   ummy    Yummy

//4.  I read part of it all the way through.

//5.  a.Ho Ho Ho!!oH oH oH;  b.char *;  c."Ho Ho Ho!"首元素"H";  d."*--pc"pc的地址减1再解引用，"--*pc"pc解引用的值减1；
//    e.Ho Ho Ho!!oH oH o;  f.*pc判断空字符，pc-str判断地址高低;  g.pc-str的值永远不为0，所以死循环  h.添加char *x;

//6.  1字节；4字节(字符常量按照整型数据的形式存储)；2字节

//#define M1 "How are ya, sweetie?"
//int main() {
//    char words[80];
//    char M2[40] = "Beat the clock.";
//    char* M3 = "chat";
//    printf(M1);
//    puts(M1);
//    puts(M2);
//    puts(M2 + 1);
//    strcpy(words, M2);
//    strcat(words, " Win a toy.");
//    puts(words);
//    words[4] = '\0';
//    puts(words);
//    while (*M3)
//        puts(M3++);
//    puts(--M3);
//    puts(--M3);
//    M3 = M1;
//    puts(M3);
//    return 0;
//}

//int main() {
//    char str1[] = "gawsie";
//    char str2[] = "bletonism";
//    char* ps;
//    int i = 0;
//    for (ps = str1; *ps != '\0'; ps++) {
//        if (*ps == 'a' || *ps == 'e')
//            putchar(*ps);
//        else
//            (*ps)--;
//        putchar(*ps);
//    }
//    putchar('\n');
//    while (str2[i] != '\0') {
//        printf("%c", i % 3 ? str2[i] : '*');
//        ++i;
//    }
//    return 0;
//}

//char* s_gets(char* st, int n) {
//    char* ret_val;
//    ret_val = fgets(st, n, stdin);
//    if (ret_val) {
//        while (*st != '\n' && *st != '\0')
//            st++;
//        if (*st == '\n')
//            *st = '\0';
//        else
//            while (getchar() != '\n')
//                continue;
//    }
//    return ret_val;
//}

//int my_strlen(const char* str) {
//    int count = 0;
//    while (*str++ != '\0')
//        count++;
//    return count;
//}

//char* s_gets(char* st, int n) {
//    char* ret_val;
//    char* find;
//    ret_val = fgets(st, n, stdin);
//    if (ret_val) {
//        find = strchr(st, '\n');
//        if (find)
//            *find = '\0';
//        else
//            while (getchar() != '\n')
//                continue;
//    }
//    return ret_val;
//}

//char* space(const char* str) {
//    while (*str != ' ' && *str != '\0')
//        str++;
//    if (*str == '\0')
//        return NULL;
//    else
//        return (char*)str;
//}

//#define ANSWER "GRANT"
//#define SIZE 40
//void to_upper(char* str) {
//	while (*str != '\0') {
//		*str = toupper(*str);
//		str++;
//	}
//}
//int main() {
//	char try[SIZE];
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	to_upper(try);
//	while (strcmp(try, ANSWER) != 0) {
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//		to_upper(try);
//	}
//	puts("That's right!");
//	return 0;
//}



            // 编程练习
            // 编程练习
            // 编程练习
            // 编程练习



//char* read_char(char* str, int n) {
//    int i = 0;
//    do {
//        str[i] = getchar();
//    } while (str[i] != EOF && ++i < n);
//    return str;
//}
//int main() {
//    char test[40];
//    puts("Start to test function. Enter a string.");
//    read_char(test, 40);
//    puts("The string you input is:");
//    puts(test);
//    return 0;
//}

//char* read_char(char* str, int n) {
//    int i = 0;
//    do {
//        str[i] = getchar();
//        if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
//            break;
//    } while (str[i] != EOF && ++i < n);
//    return str;
//}
//int main() {
//    char test[40];
//    puts("Start to test function. Enter a string.");
//    read_char(test, 40);
//    puts("The string you input is:");
//    puts(test);
//    return 0;
//}

//void read_word(char* st) {
//    char temp;
//    int i = 0;
//    while (temp = getchar()) {
//        if (isalpha(temp))
//            st[i++] = temp;
//        if (i > 0 && isalpha(st[i - 1]) && (!isalpha(temp))) {
//            st[i] = '\0';
//            break;
//        }
//    }
//}
//#define SIZE 80
//int main() {
//    char word[SIZE];
//    read_word(word);
//    puts(word);
//    return 0;
//}

//void read_word(char* st, int n) {
//    char temp;
//    int i = 0;
//    while (temp = getchar()) {
//        if (isalpha(temp) && i < (n - 1))
//            st[i++] = temp;
//        if (i > 0 && isalpha(st[i - 1]) && (!isalpha(temp))) {
//            st[i] = '\0';
//            break;
//        }
//    }
//}
//#define SIZE 20
//int main() {
//    char word[SIZE];
//    read_word(word, SIZE);
//    puts(word);
//    return 0;
//}

//char* search(char* str, char c) {
//    while (*str) {
//        if (*str == c)
//            return str;
//        str++;
//    }
//    return NULL;
//}
//int main() {
    //char arr[80];
    //char dest = ' ';
    //puts("Enter a string:");
    //fgets(arr, 80, stdin);
    //while (dest != EOF) {
    //    printf("Enter a char to find (EOF to quit): ");
    //    while ((dest = getchar()) == '\n') continue;
    //    if (search(arr, dest) != NULL)
    //        printf("Found the char %c in the %p\n", dest, search(arr, dest));
    //    else
    //        printf("Char %c not found. Try another?\n", dest);
    //}
    //return 0;
//}

//bool is_within(char* str, char c) {
//    while (*str)
//        if (*str++ == c)
//            return true;
//    return false;
//}
//int main() {
//    char arr[80];
//    char dest = ' ';
//    puts("Enter a string:");
//    fgets(arr, 80, stdin);
//    while (dest != EOF) {
//        printf("Enter a char to find (EOF to quit): ");
//        while ((dest = getchar()) == '\n') continue;
//        if (is_within(arr, dest))
//            printf("Found the char %c in the string\n", dest);
//        else
//            printf("Char %c not found. Try another?\n", dest);
//    }
//    return 0;
//}

//char* mystrncpy(char* str1, char* str2, int n) {
//    while (n-- > 0 && *str2)
//        *str1++ = *str2++;
//    if (n > 0)
//        *str1 = '\0';
//    return str1;
//}
//int main() {
//    char s1[80], s2[80];
//    int num;
//    puts("Please enter a string to copy:");
//    fgets(s2, 80, stdin);
//    printf("Enter number of char you need to copy: ");
//    scanf("%d", &num);
//    while (*s2 != '\n') {
//        mystrncpy(s1, s2, num);
//        puts("Done! Now the dest string is:");
//        puts(s1);
//        while (getchar() != '\n') break;
//        puts("Another? Please enter a string to copy:");
//        fgets(s2, 40, stdin);
//        printf("Enter number of char you need to copy: ");
//        scanf("%d", &num);
//    }
//    return 0;
//}

//char* string_in(char* str1, char* str2) {
//    char* temp;
//    while (*str1) {
//        if (*str1 == *str2) {
//            temp = str1;
//            for (; (*str1 == *str2) && *str2 != '\n' && *str2 != '\0'; str1++, str2++);
//            if (*str2 == '\n' || *str2 == '\0') return temp;
//            else return NULL;
//        }
//        str1++;
//    }
//    return NULL;
//}
//int main() {
//    char s1[80], s2[80];
//    puts("Please enter the string to be looked for:");
//    fgets(s1, 80, stdin);
//    puts("Please enter the string you want to find:");
//    fgets(s2, 80, stdin);
//    while (*s1 != '\n') {
//        if (string_in(s1, s2))
//            printf("This string is found in the string, the corresponding first element address is %p\n", string_in(s1, s2));
//        else
//            puts("This string is not in the string being looked for\n");
//        puts("Another? Please enter the string to be looked for:");
//        fgets(s1, 80, stdin);
//        puts("Please enter the string you want to find:");
//        fgets(s2, 80, stdin);
//    }
//    return 0;
//}
//
//void reverse(char* start, char* end) {
//    while (start < end) {
//        char temp = *start;
//        *start = *end;
//        *end = temp;
//        start++; end--;
//    }
//}
//int main() {
//    char source[80];
//    puts("Please enter the desired string in reverse order:");
//    fgets(source, 80, stdin);
//    while (*source != '\n') {
//        int length = strlen(source) - 1;
//        reverse(source, source + length);
//        printf("The string after the reverse order is completed:\n%s\n", source);
//        puts("Another? Please enter the desired string in reverse order:");
//        fgets(source, 80, stdin);
//    }
//    return 0;
//}

//char* delete_space(char* str) {
//    int length = strlen(str);
//    int i = 0;
//    while (i < length) {
//        if (str[i] == ' ')
//            for (int j = i; j < length; j++)
//                str[j] = str[j + 1];
//        i++;
//    }
//    return str;
//}
//int main() {
//    char test[80];
//    puts("Enter a string:");
//    fgets(test, 80, stdin);
//    while (*test != '\n') {
//        printf("Now the trim string is:\n%s\n", delete_space(test));
//        puts("Another? Enter a string:");
//        fgets(test, 80, stdin);
//    }
//    return 0;
//}

//void show_menu() {
//    printf("\n****************************************************************\n");
//    printf("a) Prints a list of source strings.\nb) Prints strings in the ASCII order.\n");
//    printf("c) Prints strings in increasing length order.\nd) Prints a string at the length of the first word in the string\n");
//    printf("q) Exit the program.\n****************************************************************\n");
//    printf("Please enter the operation to be performed: ");
//}
//void input_string(char str[][80], int cows) {
//    printf("Please enter 10 strings:\n");
//    for (int i = 0; i < cows; i++) {
//        printf("The %d string: ", i + 1);
//        fgets(str[i], 80, stdin);
//    }
//}
//void origin_print(char str[][80], int cows) {
//    for (int i = 0; i < cows; i++)
//        fputs(str[i], stdout);
//}
//void ascii_print(char str[][80], int cows) {
//    char temp[80];
//    for (int i = 0; i < cows - 1; i++)
//        for (int j = i + 1; j < cows; j++)
//            if (str[i][0] > str[j][0]) {
//                strcpy(temp, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], temp);
//            }
//    origin_print(str, cows);
//}
//void length_print(char str[][80], int cows) {
//    char temp[80];
//    for (int i = 0; i < cows - 1; i++)
//        for (int j = i + 1; j < cows; j++)
//            if (strlen(str[i]) > strlen(str[j])) {
//                strcpy(temp, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], temp);
//            }
//    origin_print(str, cows);
//}
//void word_print(char str[][80], int cows) {
//    char temp[80];
//    for (int i = 0; i < cows - 1; i++) {
//        int c1 = 0, x = 0;
//        while (str[i][x++] != ' ')
//            c1++;
//        for (int j = i + 1; j < cows; j++) {
//            int c2 = 0, y = 0;
//            while (str[j][y++] != ' ')
//                c2++;
//            if (c1 > c2) {
//                strcpy(temp, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], temp);
//            }
//        }
//    }
//    origin_print(str, cows);
//}
//#define COWS 10
//int main() {
//    char source[COWS][80];
//    input_string(source, COWS);
//    char input;
//    do {
//        show_menu();
//        scanf("%c", &input);
//        getchar();
//        switch (input) {
//        case 'a': origin_print(source, COWS);
//            break;
//        case 'b': ascii_print(source, COWS);
//            break;
//        case 'c': length_print(source, COWS);
//            break;
//        case 'd': word_print(source, COWS);
//            break;
//        case 'q': break;
//        default: puts("Input error, try again.\n");
//        }
//    } while (input != 'q');
//    return 0;
//}

//int main() {
//    char arr[80];
//    int words = 0, upper = 0, lower = 0, punct = 0, digit = 0, i = 0;
//    while ((arr[i] = getchar()) != EOF) {
//        if (isupper(arr[i])) upper++;
//        if (islower(arr[i])) lower++;
//        if (ispunct(arr[i])) punct++;
//        if (isdigit(arr[i])) digit++;
//        if (i > 0 && isalpha(arr[i - 1]) && !isalpha(arr[i])) words++;
//        i++;
//    }
//    printf("Number of words is %d\nThe number of capital letters is %d\nThe number of lowercase letters is %d\n"
//        "The number of punctuation marks is %d\nThe number of numeric characters is %d\n", words, upper, lower, punct, digit);
//    return 0;
//}

//void reverse(char* start, char* end) {
//    while (start < end) {
//        char temp = *start;
//        *start = *end;
//        *end = temp;
//        start++; end--;
//    }
//}
//int main() {
//    char arr[] = "see you later, my son!";
//    int length = strlen(arr) - 1;
//    if (!isalpha(arr[length])) length--;
//    reverse(arr, arr + length);
//    char* start = arr;
//    while (start < arr + length) {
//        char* end = start;
//        while (isalpha(*end)) end++;
//        reverse(start, end - 1);
//        if (!isalpha(*end)) start = end + 1;
//    }
//    puts(arr);
//    return 0;
//}

//int main(int argc, char* argv[]) {
//    if (argc != 3) {
//        printf("Error argument, please retry.\n");
//        return 0;
//    }
//    float f = atof(argv[1]);
//    int i = atoi(argv[2]);
//    float result = 1;
//    for (int k = 0; k < i; k++)
//        result *= f;
//    printf("The %g 's %d power is %g\n", f, i, result);
//    return 0;
//}

//int myatoi(char* st) {
//    int result = 0;
//    int bit_mark = 1;
//    int length = strlen(st);
//    for (int i = length; i > 0; i--) {
//        if (isdigit(*(st + i - 1)) == 0) {
//            printf("Error in character.\n");
//            return 0;
//        }
//        result += (*(st + i - 1) - '0') * bit_mark;
//        bit_mark *= 10;
//    }
//    return 0;
//}
//int main(int argc, char* argv[]) {
//    char test[8];
//    printf("Enter a number of int: ");
//    scanf("%s", test);
//    printf("you input int is: %d\n", myatoi(test));
//    return 0;
//}

//void print_orig(char* st) {
//    printf("The original text is:\n%s", st);
//}
//void print_upper(char* st) {
//    printf("The upper case text is:\n");
//    while (*st != EOF && *st != '\0')
//        putchar(toupper(*st++));
//}
//void print_lower(char* st) {
//    printf("The lower case text is:\n");
//    while (*st != EOF && *st != '\0')
//        putchar(tolower(*st++));
//}
//int main(int argc, char* argv[]) {
//    char c;
//    if (argc < 2) c = 'p';
//    char c = argv[1][1];
//    char test[256];
//    printf("Enter a string to convert: ");
//    fgets(test, 256, stdin);
//    switch (c) {
//    case 'p':
//    case 'P': print_orig(test);
//        break;
//    case 'u':
//    case 'U': print_upper(test);
//        break;
//    case 'l':
//    case 'L': print_lower(test);
//        break;
//    }
//    return 0;
//}