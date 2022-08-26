//            �� 13 ��    �ļ�����/���

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
//		putc(ch, stdout); // ��putchar(ch); ��ͬ
//		count++;		
//	}
//	fclose(fp);
//	printf("File %s has %lu characters\n", argv[1], count);
//	return 0;
//}

//#define LEN 40
//int main(int argc, char* argv[]) {
//	FILE* in, * out;   // ��������ָ�� FILE ��ָ��
//	int ch, count = 0;
//	char name[LEN];    // �洢����ļ���
//	if (argc < 2) {    // ��������в���
//		fprintf(stderr, "Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if ((in = fopen(argv[1], "r")) == NULL) {      // ��������
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}    // �������
//	strncpy(name, argv[1], LEN - 5);  // �����ļ���
//	name[LEN - 5] = '\0';
//	strcat(name, ".red");   // ���ļ���������� .red
//	if ((out = fopen(name, "w")) == NULL) {     // ��дģʽ���ļ�
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//	while ((ch = getc(in)) != EOF)  // ��������
//		if (count++ % 3 == 0)
//			putc(ch, out);  // ��ӡ3���ַ��еĵ�1���ַ�
//	if (fclose(in) != 0 || fclose(out) != 0)   // ��β����
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
//	rewind(fp);      // �����ļ���ʼ��
//	while (fscanf(fp, "%s", words) == 1)
//		puts(words);
//	puts("Done!");
//	if (fclose(fp) != 0)
//		fprintf(stderr, "Error closing file\n");
//	return 0;
//}

//#define CNTL_Z '\032'    // DOS �ı��ļ��е��ļ���β���
//#define SLEN 81
//int main() {
//	char file[SLEN];
//	char ch;
//	FILE* fp;
//	long count, last;
//	puts("Enter the name of the file to be processed:");
//	scanf("%80s", file);
//	if ((fp = fopen(file, "rb")) == NULL) {       // ֻ��ģʽ
//		printf("reverse can't open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//	fseek(fp, 0L, SEEK_END);
//	last = ftell(fp);
//	for (count = 1L; count <= last; count++) {
//		fseek(fp, -count, SEEK_END);    // ����
//		ch = getc(fp);
//		if (ch != CNTL_Z && ch != '\r')   // MS-DOS �ļ�
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
//	static char temp[BUFSIZE];     // ֻ����һ��
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//		fwrite(temp, sizeof(char), bytes, dest);
//}
//char* s_gets(char* st, int n) {
//	char* ret_val, * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val) {
//		find = strchr(st, '\n');     // ���һ��з�
//		if (find)                    // �����ַ���� NULL
//			*find = '\0';            // �ڴ˴�����һ�����ַ�
//		else
//			while (getchar() != '\n')  continue;
//	}
//	return ret_val;
//}
//int main() {
//	FILE* fa, * fs;     // fa ָ��Ŀ���ļ���fs ָ��Դ�ļ�
//	int files = 0;         // ���ӵ��ļ�����
//	char file_app[SLEN], file_src[SLEN];    // Ŀ���ļ�����Դ�ļ���
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
//	for (i = 0; i < ARSIZE; i++)    // ����һ�� double ���͵�ֵ
//		numbers[i] = 100.0 * i + 1.0 / (i + 1);
//	if ((iofile = fopen(file, "wb")) == NULL) {      // ���Դ��ļ�
//		fprintf(stderr, "Could not open %s for output.\n", file);
//		exit(EXIT_FAILURE);
//	}  // �Զ����Ƹ�ʽ������д���ļ�
//	fwrite(numbers, sizeof(double), ARSIZE, iofile);
//	fclose(iofile);
//	if ((iofile = fopen(file, "rb")) == NULL) {
//		fprintf(stderr, "Could not open %s for random access.\n", file);
//		exit(EXIT_FAILURE);
//	}  // ���ļ��ж�ȡѡ��������
//	printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
//	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE) {
//		pos = (long)i * sizeof(double);    // ����ƫ����
//		fseek(iofile, pos, SEEK_SET);     // ��λ���˴�
//		fread(&value, sizeof(double), 1, iofile);
//		printf("The value there is %f.\n", value);
//		printf("Next index (out of range to quit):\n");
//	}   // ���
//	fclose(iofile);
//	puts("Bye!");
//	return 0;
//}



                   // ��ϰ��
                   // ��ϰ��
                   // ��ϰ��
                   // ��ϰ��



