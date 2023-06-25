
// Main Technique of The Solution:
// ===============================
// In this problem, we just need to calculate ( n * ( m + 1 )),
// because Petechkin will need the time as he needs to write if statements
// for an array of n-th element and iterating the test cases through 0-m, that's why 
// we needed to add 1 with m.
// 
// Memory Allocation Optimization:
// ================================
// We used unsigned short int, as the number of test cases can't be negative and
// the maximum range is 40k which is much lower than 65k (in x64 based systems).
//
// Problem Source : https://acm.timus.ru/problem.aspx?space=1&num=1264
//
// Credit    : Abdullah Al Wahed
// TimeStamp : 25 June 2023 at 8:00 AM (Dhaka Standard Time, EST)

#include <iostream>
using namespace std;
int main() {
	unsigned short int n = 0, m = 0;
	cin >> n;
	cin >> m;
	cout << (n * (m + 1)) << endl;
	return 0;
}