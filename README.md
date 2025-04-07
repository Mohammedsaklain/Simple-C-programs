# C-programs

## 1. String Pointers ##
```C
/*Note:*/ char M = '!'; 
          char *N = &M;  // "&" Address of Operator
          printf("%c", *N); // "*" Value of 
```
```C
         /* Creation of Strings */
         char STR[5] = {'H','E','L','L','O'};
         char STR[]  = "String";

         /* String Literals */
         char * StringLiteral = "Hello Github";

         /* Pointer for String */
         char arr[] = "Hello"; 
         char *ptr = arr;   // pointing pointer ptr to starting address of the array arr
         
         /* Dereferencing String Pointer */
         printf("%c", *ptr);
         printf("%c", *(ptr + 1));

         /* Array of Strings */
         char str[4][12] = {
         "June", 
         "July", 
         "August", 
         "September" }  // In each String, Null character '/0' will be added

```