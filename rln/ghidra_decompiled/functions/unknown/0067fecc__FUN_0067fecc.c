/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067fecc
 * Function: FUN_0067fecc
 * Signature: undefined FUN_0067fecc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067fecc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_007fe37f == '\b') {
    *param_3 = param_2;
    if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
                    /* try { // try from 0067fef0 to 0077fef3 has its CatchHandler @ 0067ffcc */
      *(undefined1 *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


