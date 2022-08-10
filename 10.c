//        第 10 章    数组和指针

#include<stdio.h>


//int main() {
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int index = 0; index < 12; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//	return 0;
//}

//int main() {
//	int no_data[4];
//	int i;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < 4; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	return 0;
//}

//int main() {
//	int some_data[4] = { 1492,1066 };
//	int i;
//	printf("%2s%14s\n", "i", "some_data[i]");
//	for (i = 0; i < 4; i++)
//		printf("%2d%14d\n", i, some_data[i]);
//	return 0;
//}

//int main() {
//	const int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int index = 0; index < sizeof(days) / sizeof(days[0]); index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//	return 0;
//}

//int main() {
//	int days[12] = { 31,28,[4] = 31,30,31,[1] = 29 };
//	for (int index = 0; index < 12; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//	return 0;
//}

//int main() {
//	int value1 = 44;
//	int arr[4];
//	int value2 = 88, i;
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= 4; i++)
//		arr[i] = 2 * i + 1;
//	for (i = -1; i < 7; i++)
//		printf("%2d %d\n", i, arr[i]);
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	printf("address of arr[-1]: %p\n", &arr[-1]);
//	printf("address of arr[4]: %p\n", &arr[4]);
//	printf("address of value1: %p\n", &value1);
//	printf("address of value2: %p\n", &value2);
//	return 0;
//}

//int main() {
//	const float rain[5][12] = {
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2} };
//	int year, month;
//	float subtot, total;
//	printf(" YEAR         RAINFALL (inches)\n");
//	for (year = 0, total = 0; year < 5; year++) {
//		for (month = 0, subtot = 0; month < 12; month++)
//			subtot += rain[year][month];
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / 5);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
//	for (month = 0; month < 12; month++) {
//		for (year = 0, subtot = 0; year < 5; year++)
//			subtot += rain[year][month];
//		printf("%4.1f ", subtot / 5);
//	}
//	printf("\n");
//	return 0;
//}

//#define SIZE 4
//int main() {
//	short dates[SIZE];
//	short* pti;
//	short index;
//	double bills[SIZE];
//	double* ptf;
//	pti = dates;     // 把数组地址赋给指针
//	ptf = bills;
//	printf("%23s %10s\n", "short", "double");
//	for (index = 0; index < SIZE; index++)
//		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
//	return 0;
//}

//int main() {
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int index = 0; index < 12; index++)
//		printf("Month %2d has %2d days.\n", index + 1, *(days + index));
//	return 0;
//}

