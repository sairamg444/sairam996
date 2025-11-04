#include <iostream>
#include <sstream>
using namespace std;
void rev(istringstream &ss){string w;if(!(ss>>w))return;rev(ss);cout<<w<<" ";}
int main(){string line;getline(cin,line);istringstream ss(line);rev(ss);return 0;}