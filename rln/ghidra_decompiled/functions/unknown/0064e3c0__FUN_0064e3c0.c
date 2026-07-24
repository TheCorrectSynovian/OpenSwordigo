/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e3c0
 * Function: FUN_0064e3c0
 * Signature: undefined FUN_0064e3c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e3c0(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* catch() { ... } // from try @ 0064e160 with catch @ 0064e3d0
                       catch() { ... } // from try @ 0064e1e8 with catch @ 0064e3d0 */
                    /* catch() { ... } // from try @ 0064e270 with catch @ 0064e3d4 */
  param_1[3] = 0;
                    /* catch() { ... } // from try @ 0064e22c with catch @ 0064e3d8
                       catch() { ... } // from try @ 0064e314 with catch @ 0064e3d8 */
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_007b7c60;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
                    /* catch() { ... } // from try @ 0064e244 with catch @ 0064e3e8
                       catch() { ... } // from try @ 0064e294 with catch @ 0064e3e8 */
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x65) = 0;
  *(undefined1 *)((long)param_1 + 0x66) = 0;
  *(undefined1 *)((long)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x69) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}


