#pragma once
#include"struct_bag.h"
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

//���ҳ�Ա(key==ID)
int function1(Data &D)//���ҳ�Ա(key==��ԱID)
{
    int key,i;
    printf("�����뱻���ҳ�ԱID\n");
    printf(">>>");
    scanf("%d",&key);//key==ID   !!!
    //����ȱһ�����Ҳ���,���ҳ�����Ѹó�Ա��ͨѶ¼���е�λ�ò�������i

    return 0;//д�����������ǵð�  0 �ĳ� i  

}
//��ӳ�Ա
void function2(Data& D)//��ӳ�Ա
{
    int j = 1;
    while (j == 1)
    {
        FILE* fp = fopen("./txl.txt", "a+");
        if (fp == NULL) {
            perror("�ļ���ʧ��ԭ��:");
            return;
        }
        printf("������������");
        scanf("%s", D.number[D.p1].name);
		printf("���в��ţ�\n");
		int a = 0;
		while (a<D.p2)
		{
			printf("���ţ�%s ID:%d\n",D.department[a].department_name,D.department[a].ID);
			a++;
		}
		printf("�����벿������:");
        scanf("%s", D.number[D.p1].department_name);
		printf("��������벿��ID��");
		scanf("%d", &a);
		a = a - 1;
        printf("������ְ��");
        scanf("%s", D.number[D.p1].duty);
        printf("������ȼ���");
        scanf("%d", &D.number[D.p1].level);
        D.number[D.p1].ID = 2001+D.p1;
        fprintf(fp, "%s %s %s %d\n", D.number[D.p1].name, D.number[D.p1].department_name, D.number[D.p1].duty, D.number[D.p1].level);
        fclose(fp);
		D.department[a].number[D.department[a].department_p1];
		D.department[a].department_p1++;
		D.p1++;
        printf("\n�������--1\n����--0\n");
        printf("--��ӳɹ�!--\n\n");
        scanf("%d", &j);
        system("cls");
    }
    return;
}

//ɾ����Ա
void function3(Data& D,int i)//ɾ����Ա
{
    //ɾ��D.number[i]�ϵĳ�Ա
    //ͬʱͨѶ����i�Ժ����������һλ



}
void showinclubformation(Data& D)//չʾ����������Ϣ
{
	if (D.club.ID == 0)
	{
		printf("����IDΪ��\n");
	}
	else
	{
		printf("����IDΪ��%d\n", D.club.ID);
	}
	if (strcmp(D.club.club_name, "��") == 0)
	{
		printf("��������Ϊ��\n");
	}
	else
	{
		printf("��������Ϊ��%s\n", D.club.club_name);
	}
	if (strcmp(D.club.nature_of_club, "��") == 0)
	{
		printf("��������Ϊ��\n");
	}
	else
	{
		printf("��������Ϊ��%s\n", D.club.nature_of_club);
	}
	if (strcmp(D.club.president, "��") == 0)
	{
		printf("�����糤Ϊ��\n");
	}
	else
	{
		printf("�����糤�ǣ�%s\n", D.club.president);
	}
	if (strcmp(D.club.slogan, "��") == 0)
	{
		printf("���ſں�Ϊ��\n");
	}
	else
	{
		printf("���ſں�Ϊ��%s\n", D.club.slogan);
	}
	system("pause");
	system("cls");
	return;

}

void club_namechange(Data& D)//���������޸�
{
	printf("�������µ���������:");
	scanf("%s", D.club.club_name);
	printf("�޸ĳɹ�");
	return;

}

void nature_of_clubchenge(Data& D)//���������޸�
{
	printf("�������µ���������:");
	scanf("%s", D.club.nature_of_club);
	printf("�޸ĳɹ�");
	return;

}

void presidentchange(Data& D) //���Ÿ������޸�
{
	printf("�������µ����Ÿ�����:");
	scanf("%s", D.club.president);
	printf("�޸ĳɹ�");
	return;

}

void sloganchenge(Data& D) //���ſں��޸�
{
	printf("�������µ����ſں�:");
	scanf("%s", D.club.slogan);
	printf("�޸ĳɹ�");
	return;

}

