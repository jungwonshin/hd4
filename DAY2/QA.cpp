// QA
// oop2���� Rect �� ���� �ϼ���

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
void f1(Rect  obj) {} // call by value : ���纻����, �޸� ������尡 Ů�ϴ�.

void f2(Rect& obj) { obj.left = 10; } // call by reference : ���纻 ����
									  // ���� ���� ���� 
// ���纻�� ����, ������ �������� ������ �����Ϸ���
// const reference �� �����ϴ�.
void f3(const Rect& obj) 
{
//	obj.left = 10;  // error
}
int main()
{
	Rect r;
	f1(r);
	f2(r);
}
// ������ ���� �ڵ�� ?  - ���ڰ��� �������� �ʴ� �Լ� ���鶧!!
void f5(int n)        {} // ���� �ڵ�..
void f6(const int& n) {} // ���� �̷��Դ� ���� ������.


// �Լ� ���� �޴� ���
// 1. ���ڰ��� �����ϰ� �ʹ� - out parameter
//    => �����͵� ����      void inc(int* p) { ++(*p);}
//    => ������ �����ϴ�    void inc(int& r) { ++r;}

// 2. ���ڰ��� �������� �ʴ� ��� - in parameter
//    ���ڰ�
//    primitive type �̸� : call by value�� �ϼ���!  foo(int n)
//    user define type�̸� : const reference        foo(const Rect& r) 
// ���ۿ��� "c++ core guideline" �˻��� ������.. 1��° ��ũ

// �ڵ带 �ۼ��Ҷ� "�̷��� �ϴ°� ����" => ���� guide line �̶�� �մϴ�.
// �Ӻ���� : MISRA-C, MISRA-C++
// �������� C++ �ڵ� ��Ģ : "c++ core guideline"  
