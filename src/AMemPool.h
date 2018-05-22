//
// Created by chenchen on 18-5-22.
//

#ifndef AMEMPOOL_AMEMPOOL_H
#define AMEMPOOL_AMEMPOOL_H

#include <cstddef>

#ifdef AMEMPOLL_NGINX_BACK_END

#include "nginx/AMemPool.h"

#else
#error "Backend is not specified or an unsupported backend selected."
#endif



#endif //AMEMPOOL_AMEMPOOL_H
