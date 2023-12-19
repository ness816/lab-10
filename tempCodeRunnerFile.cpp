#include <iostream>
#include <iomanip>
#include <cmath>
#include <strimg>
#include <fstream>
#include <cstdlib>


using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt")
    while (getline(source,textline))
	{
		sum += stof(textline.c_str());
        sum_of_square += pow(stof(textline.c_str()),2);
        count++;
	}
    source.close();

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << sqrt ((sum_of_square/count)-((sum*sum)/(count*count)));
}