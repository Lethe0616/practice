#pragma once
#include<iostream>
using namespace std;

enum Color { RED, BLACK };

template<class V>
struct RBTreeNode
{
	RBTreeNode(const V& val = V(), Color color = RED)
	:_color(color)
	, _pLeft(nullptr)
	, _pRight(nullptr)
	, _pParent(nullptr)
	, _val(val)
	, _color(color)
	{ }

	RBTreeNode<V>* _pLeft;
    RBTreeNode<V>* _pRight;
	RBTreeNode<V>* _pParent;
	V _val;//������ 
	Color _color;
};

template<class V>
class RBTree
{
	typedef RBTreeNode<V> Node;
public:
	RBTree()
	{
		//����ͷ���
		_pHead = new Node;
		_pHead->_pLeft = _pHead;
		_pHead->_pRight = _pHead;
	}

	bool Insert(const V& val)
	{
		Node*& pRoot = _pHead->_pParent;//root�൱��pparent�ı���
		if (nullptr == pRoot) 
		{
			pRoot = new Node(val,BLACK);
			pRoot->_pParent = _pHead;
		}
		else
		{
			Node* pCur = pRoot;
			Node* pParent = _pHead;
			while (pCur)
			{
				pParent = pCur;
				if (val < pCur->_val)
					pCur = pCur->_pLeft;
				else if (val > pCur->_val)
					pCur = pCur->_pRight;
				else
					return false;
			}
			//�����½ڵ�
			pCur = new Node(val);
			if (val < pParent->_val)
				pParent->_pParent = pCur;
			else
				pParent->_pRight = pCur;
			pCur->_pParent = pParent;

			while(RED == pParent->_color)
			{
				Node* grandFather = pParent->_pParent; 
				if (pParent == grandFather->_pLeft)
				{
					Node* uncle = grandFather->_pRight;
					//���һ������ڵ������Ϊ��
					if (uncle && RED == uncle->_color)
					{
						pParent->_color = BLACK;
						uncle->_color = BLACK;
						grandFather->_color = RED;
						pCur = grandFather;
						pParent = pCur->_pParent;
					}
					else
					{
						//�������cur��pparent���Һ���
						if (pCur == pParent->_pRight)
						{
							RotateL(pParent);
							swap(pParent, pCur);
						}
						//�����
						grandFather->_color = RED;
						pParent->_color = BLACK;
						RotateR(grandFather);
					}
				}
				else
				{
					Node* uncle = grandFather->_pLeft;
					if (uncle && RED == uncle->_color)
					{
						pParent->_color = BLACK;
						uncle->_color = BLACK;
						grandFather->_color = RED;
						pCur = grandFather;
						pParent = pCur->_pParent;
					}
					else
					{
						if (pCur == pParent->_pLeft)
						{
							RotateR(pParent);
							swap(pParent, pCur);
						}
						pParent->_color = BLACK;
						grandFather->_color = RED;
						RotateL(grandFather);
					}
				}
			}
		}

		_pHead->_pLeft = LeftMost();
		_pHead->_pRight = RightMost();
		pRoot->_color = BLACK;
		return true;
	}

	void InOrder()
	{
		return _InOrder(GetRoot());
	}

	bool IsVaildRBTree()
	{
		Node * pRoot = GetRoot();
		if (nullptr == pRoot)
			return true;

		if (pRoot->_color != BLACK)
		{
			cout << "Υ������һ�����ڵ��Ǻ�ɫ" << endl;
			return false;
		}
		// ��ȡһ��·���к�ɫ�ڵ�ĸ���
		size_t blackCount = 0;
		Node* pCur = pRoot;
		while (pCur)
		{
			if (pCur->_color == BLACK)
				blackCount++;

			pCur = pCur->_pLeft;
		}

		size_t pathBalck = 0;
		return _IsVaildRBTree(pRoot, blackCount, pathBalck);
	}

private:
	bool _IsVaildRBTree(Node* pRoot, size_t blackCount, size_t pathCount)
	{
		if (nullptr == pRoot)
			return true;

		if (pRoot->_color == BLACK)
			pathCount++;

		Node* pParent = pRoot->_pParent;
		if (pParent != _pHead && RED == pParent->_color && RED == pRoot->_color)
		{
			cout << "Υ������3�����ܴ�������һ��ĺ�ɫ�ڵ�" << endl;
			return false;
		}
		if (nullptr == pRoot->_pLeft && nullptr == pRoot->_pRight)
		{
			if (pathCount != blackCount)
			{
				cout << "Υ������4��ÿ��·���к�ɫ�ڵ��������ͬ" << endl;
				return false;
			}
		}
		return _IsVaildRBTree(pRoot->_pLeft, blackCount, pathCount) &&
			_IsVaildRBTree(pRoot->_pRight, blackCount, pathCount);
	}

	Node* LeftMost()
	{
		Node* pCur = GetRoot();
		if (nullptr == pCur)
			return _pHead;
		while (pCur->pLeft)
			pCur = pCur->_pLeft;

		return pCur;
	}

	Node* RightMost()
	{
		Node* pCur = GetRoot();
		if (nullptr == pCur)
			return _pHead;
		while (pCur->_pRight)
			pCur = pCur->_pRight;

		return pCur;
	}

	void RotateL(Node* pParent)
	{
		Node* pSubR = pParent->_pRight;
		Node* pSunRL = pSubR->_pLeft;

		pParent->_pRight = pSunRL;
		if (pSunRL)
			pSunRL->_pParent = pParent;

		pSubR->_pLeft = pParent;
		Node* pPParent = pParent->_pParent;
		pParent->_pParent = pSubR;
		pSubR->_pParent = pPParent;

		if (pPParent == _pHead)
		{
			_pHead->_pParent = pSubR;
		}
		else
		{
			if (pPParent == pParent->_pLeft)
				pPParent->_pLeft = pSubR;
			else
				pPParent->_pRight = pSubR;
		}
	}

	void RotateR(Node* pParent)
	{
		Node* pSubL = pParent->_pLeft;
		Node* pSunLR = pSubL->_pRight;

		pParent->_pLeft = pSunLR;
		if (pSunLR)
			pSunLR->_pParent = pParent;

		pSubL->_pRight = pParent;
		Node* pPParent = pParent->_pParent;
		pParent->_pParent = pSubL;
		pSubL->_pParent = pPParent;

		if (pPParent == _pHead)
		{
			_pHead->_pParent = pSubL;
		}
		else
		{
			if (pParent == pPParent->_pLeft)
				pPParent->_pLeft = pSubL;
			else
				pPParent->_pRight = pSubL;

		}

	}

	void _InOrder(Node* pRoot)
	{
		if (pRoot)
		{
			_InOrder(pRoot->_pLeft);
			cout << pRoot->_val << " ";
			_InOrder(pRoot->_pRight);
		}
	}

private:
	Node *&GetRoot()//����rootָ�����͵�����
	{
		return _pHead->_pParent;
	}

private:
	Node* _pHead;
};
 
void TestRBTree()
{
	int a[] = { 5,3,4,1,7,8,2,6,0,9 };

	RBTree<int> t;
	for (auto e : a)
		t.Insert(e);
	t.InOrder();
	cout << endl;
	if (t.IsVaildRBTree())
		cout << "t is RBTree" << endl;
	else
		cout << "t is not RBTree" << endl;
}