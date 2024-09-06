#include <iostream>
using namespace std;
//initialize 180 deg starting point
int startingDegree = 180;
int main(int const argc, char* argv[]){
	//Check if correct number of arguments issued (c++ counts program launch as an argument....)
	if(argc == 3)
	{
		int r = stoi(argv[1]);
		int f = stoi(argv[2]);
		//This gets the rate of 180 degree rotations in a period then adds it to one to account for 180 * 1 + 180 * (f/r)
		double degreesRotated = (((double) f / (double) r)+1);
		//Multiplies the rate just found to 180 to find what the final degree is.
		int finalDegree = (degreesRotated * startingDegree);
		//Modulus by 180 to find remainder to allow for horizontal laying of waffle iron
		if((finalDegree%180) > 90)
			finalDegree += 180 - (finalDegree%180);
		else
			finalDegree -= (finalDegree%180);
		//if the result is an odd factor of 180 like 180 itself (180 * 1) then it is laying up, but if even it is laying down
		if((finalDegree/180)%2)
			cout << "up" << endl;
		else
			cout << "down" << endl;
	}
	else
		cout << "Invalid arguments" << endl;
	return 0;
}