//int sum(int ar[], int n) {
//	int i, total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	printf("The size of ar is %zd bytes.\n", sizeof(ar));
//	return total;}
//#define SIZE 10
//int main() {
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer = sum(marbles, SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
//	return 0;
//}

//int sump(int* start, int* end) {
//	int total = 0;
//	while (start < end) {
//		total += *start;    // 把数组元素的值加起来
//		start++;            // 让指针指向下一个元素
//	}
//	return total;}
//#define SIZE 10
//int main() {
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer = sump(marbles, marbles + SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	return 0;
//}

//int main() {
//	int data[2] = { 100,200 };
//	int moredata[2] = { 300,400 };
//	int* p1, * p2, * p3;
//	p1 = p2 = data;
//	p3 = moredata;
//	printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);
//	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);
//	return 0;
//}

//int main() {
//	int urn[5] = { 100,200,300,400,500 };
//	int* ptr1, * ptr2, * ptr3;
//	ptr1 = urn;             // 把一个地址赋给指针
//	ptr2 = &urn[2];         // 把一个地址赋给指针 解引用指针，以获得指针的地址
//	printf("pointer value, dereferenced pointer, pointer address:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr3 = ptr1 + 4;  // 指针加法
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
//	ptr1++;      // 递增指针
//	printf("\nvalues after ptr1++:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr2--;      // 递减指针
//	printf("\nvalues after --ptr2:\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//	--ptr1;  ++ptr2;   // 恢复为初始值
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	// 一个指针减去另一个指针
//	printf("\nsubstracting one pointer from another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
//	// 一个指针减去一个整数
//	printf("\nsubstracting an int from pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
//	return 0;
//}

//void show_array(const double ar[], int n) {
//	for (int i = 0; i < n; i++)
//		printf("%8.3f ", ar[i]);
//	putchar('\n');
//}
//void mult_array(double ar[], int n, double mult) {
//	for (int i = 0; i < n; i++)
//		ar[i] *= mult;
//}
//int main() {
//	double dip[5] = { 20.0,17.66,8.2,15.3,22.22 };
//	printf("The original dip array:\n");
//	show_array(dip, 5);
//	mult_array(dip, 5, 2.5);
//	printf("The dip array after calling mult_array():\n");
//	show_array(dip, 5);
//	return 0;
//}

//int main() {
//	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
//	printf("          zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
//	printf("       zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
//	printf("         *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);
//	printf("    zippo[0][0] = %d\n", zippo[0][0]);
//	printf("      *zippo[0] = %d\n", *zippo[0]);
//	printf("        **zippo = %d\n", **zippo);
//	printf("    zippo[2][1] = %d\n", zippo[2][1]);
//	printf("*(*(zippo+2)+1) = %d\n", *(*(zippo + 2) + 1));
//	return 0;
//}

//int main() {
//	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
//	int(*pz)[2];
//	pz = zippo;
//	printf("          pz = %p,    pz + 1 = %p\n", pz, pz + 1);
//	printf("       pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
//	printf("         *pz = %p,   *pz + 1 = %p\n", *pz, *pz + 1);
//	printf("    pz[0][0] = %d\n", pz[0][0]);
//	printf("      *pz[0] = %d\n", *pz[0]);
//	printf("        **pz = %d\n", **pz);
//	printf("    pz[2][1] = %d\n", pz[2][1]);
//	printf("*(*(pz+2)+1) = %d\n", *(*(pz + 2) + 1));
//	return 0;
//}


//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows) {
//	int c, r, tot;
//	for (r = 0; r < rows; r++) {
//		tot = 0;
//		for (c = 0; c < COLS; c++)
//			tot += ar[r][c];
//		printf("row %d: sum = %d\n", r, tot);
//	}
//}
//void sum_cols(int ar[][COLS], int rows) {
//	int c, r, tot;
//	for (c = 0; c < COLS; c++) {
//		tot = 0;
//		for (r = 0; r < rows; r++)
//			tot += ar[r][c];
//		printf("col %d: sum = %d\n", c, tot);
//	}
//}
//int sum2d(int(*ar)[COLS], int rows) {
//	int c, r, tot = 0;
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < COLS; c++)
//			tot += ar[r][c];
//	return tot;
//}
//int main() {
//	int junk[ROWS][COLS] = { {2,4,6,8},{3,5,7,9},{12,10,8,6} };
//	sum_rows(junk, ROWS);
//	sum_cols(junk, ROWS);
//	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
//	return 0;
//}

//#define ROWS 3
//#define COLS 4
//int sum2d(int rows, int cols, int ar[rows][cols]) {
//	int r, c, tot = 0;
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < COLS; c++)
//			tot += ar[r][c];
//	return tot;
//}
//int main() {
//	int i, j;
//	int rs = 3, cs = 10;
//	int junk[ROWS][COLS] = { {2,4,6,8},{3,5,7,9},{12,10,8,6} };
//	int morejunk[ROWS - 1][COLS + 2] = { {20,30,40,50,60,70},{5,6,7,8,9,10} };
//	int varr[rs][cs];
//	for (i = 0; i < rs; i++)
//		for (j = 0; j < cs; j++)
//			varr[i][j] = i * j + j;
//	printf("3x4 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
//	printf("2x6 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));
//	printf("3x10 VLA\n");
//	printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));
//	return 0;
//}

//int sum2d(const int ar[][4], int rows) {
//	int r, c, tot = 0;
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < 4; c++)
//			tot += ar[r][c];
//	return tot;
//}
//int sum(const int ar[], int n) {
//	int i, total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	return total;
//}
//int main() {
//	int total1, total2, total3;
//	int* pt1;
//	int(*pt2)[4];
//	pt1 = (int[2]){ 10,20 };
//	pt2 = (int[2][4]){ {1,2,3,-9},{4,5,6,-8} };
//	total1 = sum(pt1, 2);
//	total2 = sum2d(pt2, 2);
//	total3 = sum((int[]) { 4, 4, 4, 5, 5, 5 }, 6);
//	printf("total1 = %d\n", total1);
//	printf("total2 = %d\n", total2);
//	printf("total3 = %d\n", total3);
//	return 0;
//}




              // 复习题
              // 复习题
              // 复习题
              // 复习题



//1.  8 8; 4 4; 0 0; 2 2

//2.  4

//3.  &ref[0];   ref+1 = &ref[1];   无效

//4.  a.*ptr = 12;  *(ptr+2) = 16    b.*ptr = 12;  *(ptr+2) = 14

//5.  a.**ptr = 12;   **(ptr+1) = 16      b.**ptr = 12;   **(ptr+1) = 14

