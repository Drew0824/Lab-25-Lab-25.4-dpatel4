#include <iostream>
using namespace std;

double findAverage(int numbers[], int size); 
int  findHighest(int numbers[], int size);	
int  findLowest(int numbers[], int size);	


int main() {
  
int rain[12];
	int numberOfMonths;
	int pos;			
	float avgOfRain; 
	int highestRain;	
	int lowestRain;	
	
	pos = 0;
	cout << "Please input the rainfall for the month  " << endl;
	cin >> rain[pos];

	while (rain[pos] != -0)
	{
		pos++;
		cout << "Please input the rainfall for the month" << endl;
		cin >> rain[pos];
	}

	numberOfMonths = pos;


	
	avgOfRain = findAverage(rain, numberOfMonths);
  

	cout << endl << "The average rainfall of all the months is " << avgOfRain << endl;

	
  highestRain = findHighest(rain, numberOfMonths);

	cout << endl << "The highest amount of rainfall is " << highestRain << endl;

	
  lowestRain = findLowest(rain, numberOfMonths);
	
  
  cout << endl << "The lowest amount of rain is " << lowestRain << endl;

}


double findAverage(int numbers[], int size)
{
	double sum = 0;		

	for (int pos = 0; pos < size; pos++)
		sum = sum + numbers[pos];

	return (sum / size);
}


int	findHighest(int numbers[], int size)
{
	int highest = numbers[0]; 
	
	for (int pos = 0; pos < size; pos++)
		if (numbers[pos] > highest)
			highest = numbers[pos];

	return highest;
}


int	findLowest(int numbers[], int size)
{
  int lowest = numbers[0];

  for (int pos = 0; pos < size; pos++)
  if (numbers[pos] < lowest)
    lowest = numbers[pos];
    return lowest;

}



