#include<iostream>
using namespace std;
void flowerShop(int red_rose,int white_rose,int tulip);
main()
{
int red_rose;
int white_rose;
int tulip;
cout<<"Red Roses: ";
cin>>red_rose;
cout<<"White Roses: ";
cin>>white_rose;
cout<<"Tulips: ";
cin>>tulip;
flowerShop(red_rose,white_rose,tulip);
}
void flowerShop(int red_rose,int white_rose,int tulip)
{
float original_price;
float discount;
float price_after_discount;
original_price=(2.00*red_rose)+(4.10*white_rose)+(2.50*tulip);
cout<<"Original Price: $"<<original_price<<endl;
if(original_price>200)
	{
	 discount=0.2*original_price;
	 price_after_discount=original_price-discount;
	 cout<<"Price after Discount: $"<<price_after_discount;
	}
if(original_price<=200)
	cout<<"No discount applied.";
}