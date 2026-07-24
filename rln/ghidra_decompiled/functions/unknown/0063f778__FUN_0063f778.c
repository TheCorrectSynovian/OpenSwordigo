/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f778
 * Function: FUN_0063f778
 * Signature: undefined FUN_0063f778(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0063f778(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
                    /* try { // try from 0063f780 to 0073f793 has its CatchHandler @ 00640700 */
                    /* try { // try from 0063f794 to 0073f7a3 has its CatchHandler @ 00640608 */
  plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == -1)) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0063f7c4 to 0073f7c7 has its CatchHandler @ 00640700 */
    FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  }
  return param_1;
}


