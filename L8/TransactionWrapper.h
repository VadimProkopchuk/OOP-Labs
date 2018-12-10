#pragma once

template<class T> class TransactionWrapper {
	private:
		T * initial;
		T * current;
	
	public:
		TransactionWrapper() {}
		T* BeginTransaction(T&);
		T* Commit();
		T* Rollback();
		~TransactionWrapper();
};