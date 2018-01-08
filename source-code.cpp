#include<cstdlib>
#include<iostream>
using namespace std;
int main(int argc, char*argv[])

{

	for(;;)
{

 float vize,final,vy,fy,oy,gn;


    cout<<"Vize notunuzu giriniz:"<<endl;
	cin>>vize;

	if (vize>100)
	{
		cout<<"100'den buyuk olamaz tekrar giriniz\n" ;
		cin>>vize;

	}


    cout<<"Final notunuzu giriniz:"<<endl;
	cin>>final;

	if (final>100)
	{
		cout<<"100'den buyuk olamaz tekrar giriniz\n";
		cin>>final;

	}
	 cout<<"\nVize yuzdesi giriniz";
	cin>>vy;
	 cout<<"\nFinal yuzdesi giriniz";
	cin>>fy;
    cout<<"Donem sonu notunuz : "<<(vize*vy)/100+(final*fy)/100<<endl;
	cout<<"Gecer Notu girin";
	cin>>gn;
	if((vize*40)/100+(final*60)/100>=gn)
    { cout<<"Gectiniz"<<endl;
}
else { cout<<"Kaldiniz"<<endl;
}
system("PAUSE");
}
}
