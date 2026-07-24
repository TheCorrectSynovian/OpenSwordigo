/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00680138
 * Function: FUN_00680138
 * Signature: undefined FUN_00680138(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00680138(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00680138 to 0078016f has its CatchHandler @ 00680118 */
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
                    /* catch() { ... } // from try @ 00680180 with catch @ 00680194 */
      uVar2 = FUN_00680130(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
                    /* catch() { ... } // from try @ 00680130 with catch @ 00680168 */
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_006801a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
                    /* try { // try from 00680170 to 00780177 has its CatchHandler @ 00680184 */
      if (bVar1 == 0x40) {
                    /* try { // try from 00680198 to 0078019b has its CatchHandler @ 006801a4 */
                    /* try { // try from 0068019c to 007801a7 has its CatchHandler @ 00680118 */
        uVar2 = FUN_006800f8();
        return uVar2;
      }
      if (bVar1 != 0x50) {
                    /* try { // try from 00680180 to 00780183 has its CatchHandler @ 00680194 */
                    /* catch() { ... } // from try @ 00680170 with catch @ 00680184 */
        if (bVar1 == 0x30) {
          uVar2 = FUN_00680128();
          return uVar2;
        }
        goto LAB_006801a0;
      }
    }
  }
                    /* catch() { ... } // from try @ 00680198 with catch @ 006801a4 */
                    /* catch() { ... } // from try @ 006801c8 with catch @ 006801ac */
  return 0;
}


