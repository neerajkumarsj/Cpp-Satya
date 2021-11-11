/*
	Matrix Ex
*/

int main()
{
	Matrix <int> A;
	Matrix <int> B;
	cout << "Enter the Elements for Matrix A: ";
	cin >> A;
	cout << "Enter the Elements for Matrix B: ";
	cin >> B;

	Matrix <int> C;

	try
	{
		C = A + B;
		cout << C;
	}
	catch(ORDER_ERROR) //MAx Row: 5 and Max Col: 5
	{
		cout << "Invalid Order for Addition" << endl;
	}
}
