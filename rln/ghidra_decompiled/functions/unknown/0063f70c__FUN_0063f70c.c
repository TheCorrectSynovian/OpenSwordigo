/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f70c
 * Function: FUN_0063f70c
 * Signature: undefined FUN_0063f70c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f70c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  lVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (param_3 != lVar1) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0063f764 to 0073f76b has its CatchHandler @ 0064063c */
    FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    return;
  }
                    /* try { // try from 0063f76c to 0073f77f has its CatchHandler @ 00640638 */
  return;
}


