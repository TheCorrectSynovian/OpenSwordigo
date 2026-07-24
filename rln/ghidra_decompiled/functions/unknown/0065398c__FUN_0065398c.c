/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065398c
 * Function: FUN_0065398c
 * Signature: undefined FUN_0065398c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0065398c(undefined4 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653a10 with catch @ 00653a1c
                        */
        uVar2 = param_2 & 7;
                    /* catch() { ... } // from try @ 00653b18 with catch @ 00653a20 */
        param_2 = param_2 >> 3;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined4 *)(param_3 + (uVar2 + 4) * 4);
      } while (param_2 != 0);
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006539ac with catch @ 006539f0
                        */
      lVar1 = 0x14;
      if ((param_4 & 0x4000) == 0) {
        lVar1 = 4;
      }
      do {
        uVar2 = param_2 & 0xf;
                    /* try { // try from 00653a00 to 00753a0b has its CatchHandler @ 00653a0c */
        param_2 = param_2 >> 4;
        puVar3 = puVar3 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653a00 with catch @ 00653a0c
                        */
        *puVar3 = *(undefined4 *)(param_3 + (uVar2 + lVar1) * 4);
                    /* try { // try from 00653a10 to 00753a13 has its CatchHandler @ 00653a1c */
      } while (param_2 != 0);
    }
  }
  else {
    do {
      uVar2 = param_2 / 10;
                    /* try { // try from 006539ac to 007539b3 has its CatchHandler @ 006539f0 */
                    /* try { // try from 006539b4 to 007539ff has its CatchHandler @ 00653994 */
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined4 *)(param_3 + (param_2 % 10 + 4) * 4);
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return (ulong)((long)param_1 - (long)puVar3) >> 2;
}


