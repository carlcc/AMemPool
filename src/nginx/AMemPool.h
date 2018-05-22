//
// Created by chenchen on 18-5-22.
// Nginx backend
//

namespace amp {

	class AMemPool {
	public:
		explicit AMemPool(size_t size);

		~AMemPool();

		void *AAlloc(size_t size);

		void *NAlloc(size_t size);

		void *CAlloc(size_t size);

		void Reset();

		bool Free(void *p);

	private:
		void *mPool;
	};

}