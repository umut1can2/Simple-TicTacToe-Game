/*
Very Simple TicTacToe(XoX) Game
*/

  /// Table ///
/*
	00 01 02
	10 11 12
	20 21 22
*/

#include <iostream>
using namespace std;
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int beraberlik;

void Ciz() {
	cout << "Tictactoe\n_________" << endl << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Gir()
{
	int a;
	cout << player << " Oynuyor | " << "Tablodaki Yeri Sec: ";
	cin >> a;
	system("cls");

	if (a == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}
	else if (a == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "Belirttiginiz Yer Dolu !" << endl;
			Ciz();
			Gir();
		}
	}

}

void OyuncuDegistir() {
	if (player == 'X') {
		player = 'O';
	}
	else {
		player = 'X';
	}
}

char Kazandi() {

	//// KONTROL ////

	/// X için ///

	// Düz //
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	// Aþaðý //
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	// Çapraz //
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	/// O için ///
	// Düz //
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	// Aþaðý //
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	// Çapraz //
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	return '!';

}
int main() {
	beraberlik = 0;
	
	Ciz();
	while (1) {
		beraberlik++;
		Gir();
		Ciz();
		cout << endl;
		if (Kazandi() == 'X') {
			cout << "X Kazandi !";
			break;
		}
		else if (Kazandi() == 'O') {
			cout << "O Kazandi !";
			break;
		}
		else if (Kazandi() == '!' && beraberlik == 9) {
			cout << "Bu Tahtada Beraberlik Hukum Suruyor!" << endl;
		}
		OyuncuDegistir();
		cout << endl;
	}
	system("pause");
}