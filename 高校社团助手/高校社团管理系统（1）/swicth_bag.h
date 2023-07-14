#pragma once
#include"struct_bag.h"
#include"function_bag.h"
#include"print_bag.h"
#include<stdio.h>
#include<iostream>

using namespace std;
//int switch10(Data& D)
//{
//    int j, i = 0;
//    int j, i = 0;
//    while (1)
//    {
//        if (i == 1)
//        {
//            return 1;
//        }
//        print_switch4(D);
//        scanf("%d", &j);
//        system("cls");
//        switch (j)
//        {
//
//        case -2:
//        {
//            return 1;
//        }
//        case -1:
//        {
//            return 0;
//        }
//        case 1:
//        {
//
//            break;
//        }
//        case 2:
//        {
//
//            break;
//        }
//        }
//
//    }
//}

int switch0_3_1(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch10(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1://删除活动
        {
            
            break;
        }
        case 2:
        {
            /*function9(D);*/
            break;
        }
        }

    }
}
//社团活动管理
int switch0_3(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch9(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            i=switch0_3_1(D);
            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        }

    }
}
//赞助商管理
int switch0_2_3(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch8(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            addbussiness(D);
            break;
        }
        case 2:
        {
            researchbussiness(D);
            break;
        }
        }
    }
}
//社团基本信息管理
int switch0_2_1(Data& D)
{
   
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("社团基本信息管理------\n\n");
        printf("名称:%s\n",D.club.club_name);
        printf("社团性质：%s\n",D.club.nature_of_club);
        printf("社团负责人:%s\n",D.club.president);
        printf("社团口号:%s\n\n",D.club.slogan);
        printf("1 名称变动\n");
        printf("2 社团性质变动\n");
        printf("3 社团负责人变动\n");
        printf("4 社团口号变动\n");
        printf("\n首页-2   返回上级-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            FILE* fp = fopen("./clubs.txt", "w+");
            club_namechange(D);
            fprintf(fp, "%s %s %s %s", D.club.club_name, D.club.nature_of_club, D.club.president, D.club.slogan);
            fclose(fp);
            break; 
        }
        case 2:
        {
            FILE* fp = fopen("./clubs.txt", "w+");
            nature_of_clubchenge(D);
            fprintf(fp, "%s %s %s %s", D.club.club_name, D.club.nature_of_club, D.club.president, D.club.slogan);
            fclose(fp);
            break;
        }
        case 3:
        {   
            FILE* fp = fopen("./clubs.txt", "w+");
            presidentchange(D);
            fprintf(fp, "%s %s %s %s", D.club.club_name, D.club.nature_of_club, D.club.president, D.club.slogan);
            fclose(fp);
            break;
        }
        case 4:
        {
            FILE* fp = fopen("./clubs.txt", "w+");
            sloganchenge(D);
            fprintf(fp, "%s %s %s %s", D.club.club_name, D.club.nature_of_club, D.club.president, D.club.slogan);
            fclose(fp);
            break;
        }
        default:
        {
            printf("输入了错误的数字");
        }
        }

    }
}
int switch0_2_2_3(Data& D)//部门管理
{
    
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("部门管理-------- - \n");
        int a;
    if (D.p2 == 0)
    {
        printf("--空--\n");

    }
    else
    {
        for (a = 0; a < D.p2; a++)
        {
            printf("部门名：%s\n", D.department[a].department_name);
            printf("部长：%s\n", D.department[a].Minister);
            int b = 0;
            if (D.department[a].p3 == 0)
            {
                printf("--空--\n");
            }
            else
            {

                while (b < D.department[a].p3)
                {
                    printf("赞助商：");
                    printf("%s\n", D.department[a].bussiness_List[b].name);
                    b++;
                }
            }
            b = 0;
            if (D.department[a].p4 == 0)
            {
                printf("--空--\n");
            }
            else
            {

                while (b < D.department[a].p4)
                {
                    printf("活动%d:%s\n", b + 1, D.department[a].activities_list[b].activity_name);
                    b++;
                }
            }
            printf("\n\n");

        }
    }
        printf("创建部门--1\n删除部门--2\n修改部门信息--3\n查询部门信息--4\n\n");
        printf("\n首页-2   返回上级-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
           
            department_add(D);
            //创建部门
            break;
        }
        case 2:
        {
            department_shanchu(D);
            //删除部门
            break;
        }
        case 3:
        {
            department_revise(D);
            break;
            //修改部门
        }
        case 4:
        {
            department_locate(D);
            break;
        }
        }
    }

    return 0;
}
int switch0_2_2_2(Data& D)//干部管理
{

    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("干部管理---------\n");
        printf("职位变动--1\n干部任免--2\n\n");
        printf("\n首页-2   返回上级-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            //干部职位变动
            break;
        }
        case 2:
        {
            //干部任免
            break;
        }
        }


    }

}

