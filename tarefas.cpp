#include <iostream>
#include <locale>
//#include <string>
using namespace std;

main(){
setlocale (LC_ALL,"Portuguese");
string nome;
float Pimpostos,Prevededor,Pfabrica,Pfinal;
 cout<<"Digite o nome do carro :";cin>>nome;
 cout<<"Digite o Pre�o de F�brica:";cin>>Pfabrica;
        Pimpostos=(Pfabrica)*0.45;
        Prevededor=(Pfabrica)*0.28;
        Pfinal=(Pfabrica)+(Pimpostos)+(Prevededor);
 
   cout<<"O nome do automovel �:"<<nome<<endl;
   cout<<"O automovel custa:"<<Pfinal<<endl;
   system("pause");
}

 

