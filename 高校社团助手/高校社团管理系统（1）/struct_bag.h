#pragma once
#define MAXSIZE 1000
#define MAXSIZE1 10
#include<iostream>
using namespace std;

typedef struct NUM1//成员信息存储结构
{
    int ID = 2000;//学号（用于查找）
    char name[20];//姓名
    char department_name[40] = "空";//部门//默认空
    char duty[20] = "无";//职务0//默认无
    int level = 1;//等级
    int point = 0;//积分且0<point<5
    char contact_number[20];
}NUM;//成员信息结构

typedef struct C1//社团信息存储结构
{
    int ID = 0;//社团ID(用于查找社团);
    char club_name[50] = "空";//社团名 
    char nature_of_club[1000] = "空";//性质
    char president[20] = "空";//社长
    char slogan[1000] = "空";//口号
}C;//社团信息结构

typedef struct activities
{
    char activity_name[20];//活动名称
    char nature_of_activity[200];//活动性质
   
}A;
typedef struct bussiness_list
{
    char name[20];//zan助商姓名
    

}B;//zan赞商信息
typedef struct club_department1
{
    int ID;//部门ID                                               
    char department_name[40];//部门名称
    char Minister[20];//部长
    NUM number[40];//部门成员表
    int department_p1=0;
    A activities_list[5];//活动表
    int p4 = 0;//活动的尾指针
    B bussiness_List[5];//赞助商表
    int p3 = 0;//赞助商的尾指针


}club_department;//部门信息结构



typedef struct Data1
{
    NUM number[MAXSIZE];//通讯录表
    int p1 = 0;//指向通讯录表尾部的指针//未初始化时为-1，初始化后为0
    C club;//社团
    club_department department[MAXSIZE1];//部门表
    int p2 = 0;//指向部门表尾部的指针
}Data;//总体数据包结构

