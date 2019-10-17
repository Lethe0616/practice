#pragma once

template<class k,class v>
struct VALTreenode
{
	VALTreenode<const pair<k,v>&data)
		:_pleft(nullptr)
		,_pright(nullptr)
		,_data(dara)

	VALTreenode<k,v>* _pleft;
	VALTreenode<k,v>* _pright;
	pair<k,v> _data;
	int _bf;
};

template<class k,class v>
class VALTree
{
	typedef VALTreenode<k,v> node;
public:
    VALTree()
		:_proot(nullptr)
	{}

	bool insert(const pair,k,v>&data)
	{
	if(nullptr==_proot)
	{
		_proot=new node(data);
		return true;
	}

	node* pcur=_proot;
	node* pparent -nullptr;
	while(pcur)
	{
		if(data.first<pcur->_data.first)
			pcur=pcur->_pleft;
		else if(data.first>pcur->_data.first)
			pcur=pcur->_pright;
		else
			return false;
	}

	pcur=new node(data);
	 if(data.first<pparent->data.first)
		 pparent->_pleft=pcur;
	 else
		 pparent->_pright=pcur;

	 if(pcur==pparent->_pleft)
		 pparent->_bf--;
	 else
		 pparent->_bf++;
	}
private:
	node* _proot;