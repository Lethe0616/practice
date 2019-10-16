#include<map>
#include<string>

#include<iostream>
using namespace std;
 
#if 0
int main()
{
	map<string,string> m;
	m.insert(pair<string,string>("李逵","黑旋风"));
	m.insert(make_pair("宋江","及时雨"));
	m.insert(make_pair("林冲","豹子头"));
	m.insert(make_pair("孙二娘","母夜叉")); 
	cout<<m.size()<<endl;

	map<string,string>::iterator it=m.begin();
	while(it != m.end())
	{
		cout<<it->first<<"--->"<<it->second<<endl;
		++it;
	}

	auto rit=m.rbegin();
	while(rit != m.rend())
	{
		cout<<rit->first<<"--->"<<rit->second<<endl;
		++rit;
	}

    cout<<m["孙二娘"]<<endl;
	cout<<m.size()<<endl;

	m.erase("孙二娘");

	if(m.find("孙二娘")!=m.end())
	{
		cout<<"活着"<<endl;
	}
	else
	{
		cout<<"就义"<<endl;
	}

	for(auto& e : m)
		cout<<e.first<<"--->"<<e.second<<endl;

	m.clear();
	return 0;

}
#endif

#if 0
int main()
{
	multimap<string,string> m;
	m.insert(pair<string,string>("李逵","黑旋风"));
	m.insert(make_pair("宋江","及时雨"));
	m.insert(make_pair("林冲","豹子头"));
	m.insert(make_pair("孙二娘","母夜叉")); 
	cout<<m.size()<<endl;
	cout<<m.count("李逵")<<endl;

	multimap<string,string>::iterator it=m.begin();
	while(it != m.end())
	{
		cout<<it->first<<"--->"<<it->second<<endl;
		++it;
	}

	auto rit=m.rbegin();
	while(rit != m.rend())
	{
		cout<<rit->first<<"--->"<<rit->second<<endl;
		++rit;
	}

    //cout<<m["孙二娘"]<<endl;
	//cout<<m.size()<<endl;

	m.erase("孙二娘");

	if(m.find("孙二娘")!=m.end())
	{
		cout<<"活着"<<endl;
	}
	else
	{
		cout<<"就义"<<endl;
	}

	for(auto& e : m)
		cout<<e.first<<"--->"<<e.second<<endl;

	m.clear();
	return 0;

}
#endif

#include<set>

#if 0
int  main()
{
	int array[]={4,4,3,3,2,2,6,6,5,5,7,7,1,1,8,8,0,0,9,9};
	set<int> s;
	for(auto e:array)
		s.insert(e);

	cout<<s.size()<<endl;

	if(s.find(3)!=s.end())
	{
	cout<<"3 is in set"<<endl;
	}
	else
	{
	cout<<"3 is not in set"<<endl;
	}

	s.erase(3);
	cout<<s.count(3)<<endl;

	auto it=s.begin ();
	while(it!=s.end())
	{
		cout<<*it<<" ";
		++it;
	}
	cout<<endl;
return 0;
}
#endif

int  main()
{
	int array[]={4,4,3,3,2,2,6,6,5,5,7,7,1,1,8,8,0,0,9,9};
	multiset<int> s;
	for(auto e:array)
		s.insert(e);

	cout<<s.size()<<endl;

	if(s.find(3)!=s.end())
	{
	cout<<"3 is in set"<<endl;
	}
	else
	{
	cout<<"3 is not in set"<<endl;
	}

	s.erase(3);
	cout<<s.count(3)<<endl;

	auto it=s.begin ();
	while(it!=s.end())
	{
		cout<<*it<<" ";
		++it;
	}
	cout<<endl;
return 0;
}