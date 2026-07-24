/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f7d8
 * Function: FUN_0061f7d8
 * Signature: undefined FUN_0061f7d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0061f7d8(undefined8 param_1,void *param_2,size_t param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int __fd;
  ssize_t sVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  iovec local_20;
  long local_10;
  long local_8;
  
  lVar1 = param_3 + param_5;
  __fd = FUN_0061f664();
  lVar6 = lVar1;
  local_10 = param_4;
  local_8 = param_5;
  do {
    while( true ) {
      local_20.iov_base = param_2;
      local_20.iov_len = param_3;
      sVar3 = writev(__fd,&local_20,2);
      lVar4 = (long)(int)sVar3;
      if (lVar4 == -1) break;
      lVar6 = lVar6 - lVar4;
      param_2 = (void *)((long)param_2 + lVar4);
      if (lVar6 == 0) goto LAB_0061f898;
      lVar2 = lVar4 - param_3;
      param_3 = param_3 - lVar4;
      if (-1 < lVar2) {
        lVar4 = FUN_0061f3e0(__fd,param_4 + lVar2,param_5 - lVar2);
        return lVar1 - (lVar6 - lVar4);
      }
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
LAB_0061f898:
  return lVar1 - lVar6;
}


