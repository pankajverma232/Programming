#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;
int main(){
std::deque<int> Q;
Q.push_back(9);
Q.push_back(7);
printf("front :%d\nback :%d\n",Q.front(),Q.back());
Q.pop_front();
}
