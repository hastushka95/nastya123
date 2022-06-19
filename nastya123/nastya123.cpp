// nastya123.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

/*void helloworld() {
	cout << "hello";
}
string helloworld2() {
	string str = "helloworld";
return str;
}
int summa(int a, int b );
int main()
{
	int a, b;
	cout << summa(3, 5) +36 ;

}int summa(int a, int b = 0) {
	return a + b;*/
/* c = 15;
void f() {
	::c += 5;//: give to c view in everywhere
} ///global for view in all functions
/*void a(int b) {
	int a = 6;
	a += b;
	cout << a  << endl;
}
int main(){
	int a = 6; 
	cout << a << endl;
	a += 12;
	cout << a << endl;
	a += 2;
	cout << a << endl;

	a (12);
	a (2);
	*/
/*void main() {
	cout << c << std::endl;
	f();
	cout << c << endl;*/
/*void showrec(int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout <<" + ";
		}
		cout << endl;
	}
}
void main(){
	showrec(6,8);
cout << endl << endl;
showrec(9, 4);

	}*/
/**int maxnumb(int a, int b) {
	//1 type
	if (a > b)
		return a;
	else
		return b;
	// 2 type 
	if (a > b)
		return a;
	return b;
	// 3 type 
	return a > b ? a : b;
	//4 type
	return max(a, b );
}*/
/*char znak(int a, int b) {
	if (a == b)
		return '=';
	else if (a > b)
		return ' >';
	else
		return '<';}
		*/
/*void factorial(int a) {
	int f = 1;
	for ( i = 1; i <= a; i++) {
		f += i;
	}
	cout << f;
}
int main() {
	factorial(4);
}*/
/*bool issimple(int a) {
	int count = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) count++;

}
	return ( count > 1) ? false : true;
}
int counter(int arr[]){
int count=0;
for(int i=0; i<s; i++){

if (issimple(arr[i])) count++;
}
return count 
cout<< counter(arr,5);
/*int  cube(int c) {
	return c * c * c;
}*/
/*bool isnegativeorpositive(int a) {
	return a > 0 ? true : false;
}
int main() {
	cout << isnegativeorpositive(-6) ? cout << "true" : cout << "false";
}*/
/*void f(int arr[]) {
	arr[1] = 15;
}
int main() {
	int arr[4] = { 5,4,6,7 };
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	f(arr);
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}
}*/
/*void maxandindex(int arr[]) {
	int maxmunber = arr[0];
	int index = 0;
	for (int i = 0; i < 4; i++) {
		if (maxmunber < arr[i]) {
			maxmunber = arr[1];
			index = i;
		}
	}
	cout << "max" << maxmunber << endl << "max index" << index;
}
int main() {

	int arr[4] = { 3,5,6,7 };
	maxandindex(arr);

	*/
/*void obratniichet(int arr[])
{
	int arr[5];
	for (int i = 0, j = 3; i < 5; i++, j--) {
		arr[i] = arr[j];
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}
void obratnii2(int arr[], int s) {
	for (int i = 0, j = s - 1; i < s; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
	int main() {
		arr[5] = { 4,5,6,7,4 };
		obratniichet( arr, 5);
		for (int i = 0; i < 4; i++) {
			cout << arr[i] << " ";
		}
	}*/
/*void sortedasc9(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			};
				
			}
		}
 }
{
void  sorteddesc(int arr[], int size ) {}
void sortarray(int arr[], int size, bool flag = false) {
	flag ? sorteasc(arr, size) : sortdesk(arr, size);

}
void show(int arr[],int size){
	for (int i = 0; i < size; i++) {
		cout << endl;
	}
	int main() {
		int arr[5] = { 1,2,3,4,5 };
		sortarray(arr, 5);
		show(arr, 5);
		sortarray(arr, 5, true);
		show(arr, 5);

	}*/
int gorizontal, vertical;
bool step(int c, int  d) {
	if (abs(gorizontal - c) == 2 && abs(vertical - d) == 1 && c<=8 && d<=8) {
		gorizontal = c;
		vertical = d;
	}
	else if (abs(gorizontal - c) == 1 && abs(vertical - d) == 2 && c <= 8 && d <= 8) {
		gorizontal = c;
		vertical = d;
	}
	else {
		cout << "no step \n";
		return false;
	}
	return true;
}
void showboard(int a, int b) {
	char c = '_';
	char h = 'k';
	cout << " ";
	for (int i = 1; i < 9; i++) {
		cout << i << " ";

	}
	cout << endl;
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			cout << '|' ;
			(a == i && b == j) ? cout << h : cout << c;
		}
		cout << '|' << endl;
	}
}
int main() {
	int gorizontal, vertical;
	cout<<" game : \n\n";
	cout << "where step  by horse?\n " << "number 1";
	cin >> gorizontal;
	cout << " step 2";
	cin >> vertical;
	showboard(gorizontal, vertical);
	int c, d;
	do {
		cout << " where to go? \n";
		cin >> c;
		cout << " step 2";
		cin >> d;
		system("cls");
		step(c, d) ? showboard(gorizontal, vertical) : showboard(gorizontal, vertical);
	} while (c>0&& d>0);
	
	

}
// game step of horse
 
// desk
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
