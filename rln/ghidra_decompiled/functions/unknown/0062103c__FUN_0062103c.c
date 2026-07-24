/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062103c
 * Function: FUN_0062103c
 * Signature: undefined FUN_0062103c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 FUN_0062103c(long param_1,byte param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* try { // try from 0062103c to 0072109f has its CatchHandler @ 0062260c */
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  if ((char)plVar2[7] != '\0') {
    return *(undefined1 *)((long)plVar2 + (long)(int)(uint)param_2 + 0x39);
  }
  FUN_0061fea0(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  return uVar1;
}


