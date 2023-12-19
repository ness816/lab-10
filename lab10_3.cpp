//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";



#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
	{
		sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
	}
    source.close();

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << sqrt ((sum_of_square/count)-((sum*sum)/(count*count)));
}