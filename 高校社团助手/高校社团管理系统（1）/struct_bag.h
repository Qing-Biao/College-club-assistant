#pragma once
#define MAXSIZE 1000
#define MAXSIZE1 10
#include<iostream>
using namespace std;

typedef struct NUM1//��Ա��Ϣ�洢�ṹ
{
    int ID = 2000;//ѧ�ţ����ڲ��ң�
    char name[20];//����
    char department_name[40] = "��";//����//Ĭ�Ͽ�
    char duty[20] = "��";//ְ��0//Ĭ����
    int level = 1;//�ȼ�
    int point = 0;//������0<point<5
    char contact_number[20];
}NUM;//��Ա��Ϣ�ṹ

typedef struct C1//������Ϣ�洢�ṹ
{
    int ID = 0;//����ID(���ڲ�������);
    char club_name[50] = "��";//������ 
    char nature_of_club[1000] = "��";//����
    char president[20] = "��";//�糤
    char slogan[1000] = "��";//�ں�
}C;//������Ϣ�ṹ

typedef struct activities
{
    char activity_name[20];//�����
    char nature_of_activity[200];//�����
   
}A;
typedef struct bussiness_list
{
    char name[20];//zan��������
    

}B;//zan������Ϣ
typedef struct club_department1
{
    int ID;//����ID                                               
    char department_name[40];//��������
    char Minister[20];//����
    NUM number[40];//���ų�Ա��
    int department_p1=0;
    A activities_list[5];//���
    int p4 = 0;//���βָ��
    B bussiness_List[5];//�����̱�
    int p3 = 0;//�����̵�βָ��


}club_department;//������Ϣ�ṹ



typedef struct Data1
{
    NUM number[MAXSIZE];//ͨѶ¼��
    int p1 = 0;//ָ��ͨѶ¼��β����ָ��//δ��ʼ��ʱΪ-1����ʼ����Ϊ0
    C club;//����
    club_department department[MAXSIZE1];//���ű�
    int p2 = 0;//ָ���ű�β����ָ��
}Data;//�������ݰ��ṹ

