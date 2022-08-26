//            第 13 章    文件输入/输出

#include"primer.h"

//int main(int argc, char* argv[]) {
//	int ch;
//	FILE* fp;
//	unsigned long count = 0;
//	if (argc != 2) {
//		printf("Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if ((fp = fopen(argv[1], "r")) == NULL) {
//		printf("Can't open %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF) {
//		putc(ch, stdout); // 与putchar(ch); 相同
//		count++;		
//	}
//	fclose(fp);
//	printf("File %s has %lu characters\n", argv[1], count);
//	return 0;
//}

//#define LEN 40
//int main(int argc, char* argv[]) {
//	FILE* in, * out;   // 声明两个指向 FILE 的指针
//	int ch, count = 0;
//	char name[LEN];    // 存储输出文件名
//	if (argc < 2) {    // 检查命令行参数
//		fprintf(stderr, "Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if ((in = fopen(argv[1], "r")) == NULL) {      // 设置输入
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}    // 设置输出
//	strncpy(name, argv[1], LEN - 5);  // 拷贝文件名
//	name[LEN - 5] = '\0';
//	strcat(name, ".red");   // 在文件名后面添加 .red
//	if ((out = fopen(name, "w")) == NULL) {     // 以写模式打开文件
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//	while ((ch = getc(in)) != EOF)  // 拷贝数据
//		if (count++ % 3 == 0)
//			putc(ch, out);  // 打印3个字符中的第1个字符
//	if (fclose(in) != 0 || fclose(out) != 0)   // 收尾工作
//		fprintf(stderr, "Error in closing files\n");
//	return 0;
//}

//#define MAX 41
//int main() {
//	FILE* fp;
//	char words[MAX];
//	if ((fp = fopen("wordy", "a+")) == NULL) {
//		fprintf(stdout, "Can't open \"wordy\" file.\n");
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter words to add to the file; press the #");
//	puts("key at the beginning of a line to terminate.");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//		fprintf(fp, "%s\n", words);
//	puts("File contents:");
//	rewind(fp);      // 返回文件开始处
//	while (fscanf(fp, "%s", words) == 1)
//		puts(words);
//	puts("Done!");
//	if (fclose(fp) != 0)
//		fprintf(stderr, "Error closing file\n");
//	return 0;
//}

//#define CNTL_Z '\032'    // DOS 文本文件中的文件结尾标记
//#define SLEN 81
//int main() {
//	char file[SLEN];
//	char ch;
//	FILE* fp;
//	long count, last;
//	puts("Enter the name of the file to be processed:");
//	scanf("%80s", file);
//	if ((fp = fopen(file, "rb")) == NULL) {       // 只读模式
//		printf("reverse can't open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//	fseek(fp, 0L, SEEK_END);
//	last = ftell(fp);
//	for (count = 1L; count <= last; count++) {
//		fseek(fp, -count, SEEK_END);    // 回退
//		ch = getc(fp);
//		if (ch != CNTL_Z && ch != '\r')   // MS-DOS 文件
//			putchar(ch);
//	}
//	putchar('\n');
//	fclose(fp);
//	return 0;
//}

