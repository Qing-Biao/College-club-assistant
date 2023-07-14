#pragma once
#include"struct_bag.h"
#include"function_bag.h"
#include<stdlib.h>
void function_a(Data& D) {
    FILE* fp = fopen("./txl.txt", "a+");
    if (fp == NULL) {
        perror("");
        return;
    }
    int i = 0;
    while (!feof(fp)) {
        fscanf(fp, "%s %s %s %d", D.number[i].name, D.number[i].department_name, D.number[i].duty, &D.number[i].level);
        if (feof(fp))
            break;
        i++;
        D.number[D.p1].ID = 2001 + D.p1;
        D.p1++;
    }
    int j = i;
}
void function_a2(Data& D) {
    FILE* fp = fopen("./point.txt", "a+");
    if (fp == NULL) {
        perror("");
        return;
    }
 
}
void function_b(Data& D)
{
    
    FILE* fp = fopen("./club.txt", "a+");
    if (fp == NULL) {
        perror("");
        return;
    }
    int i = 0;
    while (!feof(fp)) {
    fscanf(fp, "%s %s", D.department[i].department_name, D.department[i].Minister);
    if (feof(fp))
        break;
    D.department[i].ID = i + 1;
    i++;
    D.p2++;
    }

}
void function_c(Data& D) {

    FILE* fp = fopen("./bussinesslist1.txt", "a+");
    FILE* pf = fopen("./bussinesslist2.txt", "a+");
    if (fp == NULL) {
        perror("bussinesslist1.txt open failed:");
        return;
    }
    if (pf == NULL) {
        perror("bussinesslist1.txt open failed:");
        return;
    }
    int i = 0;
    while (!feof(fp)) {
        fscanf(fp, "%s", D.department[0].bussiness_List[i].name);
        if (feof(fp))
            break;
        i++;
        D.department[0].p3++;
    }
    int j = 0;
    while (!feof(pf)) {
        fscanf(pf, "%s", D.department[1].bussiness_List[j].name);
        if (feof(pf))
            break;
        j++;
        D.department[1].p3++;
    }
}
void function_d(Data& D) {
    FILE* fp = fopen("./activity1.txt", "a+");
    FILE* pf = fopen("./activity2.txt", "a+");
    if (fp == NULL) {
        perror("activity1.txt open failed:");
        return;
    }
    if (pf == NULL) {
        perror("activity2.txt open failed:");
        return;
    }
    int i = 0;
    while (!feof(fp)) {
        fscanf(fp, "%s", D.department[0].activities_list[i].activity_name);
        if (feof(fp))
            break;
        i++;
        D.department[0].p4++;
    }
    int j = 0;
    while (!feof(pf)) {
        fscanf(pf, "%s", D.department[1].activities_list[j].activity_name);
        if (feof(pf))
            break;
        j++;
        D.department[1].p4++;
    }
}
void function_e(Data& D){
    FILE * fp = fopen("./clubs.txt","a+");
if (fp == NULL) {
    perror("club.txt open failed");
    return;
}
    fscanf(fp, "%s %s %s %s", D.club.club_name, D.club.nature_of_club, D.club.president, D.club.slogan);
}
    