#include<iostream>
#include<string>
using namespace std;
class Bio_data{
	public:
		int Roll_No;
		string name,adress,contact;
};
int main(){
     Bio_data r_object,n_object,a_object,c_object;
     r_object.Roll_No = 786;
     n_object.name = "Toseef";
     a_object.adress = "Model Town Sialkot";
     c_object.contact = "03000000000";
     
     cout << r_object.Roll_No<< endl<<
     n_object.name <<endl<<
     a_object.adress << endl<<
     c_object.contact <<endl;
}
