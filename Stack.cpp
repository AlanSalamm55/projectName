#include <iostream>

using namespace std;

int stack[5];
int top = -1;

int numOfElement() {
	return top + 1;
}

bool isFull() {

	if (top == (sizeof(stack) / sizeof(stack[0])) - 1) {
		return true;
	}
	else {
		return false;
	}
}

bool isEmpty() {

	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void push(int value) {

	if (isFull()) {
		cout << "stack is full" << endl;

	}

	else {
		top = top + 1;
		stack[top] = value;
	}

}

int pop() {

	if (!(isEmpty())) {

		int temp = stack[top];
		top--;
		return temp;

	}
	else {
		cout << "stack is empty" << endl;
		exit(1);
	}

}

void clear() {
	top = -1;
}



int main() {


	// Testing the stack functionlaity

/*cout<<"is full?: "<<isFull() << endl;
cout<<"num of element: "<<numOfElement() << endl;
cout <<"is empty?: "<< isEmpty() << endl;


cout << "before push  "<<stack[0] <<"  top   " << top << endl;
push(2);

cout << "is full?: " << isFull() << endl;
cout << "num of element: " << numOfElement() << endl;
cout << "is empty?: " << isEmpty() << endl;
cout << "after push   " << stack[0] << "  top   " << top << endl;
cout << "poping " << pop() << endl;

cout << sizeof(stack)/sizeof(stack[0])<<endl;*/


//  reverse an array with stack DS

/*int st[5] = {1,2,3,4,5};
for (int i = 0;i < (sizeof(st)/sizeof(st[0]));i++) {
	cout << st[i]<<" ";
	push(st[i]);
}

for (int i = 0;i < (sizeof(st) / sizeof(st[0]));i++) {
	int tmp = pop();
	st[i] = tmp;
}
cout << endl;
for (int i = 0;i < (sizeof(st) / sizeof(st[0]));i++) {
	cout << st[i]<<" ";
}*/


// taking input from users to work on the stack


	cout << "1. get num of element" << endl;
	cout << "2. push to stack" << endl;
	cout << "3. pop from stack" << endl;
	cout << "4. is full?" << endl;
	cout << "5. is empty?" << endl;
	cout << "6. clear the stack" << endl;

	int input = 1;
	while (input != 0) {
		cout << "enter a value to operate on the stack: " << endl;
		cin >> input;

		switch (input) {
		case 1:
			cout << "number of element is: " << numOfElement() << endl;
			break;
		case 2:
			int value;
			cout << "enter a value to push" << endl;
			cin >> value;
			push(value);
			break;
		case 3:
			cout << pop() << " was poped from stack" << endl;
			break;
		case 4:
			cout << "is full: " << isFull() << endl;
			break;
		case 5:
			cout << "is empty: " << isEmpty() << endl;
			break;
		case 6:
			clear();
			cout << "stack is cleared" << endl;
			break;
		default:
			cout << "enter a valid input" << endl;


		}
	}
	return 0;
}