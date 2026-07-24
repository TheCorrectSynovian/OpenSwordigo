/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d244
 * Function: __cxa_begin_catch
 * Signature: undefined __cxa_begin_catch(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long __cxa_begin_catch(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)__cxa_get_globals();
  plVar5 = (long *)*plVar3;
  plVar4 = param_1 + -10;
                    /* try { // try from 0061d260 to 0071d26b has its CatchHandler @ 0061dbd0 */
                    /* try { // try from 0061d26c to 0071d273 has its CatchHandler @ 0061d98c */
                    /* try { // try from 0061d274 to 0071d2db has its CatchHandler @ 0061dbd0 */
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar1 = (int)param_1[-5];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    lVar2 = plVar3[1];
    *(int *)(param_1 + -5) = iVar1 + 1;
    *(int *)(plVar3 + 1) = (int)lVar2 + -1;
    if (plVar5 != plVar4) {
      param_1[-6] = (long)plVar5;
      *plVar3 = (long)plVar4;
    }
    return param_1[-1];
  }
  if (plVar5 == (long *)0x0) {
    *plVar3 = (long)plVar4;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


