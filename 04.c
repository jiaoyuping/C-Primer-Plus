//   µ⁄ 4 ’¬   ◊÷∑˚¥Æ∫Õ∏Ò ΩªØ ‰»Î/ ‰≥ˆ

#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<float.h>


//#define DENSITY 62.4
//int main() {
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);
//	printf("%s,What's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
//	printf("Also, your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}

//#define PRAISE "you are an extraordinary being."
//int main() {
//	char name[40];
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	return 0;
//}

//#define PRAISE "you are an extraordinary being."
//int main() {
//	char name[40];
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cell.\n", strlen(name), sizeof(name));
//	printf("The phrase of praise has %zd letters and occupies %zd memory cell.\n", strlen(PRAISE), sizeof(PRAISE));
//	return 0;
//}

//#define PI 3.1415926
//int main() {
//	float area, circum, radius;
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0 * PI * radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
//	return 0;
//}

//int main(void) {
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//}

//#define PI 3.1415926
//int main(void) {
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("The %d contestants ate %f berry pies.\n", number, pies);
//	printf("The value of pi is %f.\n", PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);
//}

//#define PAGES 959
//int main(void) {
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//}

//int main(void) {
//	const double rent = 3852.99;
//	printf("*%f*\n", rent);
//	printf("*%e*\n", rent);
//	printf("*%4.2f*\n", rent);
//	printf("*%3.1f*\n", rent);
//	printf("*%10.3f*\n", rent);
//	printf("*%10.3e*\n", rent);
//	printf("*%+4.2f*\n", rent);
//	printf("*%010.2f*\n", rent);
//}

//int main(void) {
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//}

//#define BLURB "Authentic imitation!"
//int main(void) {
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//}

//#define PAGES 336
//#define WORDS 65618
//int main(void) {
//	short num = PAGES;
//	short mnum = -PAGES;
//	printf("num as short and unsigned short:  %hd %hu\n", num, num);
//	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
//}

//int main(void) {              //¿¨ª¯≥Ã–Ú ªŸŒ“«‡¥∫ CNM
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//	printf("%d %d %d\n", sizeof(float), sizeof(double), sizeof(long));
//	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//}

//int main(void) {
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n", rv);
//}

//int main(void) {
//	printf("Here's one way to print a ");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//long string.\n");
//	printf("Here's the newest way to print a "
//		    "long string.\n");     //ANSI C
//}

//int main(void) {
//	int age;
//	float assert;
//	char pet[30];
//	printf("Enter your age, assert, and favorite pet.\n");
//	scanf("%d %f", &age, &assert);
//	scanf("%s", pet);
//	printf("%d $%0.2f %s", age, assert, pet);
//}

//int main(void) {
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//}

//int main(void) {
//	int n;
//	printf("Please enter three integers:\n");
//	scanf("%*d %*d %d", &n);
//	printf("The last integer was %d\n", n);
//}


      //4.7  ∏¥œ∞Ã‚
      //4.7  ∏¥œ∞Ã‚
      //4.7  ∏¥œ∞Ã‚
      //4.7  ∏¥œ∞Ã‚



//#define Q "His hamlet was funny without being vulgar."
//int main(void) {
//    printf("He sold the painting for $%2.2f.\n", 2.345e2);
//    printf("%c%c%c\n", 'H', 105, '\41');
//    printf("%s\nhas %d characters.\n", Q, strlen(Q));
//    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
//    printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));
//}

//#define B "booboo"
//#define X 10
//int main() {
//    int age, xp;
//    char name[40];
//    printf("Please enter your first name: ");
//    scanf("%s", name);
//    printf("All right, %s, what's your age?\n", name);
//    scanf("%d", &age);
//    xp = age + X;
//    printf("That's a %s! You must be at least %d.\n", B, xp);
//    return 0;
//}

//#define BOOK "War and Peace"
//int main(void) {
//    float cost = 12.99;
//    float percent = 80.0;
//    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.f%% of list.\n", BOOK, cost, percent);
//    printf("The double type is %zd bytes.\n", sizeof(double));
//}


       //4.8   ±‡≥Ã¡∑œ∞
       //4.8   ±‡≥Ã¡∑œ∞
       //4.8   ±‡≥Ã¡∑œ∞
       //4.8   ±‡≥Ã¡∑œ∞


//int main(void) {
//    char name[40];
//    char surname[40];
//    printf("Please input your first name:");
//    scanf("%s", name);
//    printf("Please input your last name:");
//    scanf("%s", surname);
//    printf("Hello, %s %s.", name, surname);
//}

//int main(void) {
//    char name[40];
//    printf("Please enter your name:");
//    scanf("%s", name);
//    int width = strlen(name);
//    printf("\"%s\"\n", name);
//    printf("\"%20s\"\n", name);
//    printf("\"%-20s\"\n", name);
//    printf("%*s", (width + 3), name);
//}

//int main(void) {
//    float num = 21.29;
//    printf("The input is %.1f or %.1e\n", num,num);
//    printf("The input is %+0.3f or %.3E\n", num,num);
//}

//int main(void) {
//    float tall = 6.208;
//    char name[40] = "Dabney";
//    printf("%s, you are %.3f feet tall", name, tall);
//}

//int main(void) {
//    float speed, size, time;
//    printf("Please input the net speed(megabits per second):");
//    scanf("%f", &speed);
//    printf("Please input the file size(megabits):");
//    scanf("%f", &size);
//    time = size * 8.0 / speed;
//    printf("At %.2f megabits per second, a file of %.2f megabits download in %.2f second.", speed, size, time);
//}
//
//int main(void) {
//    char name[40], surname[40];
//    printf("Please input your name: ");
//    scanf("%s", name);
//    printf("Please input your surname: ");
//    scanf("%s", surname);
//    printf("%s %s\n", name, surname);
//    printf("%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
//    printf("%s %s\n", name, surname);
//    printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
//}

//#include<float.h>
//int main(void) {
//    double d_third = 1.0 / 3.0;
//    float f_third = 1.0 / 3.0;
//    printf("float of one third(6) = %.6f\n", f_third);
//    printf("float of one third(12) = %.12f\n", f_third);
//    printf("float of one third(16) = %.16f\n", f_third);
//    printf("double of one third(6) = %.6f\n", d_third);
//    printf("double of one third(12) = %.12f\n", d_third);
//    printf("double of one third(16) = %.16f\n", d_third);
//    printf("FLT_DIG in float.h is %d\n", FLT_DIG);
//    printf("DBL_DIG in float.h is %d\n", DBL_DIG);
//}

//#define GALLON_TO_LITRE 3.785
//#define MILE_TO_KM 1.609
//int main(void) {
//    float rang, oil;
//    printf("Please input the rang you traveled(in mile): ");
//    scanf("%f", &rang);
//    printf("Please input the oil you spend(in gallon): ");
//    scanf("%f", &oil);
//    printf("In USA, your oil wear is %.1f M/G\n", rang / oil);
//    printf("In Europe, your oil wear is %.1f L/100KM\n", (oil * GALLON_TO_LITRE) / (rang * MILE_TO_KM));
//}