//#define BUFSIZE 4096
//#define SLEN 81
//void append(FILE* source, FILE* dest) {
//	size_t bytes;
//	static char temp[BUFSIZE];     // 只分配一次
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//		fwrite(temp, sizeof(char), bytes, dest);
//}
//char* s_gets(char* st, int n) {
//	char* ret_val, * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val) {
//		find = strchr(st, '\n');     // 查找换行符
//		if (find)                    // 如果地址不是 NULL
//			*find = '\0';            // 在此处放置一个空字符
//		else
//			while (getchar() != '\n')  continue;
//	}
//	return ret_val;
//}
//int main() {
//	FILE* fa, * fs;     // fa 指向目标文件，fs 指向源文件
//	int files = 0;         // 附加的文件数量
//	char file_app[SLEN], file_src[SLEN];    // 目标文件名，源文件名
//	int ch;
//	puts("Enter name of destination file:");
//	s_gets(file_app, SLEN);
//	if ((fa = fopen(file_app, "a+")) == NULL) {
//		fprintf(stderr, "Can't open %s\n", file_app);
//		exit(EXIT_FAILURE);
//	}
//	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
//		fputs("Can't create output buffer\n", stderr);
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter name of first source file (empty line to quit):");
//	while (s_gets(file_src, SLEN) && file_src[0] != '\0') {
//		if (strcmp(file_src, file_app) == 0)
//			fputs("Can't append file to itself\n", stderr);
//		else if ((fs = fopen(file_src, "r")) == NULL)
//			fprintf(stderr, "Can't open %s\n", file_src);
//		else {
//			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
//				fputs("Can't create input buffer\n", stderr);
//				continue;
//			}
//			append(fs, fa);
//			if (ferror(fs) != 0)
//				fprintf(stderr, "Error in reading file %s.\n", file_src);
//			if (ferror(fa) != 0)
//				fprintf(stderr, "Error in writing file %s.\n", file_app);
//			fclose(fs);
//			files++;
//			printf("File %s appended.\n", file_src);
//			puts("Next file (empty line to quit):");
//		}
//	}
//	printf("Done appending. %d files appended.\n", files);
//	rewind(fa);
//	printf("%s contents:\n", file_app);
//	while ((ch = getc(fa)) != EOF)  putchar(ch);
//	puts("Done displaying.");
//	fclose(fa);
//	return 0;
//}

//#define ARSIZE 1000
//int main() {
//	double numbers[ARSIZE], value;
//	const char* file = "numbers.dat";
//	int i;
//	long pos;
//	FILE* iofile;
//	for (i = 0; i < ARSIZE; i++)    // 创建一组 double 类型的值
//		numbers[i] = 100.0 * i + 1.0 / (i + 1);
//	if ((iofile = fopen(file, "wb")) == NULL) {      // 尝试打开文件
//		fprintf(stderr, "Could not open %s for output.\n", file);
//		exit(EXIT_FAILURE);
//	}  // 以二进制格式把数组写入文件
//	fwrite(numbers, sizeof(double), ARSIZE, iofile);
//	fclose(iofile);
//	if ((iofile = fopen(file, "rb")) == NULL) {
//		fprintf(stderr, "Could not open %s for random access.\n", file);
//		exit(EXIT_FAILURE);
//	}  // 从文件中读取选定的内容
//	printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
//	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE) {
//		pos = (long)i * sizeof(double);    // 计算偏移量
//		fseek(iofile, pos, SEEK_SET);     // 定位到此处
//		fread(&value, sizeof(double), 1, iofile);
//		printf("The value there is %f.\n", value);
//		printf("Next index (out of range to quit):\n");
//	}   // 完成
//	fclose(iofile);
//	puts("Bye!");
//	return 0;
//}



                   // 复习题
                   // 复习题
                   // 复习题
                   // 复习题



//1.  缺少头文件；fp不是文件指针；没有指定打开形式就打开文件；fputs函数参数调用反了；文件关闭错误；

//2.  程序首先通过命令行参数，以第一个参数作为文件名，以只读方式打开该文件。
//    通过while循环读取该文件的所有字符，如果是数字，则打印字符，直到文件结束。

//3.  a.ch=getc(fp1);    b.fprintf(fp2,"%c\n",ch);   c.putc(ch,fp2);   d.fclose(fp1);

//int main(int argc, char* argv[]) {
//    FILE* fp;
//    double n, sum = 0.0;
//    int num = 0;
//    if (argc == 1) {
//        fp = stdin;
//        printf("Enter the number (EOF to end input):\n");
//    } else if (argc == 2) {
//        if ((fp = fopen(argv[1], "r")) == NULL) {
//            printf("Can't open %s.\n", argv[1]);
//            exit(EXIT_FAILURE);
//        }
//    } else {
//        printf("Usage: %s filename\n", argv[0]);
//        exit(EXIT_FAILURE);
//    }
//    while (!feof(fp) && (fscanf(fp, "%lf", &n) == 1)) {
//        num++;  sum += n;
//    }
//    if (num > 0)  printf("Average of data is %lf\n", sum / num);
//    else  printf("There is no number.\n");
//    return 0;
//}

