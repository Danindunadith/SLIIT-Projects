// ossanew.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<stdio.h>
#include <pthread.h>
#include <stdlib.h>
void* thread1()
{
    printf("Hello World!!\n");

    for (int num = 2; num < 101; num = num + 2)
    {
        printf("%d", &num);
    }


}
int main()
{
    pthread_t tid1;
    int n;
    printf("Enter integer(n)");
    scanf("%d", &n);

    for (int i = 0; i < 2; i++)
    {
        pthread_create(&tid1, NULL, thread1, NULL);
    }
    for (int i = 0; i < 2; i++)
    {
        pthread_join(tid1, NULL);

    }

    for (int j = 0; j <= n; j++)
    {
        printf("%d", &n);
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
