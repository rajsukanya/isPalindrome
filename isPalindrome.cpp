#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
  int i, j;
  i = 0;
  j = s.length()-1;

  while(s[i]==s[j] && i<=j)
  {
   i++;
   j--;
  }

   if(j<i)
   {
    return true;
   }
   else
   {
    return false;
   }
}

int main ()
{ 
  string s, s1, s2, s3, s4;
  int i, j;
 
  s1 = "kayak";
  s2 = "canoe";
  s3 = "abccba";
  s4 = "abcdba";

  if(isPalindrome(s1))
    cout << "It is a palindrome"<<endl;
  else
    cout << "It is not a palindrome"<<endl;
  if(isPalindrome(s2))
    cout << "It is a palindrome"<<endl;
  else
    cout << "It is not a palindrome"<<endl;
  if(isPalindrome(s3))
    cout << "It is a palindrome"<<endl;
  else
    cout << "It is not a palindrome"<<endl;
  if(isPalindrome(s4))
    cout << "It is a palindrome"<<endl;
  else
    cout << "It is not a palindrome"<<endl;

/*
  for(i=0; i<s.length()-2; i++){
    for(j=i; i<s.length()-1; j++){
      if(isPalindrome(s.substr(i,j))){
        cout << "true" <<endl;

//This part is error --> infinite loop

*/

return 0;
}
