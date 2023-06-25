// Main Technique of The Solution:
// ===============================
// In this problem, we just need to calculate ( 2 * ( n * a * b ),
// because we need to calculate the area of the given rectangle of the edge a and b,
// then we need to multiply the area with the number of n rectangular panels having 1 sq. m. , 
// this will give us the amount of sulphate needed in nanogram.
// Then we need to multiply with 2, as we need to cover both sides.
// 
// Memory Allocation Optimization:
// ================================
// We used unsigned short int, as the number of test cases can't be negative and
// the maximum range is 100 which is much lower than 65k (in x64 based systems).
//
// Problem Source : https://acm.timus.ru/problem.aspx?space=1&num=1293
//
// Credit    : Abdullah Al Wahed
// TimeStamp : 25 June 2023 at 8:20 AM (Dhaka Standard Time, EST)

#include <iostream>
using namespace std;
int main() {
	unsigned short int n = 0, a = 0, b = 0;
	cin >> n;
	cin >> a;
	cin >> b;
	cout << (2 * (n * a * b)) << endl;
	return 0;
}