//
//  ViewController.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

//
//  Session3.h
//  ObjectiveCBasics
//
//  Created by Pavankumar Arepu on 21/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

/*
 Objective C Basics:
 
 
 Objective-C is general-purpose language that is developed on top of C Programming language by adding features of Small Talk programming language making it an object-oriented language. It is primarily used in developing iOS and Mac OS X operating systems as well as its applications.
 
 
 Structure of an Objective C Language:
 
 A Objective-C program basically consists of the following parts:
 •	Preprocessor Commands
 •	Interface
 •	Implementation
 •	Method
 •	Variables
 •	Statements & Expressions
 •	Comments
 
 Tokens in Objective-C
 Semicolon,Comments,Identifiers,Keywords
 
 
 ---------------------------------------------------------------------------------------------------
 1) Identifiers:
 
 
 
 An Objective-C identifier is a name used to identify a variable, function, or any other user-defined item.
 
 Accepted:
 
 An identifier starts with a letter A to Z or a to z or an underscore _ followed by zero or more letters, underscores, and digits (0 to 9).
 
 Rejected:
 
 Objective-C does not allow punctuation characters such as @, $, and % within identifiers. Objective-C is a case-sensitive programming language. Thus, Manpower and manpower are two different identifiers in Objective-C. Here are some examples of acceptable identifiers:
 --------------------------------------------------------------------------------------------
 
 2). KeyWords:
 
 auto else  long  switch break	enum	  register typedef case	extern return	union char	float	short unsigned const	for	signed	void continue	goto	sizeof	volatile default	if	static	while do	int	struct	_Packed double	protocol	interface	implementation NSObject	 NSInteger	NSNumber	CGFloat property	nonatomic;	retain	strong weak	unsafe_unretained;	readwrite	readonly
 
 --------------------------------------------------------------------------------------------
 
 3). DataTypes:
 
 Basic Types, Enumerated Type, Type Void, Derived Types
 
 Enumerated Types:
 
 Enumerated Types allow us to create our own symbolic names for a list of related ideas.
 
 
 enum Security_Levels
 {
 black_ops,
 top_secret,
 secret,
 non_secret
 }
 
 
 int
 main( int number_of_args, char* arg_list[] )
 {
 Security_Levels my_security_level = top_secret;
 
 if ( my_security_level == black_ops )
 {
 printf("Welcome Mister Bond\n");
 open_safe();
 open_door();
 }
 else if ( my_security_level == top_secret )
 {
 printf("Welcome Q\n");
 open_door();
 }
 else if ( my_security_level == secret )
 {
 printf("Please leave Now\n");
 }
 else if ( my_security_level == non_secret )
 {
 printf("Warning, The Police have been Called\n");
 printf("Surrender yourself to them immediately!\n");
 call_police();
 }
 
 return 0;
 }
 
 --------------------------------------------------------------------------------------------
 
 
 4.    Variable Definition in Objective-C:
 
 type variable_list;
 int i,j,k;
 
 
 type variable_list = value;
 int i = 10;
 
 
 --------------------------------------------------------------------------------------------
 5. Escape sequencMeaning
 
 
 
 
 \\	\ character  ***
 \'	' character   ***
 \"	" character  ***
 \?	? character
 \a	Alert or bell
 \b	Backspace
 \f	Form feed
 \n	Newline ***
 \r	Carriage return
 \t	Horizontal tab ---
 
 
 NSLog(@" \\ \' \" \? \a ");
 
 5) Defining Constants
 
 There are two ways in C/Objective C to define constants:
 
 Using "#define" preprocessor.
 
 Using "const" keyword.
 
 
 
 #define SCALE_LENGTH 10
 #define SCALE_WIDTH  5
 #define NEWLINE '\n'
 
 int main()
 {
 
 int area;
 
 area = SCALE_LENGTH * SCALE_WIDTH;
 NSLog(@"value of area : %d", area);
 NSLog(@"%c", NEWLINE);
 
 return 0;
 }
 
 --------------------------------------------------------------------------------------------
 6).  Operators in C/Objective C:
 
 
 Arithmetic Operators
 
 +	Adds two operands	A + B will give 30
 -	Subtracts second operand from the first	A - B will give -10
 *	Multiplies both operands	A * B will give 200
 /	Divides numerator by denominator	B / A will give 2
 %	Modulus Operator and remainder of after an integer division	B % A will give 0
 ++	Increment operator increases integer value by one	A++ will give 11
 --	Decrement operator decreases integer value by one	A-- will give 9
 
 
 Relational Operators:
 
 ==	Checks if the values of two operands are equal or not; if yes, then condition becomes true.	(A == B) is not true.
 !=	Checks if the values of two operands are equal or not; if values are not equal, then condition becomes true.	(A != B) is true.
 >	Checks if the value of left operand is greater than the value of right operand; if yes, then condition becomes true.	(A > B) is not true.
 <	Checks if the value of left operand is less than the value of right operand; if yes, then condition becomes true.	(A < B) is true.
 >=	Checks if the value of left operand is greater than or equal to the value of right operand; if yes, then condition becomes true.	(A >= B) is not true.
 <=	Checks if the value of left operand is less than or equal to the value of right operand; if yes, then condition becomes true.	(A <= B) is true.
 
 
 Logical Operators:
 
 &&	Called Logical AND operator. If both the operands are non zero then condition becomes true.	(A && B) is false.
 ||	Called Logical OR Operator. If any of the two operands is non zero then condition becomes true.	(A || B) is true.
 !	Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true, then Logical NOT operator will make false.	!(A && B) is true.
 
 BitWise Operators:
 
 
 Conditional Operators:
 
 ? :	Conditional Expression	If Condition is true ? Then value X : Otherwise value Y
 
 Loops in C and Objective C:
 
 while, do...while, for, nestedloops.
 
 
 for (fdfs in fdsfsd...)
 {
 
 }
 
 
 
 int main ()
 {
 
 for( ; ; )
 {
 NSLog(@"This loop will run forever.\n");
 }
 
 return 0;
 }
 */