//6.  a.&grid[22][56]   b.grid[22] &grid[22][0]   c.(int*)grid grid[0] &grid[0][0]

//7.  a.int digits[10];  b.float rates[6];  c.int mat[3][5];  d.char *psa[20];  e.char (*pstr)[20]

//8.  a.int arr[6] = { 1,2,4,8,16,32 };  b.arr[2];  c.int arr[100] = { [99]=-1 };  d.int arr[100] = { [5]=101,[10]=101,101,101,101 };

//9.  0-9

//10. a.true; b.false; c.false; d.false; e.true; f.false; g.false; h.true

//11. int arr[800][600];

//12. a.void show(double ar[], int n);  b.void show(short ar[][30], int n);  c.void show(long ar[][10][15], int n);

//13. a.show((double []){ 8,3,9,2 }, 4);   b.show2((double [][3]){ {8,3,9},{5,4,1} }, 2);




              // 编程练习
              // 编程练习
              // 编程练习
              // 编程练习


//1.  加上 const float(*ptr)[12] = rain;    改为 subtot += *(*(ptr + year) + month);

//void copy_arr(double target1[], double source[], int n) {
//    for (int i = 0; i < n; i++)
//        target1[i] = source[i];
//}
//void copy_ptr(double* target2, double* source, int n) {
//    for (int i = 0; i < n; i++)
//        *(target2 + i) = *(source + i);
//}
//void copy_ptrs(double* target3, double* start, double* end) {
//    while (start < end)
//        *target3++ = *start++;
//}
//void print(double* target) {
//    for (int i = 0; i < 5; i++)
//        printf(" %g ", *(target + i));
//    printf("\n");
//}
//int main() {
//    double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//    double target1[5], target2[5], target3[5];
//    copy_arr(target1, source, 5);
//    copy_ptr(target2, source, 5);
//    copy_ptrs(target3, source, source + 5);
//    print(target1);
//    print(target2);
//    print(target3);
//    return 0;
//}

//int big(int arr[], int n) {
//    int i, big = 0;
//    for (i = 0; i < n; i++)
//        if (arr[i] > big)
//            big = arr[i];
//    return big;
//}

//int big(double arr[], int n) {
//    int i, sign = 0;
//    double big = 0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] > big) {
//            big = arr[i];
//            sign = i;
//        }
//    }
//    return sign;
//}

//double subtract(double arr[], int n) {
//    double big = 0, small = arr[0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > big)
//            big = arr[i];
//        if (arr[i] < small)
//            small = arr[i];
//    }
//    return big - small;
//}

//void turnover_sort(double* start, double* end) {
//    while (start < end) {
//        double temp = *start;
//        *start = *end;
//        *end = temp;
//        start++; end--;
//    }
//}

//void copy_ptr(double** target, double** source, int n) {
//    for (int i = 0; i < n; i++)
//        *(*target + i) = *(*source + i);
//}
//int main() {
//    double source[3][4] = { {1.1,4.4,7.7,6.6},{2.2,5.5,8.8,7.7},{3.3,6.6,9.9,2.2} };
//    double target[3][4];
//    double* t = target, * s = source;
//    copy_ptr(&t, &s, 12);
//    for (int i = 0; i < 12; i++)
//        printf(" %g ", *(*target + i));
//    return 0;
//}

//void copy_ptrs(double* target, double* start, double* end) {
//    while (start < end)
//        *target++ = *start++;
//}
//int main() {
//    double source[7] = { 6.55,4.32,6.12,7.15,2.01,3.14,5.23 };
//    double target[3];
//    copy_ptrs(target, source + 2, source + 5);
//    for (int i = 0; i < 3; i++)
//        printf(" %.2lf ", target[i]);
//    return 0;
//}

//void copy(int n, int m, double t[n][m], const double s[n][m]) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            t[i][j] = s[i][j];
//}
//void show(int n, int m, const double ar[n][m]) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++)
//            printf("%g ", ar[i][j]);
//        putchar('\n');
//    }
//}
//int main() {
//    int n = 3, m = 5;
//    double source[][5] = { {23.32,14.25,36.21,22.01,18.37},{17.34,20.34,13.41,26.18,24.09},{21.22,11.11,17.16,12.26,25.61} };
//    double target[n][m];
//    copy(n, m, target, source);
//    show(n, m, target);
//    return 0;
//}

//void add(double a1[], double a2[], double a3[], int n) {
//    for (int i = 0; i < n; i++)
//        a3[i] = a1[i] + a2[i];
//}
//#define hight 4
//int main() {
//    double array1[hight] = { 2,4,5,8 }, array2[hight] = { 1,0,4,6 }, array3[hight];
//    add(array1, array2, array3, hight);
//    return 0;
//}

