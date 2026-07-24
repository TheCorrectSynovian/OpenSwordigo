/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624e8c
 * Function: FUN_00624e8c
 * Signature: undefined FUN_00624e8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624e8c(long *param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar1 + 0xe1) != '\0') {
    *(undefined1 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    return param_1;
  }
  plVar2 = *(long **)((long)param_1 + lVar1 + 0xf0);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      FUN_0061fea0(plVar2);
      (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
    }
    *(undefined1 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    *(undefined1 *)((long)param_1 + lVar1 + 0xe1) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