//int main(int argc, char* argv[]) {
//    FILE* fp;
//    char ch, str[256];
//    if (argc != 3) {
//        fprintf(stderr, "Usage: %s filename\n", argv[0]);
//        exit(EXIT_FAILURE);
//    } else {
//        if (strlen(argv[1]) != 1) {
//            printf("The parameter should be a char.\n");
//            exit(EXIT_FAILURE);
//        }
//        if ((fp = fopen(argv[2], "r")) == NULL) {
//            fprintf(stderr, "Can't open file %s\n", argv[2]);
//            exit(EXIT_FAILURE);
//        }
//    }
//    ch = argv[1][0];
//    while (fgets(str, 256, fp) != NULL)
//        if (strchr(str, ch))
//            printf("Found %c in line: %s", ch, str);
//    fclose(fp);
//    return 0;
//}

//6.  所有文件在计算机呢都是以二进制形式存储的。如果文件使用二进制编码(如ASCII编码、Unicoude编码)的字符，那么这些文件就是文本文件；
//    如果这些二进制表示其他形式的编码(如机器语言编码、图像、音乐)，那么这些文件就是二进制文件。这两种文件格式对系统的依赖性不同：
//    二进制文件和文本文件的区别包括在读写流时执行的转换。二进制文件直接读取文件的每个字节，不转换成字符；针对不同系统平台的差异和
//    字符编码差异，系统可能会对文本文件做一些字符转换。

//7.  a.fprintf()按照字符形式写数据，因此会把8238201当作7个独立的字符数据独立储存，占7字节的储存空间；fwrite()按照二进制形式读写数据，
//    因此在写入数据时会把8238201当作一个4字节的整型数据进行写入。  b.没有区别，都将其视为一个单字节的二进制编码。

//8.  第1条和第2条语句实现的功能没有区别，fprintf()第一个参数是输出到哪里去，后面参数和printf()一样，
//    stdout是显示器，stderr是标准错误，通常系统将stderr定向到与stdout相同位置，但标准错误不受标准输出重定向的影响。

//9.  "a+""r+""w+"都是可读写文件的，"a+""r+"在文件末尾续写，"w+"会清空文件内容再写入。"a+""w+"如果文件不存在，则创建文件。



                   // 编程练习
                   // 编程练习
                   // 编程练习
                   // 编程练习



//int main() {
//	char file[256], ch;
//	FILE* fp;
//	unsigned long count = 0;
//	printf("Input the filename:");
//	scanf("%s", file);
//	if ((fp = fopen(file, "r")) == NULL) {
//		printf("Can't open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF) {
//		putc(ch, stdout); // 与putchar(ch); 相同
//		count++;		
//	}
//	fclose(fp);
//	printf("File %s has %lu characters\n", file, count);
//	return 0;
//}

//#define BUFSIZE 512
//int main(int argc, char* argv[]) {
//    FILE* fs, * fd;
//    char temp[BUFSIZE], ch;
//    size_t bytes;
//    if (argc != 3) {
//        fprintf(stderr, "Usage: %s filename\n", argv[0]);
//        exit(EXIT_FAILURE);
//    }
//    if ((fs = fopen(argv[1], "rb")) == NULL || (fd = fopen(argv[2], "wb+")) == NULL) {
//        fprintf(stderr, "Can't open file.\n");
//        exit(EXIT_FAILURE);
//    }
//    if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0 || setvbuf(fd, NULL, _IOFBF, BUFSIZE) != 0) {
//        fprintf(stderr, "Can't create buffer.\n");
//        exit(EXIT_FAILURE);
//    }
//    while ((bytes = fread(temp, sizeof(char), BUFSIZE, fs)) > 0)
//        fwrite(temp, sizeof(char), bytes, fd);
//    if (ferror(fs) != 0 || ferror(fd) != 0)
//        fprintf(stderr, "Error in file.\n");
//    rewind(fd);
//    while ((ch = getc(fd)) != EOF)
//        putchar(ch);
//    fclose(fs);
//    fclose(fd);
//    return 0;
//}

