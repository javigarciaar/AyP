#include <iostream>
using namespace std;

int main(){
	
	float long1, long2, lat1, lat2;
	int n_1=0, n_2=0, HH1=0, HH2=0, h_local1=0, h_local2=0;
	//int UTC = 1;
	
	cout<<"Ingrese la longitud y latitud de Mark: "; cin>>long1>>lat1;
	cout<<"Ingrese la longitud y latitud de Alan: "; cin>>long2>>lat2;
	
	n_1 = (int)long1/15;
	n_2 = (int)long2/15;
	
	if((long1 <= n_1*15+7.5) || (long1>=n_1*15-7.5) ){
		
		if (long1>0){
			h_local1=(10+n_1)%24;
		} else if (long1<0){
			h_local1=(10-n_1)%24;
		}
		
	}
	
	if((long2 <= n_2*15+7.5) || (long2>=n_2*15-7.5) ){
		if (long2>0){
			h_local2=(10+n_2)%24;
		} else if (long2<0){
			h_local2=(10-n_2)%24;
		}
	}
	
	cout<<endl<<"Hora local de Mark: "<<h_local1<<"UTC "<<n_1<<endl;
	cout<<"Hora local de Alan: "<<h_local2<<"UTC "<<n_2;
	
	return 0;
}
