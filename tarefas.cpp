#include <iostream>
#include <locale>
//#include <string>
using namespace std;

main(){
setlocale (LC_ALL,"Portuguese");
string nome;
float Pimpostos,Prevededor,Pfabrica,Pfinal;
 cout<<"Digite o nome do carro :";cin>>nome;
 cout<<"Digite o Preço de Fábrica:";cin>>Pfabrica;
        Pimpostos=(Pfabrica)*0.45;
        Prevededor=(Pfabrica)*0.28;
        Pfinal=(Pfabrica)+(Pimpostos)+(Prevededor);
 
   cout<<"O nome do automovel è:"<<nome<<endl;
   cout<<"O automovel custa:"<<Pfinal<<endl;
   system("pause");
}

 

