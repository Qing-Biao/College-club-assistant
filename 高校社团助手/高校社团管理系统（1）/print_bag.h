#pragma once
#include"struct_bag.h"
#include<iostream>
using namespace std;
//Ŀ¼
void print_switch1(Data& D)
{
    printf("��У��������------\n");
    printf("Ŀ¼��\n");
    printf("��Ա��Ϣ����--1\n���Ź���------2\n���Ż����--3\n");
    printf("����0\n");
    printf("�����ѯ��ҳ�棺\n");
    printf(">>>");
    return;
}
//��Ա��Ϣ����
void print_switch2(Data& D)
{
    printf("��Ա��Ϣ����---------\n");
    printf("\n");
    printf("ͨѶ¼����--1\n��Ա�ȼ�����--2\n");
    printf("\n�����ϼ�-1  ��ҳ-2\n");
    printf(">>>");
    return;

}
//��Ա��Ϣ����--ͨѶ¼����
void print_switch3(Data &D)
{
    printf("ͨѶ¼����---------\n");
    printf("\n");
    if (D.p1 == 0)
    {
        printf("--��--\n");
    }
    else
    {
        int a;
        for (a = 0; a < D.p1; a++)
        {

            /*printf("ѧ�ţ�%d ������%s ����: %s ְ��: %s �ȼ�: %d \n", D.number[a].ID, D.number[a].name, D.number[a].department_name, D.number[a].duty, D.number[a].level);*/

            cout << "ѧ�ţ�" << D.number[a].ID << ' ';
            cout << "������" << D.number[a].name << ' ';
            cout << "���ţ�" << D.number[a].department_name << ' ';
            cout << "ְ��" << D.number[a].duty << ' ';
            cout << "�ȼ���" << D.number[a].level << ' ';
            cout << endl;
        }

    }
    printf("\n");
    printf("��ѯ��Ա��Ϣ--1\n��ӳ�Ա--2\n");
    printf("\n��ҳ-2   �����ϼ�-1\n");
    printf(">>>");
    return;
}
//��ѯ���
void print_switch4(Data& D,int A)
{
    printf("���ҽ��Ϊ\n");
    printf("ѧ�ţ�%d ������%s ����: %s ְ��: %s �ȼ�: %d \n", D.number[A].ID, D.number[A].name, D.number[A].department_name, D.number[A].duty, D.number[A].level);
    printf("\n�༭�ó�Ա��Ϣ--1\nɾ���ó�Ա--2\n");
    printf("\n��ҳ-2   �����ϼ�-1\n");
    return;
}
//��Ա�ȼ�����
void print_switch5(Data& D)
{
    printf("��Ա�ȼ�����\n\n\n");
    printf("�鿴����������----1\n");
    printf("�鿴���˻�������--2\n");
    printf("��Ա���˻��ֹ���--3\n");
    return;
}
//���Ź���
void print_switch6(Data& D)
{
    printf("������Ϣ����\n\n");
    printf("Ŀ¼��\n\n");
    printf("1�����Ż�����Ϣ����\n\n");
    printf("2����֯��������\n\n");
    printf("3����������Ϣ����\n\n");

    return;
}
//���Ż�����Ϣ����
void print_switch7(Data& D)
{

    printf("1�����Ʊ䶯��\n\n");
    printf("2���������ʱ䶯��\n\n");
    printf("3�����Ÿ����˱䶯��\n\n");
    printf("4���ںű䶯��\n\n");
    printf("5����ɢ�����ţ�\n\n");
    return;
}
//��������Ϣ����
void print_switch8(Data& D)
{
    printf("1����������̣�\n");
    printf("2����ѯ�����̣�\n");
}
//���Ż����
void print_switch9(Data& D)
{
    printf("���Ż����\n\n");
    printf("Ŀ¼��\n\n");
    printf("1����ƻ�����\n");
    printf("2����ﻮ����\n");
    printf("3������۹���\n");
}
//��ƻ�����
void print_switch10(Data& D)
{
    printf("1��ɾ�����\n\n");
    printf("2����ӻ��\n");

}