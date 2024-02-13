#include <iostream>
#include <locale>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
float area,base,altura,area1;
cout<<"digite a base do triangulo"<<endl;
cin>>base;
cout<<"digite a altura do triangulo"<<endl;
cin>>altura;
    area=(base*altura)/2;

   cout<<"A area do triangulo é:"<<area<<endl;



system("pause");
}