//void multiple(int a[][5], int n) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < 5; j++)
//            a[i][j] *= 2;
//}
//void show_array(int a[][5], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < 5; j++)
//            printf(" %2d ", a[i][j]);
//        putchar('\n');
//    }
//}
//int main() {
//    int arr[3][5] = { {2,4,5,8,10},{1,0,4,6,2},{3,4,9,14,12} };
//    show_array(arr, 3);
//    multiple(arr, 3);
//    show_array(arr, 3);
//    return 0;
//}

//void year_average(const float t[][12]) {
//	int year, month;
//	float subtot, total;
//	printf(" YEAR         RAINFALL (inches)\n");
//	for (year = 0, total = 0; year < 5; year++) {
//		for (month = 0, subtot = 0; month < 12; month++)
//			subtot += t[year][month];
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / 5);
//}
//void month_average(const float t[][12]) {
//	int year, month;
//	float subtot = 0;
//	printf("MONTHLY AVERAGES:\n\n");
//	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
//	for (month = 0; month < 12; month++) {
//		for (year = 0, subtot = 0; year < 5; year++)
//			subtot += t[year][month];
//		printf("%4.1f ", subtot / 5);
//	}
//}
//int main() {
//	const float rain[5][12] = {
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2} };
//	year_average(rain);
//	month_average(rain);
//	printf("\n");
//	return 0;
//}


//#define ROWS 3
//#define COLS 5
//void enter_number(double a[][COLS], int n, int m) {
//    for (int i = 0; i < n; i++) {
//        printf("Please enter five double number: \n");
//        for (int j = 0; j < m; j++)
//            scanf("%lf", &a[i][j]);
//    }
//}
//double unit_average(const double a[][COLS], int n) {
//    double sum = 0;
//    for (int i = 0; i < COLS; i++)
//        sum += a[n][i];
//    return sum / COLS;
//}
//double all_average(const double a[][COLS], int n, int m) {
//    double sum = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            sum += a[i][j];
//    return sum / (n * m);
//}
//double large(const double a[][COLS], int n, int m) {
//    double big = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (a[i][j] > big)
//                big = a[i][j];
//    return big;
//}
//void show_all(const double source[][COLS], int n, int m) {
//    printf("\nThe two-dimensional array that you input is:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++)
//            printf(" %2g ", source[i][j]);
//        putchar('\n');
//    }
//    printf("\n");
//    for (int i = 0; i < 3; i++)
//        printf("The average of row %d is %g.\n", i + 1, unit_average(source,i));
//    printf("\nThe average of all the numbers is %g.\n", all_average(source, ROWS, COLS));
//    printf("\nThe highest of all numbers is %g.\n", large(source, ROWS, COLS));
//}
//int main() {
//    //double source[ROWS][COLS] = { {2,4,5,8,10},{1,0,4,6,2},{3,4,9,14,12} };   //测试用
//    double source[ROWS][COLS];
//    enter_number(source, ROWS, COLS);
//    show_all(source, ROWS, COLS);
//    return 0;
//}

//void enter_number(int n, int m, double a[n][m]) {
//    for (int i = 0; i < n; i++) {
//        printf("Please enter five double number: \n");
//        for (int j = 0; j < m; j++)
//            scanf("%lf", &a[i][j]);
//    }
//}
//double unit_average(int n, int m, const double a[n][m]) {
//    double sum = 0;
//    for (int i = 0; i < m; i++)
//        sum += a[n][i];
//    return sum / m;
//}
//double all_average(int n, int m, const double a[n][m]) {
//    double sum = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            sum += a[i][j];
//    return sum / (n * m);
//}
//double large(int n, int m, const double a[n][m]) {
//    double big = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (a[i][j] > big)
//                big = a[i][j];
//    return big;
//}
//void show_all(int n, int m, const double arr[n][m]) {
//    printf("\nThe two-dimensional array that you input is:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++)
//            printf(" %2g ", arr[i][j]);
//        putchar('\n');
//    }
//    printf("\n");
//    for (int i = 0; i < 3; i++)
//        printf("The average of row %d is %g.\n", i + 1, unit_average(i, m, arr));
//    printf("\nThe average of all the numbers is %g.\n", all_average(n, m, arr));
//    printf("\nThe highest of all numbers is %g.\n", large(n, m, arr));
//}
//int main() {
//    const int rows = 3;
//    const int cols = 5;
//    double source[rows][cols];
//    enter_number(rows, cols, source);
//    show_all(rows, cols, source);
//    return 0;
//}