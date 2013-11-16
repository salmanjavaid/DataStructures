#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>


using namespace std;

#define LENGTH 4


char *test(char *b)
{
  char *c =  "wasinaeemm";
  
  return c;
}

char *reverse(char b[])
{
  int l = 5;
  for (int i = 0; i < 3; i++)
    {
      std::swap(b[i], b[l]);
      l--;
    }
  return b;
}

int return_num(double a)
{
  int i = 1;
  for (i = 1; i < a; i = i++)
    {


    }
  return i;
}

int ceil_floor(double a)
{
  int temp_1 = 0;
  int temp_2 = return_num(a);
  if ((double)(temp_2 - a) > 0.5)
    {
      cout<<temp_2 - 1<<endl; 
    }
  else
    {
      cout<<temp_2<<endl;
    }
}

int max_arr(int arr[])
{
  int max = arr[0];

  for (int  i = 1; i < 5; i++)
    {
      if (arr[i] > max)
	{
	  max = arr[i];
	}
    }
  return max;
}

int min_arr(int arr[])
{
  int min = arr[0];

  for (int  i = 1; i < 5; i++)
    {
      if (arr[i] < min)
	{
	  min = arr[i];
	}
    }
  return min;
}

bool if_palindrome(char arr[])
{
  int len = 4, l = 3;
  for (int i = 0; i < len; i++)
    {
      if (arr[i] != arr[l])
	{
	  cout<<arr[i]<<" "<<arr[l]<<endl;
	  return false;
	}
      l--;
    }
  
  return true;
}

bool check_alphanumeric(string str){
  int i = 0;
  while(i < str.length()){
    if (isalnum(str[i]) == false){
      return false;
    }
    i++;
  }
  return true;
}

bool palindrome(string str){
  
  if ((str.length() % 2) == 0 && check_alphanumeric(str) && (str.length() > 1)){ /*This condition checks for length of line, alphanumeric
										  and finally to make sure number of words are even*/
    int fwd, bck; /* two integers to track the alternate words, back and forth  */
    fwd = str.length() / 2; /* start from middle  */
    bck = (str.length() / 2) - 1; /* start from middle - a  */

    while(bck > -1){  /* make sure the pointer going back is always greater than -1, 
			 we can also use fwd here, in that case, make sure fwd < str.length()  */
      if (str[fwd] == str[bck]){ /* check if the two alphabets or integers at alternate positions are the same */
	fwd++; bck--; /* if yes, move the forward one more, and back one minus,  */
      }
      else{ /* If the alphabets at any position mismatch return false*/
	return false;
      }
    }
    return true; /* all the alphabets at alternate positions match, so return true */
  }
  else{ /* One of the three starting postualtes are false so return false  */
    return false;
  }

}

int units_1(int a)
{
  int i = 1, count = 0;
  for (; i <= a ; i = i * 10)
    {
      count++;
    }
  return count;
}

int units_d(double a)
{
  int i = 1, count = 0;
  for (; i <= a ; i = i * 10)
    {
      count++;
    }
  return count;
}



char *atoi_1(int a)
{
  // convert a to string
  
  if (a < 10)
    {
      char *cpy = new char;
      
      cpy[0] = a + 48;
      return cpy;
    }
  else if (a == 10)
    {
      char *cpy = new char (2);
      cpy[0] = 49;
      cpy[1] = 48;
      return cpy;
    }
  else
    {
      int len = units_1(a);
     
      char *cpy = new char(len);
      // cout<<units_1(a)<<endl;
      int temp = a, i = len - 1;
      
      for (; temp >= 10; i--)
	{
	  int rem = temp % 10;
	  cpy[i] = rem + 48;
	  temp = temp / 10;
	}

      cpy[0] = temp + 48;
      return cpy;
    }
}


char *atoi_d(double a)
{
  cout<<units_d(a)<<endl;
  
  int temp_1 = floor(a);
  cout<<atoi_1(temp_1)<<endl;
  int temp_2 = (1 - (ceil(a) - a)) * 1000;
  cout<< (1 - (ceil(a) - a)) * 1000<<endl;
  std::string x = atoi_1(temp_1);
  std::string y = atoi_1(temp_2);
  std::string z = x + "." + y;
  cout<<z<<endl;
}

