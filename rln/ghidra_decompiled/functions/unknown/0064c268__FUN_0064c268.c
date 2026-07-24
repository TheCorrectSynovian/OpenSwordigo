/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c268
 * Function: FUN_0064c268
 * Signature: undefined FUN_0064c268(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064c268(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    plVar2 = operator_new(400);
    *(undefined4 *)(plVar2 + 1) = 0;
    puVar1 = PTR_DAT_007e4bd8;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[4] = 0;
    plVar2[5] = 0;
                    /* catch() { ... } // from try @ 0064c208 with catch @ 0064c4c8 */
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x14] = 0;
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
                    /* catch() { ... } // from try @ 0064c1f4 with catch @ 0064c520 */
    plVar2[0x1c] = 0;
                    /* catch() { ... } // from try @ 0064c250 with catch @ 0064c524 */
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
                    /* try { // try from 0064c548 to 0074c56f has its CatchHandler @ 0064c574 */
    plVar2[0x26] = 0;
    plVar2[0x27] = 0;
    plVar2[0x28] = 0;
    plVar2[0x29] = 0;
    plVar2[0x2a] = 0;
    plVar2[0x2b] = 0;
    plVar2[0x2c] = 0;
    plVar2[0x2d] = 0;
    plVar2[0x2e] = 0;
    plVar2[0x2f] = 0;
                    /* try { // try from 0064c570 to 0074c70b has its CatchHandler @ 0064c0e0 */
    plVar2[0x30] = 0;
                    /* catch() { ... } // from try @ 0064c548 with catch @ 0064c574 */
    *(undefined1 *)(plVar2 + 0x31) = 0;
                    /* catch() { ... } // from try @ 0064c168 with catch @ 0064c578 */
    *(long **)(param_1 + 0x10) = plVar2;
  }
  plVar2[6] = (long)&DAT_0069ea98;
  plVar2[7] = (long)&DAT_0069ea98;
  plVar2[10] = (long)&DAT_0069ea98;
  plVar2[0xb] = (long)&DAT_0069eab0;
  plVar2[4] = (long)&DAT_0069ea68;
  plVar2[0xc] = (long)L"Monday";
  plVar2[5] = (long)&DAT_0069ea68;
  plVar2[0xd] = (long)L"Tuesday";
  plVar2[0xe] = (long)L"Wednesday";
                    /* try { // try from 0064c2e0 to 0074c307 has its CatchHandler @ 0064c468 */
  plVar2[0xf] = (long)L"Thursday";
  plVar2[8] = (long)&DAT_0069ea90;
  plVar2[0x10] = (long)L"Friday";
  plVar2[0x11] = (long)L"Saturday";
                    /* try { // try from 0064c308 to 0074c547 has its CatchHandler @ 0064c0e0 */
  plVar2[0x12] = (long)&DAT_0069eba8;
  plVar2[0x13] = (long)&DAT_0069ebb8;
  plVar2[0x14] = (long)&DAT_0069ebc8;
  plVar2[0x15] = (long)&DAT_0069ebd8;
  plVar2[2] = (long)&DAT_0069ea40;
  plVar2[0x16] = (long)&DAT_0069ebe8;
  plVar2[3] = (long)&DAT_0069ea40;
  plVar2[0x17] = (long)&DAT_0069ebf8;
  plVar2[0x18] = (long)&DAT_0069ec08;
  plVar2[9] = (long)&DAT_0069eaa0;
  plVar2[0x19] = (long)&DAT_0069ec18;
  plVar2[0x1d] = (long)&DAT_0069ec90;
  plVar2[0x1a] = (long)&DAT_0069ec38;
  plVar2[0x1b] = (long)L"March";
  plVar2[0x1c] = (long)L"April";
  plVar2[0x1e] = (long)&DAT_0069eca0;
  plVar2[0x1f] = (long)&DAT_0069ecb8;
  plVar2[0x20] = (long)L"August";
  plVar2[0x21] = (long)L"September";
  plVar2[0x22] = (long)L"October";
  plVar2[0x23] = (long)L"November";
  plVar2[0x29] = (long)&DAT_0069ec90;
  plVar2[0x24] = (long)L"December";
  plVar2[0x25] = (long)&DAT_0069ed88;
  plVar2[0x26] = (long)&DAT_0069ed98;
  plVar2[0x27] = (long)&DAT_0069eda8;
  plVar2[0x28] = (long)&DAT_0069edb8;
  plVar2[0x2a] = (long)&DAT_0069edc8;
  plVar2[0x2b] = (long)&DAT_0069edd8;
  plVar2[0x2c] = (long)&DAT_0069ede8;
  plVar2[0x2d] = (long)&DAT_0069edf8;
                    /* catch() { ... } // from try @ 0064c2e0 with catch @ 0064c468 */
                    /* catch() { ... } // from try @ 0064c218 with catch @ 0064c46c */
  plVar2[0x2e] = (long)&DAT_0069ee08;
  plVar2[0x2f] = (long)&DAT_0069ee18;
  plVar2[0x30] = (long)&DAT_0069ee28;
  return;
}


