#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int years;
		car (string b, string m, int y){
			brand = b;
			model = m;
			years = y;
		}
};
int main(){
	car obj1("Suzuki", "Cultus" ,2015);
	car obj2("BMW", "x5", 2018);
	cout<<obj1.brand<<"  "<< obj1.model<<" "<< obj1.years<<endl;
	cout<< obj2.brand <<" "<<obj2.model<<" "<<obj2.years;
}
