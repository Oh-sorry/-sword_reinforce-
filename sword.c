#include "sword.h"

int main() {
    CursorVisible(0);
	prologue();
	title();
	menu();

	return 0;
}
void prologue(void) {

	SetColor(15);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t ���� �� ���α׷� â ���̾ƿ� ũ�⸦ 120 * 30���� ���߰� �÷������ּ���. (press enter)");
    getc(stdin);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t������ ���� ���. ����� �̸��� �����ΰ�? :    ");
	scanf("%s", &j);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t���� ����� 15, �ҳ� %s�� ������ ���۵ȴ�.\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t��� ����ϰ� ������ ��� ���� ...\n");
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t��������� ù°�� �¾ %s...\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t��簡 ��...\n");
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t�� ������ ������ ����� �Ƶ��� %s�� ���� ����...\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t���� ����⸦ ������ ����� ����,,,\n");
	getc(stdin);
	system("cls");
}
void title() {

	side();

	//��
	SetColor(4);
	gotoxy(12, 8); printf("��");
	gotoxy(14, 8); printf("��");
	gotoxy(16, 8); printf("��");
	gotoxy(18, 8); printf("��");
	gotoxy(18, 9); printf("��");
	gotoxy(16, 10); printf("��");
	gotoxy(14, 11); printf("��");

	//��
	gotoxy(20, 9); printf("��");
	gotoxy(22, 8); printf("��");
	gotoxy(22, 9); printf("��");
	gotoxy(22, 10); printf("��");
	gotoxy(22, 11); printf("��");

	//��
	gotoxy(16, 13); printf("��");
	gotoxy(18, 13); printf("��");
	gotoxy(20, 13); printf("��");
	gotoxy(22, 13); printf("��");
	gotoxy(16, 14); printf("��");
	gotoxy(16, 15); printf("��");
	gotoxy(18, 15); printf("��");
	gotoxy(20, 15); printf("��");
	gotoxy(22, 15); printf("��");
	gotoxy(22, 14); printf("��");

	//��
	SetColor(6);
	gotoxy(32, 9); printf("��");
	gotoxy(34, 9); printf("��");
	gotoxy(36, 9); printf("��");
	gotoxy(38, 9); printf("��");
	gotoxy(40, 9); printf("��");
	gotoxy(40, 10); printf("��");
	gotoxy(40, 11); printf("��");
	gotoxy(36, 11); printf("��");
	gotoxy(38, 11); printf("��");
	gotoxy(40, 12); printf("��");
	gotoxy(40, 13); printf("��");

	//��
	gotoxy(44, 8); printf("��");
	gotoxy(44, 9); printf("��");
	gotoxy(44, 10); printf("��");
	gotoxy(44, 11); printf("��");
	gotoxy(44, 12); printf("��");
	gotoxy(44, 13); printf("��");
	gotoxy(44, 14); printf("��");
	gotoxy(44, 15); printf("��");

	//��
	SetColor(2);
	gotoxy(60, 11); printf("��");

	//��
	SetColor(1);
	gotoxy(76, 9); printf("��");
	gotoxy(76, 10); printf("��");
	gotoxy(78, 8); printf("��");
	gotoxy(80, 8); printf("��");
	gotoxy(82, 8); printf("��");
	gotoxy(84, 8); printf("��");
	gotoxy(86, 8); printf("��");
	gotoxy(88, 9); printf("��");
	gotoxy(88, 10); printf("��");
	gotoxy(78, 11); printf("��");
	gotoxy(80, 11); printf("��");
	gotoxy(82, 11); printf("��");
	gotoxy(84, 11); printf("��");
	gotoxy(86, 11); printf("��");

	//��
	gotoxy(74, 14); printf("��");
	gotoxy(76, 14); printf("��");
	gotoxy(78, 14); printf("��");
	gotoxy(80, 14); printf("��");
	gotoxy(82, 14); printf("��");
	gotoxy(84, 14); printf("��");
	gotoxy(86, 14); printf("��");
	gotoxy(88, 14); printf("��");
	gotoxy(90, 14); printf("��");
	gotoxy(82, 15); printf("��");
	gotoxy(82, 16); printf("��");

	//��
	SetColor(5);
	gotoxy(98, 9); printf("��");
	gotoxy(100, 9); printf("��");
	gotoxy(102, 9); printf("��");
	gotoxy(104, 9); printf("��");
	gotoxy(106, 9); printf("��");
	gotoxy(106, 10); printf("��");
	gotoxy(106, 11); printf("��");
	gotoxy(106, 12); printf("��");
	gotoxy(106, 13); printf("��");

	//��
	gotoxy(110, 8); printf("��");
	gotoxy(110, 9); printf("��");
	gotoxy(110, 10); printf("��");
	gotoxy(110, 11); printf("��");
	gotoxy(110, 12); printf("��");
	gotoxy(110, 13); printf("��");
	gotoxy(110, 14); printf("��");
	gotoxy(110, 15); printf("��");

	SetColor(7);
	gotoxy(44, 25);
	printf(" Copyright(C)2017. by ����.");
	gotoxy(36, 26);
	printf(" Copyright(C)2017. All rights reserved by ����. ");

	while (1) {
		if (_kbhit()) {
			key = _getch();
			if (key == 27) {
				exit(0);
			}
			else
				break;
		}
		gotoxy(44, 19); printf(" < PRESS ENTER TO START >");
		Sleep(400);
		gotoxy(44, 19); printf("                            ");
		Sleep(400);

	}
	system("cls");
	return 0;
}
void menu() {

	int i;
	int h = 0;

	system("cls");

	do {
		side();

		SetColor(15);
		gotoxy(52, 8); printf("����������������������������������������\n");
		gotoxy(52, 9); printf("��                                    ��\n");
		gotoxy(52, 10); printf("��                                    ��\n");
		gotoxy(52, 11); printf("��          1. �������� ����.         ��\n");
		gotoxy(52, 12); printf("��                                    ��\n");
		gotoxy(52, 13); printf("��                                    ��\n");
		gotoxy(52, 14); printf("��          2. �������� ����.         ��\n");
		gotoxy(52, 15); printf("��                                    ��\n");
		gotoxy(52, 16); printf("��                                    ��\n");
		gotoxy(52, 17); printf("��          3. ��ȭ�ҷ� ����.         ��\n");
		gotoxy(52, 18); printf("��                                    ��\n");
		gotoxy(52, 19); printf("��                                    ��\n");
		gotoxy(52, 20); printf("��          4. ������.                ��\n");
		gotoxy(52, 21); printf("��                                    ��\n");
		gotoxy(52, 22); printf("��                                    ��\n");
		gotoxy(52, 23); printf("����������������������������������������\n");

		gotoxy(90, 4); printf("���� : %d", wood);
		gotoxy(100, 4); printf("��� : %d", gold);
		gotoxy(12, 18); printf(" ���� 1 ��� 5�� ���޵˴ϴ�.");
		gotoxy(12, 15); printf(" �޴��� �Է��ϼ��� : ");
		scanf("%d", &i);
	} while (i < 1 || i > 5);

	switch (i) {
	case 1:
		store();
		break;
	case 2:
		dungeon();
		break;
	case 3:
		upgrade();
		break;
	default:
		exit(0);
	}
	return;
}
void side(void) {


	int k;

	SetColor(3);
	gotoxy(2, 2);
	for (k = 0; k<59; k++) {
		printf("��");
	}
	gotoxy(2, 29);
	for (k = 0; k<59; k++) {
		printf("��");
	}
	gotoxy(2, 4);
	for (k = 0; k < 27; k++) {
		gotoxy(2, k + 3);
		printf("��");
	}
	gotoxy(118, 4);
	for (k = 0; k < 27; k++) {
		gotoxy(118, k + 3);
		printf("��");
	}
}
void store() {
	system("cls");

	store_side();

	SetColor(15);
	gotoxy(48, 8); printf("WELCOME! THIS IS STORE! Sir");

	gotoxy(47, 15); printf("1");

	gotoxy(52, 15); printf(" ���� ����⸦ ���");

	gotoxy(47, 19); printf("2");

	gotoxy(52, 19); printf(" ���� ����⸦ �Ǵ�");

	gotoxy(47, 23); printf("3");

	gotoxy(58, 23); printf(" ������");

	gotoxy(90, 4); printf("���� : %d", wood);
	gotoxy(100, 4); printf("��� : %d", gold);

	SetColor(15);
	gotoxy(52, 10); printf("�޴��� �����ϼ���! : ");
	scanf("%d", &i);

	if (i == 1) {
		system("cls");

		store_side();

		SetColor(12);
		gotoxy(52, 15); printf("[ ���� ����⸦ ��� ]");
		SetColor(15);
		gotoxy(52, 19); printf(" ���� ����⸦ �Ǵ� ");
		SetColor(15);
		gotoxy(58, 23); printf(" ������");

		if (gold < 5) {
			return menu();
		}
		else {
			wood++;
			gold = gold - 5;
		}

		gotoxy(90, 4); printf("���� : %d", wood);
		gotoxy(100, 4); printf("��� : %d", gold);

		getc(stdin);
	}
	if (i == 2) {
		system("cls");

		store_side();

		SetColor(15);
		gotoxy(52, 15); printf(" ���� ����⸦ ��� ");
		SetColor(12);
		gotoxy(52, 19); printf("[ ���� ����⸦ �Ǵ� ] ");
		SetColor(15);
		gotoxy(58, 23); printf(" ������");

		if (wood < 1) {
			return menu();
		}
		else {
			wood = wood - 1;
			gold = gold + 5;
		}

		gotoxy(90, 4); printf("���� : %d", wood);
		gotoxy(100, 4); printf("��� : %d", gold);

		getc(stdin);
	}
	if (i == 3) {
		system("cls");

		store_side();

		SetColor(12);
		gotoxy(58, 23); printf("[ ������ ]");
		SetColor(15);
		gotoxy(52, 15); printf(" ���� ����⸦ ���");
		SetColor(15);
		gotoxy(52, 19); printf(" ���� ����⸦ �Ǵ� ");

		gotoxy(90, 4); printf("���� : %d", wood);
		gotoxy(100, 4); printf("��� : %d", gold);

		getc(stdin);
	}

	getc(stdin);
	return menu();
}
void store_side() {

	SetColor(2);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("��");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("��");
	}
}
void dungeon() {

    h = 0;

	dungeon_ent();
	round();
}
void dungeon_ent() {
	system("cls");

    char enter[25] = "Entering the dungeon...";

	int enter_key = 0;

	dungeon_side();

	SetColor(15);
	gotoxy(44, 19);
	for(enter_key = 0; enter_key < 25; enter_key++) {
        printf("%c", enter[enter_key]);
        Sleep(100);
	}
	Sleep(2000);
	gotoxy(44, 26); printf("DDu Dun!");
	Sleep(2000);
}
void round() {

	srand((unsigned)time(NULL));

	while (h < 10) {
		a = rand() % 6;

		switch (a) {
		case 0:
			MONSTER_D();
			break;
		case 1:
			MONSTER_C();
			break;
		case 2:
			MONSTER_B();
			break;
		case 3:
			MONSTER_A();
			break;
		case 4:
			get_wood();
			break;
		case 5:
			bang();
			break;
		default:
			return 1;
		}
	}return menu();
}
void dungeon_title() {

	system("cls");

	dungeon_side();

	SetColor(4);
	gotoxy(2, 24);
	for (k = 0; k < 58; k++) {
		printf("��");
	}

	//v
	SetColor(12);
	gotoxy(44, 6); printf("��");
	gotoxy(44, 7); printf("��");
	gotoxy(46, 8); printf("��");
	gotoxy(48, 9); printf("��");
	gotoxy(50, 10); printf("��");
	gotoxy(52, 11); printf("��");
	gotoxy(54, 12); printf("��");
	gotoxy(56, 11); printf("��");
	gotoxy(58, 10); printf("��");
	gotoxy(60, 9); printf("��");
	gotoxy(62, 8); printf("��");
	gotoxy(64, 7); printf("��");
	gotoxy(64, 6); printf("��");

	//s
	SetColor(12);
	gotoxy(66, 14); printf("��");
	gotoxy(64, 13); printf("��");
	gotoxy(62, 12); printf("��");
	gotoxy(60, 12); printf("��");
	gotoxy(58, 12); printf("��");
	gotoxy(56, 13); printf("��");
	gotoxy(54, 14); printf("��");
	gotoxy(56, 15); printf("��");
	gotoxy(58, 16); printf("��");
	gotoxy(60, 16); printf("��");
	gotoxy(62, 16); printf("��");
	gotoxy(64, 17); printf("��");
	gotoxy(66, 18); printf("��");
	gotoxy(64, 19); printf("��");
	gotoxy(62, 20); printf("��");
	gotoxy(60, 20); printf("��");
	gotoxy(58, 20); printf("��");
	gotoxy(56, 19); printf("��");
	gotoxy(54, 18); printf("��");

	//��� ���
	SetColor(14);
	gotoxy(12, 13); printf("��");
	gotoxy(14, 12); printf("��");
	gotoxy(16, 11); printf("��");
	gotoxy(18, 10); printf("��");
	gotoxy(18, 10); printf("��");
	gotoxy(20, 11); printf("��");
	gotoxy(22, 11); printf("��");
	gotoxy(22, 10); printf("��");
	gotoxy(22, 9); printf("��");
	gotoxy(22, 8); printf("��");
	gotoxy(20, 8); printf("��");
	gotoxy(20, 7); printf("��");
	gotoxy(20, 6); printf("��");
	gotoxy(22, 6); printf("��");
	gotoxy(24, 6); printf("��");
	gotoxy(24, 7); printf("��");
	gotoxy(24, 8); printf("��");
	gotoxy(24, 11); printf("��");
	gotoxy(26, 10); printf("��");
	gotoxy(28, 9); printf("��");
	gotoxy(30, 8); printf("��");
	gotoxy(32, 7); printf("��");
	gotoxy(22, 12); printf("��");
	gotoxy(22, 13); printf("��");
	gotoxy(22, 14); printf("��");
	gotoxy(20, 15); printf("��");
	gotoxy(18, 16); printf("��");
	gotoxy(16, 17); printf("��");
	gotoxy(14, 17); printf("��");
	gotoxy(24, 14); printf("��");
	gotoxy(26, 13); printf("��");
	gotoxy(28, 12); printf("��");
	gotoxy(30, 13); printf("��");
	gotoxy(30, 14); printf("��");
	gotoxy(30, 15); printf("��");
	gotoxy(30, 16); printf("��");

	SetColor(15);
	gotoxy(16, 20); printf(" < ��� > %s", j);

	gotoxy(90, 4); printf("���� : %d", wood);
	gotoxy(100, 4); printf("��� : %d", gold);

	getc(stdin); getc(stdin);
}
void dungeon_side() {

	SetColor(4);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("��");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("��");
	}
}
void MONSTER_D() {

	system("cls");

	int h = 0;

	dungeon_title();

	monster_Ddot();

	SetColor(15);
	gotoxy(16, 27); printf(" 1. �ο��	2. ����ģ��");
	gotoxy(16, 26); printf(" �߻��� ���� [��] (��)�� �����ؿԴ�. : ");
	scanf("%d", &u);
	getc(stdin);

	if (u == 1) {
		SetColor(15);
		gotoxy(16, 27); printf("1 GOLD �� ����Ǿ����ϴ�.          ");
		gotoxy(16, 26); printf(" ���� [��] �� ����Ʈ�ȴ�!!                    ");
		gold++;
		getc(stdin);

		h++;
		return round;
	}
	else {
		SetColor(15);
		gotoxy(16, 27); printf("������ �����ƴ�....           ");
		gotoxy(16, 26); printf("............................            ");
		getc(stdin);

		h++;
		return round();
	}
}
void monster_Ddot() {
	int n = 0;
	int m = 0;

	SetColor(15);
	char monsterd[15][15] = {
		{0,0,0,0,0,0,1,1,1,0,0,0,0,0,0},
		{0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
		{0,0,0,1,1,0,0,0,0,0,1,1,0,0,0},
		{0,0,1,0,0,0,0,0,1,1,0,0,1,0,0},
		{0,1,1,0,0,0,0,0,1,1,0,0,1,1,0},
		{0,1,1,0,0,0,0,0,0,0,0,0,1,1,0},
		{0,1,1,0,0,0,1,1,1,0,0,0,1,1,0},
		{0,1,0,0,0,0,1,1,1,0,0,0,0,1,0},
		{0,1,0,0,0,0,1,1,1,0,0,0,0,1,0},
		{0,0,1,0,0,0,0,0,0,0,0,0,1,0,0},
		{0,0,0,1,0,0,0,0,0,0,0,1,0,0,0},
		{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0},
		{0,0,0,0,0,1,1,1,1,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	};

	for (n = 0; n < 15; n++) {
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("��");
			}
            if(monsterd[n][m] == 0) {
                printf("  ");
            }
		}
		printf("\n");
	}
}
void MONSTER_C() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//c
	SetColor(12);
	char monsterd[15][15] = {
		{ 0,0,0,0,0,1,1,1,1,1,1,0,0,0,0 },
		{ 0,0,0,0,1,0,0,0,0,0,0,1,0,0,0 },
		{ 0,1,1,1,0,0,0,0,1,1,0,0,1,0,0 },
		{ 1,0,0,0,0,0,0,0,0,1,1,0,1,0,0 },
		{ 1,0,0,0,0,0,0,0,1,1,1,0,1,0,0 },
		{ 1,0,0,0,0,1,1,0,0,0,0,0,1,0,0 },
		{ 0,1,1,1,1,0,0,0,0,0,0,0,1,0,0 },
		{ 0,1,0,0,0,0,0,1,1,0,0,1,0,0,0 },
		{ 0,0,1,1,1,1,1,0,1,1,0,1,0,0,0 },
		{ 0,1,0,0,1,0,0,1,0,0,0,0,1,0,0 },
		{ 0,1,1,1,1,0,0,1,1,1,1,0,1,0,0 },
		{ 0,0,0,0,1,1,0,0,0,0,1,0,0,1,0 },
		{ 0,0,1,1,0,0,1,1,1,1,0,0,0,1,0 },
		{ 0,1,0,1,0,0,1,0,1,0,1,0,1,0,1 },
		{ 0,1,1,1,1,1,1,0,1,1,1,1,1,1,1 }
	};

	for (n = 0; n < 15; n++) {
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("��");
			}
            if(monsterd[n][m] == 0) {
                printf("  ");
            }
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. �ο��	2. ����ģ��");
	gotoxy(16, 26); printf(" �߻��� ���� ���Ͱ� �����ؿԴ�. : ");
	scanf("%d", &y);
	getc(stdin);

	if (y == 1) {
		SetColor(15);
		gotoxy(16, 27); printf("2 GOLD �� ����Ǿ����ϴ�.          ");
		gotoxy(16, 26); printf("���� ���͸� ����Ʈ�ȴ�!!                    ");
		gold = gold + 2;
		getc(stdin);

		h++;
		return round;
	}
	else {
		SetColor(15);
		gotoxy(16, 27); printf("������ �����ƴ�....           ");
		gotoxy(16, 26); printf("............................            ");
		getc(stdin);

		h++;
		return round();
	}
}
void MONSTER_B() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//B
	SetColor(5);
	char monsterd[15][15] = {
		{ 0,0,0,0,1,1,1,1,1,0,0,1,1,1,0 },
		{ 1,1,0,1,1,1,1,1,1,1,1,1,1,1,0 },
		{ 1,1,1,1,1,1,0,0,1,1,1,1,1,0,0 },
		{ 1,1,1,1,1,0,0,1,1,1,1,1,0,0,0 },
		{ 1,1,1,0,1,1,1,1,1,0,1,0,0,0,0 },
		{ 0,1,0,0,1,1,1,0,0,0,1,0,0,0,0 },
		{ 0,0,1,1,0,0,0,0,0,0,0,1,0,0,0 },
		{ 0,0,0,1,1,1,0,0,0,1,0,1,0,0,0 },
		{ 0,0,1,1,0,0,0,1,1,0,0,0,1,0,0 },
		{ 0,1,0,1,0,0,1,0,0,0,0,0,1,1,1 },
		{ 0,1,0,1,0,0,1,0,0,0,1,0,1,0,1 },
		{ 0,0,1,1,0,0,0,1,1,1,0,0,1,0,1 },
		{ 0,1,1,1,0,0,0,0,0,1,0,0,0,1,0 },
		{ 1,0,1,0,1,1,1,1,1,0,1,0,1,0,1 },
		{ 1,1,1,1,1,1,0,0,0,0,1,1,1,1,1 }
	};
	for (n = 0; n < 15; n++) {
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("��");
			}
            if(monsterd[n][m] == 0) {
                printf("  ");
            }
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. �ο��	2. ����ģ��");
	gotoxy(16, 26); printf(" �߻��� ū ���Ͱ� �����ؿԴ�. : ");
	scanf("%d", &o);
	getc(stdin);

	if (o == 1) {
		SetColor(15);
		gotoxy(16, 27); printf("3 GOLD �� ����Ǿ����ϴ�.          ");
		gotoxy(16, 26); printf("ū ���͸� ����Ʈ�ȴ�!!                    ");
		gold = gold + 3;
		getc(stdin);

		h++;
		return round;
	}
	else {
		SetColor(15);
		gotoxy(16, 27); printf("������ �����ƴ�....           ");
		gotoxy(16, 26); printf("............................            ");
		getc(stdin);

		h++;
		return round();
	}
}
void MONSTER_A() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//A
	SetColor(9);
	char monsterd[15][15] = {
		{ 0,0,1,1,0,0,0,0,0,0,0,0,1,1,0 },
		{ 0,0,1,0,1,0,1,1,1,1,1,1,0,1,0 },
		{ 0,0,0,1,1,1,1,1,1,1,0,0,0,1,0 },
		{ 0,0,1,1,1,1,1,0,0,1,1,1,1,0,0 },
		{ 0,1,1,1,1,1,0,0,1,1,1,1,0,0,0 },
		{ 1,0,1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 0,1,0,1,1,1,1,1,1,0,0,1,0,0,1 },
		{ 1,0,1,1,0,0,0,0,0,0,1,0,0,1,0 },
		{ 1,0,0,1,1,1,1,1,1,1,0,1,1,0,1 },
		{ 1,0,1,1,1,0,0,1,0,0,0,1,0,0,1 },
		{ 0,1,1,0,1,1,1,0,1,1,0,1,1,1,0 },
		{ 1,0,0,1,0,1,0,0,0,1,1,0,1,1,1 },
		{ 1,1,1,1,1,0,1,1,1,0,0,1,0,0,1 },
		{ 0,0,1,0,1,0,1,0,1,1,1,0,1,1,0 },
		{ 0,0,1,1,1,1,1,1,1,1,1,1,1,1,0 }
	};
	for (n = 0; n < 15; n++) {
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("��");
			}
            if(monsterd[n][m] == 0) {
                printf("  ");
            }
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. �ο��	2. ����ģ��");
	gotoxy(16, 26); printf(" �߻��� ��û ū ���Ͱ� �����ؿԴ�. : ");
	scanf("%d", &p);
	getc(stdin);

	if (p == 1) {
		SetColor(15);
		gotoxy(16, 27); printf("5 GOLD �� ����Ǿ����ϴ�.          ");
		gotoxy(16, 26); printf("��û ū ���͸� ����Ʈ�ȴ�!!                    ");
		gold = gold + 5;
		getc(stdin);

		h++;
		return round;
	}
	else {
		SetColor(15);
		gotoxy(16, 27); printf("������ �����ƴ�....           ");
		gotoxy(16, 26); printf("............................            ");
		getc(stdin);

		h++;
		return round();
	}
}
void get_wood() {

	dungeon_title();

	SetColor(10);
	gotoxy(16, 27); printf(" ������ �֟m��!!!              ");
	gotoxy(16, 26); printf("                                 ");

	wood++;

	getc(stdin);

	h++;
	return round;
}
void bang() {

	dungeon_title();

	SetColor(12);
	gotoxy(16, 27); printf(" ��~~~ ��带 �ҽ��ϴ�.        ");
	gotoxy(16, 26); printf("                                 ");

	gold = gold - 1;

	getc(stdin);

	h++;
	return round;
}
void upgrade() {
	system("cls");

	upgrade_side();

	SetColor(8);
	gotoxy(2, 24);
	for (k = 0; k < 58; k++) {
		printf("��");
	}
	SetColor(15);
	gotoxy(44, 26); printf("��ȭ�ҿ� ���� �� ȯ���ϳ�~");
	getc(stdin);

	system("cls");
	upgrade_side();
	SetColor(15);
	gotoxy(90, 4); printf("���� : %d", wood);
	gotoxy(100, 4); printf("��� : %d", gold);
	gotoxy(22, 13); printf("1. ���� ��ȭ�Ѵ�!");
	gotoxy(44, 13); printf("2. �������̿� �̾߱��Ѵ�.");
	gotoxy(74, 13); printf("3. ������..");
	gotoxy(44, 26); printf("���ϴ� �޴��� �����ϰԳ� : ");
	scanf("%d", &t);

	switch (t) {
	case 1:
		reinforce();
		break;
	case 2:
		talk();
		break;
	case 3:
		return menu();
	default:
		return;
	}
	getc(stdin);

	return menu();
}
void upgrade_side() {


	int i;

	SetColor(8);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("��");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("��");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("��");
	}
}
void reinforce() {

	system("cls");

	wood = wood - 1;

	upgrade_side();

	sword_dot1();

	gotoxy(45, 27); printf("��ȭ �Ͻðڽ��ϱ�? (yes or no) : ");
	scanf("%s", yorn);

	if (!strcmp(yorn, "no")) {
		return upgrade();
	}
	if (!strcmp(yorn, "yes")) {
		result();
	}

	getc(stdin);
}
void sword_dot1() {

	int n = 0;
	int m = 0;

	SetColor(15);
	char monsterd[19][19] = {
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }
	};
	for (n = 0; n < 19; n++) {
		for (m = 0; m < 19; m++) {
			if (monsterd[n][m] == 1) {
				gotoxy(m + 49, n + 4);
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	gotoxy(50, 25); printf("< ���� �����+ %d>", Level);
}
void talk() {
	int n = 0;
	int m;

	system("cls");

	upgrade_side();

	char talk[7][34] = { "Hello welcome~", "i'm J.J", "i'm the owner of here", "and brra~ brra~~...", ".....................","and then.. get your sword upgrade", "follow me! young boy!" };

	for (n = 0; n < 7; n++) {
		for (m = 0; m < 34; m++) {
			SetColor(15);
			gotoxy(50 + m, 12 + n);
			printf("%c", talk[n][m]);
			Sleep(70);
		}system("cls");
		upgrade_side();
	}
	return upgrade();
}
void result() {

}
