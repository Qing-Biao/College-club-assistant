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
        case 1://ɾ���
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
//���Ż����
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
//�����̹���
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
//���Ż�����Ϣ����
int switch0_2_1(Data& D)
{
   
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("���Ż�����Ϣ����------\n\n");
        printf("����:%s\n",D.club.club_name);
        printf("�������ʣ�%s\n",D.club.nature_of_club);
        printf("���Ÿ�����:%s\n",D.club.president);
        printf("���ſں�:%s\n\n",D.club.slogan);
        printf("1 ���Ʊ䶯\n");
        printf("2 �������ʱ䶯\n");
        printf("3 ���Ÿ����˱䶯\n");
        printf("4 ���ſںű䶯\n");
        printf("\n��ҳ-2   �����ϼ�-1\n");
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
            printf("�����˴��������");
        }
        }

    }
}
int switch0_2_2_3(Data& D)//���Ź���
{
    
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("���Ź���-------- - \n");
        int a;
    if (D.p2 == 0)
    {
        printf("--��--\n");

    }
    else
    {
        for (a = 0; a < D.p2; a++)
        {
            printf("��������%s\n", D.department[a].department_name);
            printf("������%s\n", D.department[a].Minister);
            int b = 0;
            if (D.department[a].p3 == 0)
            {
                printf("--��--\n");
            }
            else
            {

                while (b < D.department[a].p3)
                {
                    printf("�����̣�");
                    printf("%s\n", D.department[a].bussiness_List[b].name);
                    b++;
                }
            }
            b = 0;
            if (D.department[a].p4 == 0)
            {
                printf("--��--\n");
            }
            else
            {

                while (b < D.department[a].p4)
                {
                    printf("�%d:%s\n", b + 1, D.department[a].activities_list[b].activity_name);
                    b++;
                }
            }
            printf("\n\n");

        }
    }
        printf("��������--1\nɾ������--2\n�޸Ĳ�����Ϣ--3\n��ѯ������Ϣ--4\n\n");
        printf("\n��ҳ-2   �����ϼ�-1\n");
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
            //��������
            break;
        }
        case 2:
        {
            department_shanchu(D);
            //ɾ������
            break;
        }
        case 3:
        {
            department_revise(D);
            break;
            //�޸Ĳ���
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
int switch0_2_2_2(Data& D)//�ɲ�����
{

    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("�ɲ�����---------\n");
        printf("ְλ�䶯--1\n�ɲ�����--2\n\n");
        printf("\n��ҳ-2   �����ϼ�-1\n");
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
            //�ɲ�ְλ�䶯
            break;
        }
        case 2:
        {
            //�ɲ�����
            break;
        }
        }


    }

}

int switch0_2_2_1(Data& D)//���¹���
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("���¹���---------\n");
        printf("����³�Ա--1\nɾ����Ա--2\n��Ա��Ϣ�޸�--3\n��Ա��ѯ--4\n\n\n");
        printf("\n��ҳ-2   �����ϼ�-1\n");
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
            //��ӳ�Ա
            break;
        }
        case 2:
        {
            mumber_tuituan(D);
            //ɾ����Ա
            break;
        }
        case 3:
        {
            number_revise(D);
            //��Ա��Ϣ�޸�
            break;

        }
        case 4:
        {
            number_locate(D);
            //��ѯ��Ա
            break;
        }
        }


    }


}
//��֯��������
int switch0_2_2(Data& D)
{
    int j, i = 0;
    while (1)
    {
        if (i == 1)
        {
            return 1;
        }
        printf("��֯��������---------\n");
        printf("���¹���--1\n�ɲ�����--2\n���Ź���--3\n\n");
        printf("\n��ҳ-2   �����ϼ�-1\n");
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
//���Ź���
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
//��ѯ��Ա��Ϣ
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
//ͨѶ¼����
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
//��Ա��Ϣ����
void switch0_1(Data& D)
{
    int j, i = 0;
    while (1)
    {

        if (i == 1)
        {
            return;
        }
       /* printf("**********��Ա��Ϣ����**********\n");
        printf("***ͨѶ¼����1  ��Ա�ȼ�����2***\n");
        printf("***�����ϼ�-1          ��ҳ-2***\n");
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
//Ŀ¼
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