//int main() {
//    FILE* fp;
//    char file_name[32], temp[512], ch;
//    int i = 0;
//    printf("Please enter a text file name: ");
//    scanf("%s", file_name);
//    if ((fp = fopen(file_name, "r")) == NULL) {
//        fprintf(stderr, "Can't open the file: %s", file_name);
//        exit(EXIT_FAILURE);
//    }
//    while ((ch = getc(fp)) != EOF)
//        temp[i++] = toupper(ch);
//    temp[i] = '\0';
//    fclose(fp);
//    fp = fopen(file_name, "w+");
//    fprintf(fp, "%s", temp);
//    rewind(fp);
//    printf("%s content:\n", file_name);
//    while ((ch = getc(fp)) != EOF)
//        putchar(ch);
//    fclose(fp);
//    return 0;
//}

//int main(int argc, char* argv[]) {
//    FILE* fp;
//    char ch;
//    if (argc < 2) {
//        fprintf(stderr, "Don't have file.\n");
//        exit(EXIT_FAILURE);
//    }
//    for (int i = 1; i < argc; i++) {
//        if ((fp = fopen(argv[i], "r")) == NULL)
//            printf("Can't open the file: %s\n", argv[i]);
//        else {
//            printf("      Open the file: %s\n", argv[i]);
//            while ((ch = getc(fp)) != EOF)
//                putchar(ch);
//            printf("\n");
//        }
//        fclose(fp);
//    }
//    return 0;
//}

//#define BUFSIZE 4096
//void append(FILE* source, FILE* dest) {
//	size_t bytes;
//	static char temp[BUFSIZE];     // 只分配一次
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//		fwrite(temp, sizeof(char), bytes, dest);
//}
//int main(int argc, char* argv[]) {
//	FILE* fa, * fs;     // fa 指向目标文件，fs 指向源文件
//	int files = 1;         // 附加的文件数量
//	char ch;
//	if (argc < 3) {
//		fprintf(stderr, "Error, at least two file names should be entered\n");
//		exit(EXIT_FAILURE);
//	}
//	if ((fa = fopen(argv[1], "a+")) == NULL) {
//		fprintf(stderr, "Can't open %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
//		fputs("Can't create output buffer\n", stderr);
//		exit(EXIT_FAILURE);
//	}
//	while (++files < argc) {
//		if (strcmp(argv[1], argv[files]) == 0)
//			fputs("Can't append file to itself\n", stderr);
//		else if ((fs = fopen(argv[files], "r")) == NULL)
//			fprintf(stderr, "Can't open %s\n", argv[files]);
//		else {
//			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
//				fputs("Can't create input buffer\n", stderr);
//				continue;
//			}
//			append(fs, fa);
//			if (ferror(fs) != 0)
//				fprintf(stderr, "Error in reading file %s.\n", argv[files]);
//			if (ferror(fa) != 0)
//				fprintf(stderr, "Error in writing file %s.\n", argv[1]);
//			fclose(fs);
//			printf("File %s appended.\n", argv[files]);
//		}
//	}
//	printf("Done appending. %d files appended.\n", files - 2);
//	rewind(fa);
//	printf("%s contents:\n", argv[1]);
//	while ((ch = getc(fa)) != EOF)  putchar(ch);
//	puts("Done displaying.");
//	fclose(fa);
//	return 0;
//}

//#define LEN 40
//int main() {
//	FILE* in, * out;   // 声明两个指向 FILE 的指针
//	int ch, count = 0;
//	char in_name[LEN], out_name[LEN];    // 存储读取、写入文件名
//	puts("Enter name of source file: ");
//	scanf("%s", in_name);
//	if ((in = fopen(in_name, "r")) == NULL) {      // 设置输入
//		fprintf(stderr, "Can't open the file \"%s\"\n", in_name);
//		exit(EXIT_FAILURE);
//	}    // 设置输出
//	puts("Enter name of destination file: ");
//	scanf("%s", out_name);
//	if ((out = fopen(out_name, "w")) == NULL) {     // 以写模式打开文件
//		fprintf(stderr, "Can't open the file \"%s\"\n", out_name);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(in)) != EOF)  // 拷贝数据
//		if (count++ % 3 == 0)
//			putc(ch, out);  // 打印3个字符中的第1个字符
//	if (fclose(in) != 0 || fclose(out) != 0)   // 收尾工作
//		fprintf(stderr, "Error in closing files\n");
//	return 0;
//}

