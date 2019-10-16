#pragma once

#include<iostream>
using namespace std;
template<class T>
struct BSTNode
{
	BSTNode(const T&data=T())
		:_pleft(nullptr)
		,_pright(nullptr)
		,_data(data)
	{}

	BSTNode<T>* _pleft;
	BSTNode<T>* _pright;
	T_data;
};

template<class T>
class BSTree
{
	typedef BSTNode<T> node;
public:
	BSTree()
		:_proot(nullptr)
	{}

	~BSTree()
	{
	_destory(_proot);
	}

	node* find(const T&data)
	{
		node* pcur = _proot;
		while(pcur)
			｛
			if(data==pcur->_data)
				return pcur;
			else if(data<pcur->data)
				pcur=pcur->_pleft;
			else
				pcur=pcur->_pright;
			｝
		return nullptr;
	}

	bool insert(const T&data)
	{
		//空树
	 if(nullptr==_proot)
	 {
		 _proot=new node(data);
		 return true;
	}

	   //按照二叉搜索树的性质找当前节点在树中的位置
	 node* pcur=_proot;
	 node* pparent=nullptr;
	 while(pcur)
	 {
		pparent=pcur;
		 if(data<pcur->_data)
			 pcur=pcue->_pleft;
		 else if(data>pcur->_data)
			 pcur=pcue->_pright;
		 else
			 return false;
	 }

	 //插入节点
	 pcur=new node(data);
	 if(data<pparent->data)
		 pparent->_pleft=pcur;
	 else
		 pparent->_pright=pcur;

	 return true;
	}

	bool delete()
	{
	if(nullptr==_proot)
	{
	return false;
	}
	node* pcur=_proot;
	node* pparent=nullptr;
	while(pcur)
	{
		pparent==pcur;
		if(data==pcur->data)
			break;
		else if(data<pcur->data)
		{
		pparent==pcur;
		pcur=pcur->_pleft;
		}
     }
	if(nullptr==pcur)
		return false;

	if(nullptr==pcur->pright)
	{
		if(pcur=_proot)
			_proot=pcur->_pright;
		else
		{
		if(pcur==pparent->pleft)
			pparent->pleft=pcur->pright;
		else
			pparent->pright=pcur->pright;
		}
	}
	else if(nullptr==pcur->pright)
	{
		if(pcur==_proot)
			_proot=pcur->_pleft;
		else
		{
			if(pcur==pparent->_pleft)
				pparent->left=pcur->_pleft;
			else
				pparent->pright=pcur->pleft;
		}
	}
	else
	{
	node* pfirst=pcur->_pright;
	while(pfirst->_pleft)
	{
		pparent=pfirst;
		pfirst=pfirst->_pleft;
	}

	pcue->data=pfirst->data;
	if(pfirst==pparent->_pleft;
	pparent->_pleft=pfirst->pright;
	else
		pparent->_pright=pfirst->pright;
	pcur=pfirst;
	}

	delete pcur;
	return true;
	}


	node* leftmost()
	{
		if(nullptr==_proot)
			return nullptr;
		node* pcur=_proot;
		while(pcur->_pleft)
			pcur=pcur->_pleft;
     return pcur;
	}

	node* rightmost()
	{
		if(nullptr==_proot)
			return nullptr;
		node* pcur=_proot;
		while(pcur->_pright)
			pcur=pcur->_pright;
     return pcur;
	}

	void Inorder()
	{
		_Inorder(_proot);
	}
private:
	void _Inorder(node* proot)
	{
		if(proot)
			｛
			_Inorder(proot->_pleft)
			cout<<proot->_data<<"";
		    _Inorder(proot->_pright);
			｝
	}

	void Inorder(node *& proot)
	{
	if(proot)
	{
		_destory(proot->_pleft);
		_destory(proot->_pright);
		delete proot;
		proot=nullptr;
	}
}
private:
	node* _proot;

void TestBSTree()
{
	int a[]={5,4,6,1,7,8,2,6,0,9};
	BSTree<int>t;
	for(auto e:array)
		t.insert(e);

	cout<<t.leftmost()->_data<<endl;
	cout<<t.rightmost()->_data<<endl;
	t.Inorder();
}