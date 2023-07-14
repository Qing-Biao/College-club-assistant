#pragma once
#include"struct_bag.h"
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

//查找成员(key==ID)
int function1(Data &D)//查找成员(key==成员ID)
{
    int key,i;
    printf("请输入被查找成员ID\n");
    printf(">>>");
    scanf("%d",&key);//key==ID   !!!
    //这里缺一个查找步骤,查找出来后把该成员在通讯录表中的位置参数赋给i

    return 0;//写完这个函数后记得把  0 改成 i  

}
//添加成员
void function2(Data& D)//添加成员
{
    int j = 1;
    while (j == 1)
    {
        FILE* fp = fopen("./txl.txt", "a+");
        if (fp == NULL) {
            perror("文件打开失败原因:");
            return;
        }
        printf("请输入姓名：");
        scanf("%s", D.number[D.p1].name);
		printf("已有部门：\n");
		int a = 0;
		while (a<D.p2)
		{
			printf("部门：%s ID:%d\n",D.department[a].department_name,D.department[a].ID);
			a++;
		}
		printf("请输入部门名称:");
        scanf("%s", D.number[D.p1].department_name);
		printf("请输入进入部门ID：");
		scanf("%d", &a);
		a = a - 1;
        printf("请输入职务：");
        scanf("%s", D.number[D.p1].duty);
        printf("请输入等级：");
        scanf("%d", &D.number[D.p1].level);
        D.number[D.p1].ID = 2001+D.p1;
        fprintf(fp, "%s %s %s %d\n", D.number[D.p1].name, D.number[D.p1].department_name, D.number[D.p1].duty, D.number[D.p1].level);
        fclose(fp);
		D.department[a].number[D.department[a].department_p1];
		D.department[a].department_p1++;
		D.p1++;
        printf("\n继续添加--1\n结束--0\n");
        printf("--添加成功!--\n\n");
        scanf("%d", &j);
        system("cls");
    }
    return;
}

//删除成员
void function3(Data& D,int i)//删除成员
{
    //删除D.number[i]上的成员
    //同时通讯表中i以后的数据往进一位



}
void showinclubformation(Data& D)//展示社团所有信息
{
	if (D.club.ID == 0)
	{
		printf("社团ID为空\n");
	}
	else
	{
		printf("社团ID为：%d\n", D.club.ID);
	}
	if (strcmp(D.club.club_name, "空") == 0)
	{
		printf("社团名字为空\n");
	}
	else
	{
		printf("社团名字为：%s\n", D.club.club_name);
	}
	if (strcmp(D.club.nature_of_club, "空") == 0)
	{
		printf("社团性质为空\n");
	}
	else
	{
		printf("社团性质为：%s\n", D.club.nature_of_club);
	}
	if (strcmp(D.club.president, "空") == 0)
	{
		printf("社团社长为空\n");
	}
	else
	{
		printf("社团社长是：%s\n", D.club.president);
	}
	if (strcmp(D.club.slogan, "空") == 0)
	{
		printf("社团口号为空\n");
	}
	else
	{
		printf("社团口号为：%s\n", D.club.slogan);
	}
	system("pause");
	system("cls");
	return;

}

void club_namechange(Data& D)//社团名字修改
{
	printf("请输入新的社团名字:");
	scanf("%s", D.club.club_name);
	printf("修改成功");
	return;

}

void nature_of_clubchenge(Data& D)//社团性质修改
{
	printf("请输入新的社团性质:");
	scanf("%s", D.club.nature_of_club);
	printf("修改成功");
	return;

}

void presidentchange(Data& D) //社团负责人修改
{
	printf("请输入新的社团负责人:");
	scanf("%s", D.club.president);
	printf("修改成功");
	return;

}

void sloganchenge(Data& D) //社团口号修改
{
	printf("请输入新的社团口号:");
	scanf("%s", D.club.slogan);
	printf("修改成功");
	return;

}

void clubmanagement(Data& D) //社团基本信息管理
{
	FILE* fp = fopen("./clubs.txt", "a+");
	if (fp == NULL) {
		perror("clubs.txt open failed:");
		return;
	}
	int i = 0;
	printf("请选择：\n");
	printf("1 名称变动\n");
	printf("2 社团性质变动\n");
	printf("3 社团负责人变动\n");
	printf("4 社团口号变动\n");
	//printf("5 名称变动\n");
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
		printf("输入了错误的数字");
	}
	return;
	
}

