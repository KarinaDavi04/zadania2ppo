//bêdê poprawiaæ, bo wiem ¿e to nie jest poprawnie
#include <iostream>
#include <fstream>
using namespace std;
fstream File;
 
int main() { 
string t;
char g = '#';
char h = '$';
char j = '*';
File.open("hasla.txt",ios::in); 
while(!File.eof()){

File >>t;
cout<<t<<"\n";
if(t=g|h|j){
File.open("pasword.txt",ios::in); 
File << " t "<<endl; 
File.close();
}
}
File.close();
}
