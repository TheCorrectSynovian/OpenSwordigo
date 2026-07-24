/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e468
 * Function: __cxa_guard_release
 * Signature: undefined __cxa_guard_release(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_guard_release(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    *(undefined1 *)((long)param_1 + 1) = 0;
    *(undefined1 *)param_1 = 1;
    return;
  }
  do {
    uVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar1 & 0x10000) != 0) {
    syscall(0x62,param_1,1,0x7fffffff);
    return;
  }
  return;
}


