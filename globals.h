/*
 * Copyright 2013  Rinat Ibragimov
 *
 * This file is part of libvdpau-va-gl
 *
 * libvdpau-va-gl distributed under the terms of LGPLv3. See COPYING for details.
 */

#ifndef __GLOBALS_H
#define __GLOBALS_H

#include <pthread.h>

/** @brief place where all shared global variables live */
struct global_data {
    pthread_mutex_t     mutex;
    pthread_mutex_t     glx_ctx_stack_mutex;    ///< mutex for GLX context management functions

    /** @brief tunables */
    struct {
        int buggy_XCloseDisplay;
        int show_watermark;
        int log_thread_id;
        int log_call_duration;
        int avoid_va;
    } quirks;
};

extern struct global_data global;

#endif /* __GLOBALS_H */
