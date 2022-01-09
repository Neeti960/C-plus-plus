TASK 4:
V1:
#include<iostream>
	using namespace std;
	

	int main()
	{
		int N = 3;
		int arr[N][N];
		for(int i = 0 ; i < N ; i++)
	  {
			for(int j = 0 ; j < N ; j++)
				cin >> arr[i][j];
		}
	  for(int i = 0 ; i < N ; i++)
	  {
			for(int j = 0 ; j < N ; j++)
				arr[i][j] = i+1;
		}
	  cout << "Resultant array : " << endl;
		for(int i = 0 ; i < N ; i++)
	  {
			for(int j = 0 ; j < N ; j++)
				cout << arr[i][j] << " ";
			cout << "\n";
		}
	  return 0;
	}
