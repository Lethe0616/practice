#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

//size_t GetNextPrime(size_t prime);

template<class T>
size_t BKDRHash(const T* str)
{
	register size_t hash = 0;
	while (size_t ch = (size_t)*str++)
	{
		hash = magic * 131+ ch;
	}
	return hash;
}

template<class T>
size_t SDBMHash(const  char* str)
	{
		register size_t hash = 0;
		while (size_t ch = (size_t)*str++)
		{
			hash = 65599 * hash + ch;
		}
		return hash;
	}

template<class T>
size_t RSHash(const T* str)
{
	register size_t hash = 0;
	size_t magic = 63689;
	while (size_t ch = (size_t)*str++)
	{
		hash = magic * hash + ch;
		magic *= 378551;
	}
	return hash;
}

template<class T>
size_t APHash(const T* str)
{
	register size_t hash = 0;
	size_t ch;
	for (long i = 0; ch = (size_t)*str++; i++)
	{
		if ((i & 1) == 0)
		{
			hash ^= ((hash << 7) ^ ch ^ (hash > >3));
		}
		else
		{
			hash ^=(~ ((hash << 11) ^ ch ^ (hash >> 5)));
		}
	}
	return hash;
}

template<class T>
size_t JSHash(const T* str)
{
	if (!*str)
		return 0;
	register size_t hash = 1315423911;
	while (size_t ch = (size_t)*str++)
	{
		hash ^= ((hash << 5) ^ ch ^ (hash >> 2));
	}
	return hash;
}

template<class T>
size_t DEKHash(const T* str)
{
	if (!*str)
		return 0;
	register size_t hash = 1315423911;
	while (size_t ch = (size_t)*str++)
	{
		hash ^= ((hash << 5) ^ ch ^ (hash >> 27))^ch;
	}
	return hash;
}

template<class T>
size_t FNVHash(const T* str)
{
	if (!*str)
		return 0;
	register size_t hash = 1315423911;
	while (size_t ch = (size_t)*str++)
	{
		hash *= 16777619;
		hash ^= ch
	}
	return hash;
}