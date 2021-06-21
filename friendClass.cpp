#friend class:
  if one class's data member's on private or protected, we can use this friend class to get the values by having friend class in base class.


#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
using namespace std;

class base{
	private:
		int A; //here we are privating this data member
	public:
		   base(){A=12;} //using constructor assigning the values
		   friend class B; //now friend class came to play
};
class B{
	public:
		void show(base& X){ //base class (crisp: as the base class has the friend class now we can use it)
			cout<<X.A;
		}
};

int main()
{
	base b;
	B A;
  //let's create two object here.When using friend class we send our base class(*then magic is done*)
	A.show(b);
}


//op:12