//编辑成员信息
void function4(Data& D, int i)
{
    while (1)
    {
        int j;
        printf("修改姓名--1\n修改部门--2\n修改职位--3\n\n");
        printf("完成-1\n");
        printf(">>>");
        scanf("%d", &j);
        system("cls");
        switch (j)
        {
        case -1:
            return;
            break;
        case 1:
            printf("原名称:%s\n", D.number[i].name);
            printf("修改为：");
            scanf("%s", D.number[i].name);
            system("cls");
            break;
        case 2:
            printf("原部门为：%s\n",D.number[i].department_name);
            printf("修改为：");
            scanf("%s", D.number[i].department_name);
            system("cls");
            break;
        case 3:
            printf("原职位为：%s\n", D.number[i].duty);
            printf("修改为：");
            scanf("%s", D.number[i].duty);
            system("cls");
            break;
        }
    }
	return;

}
//查看积分总排名
int function8(Data& D)
{
	int i = 0;
	while (i<D.p1)
	{
		printf("积分排名：%d 学号：%d 姓名：%s 等级：%d 积分：%d \n",i+1,D.number[i].ID,D.number[i].name, D.number[i].level,D.number[i].point);
		i++;
	}
	while (1)
	{
		printf("\n返回上页 -1 返回首页 -2\n");
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
			printf("输入错误\n");
		}
	}

}
//成员等级排序(冒泡排序)
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
//查询成员等级
void function6(Data& D)
{
	while (1)
	{
		int key, i;
		printf("查询成员等级---------\n\n");
		printf("请输入被查询成员ID\n");
		printf(">>>");
		scanf("%d", &key);
		if (key < 2000 || key>2000 + D.p1)
		{
			printf("查询失败");
		}
		else
		{
			for (i = 0; i < D.p1; i++)
			{
				if (key == D.number[i].ID)
				{
					printf("--查询成功！--\n");
					printf("积分排名：%d 学号：%d 姓名：%s 等级：%d 积分：%d ", i + 1, key, D.number[i].name, D.number[i].level ,D.number[i].point);
					break;
				}

			}
		}
		printf("\n再次执行--0 结束任务--1\n");
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
			printf("输入错误\n");
		}

	}

}
//积分添加
void addpoint(Data& D,int i,int key)
{
	int a;
	int j;
	printf("原信息:\n");
	printf("积分排名：%d 学号：%d 姓名：%s 等级：%d 积分：%d\n\n ", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].level * 5 + D.number[i].point);
	printf("添加分值：\n>>>");
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
	printf("添加完成！\n");
	return;
}
//扣除积分
void decrease_point(Data& D, int i, int key) 
{
	int a;
	int j;
	printf("原信息:\n");
	printf("积分排名：%d 学号：%d 姓名：%s 等级：%d 积分：%d\n\n ", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].level * 5 + D.number[i].point);
	printf("减去分值：");
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
//成员积分管理
void function7(Data& D)
{
	while (1)
	{
		int key, i;
		printf("查询成员等级---------\n\n");
		printf("请输入被查询成员ID\n");
		printf(">>>");
		scanf("%d", &key);
		if (key < 2000 || key>2000 + D.p1)
		{
			printf("查询失败");
		}
		else
		{
			while (1)
			{
				for (i = 0; i < D.p1; i++)
				{
					if (key == D.number[i].ID)
					{
							printf("--查询成功！--\n");
							printf("积分排名：%d 学号：%d 姓名：%s 等级：%d 积分：%d \n\n", i + 1, key, D.number[i].name, D.number[i].level, D.number[i].point);
							printf("进行加分--1\n进行减分--2\n返回-1\n>>>");
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

		printf("\n再次执行--0 结束任务--1\n");
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
			printf("输入错误\n");
		}
	}
}

void addbussiness(Data& D) //添加赞助商
{
	int i, j, ID = 0;
	if (D.p2 == 0)
	{
		printf("部门表为空\n");
		return;
	}
	else
	{	
		while (1)
		{

			for (i = 0; i < D.p2; i++)
			{
				printf("部门名称是:%s,ID为:%d\n", D.department[i].department_name, D.department[i].ID);
			}
	
			printf("请选择要赞助部门的ID：\n");
			scanf("%d", &ID);
			for (int i = 0; i < D.p2; i++)
			{
				if (ID == D.department[i].ID)
				{
					printf("请输入赞助商的名称\n");
					scanf("%s", D.department[i].bussiness_List[D.department[i].p3].name);
					D.department[i].p3 += 1;
					printf("添加成功！\n");
					break;
				}
				else if (i == D.p2)
				{
					printf("查无此赞助商");
					break;
				}
				
			}
			while (1)
			{
				int i;
				printf("\n再次执行--1 结束任务--0\n");
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
					printf("输入错误\n");
				}
			}
		}
		
	}

}

void bussiness_namechange(Data& D, int i, int j) //赞助商名字修改
{
	printf("请输入新的赞助商名字");
	scanf("%s", D.department[i].bussiness_List[j].name);
	printf("修改成功");
}

void bussiness_IDchange(Data& D, int i, int j) //赞助部门ID修改
{
	int a;
	printf("赞助商:%s\n赞助部门：%s\n\n", D.department[i].bussiness_List[j].name, D.department[i].department_name);
	printf("请输入新的赞助部门ID\n");

	for (a = 0; a < D.p2; a++)
	{
		printf("ID=%d,%s\n", a+1,D.department[a].department_name);
	}
	scanf("%d", &a);
	strcpy(D.department[a].bussiness_List[D.department[a].p3].name, D.department[i].bussiness_List[j].name);
	printf("新赞助部门ID为：%s\n", D.department[a].department_name);
	D.department[i].p3--;
	D.department[a].p3++;
	printf("修改成功");
}

void deletebussiness(Data& D, int i, int j)//删除赞助商
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
	printf("删除成功");
}

void researchbussiness(Data& D) //查询赞助商
{
	printf("请输入要查询赞助商的名字：\n");
	char name[20];
	scanf("%s", &name);
	int found = 0;
	for (int i = 0; i < D.p2; i++) {
		for (int j = 0; j < D.department[i].p3; j++)
			if (strcmp(name, D.department[i].bussiness_List[j].name) == 0) {
				printf("查找成功\n");
				printf("选择你要进行的操作");
				int A = 0;
				printf("1 修改赞助商名称\n");
				printf("2 删除赞助商\n");
				scanf("%d", &A);
				switch (A) {
				case 1:
					bussiness_namechange(D, i, j);
					break;
				case 2:
					deletebussiness(D, i, j);
					break;
				default:
					printf("输入了错误的数字");
				}

				found = 1;
			}
	}
	if (!found) {
		printf("查找失败\n");
	}
}


void bussinessmanagement(Data& D)
{
	while (1)
	{
		int i = 0;
		printf("请选择：\n");
		printf("1 添加赞助商\n");
		printf("2 查询赞助商\n");
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
			printf("输入了错误的数字");
			break;
		}

	}
}