int count_words(string arr)
{
  int len = arr.length(), count = 0, i = 0, start = 0, end = 0;
  std::vector<string> str;
  std::vector<int> spaces;
  while(arr[i] == ' '){i++;}
  for (; i < len; i++)
    {
      end++;
      if (arr[i] == ' ')
	{
	   while(arr[i] == ' '){i++;}	    
	   if (i < len)
	     {
	       str.push_back(arr.substr(start, end));
	       count++;
	     }
   	       start = end;
	       end = i;

	}
    }

  for (std::vector<string>::iterator it = str.begin(); it != str.end(); ++it)
    {
      std::cout << ' ' << *it;
    }
  std::cout << '\n';


  return count;
}

std::vector<int> index_of_spaces(string arr)
{
  std::vector<int> spaces;
  int i = 0, len = arr.length(); 
  
     for (; i < len; i++)
     {
       if (arr[i] == ' ')
     	{
            spaces.push_back(i);
            while(arr[i] == ' '){i++;}	    
     	}
     }
     return spaces;
}

void words_split(string arr, std::vector<int> spaces)
{
  int i = 0, prev = 0;
  std::vector<string> str;


  for (int n = 0; n <= spaces.size(); n++)
   {
     if (i == 0)
       {
	 if (spaces[0] != 0)
	   {
	     str.push_back(arr.substr(0, spaces[0]));
	   }
       }
     else if (i < spaces.size())
       {	 
	 int k = spaces[prev] + 1;
	 while(arr[k] == ' '){k++;}
       	 str.push_back(arr.substr(k, spaces[prev + 1] - k));
     	 prev++;
       } 
     else if (i == spaces.size())
       {
	
         int k = spaces[prev] + 1;
	 while(arr[k] == ' '){k++;}
	 if (k != arr.length()){str.push_back(arr.substr(k, arr.length()));}
       }
      i++;
   }
  /*
    for (std::vector<string>::iterator it = str.begin(); it != str.end(); ++it)
    {
        std::cout << ' ' << *it;
    }
  */
  cout <<endl;
}


void spaces_split(string arr, std::vector<int> spaces)
{
  int i = 0, prev = 0;
  std::vector<string> str;


   for (int n = 0; n < spaces.size(); n++)
   {
         int k = spaces[n], i = 0;
	 while(arr[k] == ' '){k++;}
	 str.push_back(arr.substr(spaces[n], k - spaces[n]));
   }

   for (std::vector<string>::iterator it = str.begin(); it != str.end(); ++it)
   {
         std::cout << 'a' << *it<<'b'<<endl;
   }
  
  cout <<endl;
}

int words_split_1(string arr, std::vector<int> spaces)
{
  int i = 0, prev = 0, n = 0;
  std::vector<string> str;


   for (; n < spaces.size(); n++)
   {
     if (spaces[n] != 0){
         int k = spaces[n] - 1, i = 0;
	 while(arr[k] != ' '){k--; if (k < 0){k = 0; break;} }
	 if (arr[k]==' '){k++;}
	 
	 //	 cout<<arr.substr(k, spaces[n] - k)<<endl;
       
	 str.push_back(arr.substr(k, spaces[n] - k));
     }
   }
   int k = spaces[n - 1];
   while(arr[k] == ' '){k++;}
   if (k < arr.length())
     {
       str.push_back(arr.substr(k, arr.length()));
     }
   /*
   for (std::vector<string>::iterator it = str.begin(); it != str.end(); ++it)
   {
       std::cout <<*it<<endl;
   }
   */
   return str.size();
}




void reverse_sentence(string arr)
{
  int len = arr.length();
  std::vector<int> spaces = index_of_spaces(arr);
   
  int k = words_split_1(arr, spaces);
  
  
  /*
  spaces_split(arr, spaces);
    
  for (std::vector<int>::iterator it = spaces.begin(); it != spaces.end(); ++it)
    {
      std::cout <<*it<<" "<<endl;
    }
  */
  string str;
  
      int i = 0, j = k, prev = 0, fwd = arr.length(), m = 0, n = arr.length();
      while(i < j)
	{
	  while(arr[n] != ' '){n--;m++; if (n < 0){break;}}
	  string b = arr.substr(n + 1, m);
	  str.append(b);
	  str.append(" ");
	  if (n != 0)
	    {
	      while(arr[n] == ' '){n--;}
	    }
	  fwd = n;
	  i++;
	  m = 0;
	}

  cout<<arr<<endl;
  cout<<str<<endl;
}

