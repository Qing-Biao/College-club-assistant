#pragma once
#include"struct_bag.h"
#include<iostream>
using namespace std;
//目录
void print_switch1(Data& D)
{
    printf("高校社团助手------\n");
    printf("目录：\n");
    printf("成员信息管理--1\n社团管理------2\n社团活动管理--3\n");
    printf("结束0\n");
    printf("输入查询的页面：\n");
    printf(">>>");
    return;
}
//成员信息管理
void print_switch2(Data& D)
{
    printf("成员信息管理---------\n");
    printf("\n");
    printf("通讯录管理--1\n成员等级管理--2\n");
    printf("\n返回上级-1  首页-2\n");
    printf(">>>");
    return;

}
//成员信息管理--通讯录管理
void print_switch3(Data &D)
{
    printf("通讯录管理---------\n");
    printf("\n");
    if (D.p1 == 0)
    {
        printf("--空--\n");
    }
    else
    {
        int a;
        for (a = 0; a < D.p1; a++)
        {

            /*printf("学号：%d 姓名：%s 部门: %s 职务: %s 等级: %d \n", D.number[a].ID, D.number[a].name, D.number[a].department_name, D.number[a].duty, D.number[a].level);*/

            cout << "学号：" << D.number[a].ID << ' ';
            cout << "姓名：" << D.number[a].name << ' ';
            cout << "部门：" << D.number[a].department_name << ' ';
            cout << "职务：" << D.number[a].duty << ' ';
            cout << "等级：" << D.number[a].level << ' ';
            cout << endl;
        }

    }
    printf("\n");
    printf("查询成员信息--1\n添加成员--2\n");
    printf("\n首页-2   返回上级-1\n");
    printf(">>>");
    return;
}
//查询结果
void print_switch4(Data& D,int A)
{
    printf("查找结果为\n");
    printf("学号：%d 姓名：%s 部门: %s 职务: %s 等级: %d \n", D.number[A].ID, D.number[A].name, D.number[A].department_name, D.number[A].duty, D.number[A].level);
    printf("\n编辑该成员信息--1\n删除该成员--2\n");
    printf("\n首页-2   返回上级-1\n");
    return;
}
//成员等级管理
void print_switch5(Data& D)
{
    printf("成员等级管理：\n\n\n");
    printf("查看积分总排名----1\n");
    printf("查看个人积分排名--2\n");
    printf("成员个人积分管理--3\n");
    return;
}
//社团管理
void print_switch6(Data& D)
{
    printf("社团信息管理：\n\n");
    printf("目录：\n\n");
    printf("1、社团基本信息管理；\n\n");
    printf("2、组织机构管理；\n\n");
    printf("3、赞助商信息管理；\n\n");

    return;
}
//社团基本信息管理
void print_switch7(Data& D)
{

    printf("1、名称变动；\n\n");
    printf("2、社团性质变动；\n\n");
    printf("3、社团负责人变动；\n\n");
    printf("4、口号变动；\n\n");
    printf("5、解散该社团；\n\n");
    return;
}
//赞助商信息管理
void print_switch8(Data& D)
{
    printf("1、添加赞助商；\n");
    printf("2、查询赞助商；\n");
}
//社团活动管理
void print_switch9(Data& D)
{
    printf("社团活动管理：\n\n");
    printf("目录：\n\n");
    printf("1、活动计划管理；\n");
    printf("2、活动筹划管理：\n");
    printf("3、活动评价管理：\n");
}
//活动计划管理
void print_switch10(Data& D)
{
    printf("1、删除活动；\n\n");
    printf("2、添加活动；\n");

}