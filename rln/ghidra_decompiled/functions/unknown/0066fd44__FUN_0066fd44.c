/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fd44
 * Function: FUN_0066fd44
 * Signature: undefined FUN_0066fd44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066fd44(uint param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
                    /* try { // try from 0066fd48 to 0076fd4b has its CatchHandler @ 0066fd74 */
  lVar5 = *(long *)(param_2 + -0x50);
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate(*(_func_void **)(lVar5 + -0x58));
  }
  __cxa_free_dependent_exception(param_2 + -0x50);
  piVar4 = (int *)(lVar5 + -0x80);
  do {
                    /* catch() { ... } // from try @ 0066fc88 with catch @ 0066fd68
                       catch() { ... } // from try @ 0066fd18 with catch @ 0066fd68 */
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
                    /* catch() { ... } // from try @ 0066fd48 with catch @ 0066fd74 */
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(lVar5 + -0x68) != (code *)0x0) {
      (**(code **)(lVar5 + -0x68))(lVar5);
    }
    __cxa_free_exception(lVar5);
    return;
  }
  return;
}