void replace(string a, string b)
{
  int len = a.length(), count = 0;

  bool *flags = new bool[5];

  for (int i = 0;  i < len; i++){flags[i] = 0;}
  
  for (int i = 0; i < b.length(); i++)  
    {
      for(int j = 0; j < len; j++)
	{
	  if (a[j] == b[i])
	    {
	      if (flags[j] != 1){flags[j] = 1; count++;}
	    }
	}
    }
  string c;
  for(int i = 0; i < len; i++)
    {
      if (flags[i] != 1)
	{
	  c.append(1,a[i]);
	}
    }
  
  cout<<endl;
  cout<<c<<endl;
  delete[] flags;
}

void palindrome_integer(int a)
{
  int units = units_1(a) - 1, num = 1, rem = 0, div = 0, next = 0, i = 0;
  while(units > 0){num = num * 10; units--;}
  for(; i < 4; i++){
    rem = a % 10;
    div = (a - (a % num)) / num;
    next = (a % num)/ 10;
    a = next;
    num = num / 100;
    cout<<rem<<" "<<div<<" "<<next<<endl;
  }
}


bool test(int choice)
{
  if (choice == 1)
    {
       char arr[] = "abba";

       if (palindrome(arr) == 1)
	 {
	   cout<<"a palindrome"<<endl;
	 }
       else
	 {
	   cout<<"not a palindrome"<<endl;
	 }
    }
  else if (choice == 2)
    {
      cout<<atoi_1(1111)<<endl;
    }
  else if (choice == 3)
    {
      cout<<atoi_d(123.45)<<endl;
    }
  else if (choice == 4)
    {
      reverse_sentence("Bob likes dogs");
    }
  else if (choice == 5)
    {
      replace("hello", "eo");
    }
  else if (choice == 6)
    {
      palindrome_integer(12344324);
    }
  return true;

}

int test_breakpad(){
  char const *path = "mozunit.txt";
  int file_;
  file_ = open(path, O_RDWR, 0600);
  char buffer[12];
  off_t pos = 5;
  int ftrunc_ = ftruncate(file_, 7);
  cout<<strerror(errno)<<endl;
  return ftrunc_;
  /*  int _readup = read(file_, buffer, 5);
  
  cout<<buffer<<endl;
  return _readup;*/
}

/* 7 8 5 2  */

void print_array(int array[], int length){
  for(int i = 0; i < length; i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}

void move_right(int arr[], int start, int end){
  int temp = arr[end];
  for (int i = end; i > start; i--){
    std::swap(arr[i] , arr[i - 1]);
  }
  arr[start] = temp;
}


void test_move_right(int arr[], int start, int end){
  print_array(arr, LENGTH);
  move_right(arr, start, end);
  print_array(arr, LENGTH);
}

void elements_smaller(int arr[], int start, bool flag){
  if (flag == true){
    for(; start > 0; start--){
      if(arr[start] < arr[start - 1]){
	std::swap(arr[start], arr[start - 1]);
      }
    }
  }else{
    int i = 0;
    for (; i < start; i++){
      if (arr[i] > arr[start]){
	// std::swap(arr[i], arr[start]);
	move_right(arr, i, start);
	break;
      }
    }
  }
}

void insertion_sort(int arr[], int length){
  print_array(arr, length);
  
  int i = 1, j = 0;
  for(; i < length; i++){
    elements_smaller(arr, i, false);
    print_array(arr, length);
  }
  print_array(arr, length);


  /*
  print_array(arr, length);
  int i, j ,tmp;
  for (i = 1; i < length; i++)  {
    j = i;  while (j > 0 && arr[j - 1] > arr[j]){
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      j--;
    }//end of while loop
    print_array(arr,4);
  }//end of for loop
  */
}

int main(int argc, char **argv){
  int array[LENGTH] = {7, 7, 7, 1};
  insertion_sort(array, LENGTH);
  
  //  test_move_right(array, 0, 3);

  //  cout<<test_breakpad()<<endl;
   
  
  // char a[] = "salman";
  // a = "nauman";
  // cout<<reverse(a)<<endl;
  // ceil_floor(11.99);
  // int arr[5]={1,2,-1,4,2};
 
  // cout<<min_arr(arr)<<endl;
  /*
         if (palindrome(argv[1]) == 1)
	 {
	   cout<<"a palindrome"<<endl;
	 }
       else
	 {
	   cout<<"not a palindrome"<<endl;
	 }
  */
}
