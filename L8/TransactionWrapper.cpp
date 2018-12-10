#include "stdafx.h"

template<class T>
T * TransactionWrapper<T>::BeginTransaction(T& obj)
{
	if (this->initial != nullptr) {
		delete initial;
	}

	this->initial = new T(obj);
	this->current = new T(obj);

	return this->current;
}

template<class T>
T * TransactionWrapper<T>::Commit()
{
	T* buffer = this->current;
	this->current = NULL;
	this->initial = NULL;

	return buffer;
}

template<class T>
T * TransactionWrapper<T>::Rollback()
{
	T* buffer = this->initial;
	this->current = NULL;
	this->initial = NULL;

	return buffer;
}

template<class T>
TransactionWrapper<T>::~TransactionWrapper()
{
	delete this->initial;
}
