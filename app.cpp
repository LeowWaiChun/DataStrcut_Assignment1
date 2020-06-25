#define        _CRT_SECURE_NO_WARNINGS
#include    <iostream>
#include    <fstream>
#include    <cstdlib>
#include    <cstdio>
#include    <ctime>
#include    <string>
#include    "BST.h"
#include    "Student.h"

using namespace std;

bool readFile(char *, BST *);
int menu();

int main() {
    system("pause");
    return 0;
}

bool readFile(char *fileName, BST *bst)
{
    string dumData, stuName1, stuName2;
    Student stuInfo;
    ifstream filePath(fileName);
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuInfo.id;
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuName1;
    filePath >> stuName2;
    dumData = stuName1 + " " + stuName2;
    strcpy(stuInfo.name, dumData.c_str());
    getline(filePath, dumData);
    dumData.erase(1, 10);
    strcpy(stuInfo.address, dumData.c_str());
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuInfo.DOB;
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuInfo.phone_no;
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuInfo.course;
    for (int i = 0; i < 2; i++)
    {
        filePath >> dumData;
    }
    filePath >> stuInfo.cgpa;

    bst->insert(stuInfo);
}
