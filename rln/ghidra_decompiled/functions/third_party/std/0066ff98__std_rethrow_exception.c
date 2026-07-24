/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ff98
 * Function: std::rethrow_exception
 * Signature: undefined rethrow_exception(exception_ptr param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::rethrow_exception(std::__exception_ptr::exception_ptr) */

void std::rethrow_exception(exception_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  
                    /* catch() { ... } // from try @ 0066fe94 with catch @ 0066ffa4
                       catch() { ... } // from try @ 0066fee4 with catch @ 0066ffa4
                       catch() { ... } // from try @ 0066ff78 with catch @ 0066ffa4 */
  lVar3 = __exception_ptr::exception_ptr::_M_get(param_1);
                    /* catch() { ... } // from try @ 0066fec4 with catch @ 0066ffa8 */
                    /* catch() { ... } // from try @ 0066ff64 with catch @ 0066ffac */
  plVar4 = (long *)__cxa_allocate_dependent_exception();
  piVar5 = (int *)(lVar3 + -0x80);
  *plVar4 = lVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = get_unexpected();
                    /* try { // try from 0066ffd0 to 0076ffd3 has its CatchHandler @ 0066ffdc */
  plVar4[2] = lVar3;
                    /* try { // try from 0066ffd4 to 0076ffdf has its CatchHandler @ 0066fe44 */
  lVar3 = get_terminate();
                    /* catch() { ... } // from try @ 0066ffd0 with catch @ 0066ffdc */
  plVar4[3] = lVar3;
  plVar4[10] = 0x474e5543432b2b01;
  plVar4[0xb] = (long)FUN_0066fd44;
  FUN_00681658(plVar4 + 10);
  __cxa_begin_catch(plVar4 + 10);
                    /* WARNING: Subroutine does not return */
  terminate();
}


