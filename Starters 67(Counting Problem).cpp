/*The main logic of the problem

We are splitting the array into two parts. Let's first revise the following rules:

The sum of two even numbers will always be an even number.

The sum of two odd numbers will always be an even number.

But the sum of an even and an odd number will always be an odd number.

Now let's imagine an example, we are provided a group of numbers and there is only one odd number and the rest are all even number, now what will be the sum of all the numbers? An odd number. Because all the even numbers will sum up to a even number ultimately and when this final even number is added to an odd number then it yields an odd number.

For example we are given these group of numbers

2, 4, 6, 8, 7

Here 7 is the only odd number and rest are all even. If we sum all then 2 + 4 + 6 + 8 = 20. Now we got 20 which is an even number and when even and odd numbers are added we get an odd number. See 20 + 7 = 27 which is an odd number.

So we just need 1 odd number in any one group of the array that we are splitting to make that part odd.

We need another 1 odd number in the other group to make its sum odd too.

So in total 2 odd numbers should be present in the whole array to make the sum of the individual group odd. But what if there are not 2 odd numbers in the array? What if there are 3 or 4 etc.

Whatever the case is when the number of odd elements are even then they can be distributed such that one group will always yield an odd sum and other will also yield an odd sum.

Consider one more example when number of odd elements are 4.

Then we will put one odd element in the first group and other 3 odd elements in the other group. Here the first group will result in the odd sum and the other group will also yield odd sum because all these three odd numbers will yield in one odd number and when it is added to other even elements then the second group will yield an odd sum.

Now both the groups are odd let's see few more rules:

An odd number multiplied by an odd number yields an odd number.

An even number multiplied by even number yields an even number

An even number multiplied by odd number yields an even number.

So when we multiply these two odd elements that we have as a result after summing up elements in both the groups we will get an odd product. This is why we are making sure that the sum of the first group elements should also be odd and the sum of the second group elements should also be odd.

One more condition we will check is that the number of odd elements in the array should not be zero otherwise we will never be able to make the two groups odd.

If these two conditions are satisfied we will output "Yes" else we will output "No".*/


#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int t;cin>>t;long long int n;
	while(t--){
	    cin>>n; long long int arr[n];long long  int c=0;
	    for(int i=0;i<n;i++)
	        {
	            cin>>arr[i];
	            if(arr[i]%2!=0)
	              c++;
	            
	        }     
	        if(c%2==0 and c!=0)
	          cout<<"yes"<<endl;
	        else
	          cout<<"no"<<endl;
	        
	    
	}
	return 0;
}
