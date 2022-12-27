# Programmer
HW12 problem B

Given n cups of coffee, the i_th cup of coffee has the effect that make you write a_i lines of code and a_i will be decreasing order.

Each cup of coffee can only be druck for once.
You need to write m lines of code. 
In a day when you drink a cup of coffee, the second cup of coffee will loss it's effect by 1 and the thrid cup of coffee will loss it's effect by 2 ... and so on. 

You need to find out what's the minimum number of days that you can finish m lines of code.

#Input 

  First line contains one integer t(1<= t <=10) which means the number of testcases.
  Each testcases contains two lines. 
  Fist line contains two integer n (1<=n<=2*10^5), m(1<=m<=10^9)
  Second line contains n numbers a_i(1<=a_i<=10^9)
  
#Output

  For each testcase print only one number which means the minimum number of days that you can finish mm lines of code.
  Remember to print \n at the end of output.


Solution:

choosing the max cup of coffee to be the first one, and using the binary search to find the corresponding coffee.
