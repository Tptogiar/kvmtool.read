#ifndef KVM__STAT_H
#define KVM__STAT_H

#include <kvm/util.h>

//for_read_code int kvm_cmd_stat(int argc, const char **argv, const char *prefix);
void kvm_stat_help(void) NORETURN;

#endif
