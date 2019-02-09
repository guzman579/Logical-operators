//LogicalOperators.cpp
//Logical operators
#include<iostream>
using namespace std;

int main()
{
	
			// create truth table for && (conditional AND) operator
			cout<<"Conditional AND (&&)\n" "------------------"<<
				"\nfalse && false  "<<(false && false)
				<<"\nfalse && true   "<<(false && true)<<
				"\ntrue && false   "<< (true && false)<<
				"\ntrue && true    "<< (true && true)<<endl;


			// create truth table for || (conditional OR) operator
			cout << "\nConditional OR (||)\n"  "------------------" <<
				"\nfalse || false   "<< (false || false) <<
				"\nfalse || true   " << (false || true) <<
				"\ntrue || false   " << (true || false) <<
				"\ntrue || true   " << (true || true)<<endl;

			// create truth table for & (boolean logical AND) operator
			cout << "\nBoolean logical AND (&)\n"  "-----------------------" <<
				"\nfalse & false   "<< (false & false)<<
				"\nfalse & true   "<< (false & true)<<
				"\ntrue & false   "<< (true & false)<<
				"\ntrue & true   "<<(true & true)<<endl;

			// create truth table for | (boolean logical inclusive OR) operator
			cout<<"\nBoolean logical inclusive OR (|)\n" "--------------------------------" <<
				"\nfalse | false   "<< (false | false) <<
				"\nfalse | true   "<< (false | true) <<
				"\ntrue | false   "<< (true | false) <<
				"\ntrue | true   "<< (true | true) << endl;

			// create truth table for ^ (boolean logical exclusive OR) operator
			cout<<"\nBoolean logical exclusive OR (^)\n"  "---------------------------------" <<
				"\nfalse ^ false   "<< (false ^ false) <<
				"\nfalse ^ true   "<< (false ^ true) <<
				"\ntrue ^ false  "<< (true ^ false) <<
				"\ntrue ^ true   "<< (true ^ true)<<endl;

			// create truth table for ! (logical negation) operator
			cout << "\nLogical NOT (!)\n"  "------------------" <<
				"\n!false   " << (!false) << "\n!true   "<< (!true)<<endl<<endl;

	// end class
	
	system("pause");
}
