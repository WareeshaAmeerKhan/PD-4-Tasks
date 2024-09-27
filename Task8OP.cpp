#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1, string nameStd2, int ecatMarksStd2);
main()
{
	printMenu();

	string name;
	float matricMarks;
	float interMarks;
	float ecatMarks;

	string nameStd1,nameStd2;
	int ecatMarksStd1,ecatMarksStd2;

	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>matricMarks;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>interMarks;
	cout<<"Enter ECAT marks (out of 400): ";
	cin>>ecatMarks;
	calculateAggregate(name,matricMarks,interMarks,ecatMarks);

	cout<<"Student 1 Name: ";
	cin>>nameStd1;
	cout<<"Student 2 Name: ";
	cin>>nameStd2;
	cout<<"Ecat Marks of Student 1: ";
	cin>>ecatMarksStd1;
	cout<<"Ecat Marks of Student 2: ";
	cin>>ecatMarksStd2;
	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
}
     void printMenu()
     {
	cout<<"* *  ***  ***  * *  ***  **    **   *** ***  * *        *  **   * *  ***  **   **   ***  ***    ***"<<endl;       
	cout<<"* *  * *   *   * *  *    * *  *      *   *   * *       * * * *  ***   *  *    *      *   * *    * *"<<endl;
	cout<<"* *  * *   *   * *  **   **    *     *   *    *        *** * *  ***   *   *    *     *   * *    * *"<<endl;
	cout<<"* *  * *   *   * *  *    * *    *    *   *    *        * * * *  * *   *    *    *    *   * *    * *"<<endl;
	cout<<"***  * *  ***   *   ***  * *  **    ***  *    *        * * **   * *  *** **   **    ***  ***    * *"<<endl;
	cout<<"                                                                                                   "<<endl;
	cout<<"* *   *   ***   *    **  ***  * *   ***  ***  ***        **    * *    **    ***  ***  * *          "<<endl;
	cout<<"***  * *  * *  * *  *    *    ***   *    * *   *        *      * *   *       *   *    ***          "<<endl;
	cout<<"***  ***  * *  ***  * *  **   ***   **   * *   *         *      *     *      *   **   ***          "<<endl;
	cout<<"* *  * *  * *  * *  * *  *    * *   *    * *   *          *     *      *     *   *    * *          "<<endl;
	cout<<"* *  * *  * *  * *   **  ***  * *   ***  * *   *        **      *    **      *   ***  * *          "<<endl;
     }
     void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
     {
	float matric_percentage=matricMarks/1100*100*0.3;
	float inter_percentage=interMarks/550*100*0.3;
	float ecat_percentage=ecatMarks/400*100*0.4;
	float agg;
	agg=matric_percentage+inter_percentage+ecat_percentage;
	cout<<"Aggregate score for "<<name<<" is: "<<agg<<'%'<<endl;
     }
     void compareMarks(string nameStd1,int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
     {
	if(ecatMarksStd1>ecatMarksStd2)
		cout<<"1st Roll # is assigned to "<<nameStd1<<endl;
	if(ecatMarksStd1<ecatMarksStd2)
		cout<<"1st Roll # is assigned to "<<nameStd2<<endl;
     }