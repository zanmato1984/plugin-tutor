#ifndef PLUGIN_TUTOR_SDK_3_H
#define PLUGIN_TUTOR_SDK_3_H

#include <string>
#include "../include/common.h"

__API__ class sth_service {
public:
  __API__ virtual const std::string& get_sth() = 0;
  __API__ virtual void set_sth(const std::string&) = 0;
};

__API__ extern sth_service *g_sth_service;

__PROTOCOL__ enum event{
  EVENT_BEFORE_SAY_STH = 0,
  EVENT_AFTER_SAY_STH,
  EVENT_SIZE,
};

typedef int (*callback_f_type)(void *);

__UTILITY__ void register_callback(event, callback_f_type);

typedef void (*__init_f_type)(sth_service *, callback_f_type *callbacks);
__INTERNAL__ extern "C" void __init(sth_service *, callback_f_type *callbacks);

__PROTOCOL__ void init();

#endif //PLUGIN_TUTOR_SDK_3_H
