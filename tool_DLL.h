#pragma once
#include<iostream>

#ifndef TOOL_DLL_d
#define TOOL_DLL_d

//�궨�嵼��
#ifdef TOOL_DLL__//���û�ж���DLLH �Ͷ��� DLLH __declspec(dllexport)
#define TOOL_DLL __declspec(dllexport)//����
#else
#define TOOL_DLL __declspec(dllimport)//����
#endif // DLLH__//���û�ж���DLLH �Ͷ��� DLLH 

//��д��������

//��������

TOOL_DLL int len(std::string x);
TOOL_DLL int len(int arr[]);
TOOL_DLL void sc(int n, int a[]);
TOOL_DLL int cwfgg(int a);
TOOL_DLL int pdss(int s);
TOOL_DLL int hw(int a);
TOOL_DLL int add(int x, int y);
TOOL_DLL int reauce(int x, int y);
TOOL_DLL double add(double x, double y);
TOOL_DLL std::string add(std::string x, std::string y);
TOOL_DLL double reauce(double x, double y);
TOOL_DLL void print(int x);
TOOL_DLL void print(float x);
TOOL_DLL void print(short x);
TOOL_DLL void print(long long x);
TOOL_DLL void print(double x);
TOOL_DLL void print(char x);
TOOL_DLL void print(std::string x);

#endif