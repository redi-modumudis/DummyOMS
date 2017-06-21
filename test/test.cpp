#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	string filename="C:\\TR\\work\\On board Assignment\\OMS\\OMS\\Order11.txt";
	ifstream file(filename); // pass file name as argment
	string linebuffer;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0)continue;

		cout<<linebuffer<<endl;

	}
	return 0;
}