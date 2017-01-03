
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main(){

string line;
ifstream inFile;
//inFile.open("/Volumes/Forde Lab General/Naghmeh/Optical Tweezers/Analysis/Experiments/Elastin-DNA/20110413(Elastin-DNA,Nice)/1/b/359998trap.txt");
//inFile.open("/Users/Naanaa/Desktop/2b.txt");
int linenum=0;
while(getline (inFile ,line))
{

    cout<<linenum<< ": "<< line;
    linenum++;

}
inFile.close();
cout<< linenum;

    return 0;
}
