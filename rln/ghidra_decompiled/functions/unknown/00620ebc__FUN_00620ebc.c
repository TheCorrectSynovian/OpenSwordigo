/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620ebc
 * Function: FUN_00620ebc
 * Signature: undefined FUN_00620ebc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 FUN_00620ebc(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  
                    /* try { // try from 00620ec8 to 00720ecf has its CatchHandler @ 006223c4 */
  if (*(char *)(param_1 + 0xe1) != '\0') {
    return *(undefined1 *)(param_1 + 0xe0);
  }
                    /* try { // try from 00620ed0 to 00720ee3 has its CatchHandler @ 006223c0 */
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      FUN_0061fea0(plVar2);
      uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
    }
    else {
                    /* try { // try from 00620ee4 to 00720f47 has its CatchHandler @ 0062267c */
      uVar1 = *(undefined1 *)((long)plVar2 + 0x59);
    }
    *(undefined1 *)(param_1 + 0xe0) = uVar1;
    *(undefined1 *)(param_1 + 0xe1) = 1;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


