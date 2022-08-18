#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main() {
//
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void up_and_down(int n)
//{
//	printf("Level %d:n location %p\n", n, &n);
//	if (n < 4) 
//	{
//		up_and_down(n + 1);
//	}
//	printf("LEVEL %d:n location %p\n", n ,& n);
//}
//int main() 
//{
//	up_and_down(1);
//	return 0;
//}



//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}



//int Strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}


//int fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}

//int count = 0;//全局变量
//int fib(int n)
//{
//    if (n == 3)
//        count++;
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}


////求n的阶乘
//int factorial(int n)
//{
//    int result = 1;
//    while (n > 1)
//    {
//        result *= n;
//        n -= 1;
//    }
//    return result;
//}
////求第n个斐波那契数
//int fib(int n)
//{
//    int result;
//    int pre_result;
//    int next_older_result;
//    result = pre_result = 1;
//    while (n > 2)
//    {
//        n -= 1;
//        next_older_result = pre_result;
//        pre_result = result;
//        result = pre_result + next_older_result;
//    }
//    return result;
//}
