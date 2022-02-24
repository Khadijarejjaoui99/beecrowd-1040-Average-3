// beecrowd 1039 Average 3
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float N1, N2, N3, N4, X;
    cin >> N1 >> N2 >> N3 >> N4;
    float Media = ((N1*2)+(N2*3)+(N3*4)+N4)/(2+3+4+1);
    
    if(Media >=7){
      cout<< "Media: " << fixed << setprecision(1) << Media << endl;
      cout<<"Aluno aprovado."<<endl;
    }else if(Media <5){
      cout<< "Media: " << fixed << setprecision(1) << Media << endl;
      cout<<"Aluno reprovado."<<endl;
    }else{
      cin >> X;
      cout<< "Media: " << fixed << setprecision(1) << Media << endl;
      cout<<"Aluno em exame."<<endl;
      cout<<"Nota do exame: "<< fixed << setprecision(1) << X << endl;
      float NewMedia= (X+Media)/2;
      if(NewMedia>=5){
        cout <<"Aluno aprovado."<<endl;
      }else{
          cout <<"Aluno reprovado."<<endl;
      }
      cout<< "Media final: " << fixed << setprecision(1) << NewMedia << endl;
    }
    system("pause");
    return 0;
}