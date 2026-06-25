#include<iostream>
using namespace std;
class outside{
	public:
		string brand;
		string model;
		int year;
		outside(string b, string m, int y);
};
     outside::outside(string b, string m, int y){
     	brand = b;
     	model = m;
     	year = y;
	 }
int main(){
	cout<<"Jobs Man \n";
	outside obj1("Suzuki", "Cultus", 2014);
	cout<< obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
	cout<<"Bussiness Man \n";
	outside obj2("BMW","x5", 2018);
	cout<< obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<endl;
}