//int main(int argc, char* argv[]) {
//    FILE* f1, * f2;
//    char ch1 = ' ', ch2 = ' ';
//	if (argc < 3) {
//		fprintf(stderr, "Error, at least two file names should be entered\n");
//		exit(EXIT_FAILURE);
//	}
//    if ((f1 = fopen(argv[1], "r")) == NULL || (f2 = fopen(argv[2], "r")) == NULL) {
//		fprintf(stderr, "Can't open file.\n");
//		exit(EXIT_FAILURE);
//	}
//    do {
//        while (ch1 != EOF && (ch1 = getc(f1))) {
//            if (ch1 == '\n' && ch2 != EOF) {
//                putchar(' ');
//                break;
//            } else
//                putchar(ch1);
//        }
//        while (ch2 != EOF && (ch2 = getc(f2))) {
//            putchar(ch2);
//            if (ch1 != EOF && ch2 == '\n')
//                break;
//        }
//    } while (ch1 != EOF || ch2 != EOF);
//    if (fclose(f1) != 0 || fclose(f2) != 0)
//        printf("File closing error\n");
//    return 0;
//}

//int main(int argc, char* argv[]) {
//    FILE* fp;
//    char filename[32], ch;
//    int count = 0, num = 1;
//    if (argc < 2) {
//        fprintf(stderr, "Error, please enter one character and at least one filename.\n");
//        exit(EXIT_FAILURE);
//    }
//    else if (argc == 2) {
//        if (strlen(argv[1]) == 1) {
//            printf("Please enter the file name you are looking for: ");
//            fscanf(stdin, "%s", &filename);
//        } else {
//            fprintf(stderr, "Enter only one character.\n");
//            exit(EXIT_FAILURE);
//        }
//        if ((fp = fopen(filename, "r")) == NULL) {
//            fprintf(stderr, "Can't open the file \"%s\"\n", filename);
//            exit(EXIT_FAILURE);
//        }
//        while ((ch = getc(fp)) != EOF)
//            if (argv[1][0] == ch)
//                ++count;
//        printf("Successfully open file \"%s\", and the character \"%c\" appears %d.\n", filename, argv[1][0], count);
//        if (fclose(fp) != 0)  fprintf(stderr, "Failed to close the file");
//    }
//    else {
//        if (strlen(argv[1]) != 1) {
//            fprintf(stderr, "Enter only one character.\n");
//            exit(EXIT_FAILURE);
//        }
//        while (++num < argc) {
//            count = 0;
//            if ((fp = fopen(argv[num], "r")) == NULL) {
//                fprintf(stderr, "Can't open the file \"%s\"\n", argv[num]);
//                break;
//            }
//            while ((ch = getc(fp)) != EOF)
//                if (argv[1][0] == ch)
//                    ++count;
//            printf("Successfully open file \"%s\", and the character \"%c\" appears %d.\n", argv[num], argv[1][0], count);
//            if (fclose(fp) != 0)  fprintf(stderr, "Failed to close the file");
//        }
//    }
//    return 0;
//}

//int main() {
//	FILE* fp;
//	char words[32], ch;
//	int count = 0;
//	if ((fp = fopen("wordy", "a+")) == NULL) {
//		fprintf(stdout, "Can't open \"wordy\" file.\n");
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF)
//		if (ch == '\n')
//			++count;
//	puts("Enter words to add to the file; press the # key at the beginning of a line to terminate.");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//		fprintf(fp, "%d: %s\n", ++count, words);
//	puts("File contents:");
//	rewind(fp);      // 返回文件开始处
//	while ((ch = getc(fp)) != EOF)
//		putchar(ch);
//	if (fclose(fp) != 0)  fprintf(stderr, "Error closing file\n");
//	return 0;
//}

//int main() {
//    FILE* fp;
//    char filename[32], buffer[256];
//    long local;
//    printf("Input a filename: ");
//    scanf("%s", filename);
//    if ((fp = fopen(filename, "r")) == NULL) {
//        fprintf(stderr, "Can't open the file: %s\n", filename);
//        exit(EXIT_FAILURE);
//    }
//    printf("Please enter the file location (Negative numbers and non-numeric characters to quit): ");
//    while ((scanf("%ld", &local) == 1) && local > 0) {
//        fseek(fp, --local, SEEK_SET);
//        if (fgets(buffer, 256, fp) != NULL)
//            fputs(buffer, stdout);
//        printf("Please enter the file location (Negative numbers and non-numeric characters to quit): ");
//    }
//    fclose(fp);
//    return 0;
//}

