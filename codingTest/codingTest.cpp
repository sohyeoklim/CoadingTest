/*OX퀴즈 8958*/
/* #include <iostream>
#include <string>

using namespace std;

int OX(string& s) {

	int cumulative = 0;
	int sum = 0;

	for (char& v : s) {
		/*
		 * O 문자일 경우 누적합을 1 증가시킨 뒤
		 * 해당 값에 대해 누적합
		 
		if (v == 'O') {
			cumulative++;
			sum += cumulative;
		}
		else {
			cumulative = 0;
		}
	}
	return sum;
}

int main(int argc, const char* argv[]) {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;

		cout << OX(s) << "\n";
	}

	return 0;
}*/


/*2743 단어 길이재기*/
/*#include <iostream>
using namespace std;

int main() {

	cout << "단어를 입력하세요 : ";
		string a;
		cin >> a;

		cout << "입력한 단어의 길이 : " << a.size() << endl;

		return 0;
}*/

/*#include<iostream>
using namespace std;

int main(void)
{
	int A_card[10] = {};
	int B_card[10] = {};
	int A = 0;
	int B = 0;

	cout << "A 10개 숫자 입력 : ";
	for (int i = 0; i < 10; i++)
	{
		cin >> A_card[i];
	}

	cout << "B 10개 숫자 입력 : ";
	for (int j = 0; j < 10; j++)
	{
		cin >> B_card[j];
	}

	for (int k = 0; k < 10; k++)
	{
		if (A_card[k] - B_card[k] > 0)
		{
			A++;
			return A;
		}

		else if (A_card[k] - B_card[k] < 0)
		{
			B++;
			return B;
		}
	}

	if (A > B)
	{
		cout << "A";
	}
	else if (A < B)
	{
		cout << "B";
	}
	else if (A = B)
	{
		cout << "D";
	}
} */

/*2884*/
/*#include <iostream>
using namespace std;

int main() {

	int hour;
	int min;

	cin >> hour;
	cin >> min;

	if (min - 45 < 0)
	{
		hour = hour - 1;
		min = min + 15;
		if (hour < 0) hour = 23;
	}

	if (min - 45 > 0)
	{
		min = min - 45;
	}

	cout << hour << " "<< min << endl;
		
	return 0;
}*/

/* 2525
#include <iostream>
using namespace std;

int main() {
	int H, M, time;

	cin >> H >> M >> time;

	H += time / 60;
	M += time % 60;

	if (M > 60) {
	
		H += 1;
		M -= 60;
	}

	if (H >= 24) {
		H -= 24;
	}

	cout << H << " " << M << endl;

	return 0;
} */

/*2480
#include <iostream>
using namespace std;

int main() {

	int A, B, C;
	cin >> A >> B >> C;

	if (A == B && A == C) {
		cout << 10000 + (A * 1000) << endl;
	}
	
	if (A == B && B != C) {
		cout << 1000 + (A * 100) << endl;
	}

	if (A == C && A != B) {
		cout << 1000 + (A * 100) << endl;
	}

	if (B == C && A != B) {
		cout << 1000 + (B * 100) << endl;
	}

	if (B != C && A != C && A != B) {
		if (A > B && A > C) {
			cout << A * 100 << endl;
		}
		else if (B > A && B > C) {
			cout << B * 100 << endl;
		}
		else {
			cout << C * 100 << endl;
		}
	}

	return 0;
} */


/*10950*/
/*#include <iostream>
using namespace std;

int main() {
	int T;
	
	cin >> T;

	int a, b = 0;
	for (int i = 0; i < T; ++i) {
		cin >> a >> b;
		cout << a + b;
	}
	return 0;
} */

/*8393
#include <iostream>
using namespace std;

int main(void) {
	int n;

	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << sum;

	return 0;
}*/


/*#include <iostream>
using namespace std;

int main(void) {
	int X, N, a, b;
	int sum = 0;

	cin >> X;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		sum += a * b;
	}

	if (X == sum)
	{
		cout << "yes" << endl;
	}
	if (X != sum)
	{
		cout << "No" << endl;
	}

	return 0;
}*/


/*#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	string lng = "long";

	int number = N / 4;

		for (int i = 1; i <= number; i++)
	{
			cout << lng << " ";
	}
		cout << "int" << endl;

		return 0;
}*/


/*#include <iostream>
using namespace std;

int main(void) {
	int t;

	cin >> t;

	int a, b;
	
	for (int i = 1; i <= t; i++) {

		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b;
	}
	return 0;
}*/


#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{

	}
}