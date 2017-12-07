#include <iostream>

using namespace std;

  int main(){
     int vec[3][2];
     int i;
     int j;

      int n1=0;  //Contatore 1
      int n2=0;  //Contatore 2
      int temp=0;  //Variabile di supporto
       cout<<"inserisci matricola e voto dello studente"<<endl;
       for (int i=0;i<3;i++)
         for(int j=0;j<2;j++)



        cin>>vec[i][j];
        cout<<"vediamo un po..:"<<endl;
    for (int i=0;i<3;i++)
    {



        for (int j=0;j<2;j++)
        {

        cout<<vec[i][j]<< ",";

        //ordinamento bubble sort
        }
        cout << '\n';
    }


     for(n1=0; n1<3; n1++){
         for(n2=0; n2<3-n1-1; n2++){
            if(vec[n2][1]>vec[n2+1][1]){
                    for(j=0;j<2;j++){//Scambio valori
                temp=vec[n2][j];
                 vec[n2][j]=vec[n2+1][j];
                 vec[n2+1][j]=temp;
                    }
			}
 		}
 	}
 	cout<<"sono un po disordinati....ci penso io!:"<<endl;
 	for (n1=0; n1<3; n1++)
    {

        for(j=0;j<2;j++)
        {
            cout<< vec[n1][j]<< ",";
        }

 	   cout<< '\n' ;
    }



 }
