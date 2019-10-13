#include <stdio.h>

int htoi(char []);

int main()
{
  long result1 ,result2, result3, result4, result5;
  char string1[] = "0x11";
  char string2[] = "11";
  char string3[] = "4B1B21C";
  char string4[] = "0x89dA4";
  char string5[] = "garbage";
  result1 = htoi(string1);
  result2 = htoi(string2);
  result3 = htoi(string3);
  result4 = htoi(string4);
  result5 = htoi(string5);
  printf("Result 1: %d\n", result1);
  printf("Result 2: %d\n", result2);
  printf("Result 3: %d\n", result3);
  printf("Result 4: %d\n", result4);
  printf("Result 5: %d\n", result5);
  return 0;
}

int htoi(char s[])
{
  int i, n, x, len;
  n = 0;
  for (i = 0; s[i] != '\0'; ++i)
  {
    if((i == 0 && s[i] == '0') || (i == 1 && s[i] == 'x')){
      continue;
    } else if(s[i] >= '0' && s[i] <= '9'){
      n = 16 * n + (s[i] - '0');
    } else if (s[i] >= 'A' && s[i] <= 'F'){
      n = 16 * n + (s[i] - '7');
    } else if (s[i] >= 'a' && s[i] <= 'f'){
      n = 16 * n + (s[i] - 'W');
    } else {
      return 0;
    }
  }
  return n; 
}

