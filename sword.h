#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void prologue(void);		//���ѷα�
void title(void);		//����
void menu(void);		//�޴�
void gotoxy(int x, int y);	//��ǥ
void side(void);		//�⺻�׵θ�
void store(void);		//����
void store_side(void);		//���� - �׵θ�
void round(void);		//���� ����
void dungeon(void);		//����
void dungeon_ent(void);		//���� ����
void dungeon_title(void);	//���� ����
void dungeon_side(void);	//���� - �׵θ�
void MONSTER_D(void);       //���� �� ���� 1
void MONSTER_C(void);       //���� �� ���� 2
void MONSTER_B(void);       //���� �� ���� 3
void MONSTER_A(void);       //���� �� ���� 4
void get_wood(void);        //���� ��� ������
void bang(void);            //���� ��
void upgrade(void);		//��ȭ��
void upgrade_side(void);	//��ȭ�� - �׵θ�
void reinforce(void);	//��ȭ
void sword_dot1(void);  //�� �̹���
void sword_dot2(void);  //�� �̹���
void sword_dot3(void);  //�� �̹���
void sword_dot4(void);  //�� �̹���
void talk(void);	//�������̿� �̾߱�
void result(void);  //��ȭ ���
void ending(void);  //����
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
int key;            //Ÿ��Ʋ ȭ�� �Ѿ�� Ű
int k;              //Ÿ��Ʋ ȭ�� �׵θ� ����
int u;              //���� �� 1 ����
int y;              //���� �� 2 ����
int o;              //���� �� 3 ����
int p;              //���� �� 4 ����
int t;
int h = 0;          //���� Ƚ�� �Է�
int a;				//���� ���� �Է�
int b = 0;              //��ȭ Ȯ��
int i = 0;              //for ��
int c = 0;              // �Һ� ���
char j[20];			    //���ΰ� �̸�
int wood = 3;			//���� ����� - ���� ����, ���
int gold = 15;			//���
int sword = 0;			//��
int Level = 0;			//��ȭ ��ġ
char yorn[5];			//yes or no
char n[3] = "end";      //end
int end_1 = 0;            //����

enum {                  //�۾��� �� ������
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKY_BLUE,
	DARK_RED,
	DARK_VOILET,
	DARK_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKY_BLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void CursorVisible(int blnCursorVisible)        //Ŀ�� �Ⱥ��̰� �ϴ� ��
{
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = blnCursorVisible;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); //�� �Է� �Լ�
}
void gotoxy(int x, int y)       //��ǥ ���� �Լ�
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
