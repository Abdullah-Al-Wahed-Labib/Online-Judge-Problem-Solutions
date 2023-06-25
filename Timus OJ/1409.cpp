// Main Technique of The Solution:
// ===============================
// In this problem, we just need to calculate (l - 1) and (h - 1) respectively,
// because we need to calculate the number of the cans shot by Harry and Larry respectively.
// 
// Harry's shoot cans = (TOTAL_CANS - CANS_OF_LARRY - 1)
// Larry's shoot cans = (TOTAL_CANS - CANS_OF_HARRY - 1)
// 
// As the number of TOTAL_CANS is (h + l), the equation just simplifies, giving us the equation
// mentioned above. We needed to subtract 1 from the numbers because they shoot at a can at the last
// at the same time, so the can would not be shoot by anyone.
// 
// Memory Allocation Optimization:
// ================================
// We used unsigned short int, as the number of test cases can't be negative and
// the maximum range is 100 which is much lower than 65k (in x64 based systems).
//
// Problem Source : https://acm.timus.ru/problem.aspx?space=1&num=1409
//
// Credit    : Abdullah Al Wahed
// TimeStamp : 25 June 2023 at 8:50 AM (Dhaka Standard Time, EST)
//

#include <iostream>
using namespace std;
int main() {
	unsigned short int h = 0, l = 0;
	cin >> h;
	cin >> l;
	cout << (l - 1) << " " << (h - 1) << endl;
	return 0;
}