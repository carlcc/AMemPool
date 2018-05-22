//
// Created by chenchen on 18-5-22.
//

extern "C" {
#include "ngx_palloc.h"
}

struct _________TMP_____ {
	_________TMP_____() {
		ngx_init_mempool();
	}
} ________tmp______;

amp::AMemPool::AMemPool(size_t size) : mPool(ngx_create_pool(size))
{

}

amp::AMemPool::~AMemPool()
{
	ngx_destroy_pool((ngx_pool_t *) mPool);
}

void *amp::AMemPool::AAlloc(size_t size)
{
	return ngx_palloc((ngx_pool_t *) mPool, size);
}

void *amp::AMemPool::NAlloc(size_t size)
{
	return ngx_pnalloc((ngx_pool_t *) mPool, size);
}

void amp::AMemPool::Reset()
{
	ngx_reset_pool((ngx_pool_t *) mPool);
}

bool amp::AMemPool::Free(void *p)
{
	return NGX_OK == ngx_pfree((ngx_pool_t *) mPool, p);
}

void *amp::AMemPool::CAlloc(size_t size)
{
	return ngx_pcalloc((ngx_pool_t *) mPool, size);
}