//1.  ȱ��ͷ�ļ���fp�����ļ�ָ�룻û��ָ������ʽ�ʹ��ļ���fputs�����������÷��ˣ��ļ��رմ���

//2.  ��������ͨ�������в������Ե�һ��������Ϊ�ļ�������ֻ����ʽ�򿪸��ļ���
//    ͨ��whileѭ����ȡ���ļ��������ַ�����������֣����ӡ�ַ���ֱ���ļ�������

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

//6.  �����ļ��ڼ�����ض����Զ�������ʽ�洢�ġ�����ļ�ʹ�ö����Ʊ���(��ASCII���롢Unicoude����)���ַ�����ô��Щ�ļ������ı��ļ���
//    �����Щ�����Ʊ�ʾ������ʽ�ı���(��������Ա��롢ͼ������)����ô��Щ�ļ����Ƕ������ļ����������ļ���ʽ��ϵͳ�������Բ�ͬ��
//    �������ļ����ı��ļ�����������ڶ�д��ʱִ�е�ת�����������ļ�ֱ�Ӷ�ȡ�ļ���ÿ���ֽڣ���ת�����ַ�����Բ�ͬϵͳƽ̨�Ĳ����
//    �ַ�������죬ϵͳ���ܻ���ı��ļ���һЩ�ַ�ת����

//7.  a.fprintf()�����ַ���ʽд���ݣ���˻��8238201����7���������ַ����ݶ������棬ռ7�ֽڵĴ���ռ䣻fwrite()���ն�������ʽ��д���ݣ�
//    �����д������ʱ���8238201����һ��4�ֽڵ��������ݽ���д�롣  b.û�����𣬶�������Ϊһ�����ֽڵĶ����Ʊ��롣

//8.  ��1���͵�2�����ʵ�ֵĹ���û������fprintf()��һ�����������������ȥ�����������printf()һ����
//    stdout����ʾ����stderr�Ǳ�׼����ͨ��ϵͳ��stderr������stdout��ͬλ�ã�����׼�����ܱ�׼����ض����Ӱ�졣

//9.  "a+""r+""w+"���ǿɶ�д�ļ��ģ�"a+""r+"���ļ�ĩβ��д��"w+"������ļ�������д�롣"a+""w+"����ļ������ڣ��򴴽��ļ���



                   // �����ϰ
                   // �����ϰ
                   // �����ϰ
                   // �����ϰ



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
//		putc(ch, stdout); // ��putchar(ch); ��ͬ
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
//	static char temp[BUFSIZE];     // ֻ����һ��
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//		fwrite(temp, sizeof(char), bytes, dest);
//}
//int main(int argc, char* argv[]) {
//	FILE* fa, * fs;     // fa ָ��Ŀ���ļ���fs ָ��Դ�ļ�
//	int files = 1;         // ���ӵ��ļ�����
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
//	FILE* in, * out;   // ��������ָ�� FILE ��ָ��
//	int ch, count = 0;
//	char in_name[LEN], out_name[LEN];    // �洢��ȡ��д���ļ���
//	puts("Enter name of source file: ");
//	scanf("%s", in_name);
//	if ((in = fopen(in_name, "r")) == NULL) {      // ��������
//		fprintf(stderr, "Can't open the file \"%s\"\n", in_name);
//		exit(EXIT_FAILURE);
//	}    // �������
//	puts("Enter name of destination file: ");
//	scanf("%s", out_name);
//	if ((out = fopen(out_name, "w")) == NULL) {     // ��дģʽ���ļ�
//		fprintf(stderr, "Can't open the file \"%s\"\n", out_name);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(in)) != EOF)  // ��������
//		if (count++ % 3 == 0)
//			putc(ch, out);  // ��ӡ3���ַ��еĵ�1���ַ�
//	if (fclose(in) != 0 || fclose(out) != 0)   // ��β����
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
//	rewind(fp);      // �����ļ���ʼ��
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