#include<iostream>
using namespace std;
int main()
{
	cout<<"*#*#*#*#*#*#*#";
	cout<<"\nWorker Efficiency";
	cout<<"\n*#*#*#*#*#*#*#";
	
	float timing_hours;
	cout<<"\n\nEnter timing hours to complete the work: ";
	cin>>timing_hours;
	
	if(timing_hours>=2 && timing_hours<=3)
	{
		cout<<"Highly Efficient";
	}
	else if(timing_hours>3 && timing_hours<=4)
		{
			cout<<"Improve speed";
		}
		 else if(timing_hours>4 && timing_hours<=5)
		 		{
		 			cout<<"Provide training to improve the speed";
				}
			    else if(timing_hours>5)
					cout<<"Leave the company";
}