/*
 #import <Foundation/Foundation.h>
 
 @interface ObjClass:NSObject
 - (void)objectiveCMethod;
 
 @end
 
 @implementation ObjClass
 
 - (void)objectiveCMethod{
 NSLog(@"Hello, World! \n");
 }
 
 @end
 
 int main()
 {
 ObjClass *objCObject = [[ObjClass alloc]init];
 [objCObject objectiveCMethod];
 return 0;
 }
 
 
 
 --------------------------------------------------------------------------------------------
 7) Defining a Method
 
 - (return_type) method_name:( argumentType1 )argumentName1
 {
 body of the function
 }
 
 Example:
 
 
 - (int) max:(int) num1 secondNumber:(int) num2
 {
 int result;
 
 if (num1 > num2)
 {
 result = num1;
 }
 else
 {
 result = num2;
 }
 
 return result;
 }
 
 
 
 Complete Example for Methods Called and Calling using interface and Implementation:
 
 #import <Foundation/Foundation.h>
 
 @interface SampleClass:NSObject
 
 - (int)max:(int)num1 andNum2:(int)num2;
 @end
 
 @implementation SampleClass
 
 //method returning the max between two numbers
 - (int)max:(int)num1 andNum2:(int)num2{
 // local variable declaration
 int result;
 
 if (num1 > num2)
 {
 result = num1;
 }
 else
 {
 result = num2;
 }
 
 return result;
 }
 
 @end
 
 int main ()
 {
 // local variable definition
 int a = 100;
 int b = 200;
 int ret;
 
 SampleClass *sampleClass = [[SampleClass alloc]init];
 
 // calling a method to get max value
 ret = [sampleClass max:a andNum2:b];
 
 NSLog(@"Max value is : %d\n", ret );
 
 return 0;
 }
 
 --------------------------------------------------------------------------------------------
 
 8)typedef
 The Objective-C programming language provides a keyword called typedef, which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers:
 
 #import <Foundation/Foundation.h>
 
 typedef struct Books
 {
 NSString *title;
 NSString *author;
 NSString *subject;
 int book_id;
 
 
 }Book;
 
 int main( )
 {
 
 Book book;
 book.title = @"Objective-C Programming";
 book.author = @"TutorialsPoint";
 book.subject = @"Programming tutorial";
 book.book_id = 100;
 NSLog( @"Book title : %@\n", book.title);
 NSLog( @"Book author : %@\n", book.author);
 NSLog( @"Book subject : %@\n", book.subject);
 NSLog( @"Book Id : %d\n", book.book_id);
 
 return 0;
 }
 
 
 
 --------------------------------------------------------------------------------------------
 
 Integer Promotion:
 
 
 9) #import <Foundation/Foundation.h>
 
 int main()
 {
 int  i = 17;
 char c = 'c'; // ascii value is 99
 int sum;
 
 sum = i + c;
 NSLog(@"Value of sum : %d\n", sum );
 
 return 0;
 }
 
 
 
 --------------------------------------------------------------------------------------------
 
 10. Objective-C Class Definitions:
 @interface Box:NSObject
 {
 //Instance variables
 double length;   // Length of a box
 double breadth;  // Breadth of a box
 }
 @property(nonatomic, readwrite) double height; // Property
 
 @end
 
 
 Allocating and initializing Objective-C Objects:
 
 Box box1 = [[Box alloc]init];     // Create box1 object of type Box
 Box box2 = [[Box alloc]init];     // Create box2 object of type Box
 
 
 
 
 
 Example:
 
 @interface Box:NSObject
 {
 double length;   // Length of a box
 double breadth;  // Breadth of a box
 double height;   // Height of a box
 }
 @property(nonatomic, readwrite) double height; // Property
 
 -(double) volume;
 
 @end
 
 @implementation Box
 
 @synthesize height;
 
 -(id)init
 {
 self = [super init];
 length = 1.0;
 breadth = 1.0;
 return self;
 }
 
 -(double) volume
 {
 return length*breadth*height;
 }
 
 @end
 
 int main( )
 {
 NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
 Box *box1 = [[Box alloc]init];    // Create box1 object of type Box
 Box *box2 = [[Box alloc]init];    // Create box2 object of type Box
 
 double volume = 0.0;     // Store the volume of a box here
 
 // box 1 specification
 box1.height = 5.0;
 
 // box 2 specification
 box2.height = 10.0;
 
 // volume of box 1
 volume = [box1 volume];
 NSLog(@"Volume of Box1 : %f", volume);
 // volume of box 2
 volume = [box2 volume];
 NSLog(@"Volume of Box2 : %f", volume);
 [pool drain];
 return 0;
 }
 
 ---------------------------------------------------------------------------------
 
1. Objective-C characteristics
 
 
@interface and @implementation.
 
 Almost everything is in form of objects.
 
 Objects receive messages and objects are often referred as receivers.
 
 Objects contain instance variables.
 
 scope.
 
 
 Properties are used to provide access to class instance variables in other classes.
 
 
 2. Inheritance
 3. Polymorphism
 
 Polymorphism handles the switching of methods between the base class and derived class based on the method implementation of the two classes.
 
 4. Categories:
 
 
 
 A category can be declared for any class, even if you don't have the original implementation source code.
 
 Any methods that you declare in a category will be available to all instances of the original class, as well as any subclasses of the original class.
 
 At runtime, there's no difference between a method added by a category and one that is implemented by the original class.
 
 ------------
 
 
 - (NSString *)reverseString:(NSString *)yourString;

 
 -----
 
 
 NSMutableString *reversedStr = [NSMutableString stringWithCapacity:[yourString length]];
 
 [yourString enumerateSubstringsInRange:NSMakeRange(0,[yourString length])
 options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
 usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) 
 {
 [reversedStr appendString:substring];
 }];
 return reversedStr;

 5. Protocols:
 
 Objective-C allows you to define protocols, which declare the methods expected to be used for a particular situation. Protocols are implemented in the classes conforming to the protocol.
 
 -----------
 
 Data storage	: NSArray, NSDictionary, and NSSet provide storage for Objective-C objects of any class.
 
 Text and strings	NSCharacterSet represents various groupings of characters that are used by the NSString and NSScanner classes. The NSString classes represent text strings and provide methods for searching, combining, and comparing strings. An NSScanner object is used to scan numbers and words from an NSString object.
 
 Dates and times	The NSDate, NSTimeZone, and NSCalendar classes store times and dates and represent calendrical information. They offer methods for calculating date and time differences. Together with NSLocale, they provide methods for displaying dates and times in many formats and for adjusting times and dates based on location in the world.
 
 Exception handling	Exception handling is used to handle unexpected situations and it's offered in Objective-C with NSException.
 
 File handling	File handling is done with the help of class NSFileManager.
 
 URL loading system	A set of classes and protocols that provide access to common Internet protocols.
 
 
 -----------
 
 
*/



