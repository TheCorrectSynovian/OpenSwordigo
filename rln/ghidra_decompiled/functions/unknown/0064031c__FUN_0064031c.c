/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064031c
 * Function: FUN_0064031c
 * Signature: undefined FUN_0064031c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0064031c(long *param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00640134 with catch @ 0064032c */
  lVar1 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar1 + 0xe1) != '\0') {
    *(undefined1 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    return param_1;
  }
  plVar2 = *(long **)((long)param_1 + lVar1 + 0xf0);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      FUN_0061fea0(plVar2);
                    /* catch() { ... } // from try @ 00640094 with catch @ 0064037c */
                    /* catch() { ... } // from try @ 00640034 with catch @ 00640380 */
      (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
    }
    *(undefined1 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    *(undefined1 *)((long)param_1 + lVar1 + 0xe1) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