//int main(int argc, char* argv[]) {
//    FILE* fp;
//    char buffer[256];
//    if (argc != 3) {
//        fprintf(stderr, "Error, please enter a string and a filename.\n");
//        exit(EXIT_FAILURE);
//    }
//    if ((fp = fopen(argv[2], "r")) == EOF) {
//        fprintf(stderr, "Can't open the file \"%s\"\n", argv[2]);
//        exit(EXIT_FAILURE);
//    }
//    while (fgets(buffer, 256, fp) != NULL)
//        if (strstr(buffer, argv[1]) != NULL)
//            fputs(buffer, stdout);
//    fclose(fp);
//    return 0;
//}

//int main() {
//    FILE* fp;
//    int digit[20][30], i, j, ch;
//    char filename[32], buffer[20][31];
//    printf("Input a filename: ");
//    scanf("%s", filename);
//    if ((fp = fopen(filename, "r")) == NULL) {
//        fprintf(stderr, "Can't open the file: %s\n", filename);
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i < 20; i++) {
//        j = 0;
//        while ((ch = getc(fp)) != EOF) {
//            if (isdigit(ch))
//                digit[i][j++] = ch - 48;
//            if (ch == '\n') break;
//        }
//    }
//    for (i = 0; i < 20; i++) {
//        for (j = 0; j < 30; j++) {
//            if (digit[i][j] == 0) buffer[i][j] = ' ';
//            if (digit[i][j] == 1) buffer[i][j] = '.';
//            if (digit[i][j] == 2) buffer[i][j] = '\'';
//            if (digit[i][j] == 3) buffer[i][j] = ':';
//            if (digit[i][j] == 4) buffer[i][j] = '~';
//            if (digit[i][j] == 5) buffer[i][j] = '*';
//            if (digit[i][j] == 6) buffer[i][j] = '=';
//            if (digit[i][j] == 8) buffer[i][j] = '%';
//            if (digit[i][j] == 9) buffer[i][j] = '#';
//        }
//        buffer[i][30] = '\n';
//    }
//    for (i = 0; i < 20; i++)
//        for (j = 0; j < 31; j++)
//            printf("%c", buffer[i][j]);
//    if (fclose(fp) != 0)  fprintf(stderr, "Error closing file.\n");
//    return 0;
//}

//int main() {
//    int line = 0, colunm = 0;
//    printf("Please input picture line and column\n");
//    scanf("%d %d", &line, &colunm);
//    while (getchar() != '\n')  continue;
//    FILE* fp;
//    int digit[line][colunm], i, j, ch;
//    char filename[32], buffer[line][colunm+1];
//    printf("Input a filename: ");
//    scanf("%s", filename);
//    if ((fp = fopen(filename, "r")) == NULL) {
//        fprintf(stderr, "Can't open the file: %s\n", filename);
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i < line; i++) {
//        j = 0;
//        while ((ch = getc(fp)) != EOF) {
//            if (isdigit(ch))
//                digit[i][j++] = ch - 48;
//            if (ch == '\n') break;
//        }
//    }
//    for (i = 0; i < line; i++) {
//        for (j = 0; j < colunm; j++) {
//            if (digit[i][j] == 0) buffer[i][j] = ' ';
//            if (digit[i][j] == 1) buffer[i][j] = '.';
//            if (digit[i][j] == 2) buffer[i][j] = '\'';
//            if (digit[i][j] == 3) buffer[i][j] = ':';
//            if (digit[i][j] == 4) buffer[i][j] = '~';
//            if (digit[i][j] == 5) buffer[i][j] = '*';
//            if (digit[i][j] == 6) buffer[i][j] = '=';
//            if (digit[i][j] == 8) buffer[i][j] = '%';
//            if (digit[i][j] == 9) buffer[i][j] = '#';
//        }
//        buffer[i][colunm] = '\n';
//    }
//    for (i = 0; i < line; i++)
//        for (j = 0; j < colunm + 1; j++)
//            printf("%c", buffer[i][j]);
//    if (fclose(fp) != 0)  fprintf(stderr, "Error closing file.\n");
//    return 0;
//}

//int main() {
//    FILE* fp;
//    int digit[20][30], i, j, ch;
//    char filename[32], buffer[20][31];
//    printf("Input a filename: ");
//    scanf("%s", filename);
//    if ((fp = fopen(filename, "r")) == NULL) {
//        fprintf(stderr, "Can't open the file: %s\n", filename);
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i < 20; i++) {
//        j = 0;
//        while ((ch = getc(fp)) != EOF) {
//            if (isdigit(ch))
//                digit[i][j++] = ch - 48;
//            if (ch == '\n') break;
//        }
//    }
//    if (fclose(fp) != 0)  fprintf(stderr, "Error closing file.\n");
//    for (i = 0; i < 20; i++)
//        for (j = 0; j < 30; j++) {
//            if (i == 0 && 0 < j && j < 29) {
//                int sum = digit[i + 1][j] + digit[i][j - 1] + digit[i][j + 1];
//                if (abs(digit[i][j] - digit[i + 1][j]) > 1 && abs(digit[i][j] - digit[i][j - 1]) > 1
//                    && abs(digit[i][j] - digit[i][j + 1]) > 1)
//                    digit[i][j] = sum / 3;
//            } else if (i == 19 && 0 < j && j < 29) {
//                int sum = digit[i - 1][j] + digit[i][j - 1] + digit[i][j + 1];
//                if (abs(digit[i][j] - digit[i - 1][j]) > 1 && abs(digit[i][j] - digit[i][j - 1]) > 1
//                    && abs(digit[i][j] - digit[i][j + 1]) > 1)
//                    digit[i][j] = sum / 3;
//            } else if(j == 0 && 0 < i && i < 19) {
//                int sum = digit[i - 1][j] + digit[i + 1][j] + digit[i][j + 1];
//                if (abs(digit[i][j] - digit[i - 1][j]) > 1 && abs(digit[i][j] - digit[i + 1][j]) > 1
//                    && abs(digit[i][j] - digit[i][j + 1]) > 1)
//                    digit[i][j] = sum / 3;
//            } else if (j == 29 && 0 < i && i < 19) {
//                int sum = digit[i - 1][j] + digit[i + 1][j] + digit[i][j - 1];
//                if (abs(digit[i][j] - digit[i - 1][j]) > 1 && abs(digit[i][j] - digit[i + 1][j]) > 1
//                    && abs(digit[i][j] - digit[i][j - 1]) > 1)
//                    digit[i][j] = sum / 3;
//            } else if ((i == 0 && j == 0) || (i == 0 && j == 29) || (i == 19 && j == 0) || (i == 19 && j == 29)) {
//                continue;
//            } else {
//                int sum = digit[i - 1][j] + digit[i + 1][j] + digit[i][j - 1] + digit[i][j + 1];
//                if (abs(digit[i][j] - digit[i - 1][j]) > 1 && abs(digit[i][j] - digit[i + 1][j]) > 1 &&
//                    abs(digit[i][j] - digit[i][j - 1]) > 1 && abs(digit[i][j] - digit[i][j + 1]) > 1)
//                    digit[i][j] = sum / 4;
//            }
//        }
//    for (i = 0; i < 20; i++) {
//        for (j = 0; j < 30; j++) {
//            if (digit[i][j] == 0) buffer[i][j] = ' ';
//            if (digit[i][j] == 1) buffer[i][j] = '.';
//            if (digit[i][j] == 2) buffer[i][j] = '\'';
//            if (digit[i][j] == 3) buffer[i][j] = ':';
//            if (digit[i][j] == 4) buffer[i][j] = '~';
//            if (digit[i][j] == 5) buffer[i][j] = '*';
//            if (digit[i][j] == 6) buffer[i][j] = '=';
//            if (digit[i][j] == 8) buffer[i][j] = '%';
//            if (digit[i][j] == 9) buffer[i][j] = '#';
//        }
//        buffer[i][30] = '\n';
//    }
//    for (i = 0; i < 20; i++)
//        for (j = 0; j < 31; j++)
//            printf("%c", buffer[i][j]);
//    return 0;
//}