void clubmanagement(Data& D) //���Ż�����Ϣ����
{
	FILE* fp = fopen("./clubs.txt", "a+");
	if (fp == NULL) {
		perror("clubs.txt open failed:");
		return;
	}
	int i = 0;
	printf("��ѡ��\n");
	printf("1 ���Ʊ䶯\n");
	printf("2 �������ʱ䶯\n");
	printf("3 ���Ÿ����˱䶯\n");
	printf("4 ���ſںű䶯\n");
	//printf("5 ���Ʊ䶯\n");
	scanf("%d", &i);
	switch (i) {
	case 1:
		club_namechange(D);
		break;
	case 2:
		nature_of_clubchenge(D);
		break;
	case 3:
		presidentchange(D);
		break;
	case 4:
		sloganchenge(D);
		break;
		//case 5:break;
	default:
		printf("�����˴��������");
	}
	return;
	
}

//�༭��Ա��Ϣ
void function4(Data& D, int i)
{
    while (1)
    {
        int j;
        printf("�޸�����--1\n�޸Ĳ���--2\n�޸�ְλ--3\n\n");
        printf("���-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {
        case -1:
            return;
            break;
        case 1:
            printf("ԭ����:%s\n", D.number[i].name);
            printf("�޸�Ϊ��");
            scanf("%s", D.number[i].name);
            system("cls");
            break;
        case 2:
            printf("ԭ����Ϊ��%s\n",D.number[i].department_name);
            printf("�޸�Ϊ��");
            scanf("%s", D.number[i].department_name);
            system("cls");
            break;
        case 3:
            printf("ԭְλΪ��%s\n", D.number[i].duty);
            printf("�޸�Ϊ��");
            scanf("%s", D.number[i].duty);
            system("cls");
            break;
        }
    }
	return;

}
//�鿴����������
int function8(Data& D)
{
	int i = 0;
	while (i<D.p1)
	{
		printf("����������%d ѧ�ţ�%d ������%s �ȼ���%d ���֣�%d \n",i+1,D.number[i].ID,D.number[i].name, D.number[i].level,D.number[i].point);
		i++;
	}
	while (1)
	{
		printf("\n������ҳ -1 ������ҳ -2\n");
		cin >> i;
		system("cls");
		;
		if (i == -1)
		{
			return 0;
		}
		else if (i ==-2)
		{
			return 1;
		}
		else
		{
			printf("�������\n");
		}
	}

}
//��Ա�ȼ�����(ð������)
void function5(Data& D)
{
	int a;
	for (a = 0; a < D.p1; a++)
	{
		int c;
		for (c = 0; c < D.p1 - 1 - a; c++)
		{
			if (D.number[c].level * 5 + D.number[c].point < D.number[c + 1].level * 5 + D.number[c + 1].point)
			{
				NUM p;
				p = D.number[c + 1];
				D.number[c + 1] = D.number[c];
				D.number[c] = p;
			}

		}

	}

}
//��ѯ��Ա�ȼ�
void function6(Data& D)
{
	while (1)
	{
		int key, i;
		printf("��ѯ��Ա�ȼ�---------\n\n");
		printf("�����뱻��ѯ��ԱID\n");
		printf(">>>");
		scanf("%d", &key);
		if (key < 2000 || key>2000 + D.p1)
		{
			printf("��ѯʧ��");
		}
		else
		{
			for (i = 0; i < D.p1; i++)
			{
				if (key == D.number[i].ID)
				{
					printf("--��ѯ�ɹ���--\n");
					printf("����������%d ѧ�ţ�%d ������%s �ȼ���%d ���֣�%d ", i + 1, key, D.number[i].name, D.number[i].level ,D.number[i].point);
					break;
				}

			}
		}
		printf("\n�ٴ�ִ��--0 ��������--1\n");
		scanf("%d", &i);
		system("cls");
		;
		if (i == 1)
		{
			return;
		}
		else if (i == 0)
		{
			break;
		}
		else if (i != 0 || i != 1)
		{
			printf("�������\n");
		}

	}

}
//�������
void addpoint(Data& D,int i,int key)
{
	int a;
	int j;
	printf("ԭ��Ϣ:\n");
	printf("����������%d ѧ�ţ�%d ������%s �ȼ���%d ���֣�%d\n\n ", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].level * 5 + D.number[i].point);
	printf("��ӷ�ֵ��\n>>>");
	scanf("%d", &j);
	a = D.number[i].level * 5 + D.number[i].point + j;
	if (a <= 0)
	{
		D.number[i].level = 1;
		D.number[i].point = 0;
	}
	else
	{
		D.number[i].level = a / 5 + 1;
		D.number[i].point = a % 5;
	}
	int b = i;
	while (b > 0)
	{
		--b;
		if ((D.number[i].level <= D.number[b].level && D.number[i].point <= D.number[b].point)||b==0)
		{
			NUM p1 = D.number[i];
			while (i > b-1&&i>0)
			{
				D.number[i] = D.number[i - 1];
				i--;
			}
			D.number[b] = p1;
			break;
		}
	}
	printf("�����ɣ�\n");
	return;
}
//�۳�����
void decrease_point(Data& D, int i, int key) 
{
	int a;
	int j;
	printf("ԭ��Ϣ:\n");
	printf("����������%d ѧ�ţ�%d ������%s �ȼ���%d ���֣�%d\n\n ", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].level * 5 + D.number[i].point);
	printf("��ȥ��ֵ��");
	scanf("%d", &j);
	a = D.number[i].level * 5 + D.number[i].point - j;
	if (a <= 0)
	{
		D.number[i].level = 1;
		D.number[i].point = 0;
	}
	else
	{
		D.number[i].level = a / 5 + 1;
		D.number[i].point = a % 5;
	}
	int b = i;
	while (b < D.p1-1)
	{
		b++;
		if ((D.number[i].level >= D.number[b].level && D.number[i].point >= D.number[b].point)||b==D.p1-1)
		{
			NUM p1 = D.number[i];
			while (i < b)
			{
				D.number[i] = D.number[i + 1];
				i++;
			}
			D.number[b] = p1;
			break;

		}

	}
}
//��Ա���ֹ���
void function7(Data& D)
{
	while (1)
	{
		int key, i;
		printf("��ѯ��Ա�ȼ�---------\n\n");
		printf("�����뱻��ѯ��ԱID\n");
		printf(">>>");
		scanf("%d", &key);
		if (key < 2000 || key>2000 + D.p1)
		{
			printf("��ѯʧ��");
		}
		else
		{
			while (1)
			{
				for (i = 0; i < D.p1; i++)
				{
					if (key == D.number[i].ID)
					{
							printf("--��ѯ�ɹ���--\n");
							printf("����������%d ѧ�ţ�%d ������%s �ȼ���%d ���֣�%d \n\n", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].point);
							printf("���мӷ�--1\n���м���--2\n����-1\n>>>");
							int j;
							scanf("%d", &j);
							system("cls");
							switch (j)
							{
							case -1:
							{
								return;
							}

							case 1:
							{
								addpoint(D, i, key);
								printf("\n");
								break;

							}
							case 2:
							{
								decrease_point(D, i, key);
								printf("\n");
								break;
							}
							}
						

					}
				}
			}
		}

		printf("\n�ٴ�ִ��--0 ��������--1\n");
		scanf("%d", &i);
		system("cls");
		;
		if (i == 1)
		{
			return;
		}
		else if (i == 0)
		{
			break;
		}
		else if (i != 0 || i != 1)
		{
			printf("�������\n");
		}
	}
}

