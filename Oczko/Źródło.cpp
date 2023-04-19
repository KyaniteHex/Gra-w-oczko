#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <string>
using namespace std;


int main() {
	int scoretab[10]{
		50, 50, 50, 50, 50, 50, 50, 50, 50, 50 };
	int x, cn=0, z=0, points=0;
	string pic;
	string card [14]{
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
	
	string ycard[10];
	setlocale(LC_CTYPE, "Polish");
	cout << "Siema, jest to symulator gry w oczko" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "Aby rozpocz¹æ gre wciœnij dowolny przycisk" << endl;
	system("pause");
	system("cls");
	for(int i = 0; i <= 2; i++) {
		cout << "£adowanie";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		system("cls");
	}
	do {
		
		system("cls");
		srand(time(NULL));
		x = rand() % 13;
		scoretab[z] = x;
		z++;
		ycard[cn++] = card[x];
		cout << " --------------------"<<endl;
		cout << " | Posiadane karty: |"<<endl;
		cout << " |-  -  -  -  -  -  |" << endl;
		cout << " |  Karta 1: "; 
		if (ycard[0] == "") { 
			cout << " --"; 
		}else cout << ycard[0];
		if (ycard[0] == "10" || ycard[0]=="") {
			cout << "     |" << endl;
		}else cout << "      |" << endl;
		cout << " |  Karta 2: ";
		if (ycard[1] == "") {
			cout << "--";
		}
		else cout << ycard[1];
		if (ycard[1] == "10" || ycard[1]=="") {
			cout << "     |" << endl;
		}
		else cout << "      |" << endl;
		cout << " |  Karta 3: ";
		if (ycard[2] == "") {
			cout << "--";
		}
		else cout << ycard[2];
		if (ycard[2] == "10" || ycard[2]=="") {
			cout << "     |" << endl;
		}
		else cout << "      |" << endl;
		cout << " |  Karta 4: ";
		if (ycard[3] == "") {
			cout << "--";
		}
		else cout << ycard[3];
		if (ycard[3] == "10" || ycard[3]=="") {
			cout << "     |" << endl;
		}
		else cout << "      |" << endl;
		cout << " |  Karta 5: ";
		if (ycard[4] == "") {
			cout << "--";
		}
		else cout << ycard[4];
		if (ycard[4] == "10" || ycard[4]=="") {
			cout << "     |" << endl;
		}
		else cout << "      |" << endl;
		cout << " |  Karta 6: ";
		if (ycard[5] == "") {
			cout << "--";
		}
		else cout << ycard[4];
		if (ycard[5] == "10" || ycard[5] == "") {
			cout << "     |" << endl;
		}
		else cout << "      |" << endl;
		cout << " --------------------"<<endl;
		cout << endl;
		cout<<"Wylosowana karta: "<<card[x] << endl;
		cin >> pic;
		Sleep(500);
	} while (pic!="stop" && pic!="Stop");

	system("cls");
	//for(int i = 0; i <= 2; i++) {
	//	cout << "Trwa podliczanie punktów";
	//	Sleep(500);
	//	cout << ".";
	//	Sleep(500);
	//	cout << ".";
	//	Sleep(500);
	//	cout << ".";
	//	system("cls");
	//}
	x = 0;
	while (scoretab[x] < 50) {
		if (scoretab[x] <= 9) {points= points + scoretab[x] +1; }
		else if (scoretab[x] == 10) { points = points + 2; }
		else if (scoretab[x] == 11) { points = points + 3; }
		else if (scoretab[x] == 12) { points = points + 4; }
		else if (scoretab[x] == 13) { points = points + 11; }
		x++;
	}
	cout<<"   -----------------" << endl;
	cout<<"   |               |" << endl;
	cout << "   |"; cout << " Twój wynik: " << points << " |" << endl;
	cout<<"   |               |" << endl;
	cout<<"   -----------------" << endl;
	return 0;
}