#import <Foundation/Foundation.h>
void greet(){
printf("succeed\n");
NSInteger i = 9;
NSLog(@"%d",i);
}
int main (int argc, const char * argv[])
{
   NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
printf("Welocme\n");
greet();
   NSLog (@"hello world");
   [pool drain];
   return 0;
}
