/* write the gett functio*/
 #include<iostream>
#include<string.h>
using namespace std;
class Book{
	private:
		char name[50];
		int page;
		float price;
	public:
		/* create fuction */
		void setpage(int p){
			page = p;
		}
		void setprice(float pr){
			price = pr;
		}
		void setname(char *n){
			strcpy(name,n);
       }
       	string getname(){
	   	return name;
	   }
       int getpage(){
       	return page;
	   }
	   float getprice(){
	   	return price;
	   }
};
main (){
	/* Function call*/
	Book b1,b2,b3;
	cout<<"------Book 1--------"<<endl;
	b1.setname("Holy Quran");
	b1.setpage(2000);
	b1.setprice(0);
	cout<<"Book 1 page is: "<<b1.getpage()<<endl;
	cout<<"Book 1 Price is: "<<b1.getprice()<<endl;
	cout<<"Book 1 Name is: "<<b1.getname()<<endl;
		cout<<"------Book 2--------"<<endl;
	b2.setname("Applicatio Book");
	b2.setpage(1200);
	b2.setprice(30021);
	cout<<"Book 2 page is: "<<b2.getpage()<<endl;
	cout<<"Book 2 Price is: "<<b2.getprice()<<endl;
	cout<<"Book 2 Name is: "<<b2.getname()<<endl;
	
		cout<<"------Book 3--------"<<endl;
	b3.setname("powerfull country");
	b3.setpage(200);
	b3.setprice(3002.23);
	cout<<"Book 3 page is: "<<b3.getpage()<<endl;
	cout<<"Book 3 Price is: "<<b3.getprice()<<endl;
	cout<<"Book 3 Name is: "<<b3.getname()<<endl;


	
}
