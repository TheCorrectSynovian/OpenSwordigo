/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641e9c
 * Function: FUN_00641e9c
 * Signature: undefined FUN_00641e9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00641e9c(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == -1)) {
                    /* try { // try from 00641edc to 00741f27 has its CatchHandler @ 00641edc
                       catch() { ... } // from try @ 00641edc with catch @ 00641edc
                       catch() { ... } // from try @ 00641f68 with catch @ 00641edc */
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  }
  return param_1;
}