void addbussiness(Data& D) //���������
{
	int i, j, ID = 0;
	if (D.p2 == 0)
	{
		printf("���ű�Ϊ��\n");
		return;
	}
	else
	{	
		while (1)
		{

			for (i = 0; i < D.p2; i++)
			{
				printf("����������:%s,IDΪ:%d\n", D.department[i].department_name, D.department[i].ID);
			}
	
			printf("��ѡ��Ҫ�������ŵ�ID��\n");
			scanf("%d", &ID);
			for (int i = 0; i < D.p2; i++)
			{
				if (ID == D.department[i].ID)
				{
					printf("�����������̵�����\n");
					scanf("%s", D.department[i].bussiness_List[D.department[i].p3].name);
					D.department[i].p3 += 1;
					printf("��ӳɹ���\n");
					break;
				}
				else if (i == D.p2)
				{
					printf("���޴�������");
					break;
				}
				
			}
			while (1)
			{
				int i;
				printf("\n�ٴ�ִ��--1 ��������--0\n");
				cin >> i;
				system("cls");
				;
				if (i == 0)
				{
					return;
				}
				else if (i == 1)
				{
					break;
				}
				else
				{
					printf("�������\n");
				}
			}
		}
		
	}

}

void bussiness_namechange(Data& D, int i, int j) //�����������޸�
{
	printf("�������µ�����������");
	scanf("%s", D.department[i].bussiness_List[j].name);
	printf("�޸ĳɹ�");
}

