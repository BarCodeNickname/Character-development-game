#include "training_UI.h"

int Project3::training_UI::fibbonacci(int n)
{
	if (n <= 2) return n;
	else {
		int f1 = 1; 
		int f2 = 1; 
		int temp; 
		for (int i = 3; i <= n; i++) {
			temp = f1 + f2;
			f1 = f2;
			f2 = temp;
		}
		return f2;
	}
	
}



int Project3::training_UI::change_price(int counter, int cost)
{
	return cost = cost + fibbonacci(counter);

}
