#include<iostream>
using namespace std;
void price_after_discount(string country_name,float ticket_price);
main()
{
string country_name;
float ticket_price;
cout<<"Enter the country name: ";
cin>>country_name;
cout<<"Enter the ticket price in dollars: $";
cin>>ticket_price;
price_after_discount(country_name,ticket_price);
}
void price_after_discount(string country_name,float ticket_price)
{
float price_after_discount;
if(country_name=="Pakistan")
	{
	 price_after_discount=ticket_price-(0.05*ticket_price);
	 cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
if(country_name=="Ireland")
	{
	 price_after_discount=ticket_price-(0.1*ticket_price);
	 cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
if(country_name=="India")
	{
	 price_after_discount=ticket_price-(0.2*ticket_price);
	 cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
if(country_name=="England")
	{
	 price_after_discount=ticket_price-(0.3*ticket_price);
	 cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
if(country_name=="Canada")
	{
	 price_after_discount=ticket_price-(0.45*ticket_price);
	 cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
}