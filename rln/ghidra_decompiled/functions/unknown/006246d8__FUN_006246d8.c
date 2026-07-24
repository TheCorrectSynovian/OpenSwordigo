/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006246d8
 * Function: FUN_006246d8
 * Signature: undefined FUN_006246d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006246d8(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char local_8 [8];
  
  FUN_006230e4(local_8,param_1,1);
                    /* try { // try from 00624708 to 00724773 has its CatchHandler @ 00624888 */
  if ((local_8[0] != '\0') &&
     (plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8), plVar3 != (long *)0x0
     )) {
    iVar2 = (**(code **)(*plVar3 + 0x30))();
    if (iVar2 != -1) {
      return 0;
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    return 0xffffffff;
  }
                    /* try { // try from 00624774 to 007248e7 has its CatchHandler @ 00624608 */
  return 0xffffffff;
}


