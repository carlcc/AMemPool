//
// Created by chenchen on 18-5-22.
//

#include "AMemPool.h"

#ifdef AMEMPOLL_NGINX_BACK_END

#include "nginx/AMemPool.cpp"

#else
#error "Backend is not specified or an unsupported backend selected."
#endif