void bussiness_IDchange(Data& D, int i, int j) //��������ID�޸�
{
	int a;
	printf("������:%s\n�������ţ�%s\n\n", D.department[i].bussiness_List[j].name, D.department[i].department_name);
	printf("�������µ���������ID\n");

	for (a = 0; a < D.p2; a++)
	{
		printf("ID=%d,%s\n", a+1,D.department[a].department_name);
	}
	scanf("%d", &a);
	strcpy(D.department[a].bussiness_List[D.department[a].p3].name, D.department[i].bussiness_List[j].name);
	printf("����������IDΪ��%s\n", D.department[a].department_name);
	D.department[i].p3--;
	D.department[a].p3++;
	printf("�޸ĳɹ�");
}

void deletebussiness(Data& D, int i, int j)//ɾ��������
{
	if (j== D.department[i].p3-1)
	{
		D.department[i].p3 -= 1;
	}
	else
	{ 
		for (; j < D.department[i].p3-2; j++)
		{
			D.department[i].bussiness_List[j] = D.department[i].bussiness_List[j+1];
		}
		D.department[i].p3--;
	}
	printf("ɾ���ɹ�");
}

void researchbussiness(Data& D) //��ѯ������
{
	printf("������Ҫ��ѯ�����̵����֣�\n");
	char name[20];
	scanf("%s", &name);
	int found = 0;
	for (int i = 0; i < D.p2; i++) {
		for (int j = 0; j < D.department[i].p3; j++)
			if (strcmp(name, D.department[i].bussiness_List[j].name) == 0) {
				printf("���ҳɹ�\n");
				printf("ѡ����Ҫ���еĲ���");
				int A = 0;
				printf("1 �޸�����������\n");
				printf("2 ɾ��������\n");
				scanf("%d", &A);
				switch (A) {
				case 1:
					bussiness_namechange(D, i, j);
					break;
				case 2:
					deletebussiness(D, i, j);
					break;
				default:
					printf("�����˴��������");
				}

				found = 1;
			}
	}
	if (!found) {
		printf("����ʧ��\n");
	}
}


void bussinessmanagement(Data& D)
{
	while (1)
	{
		int i = 0;
		printf("��ѡ��\n");
		printf("1 ���������\n");
		printf("2 ��ѯ������\n");
		scanf("%d", &i);
		system("cls");
		switch (i) {
		case 1:
			addbussiness(D);
			break;
		case 2:
			researchbussiness(D);
			break;
		default:
			printf("�����˴��������");
			break;
		}

	}
}


//��ӻ


void function9(Data& D)
{

}
void department_add(Data& D)//��Ӳ���
{
	int i = 1;
	while (i == 1)
	{
		cout << "�����벿������:" << endl;
		cin >> D.department[D.p2].department_name;
		cout << "�����벿�Ÿ�����:" << endl;
		cin >> D.department[D.p2].Minister;
		D.department[D.p2].ID = 1 + D.p2;
		D.p2++;

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}

}