//添加活动


void function9(Data& D)
{

}
void department_add(Data& D)//添加部门
{
	int i = 1;
	while (i == 1)
	{
		cout << "请输入部门名称:" << endl;
		cin >> D.department[D.p2].department_name;
		cout << "请输入部门负责人:" << endl;
		cin >> D.department[D.p2].Minister;
		D.department[D.p2].ID = 1 + D.p2;
		D.p2++;

		while (1)
		{
			int i;
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
			}
		}
	}

}

void department_locate(Data& D)//查询部门
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "请输入要查询的部门ID：" << endl;
		cin >> key;
		for (int i = 0; i < D.p2; i++)
		{
			if (key == D.department[i].ID)
			{
				cout << "部门名称为：" << D.department[i].department_name << endl;
				cout << "部门负责人为：" << D.department[i].Minister << endl;
			}

		}

		while (1)
		{
			int i;
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
			}
		}
	}

}

void department_revise(Data& D)//修改部门
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "请输入要修改的部门ID：" << endl;
		cin >> key;
		for (int i = 0; i < D.p2; i++)
		{
			if (key == D.department[i].ID)
			{
				cout << "将部门名称修改为：" << endl;
				cin >> D.department[i].department_name;
				cout << "将部门负责人修改为：" << endl;
				cin >> D.department[i].Minister;
				break;
			}
		}
		while (1)
		{
			int i;
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
			}
		}
	}
}

void department_shanchu(Data& D)//删除部门
{
	int i = 1;
	while (i == 1)
	{
		int key;
		cout << "请输入要删除的部门ID：" << endl;
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
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
			}
		}
	}
}
void member_add(Data& D)
{
	int i = 1;
	while (i == 1)
	{
		cout << "请输入姓名:" << endl;
		cin >> D.number[D.p1].name;
		cout << "请输入部门:" << endl;
		cin >> D.number[D.p1].department_name;
		D.number[D.p1].ID = D.p1 + 1;
		D.p1++;

		while (1)
		{
			int i;
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
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
		cout << "请输入要查询的成员ID：" << endl;
		cin >> key;
		for (int i = 0; i < D.p1; i++)
		{
			if (key == D.number[i].ID)
			{
				cout << "姓名:" << D.number[i].name << endl;
				cout << "部门:" << D.number[i].department_name << endl;
				cout << "职位:" << D.number[i].duty << endl;
				cout << "学号:" << D.number[i].ID << endl;
				break;
			}

		}
		if (i == D.p1)\
		{
			printf("查找失败");
		}

		while (1)
		{
			int i;
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
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
		cout << "请输入要修改的成员ID：" << endl;
		cin >> key;
		for (int i = 0; i < D.p1; i++)
		{
			if (key == D.number[i].ID)
			{	
				cout << "学号:" << D.number[i].ID << endl;
				cout << "原姓名:" << D.number[i].name << endl;
				cout << "改为:" << endl;
				cin >> D.number[i].name;
				cout << "原部门:" << D.number[i].department_name << endl;
				cout << "改为:" << endl;
				cin >> D.number[i].department_name;
				cout << "修改前职位:" << D.number[i].duty << endl;
				cout << "改为:" << endl;
				cin >> D.number[i].duty;
				cout << endl;
				
			}
		}
			while (1)
			{
				int i;
				printf("\n再次执行--1 结束任务--0\n");
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
					printf("输入错误\n");
				}
			}


	}
}
void mumber_tuituan(Data& D)//删除成员
{
	int i = 1;
	int j;
	while (i == 1)
	{
		int key;
		cout << "请输入要退出人员的ID：" << endl;
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
			printf("\n再次执行--1 结束任务--0\n");
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
				printf("输入错误\n");
			}
		}
	}
}
