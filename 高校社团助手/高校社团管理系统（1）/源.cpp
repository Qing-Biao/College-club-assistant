#define _CRT_SECURE_NO_WARNINGS
#include"struct_bag.h"
#include"function_bag.h"
#include"function_a.h"
#include"swicth_bag.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    Data D;
    function_a(D);
    function_b(D);
    function_c(D); 
    function_d(D);
    function_e(D);
    function5(D);
    printf("��ӭʹ�ã�\n");
    switch0(D);
    printf("����������лʹ�ã�������");
    return 0;
}