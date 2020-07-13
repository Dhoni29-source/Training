#include <iostream>
#include <vector>
using namespace std;

#define ROW 10  
#define COL 10

int main()
{
	vector<vector<int> > vec;
	int num = 20;
	for (int i=0; i<ROW; i++) {
		vector<int> v1;
		
		for (int j=0; j<COL; j++) {
		v1.push_back(num);
		num += 10;
		}
		
		vec.push_back(v1);
	}
	
	for (int  i=0; i<vec.size(); i++) {
		for (int j=0; j<vec[i].size(); j++)
			cout << vec[i][j] << " ";
		cout << endl;
	}
	return 0;
}