void department_locate(Data& D)//��ѯ����
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "������Ҫ��ѯ�Ĳ���ID��" << endl;
		cin >> key;
		for (int i = 0; i < D.p2; i++)
		{
			if (key == D.department[i].ID)
			{
				cout << "��������Ϊ��" << D.department[i].department_name << endl;
				cout << "���Ÿ�����Ϊ��" << D.department[i].Minister << endl;
			}

		}

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}

}

void department_revise(Data& D)//�޸Ĳ���
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "������Ҫ�޸ĵĲ���ID��" << endl;
		cin >> key;
		for (int i = 0; i < D.p2; i++)
		{
			if (key == D.department[i].ID)
			{
				cout << "�����������޸�Ϊ��" << endl;
				cin >> D.department[i].department_name;
				cout << "�����Ÿ������޸�Ϊ��" << endl;
				cin >> D.department[i].Minister;
				break;
			}
		}
		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}
}

void department_shanchu(Data& D)//ɾ������
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "������Ҫɾ���Ĳ���ID��" << endl;
		cin >> key;
		for (int i = 0; i < D.p2; i++)
		{
			if (key == D.department[i].ID)
			{
				for (int j = i; j < D.p2-1; j++)
				{
					D.department[j] = D.department[j + 1];
				}
				D.p2--;
			}
		}

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}
}
void member_add(Data& D)
{
	int i = 1;
	while (i == 1)
	{
		cout << "����������:" << endl;
		cin >> D.number[D.p1].name;
		cout << "�����벿��:" << endl;
		cin >> D.number[D.p1].department_name;
		D.number[D.p1].ID = D.p1 + 1;
		D.p1++;

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}
}

void number_locate(Data& D)
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "������Ҫ��ѯ�ĳ�ԱID��" << endl;
		cin >> key;
		for (int i = 0; i < D.p1; i++)
		{
			if (key == D.number[i].ID)
			{
				cout << "����:" << D.number[i].name << endl;
				cout << "����:" << D.number[i].department_name << endl;
				cout << "ְλ:" << D.number[i].duty << endl;
				cout << "ѧ��:" << D.number[i].ID << endl;
				break;
			}

		}
		if (i == D.p1)\
		{
			printf("����ʧ��");
		}

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}
}

void number_revise(Data& D)
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "������Ҫ�޸ĵĳ�ԱID��" << endl;
		cin >> key;
		for (int i = 0; i < D.p1; i++)
		{
			if (key == D.number[i].ID)
			{	
				cout << "ѧ��:" << D.number[i].ID << endl;
				cout << "ԭ����:" << D.number[i].name << endl;
				cout << "��Ϊ:" << endl;
				cin >> D.number[i].name;
				cout << "ԭ����:" << D.number[i].department_name << endl;
				cout << "��Ϊ:" << endl;
				cin >> D.number[i].department_name;
				cout << "�޸�ǰְλ:" << D.number[i].duty << endl;
				cout << "��Ϊ:" << endl;
				cin >> D.number[i].duty;
				cout << endl;
				
			}
		}
			while (1)
			{
				int i;
				printf("\n�ٴ�ִ��--1 ��������--0\n");
				cin >> i;
				system("cls");
				;
				if (i == 0)
				{
					return;
				}
				else if (i == 1)
				{
					break;
				}
				else 
				{
					printf("�������\n");
				}
			}


	}
}
void mumber_tuituan(Data& D)//ɾ����Ա
{
	int i = 1;
	int j;
	while (i == 1)
	{
		int key;
		cout << "������Ҫ�˳���Ա��ID��" << endl;
		cin >> key;
		for (i = 0; i < D.p1; i++)
		{
			if (key == D.number[i].ID)
			{
				for (j = i; j <D.p1-1 ; j++)
				{
					D.number[j] = D.number[j + 1];
				}
				D.p1--;
				break;
			}

		}

		while (1)
		{
			int i;
			printf("\n�ٴ�ִ��--1 ��������--0\n");
			cin >> i;
			system("cls");
			;
			if (i == 0)
			{
				return;
			}
			else if (i == 1)
			{
				break;
			}
			else 
			{
				printf("�������\n");
			}
		}
	}
}