int switch0_2_2_1(Data& D)//人事管理
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("人事管理---------\n");
        printf("添加新成员--1\n删除成员--2\n成员信息修改--3\n成员查询--4\n\n\n");
        printf("\n首页-2   返回上级-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            function2(D);
            //添加成员
            break;
        }
        case 2:
        {
            mumber_tuituan(D);
            //删除成员
            break;
        }
        case 3:
        {
            number_revise(D);
            //成员信息修改
            break;

        }
        case 4:
        {
            number_locate(D);
            //查询成员
            break;
        }
        }


    }


}
//组织机构管理
int switch0_2_2(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("组织机构管理---------\n");
        printf("人事管理--1\n干部管理--2\n部门管理--3\n\n");
        printf("\n首页-2   返回上级-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            i = switch0_2_2_1(D);
            break;
        }
        case 2:
        {
            i = switch0_2_2_2(D);
            break;
        }
        case 3:
        {
            i = switch0_2_2_3(D);
            break;
        }

        }


    }
}
//社团管理
int switch0_2(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch6(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }

        case -1:
        {
            return 0;
        }

        case 1:
        {
           i= switch0_2_1(D);
            break;
        }
        case 2:
        {
           i= switch0_2_2(D);
           break;
        }

        case 3:
        {
           i = switch0_2_3(D);
            break;
        }

        }

    }
}

int switch0_1_2(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch5(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            i = function8(D);
            break;
        }
        case 2:
        {
            function6(D);
            break;
        }
        case 3:
        {
            function7(D);
            break;
        }
        }

    }
}
//查询成员信息
int switch0_1_1_1(Data& D)
{
    int P;
    P=function1(D);
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch4(D,P);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            function4(D, P);
            break;
        }
        case 2:
        {
            function3(D, P);
            return 0;
        }
        }
    }
}
//通讯录管理
int switch0_1_1(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        print_switch3(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {

        case -2:
        {
            return 1;
        }
        case -1:
        {
            return 0;
        }
        case 1:
        {
            number_locate(D);
            break;
        }
        case 2:
        {
            function2(D);
            break;
        }
        }
    }
}
//成员信息管理
void switch0_1(Data& D)
{
    int j, i = 0;
    while (1)
    {

        if (i == 1)
        {
            return;
        }
       /* printf("**********成员信息管理**********\n");
        printf("***通讯录管理1  成员等级管理2***\n");
        printf("***返回上级-1          首页-2***\n");
        printf("********************");*/
        print_switch2(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {
        case -2:
        {
            return;
        }
        case -1:
        {
            return;
        }
        case 1:
        {
            i = switch0_1_1(D);
            break;
        }
        case 2:
        {
            i = switch0_1_2(D);
            break;
        }
        }
    }
}
//目录
void switch0(Data& D)
{
    int j;
    while (1)
    {
        print_switch1(D);
        scanf("%d", &j);
        system("cls");
        switch (j)
        {
        case 0:
        {
            return;
        }
        case 1:
        {
            switch0_1(D);
            break;
        }
        case 2:
        {
            switch0_2(D);
            break;
        }
        case 3:
        {
            switch0_3(D);
            break;
        }
        }
    }
}