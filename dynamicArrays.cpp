// Dynamic Arrays

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class line { // can't use struct because constructor needed
    public:
        line(){
            str = "";
            x = 0;
        }
        string str;
        int x;
};
int main() {
    int sizeOfArray = 1;
    line *lineArray = new line[sizeOfArray];
    ifstream i;
    i.open("toRead.txt");
	ofstream o;
	o.open("Output.txt");
    for(int j=0; i; j++) {
        if(j == sizeOfArray) {
            line *temp = lineArray;
            sizeOfArray++;
            lineArray = new line[sizeOfArray];
            for(int k=0;k<sizeOfArray-1; k++) {
                lineArray[k] = temp[k];
            }
            delete[] temp;
        }
        i>>lineArray[j].str;
        i>>lineArray[j].x;
    }
    i.close();
    sizeOfArray--;
    for(int j=0; j<sizeOfArray; j++) {
        //cout<<lineArray[j].str<<"\t"<<lineArray[j].x<<endl;
        o<<lineArray[j].str<<"\t"<<lineArray[j].x<<endl;
    }
	o.close();
    return 0;
}
