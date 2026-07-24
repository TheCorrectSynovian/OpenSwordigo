/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064be60
 * Function: FUN_0064be60
 * Signature: undefined FUN_0064be60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064be60(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    plVar2 = operator_new(400);
    *(undefined4 *)(plVar2 + 1) = 0;
    puVar1 = PTR_DAT_007e5e70;
    plVar2[2] = 0;
                    /* try { // try from 0064c0ac to 0074c0d3 has its CatchHandler @ 0064c0dc */
    plVar2[3] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
                    /* try { // try from 0064c0d4 to 0074c0df has its CatchHandler @ 0064bef4 */
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064c0ac with catch @ 0064c0dc
                        */
    plVar2[0xd] = 0;
                    /* try { // try from 0064c0e0 to 0074c11f has its CatchHandler @ 0064c0e0
                       catch() { ... } // from try @ 0064c0e0 with catch @ 0064c0e0
                       catch() { ... } // from try @ 0064c308 with catch @ 0064c0e0
                       catch() { ... } // from try @ 0064c570 with catch @ 0064c0e0 */
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
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
                    /* try { // try from 0064c120 to 0074c133 has its CatchHandler @ 0064c69c */
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
                    /* try { // try from 0064c134 to 0074c13f has its CatchHandler @ 0064c638 */
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    plVar2[0x25] = 0;
                    /* try { // try from 0064c140 to 0074c14b has its CatchHandler @ 0064c5d4 */
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
                    /* try { // try from 0064c168 to 0074c173 has its CatchHandler @ 0064c578 */
    plVar2[0x30] = 0;
    *(undefined1 *)(plVar2 + 0x31) = 0;
    *(long **)(param_1 + 0x10) = plVar2;
  }
  plVar2[6] = (long)"";
                    /* catch() { ... } // from try @ 0064bdf0 with catch @ 0064be84 */
  plVar2[7] = (long)"";
  plVar2[10] = (long)"";
  plVar2[0xb] = (long)"Sunday";
  plVar2[4] = (long)&DAT_0069e388;
  plVar2[0xc] = (long)"Monday";
  plVar2[5] = (long)&DAT_0069e388;
  plVar2[0xd] = (long)"Tuesday";
  plVar2[0xe] = (long)"Wednesday";
  plVar2[0xf] = (long)"Thursday";
  plVar2[8] = (long)&DAT_0069ee38;
  plVar2[0x10] = (long)"Friday";
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064c054 with catch @ 0064bef4
                       catch(type#1 @ 00000000) { ... } // from try @ 0064c0d4 with catch @ 0064bef4
                        */
  plVar2[0x11] = (long)"Saturday";
  plVar2[0x12] = (long)&DAT_0069ee98;
  plVar2[0x13] = (long)&DAT_0069eea0;
  plVar2[0x14] = (long)&DAT_0069eea8;
  plVar2[0x15] = (long)&DAT_0069eeb0;
  plVar2[2] = (long)&DAT_0069e370;
  plVar2[0x16] = (long)&DAT_0069eeb8;
  plVar2[3] = (long)&DAT_0069e370;
  plVar2[0x17] = (long)&DAT_0069eec0;
  plVar2[0x18] = (long)&DAT_0069eec8;
  plVar2[9] = (long)&DAT_0069ee40;
  plVar2[0x19] = (long)"January";
  plVar2[0x1d] = (long)&DAT_0069eef8;
                    /* try { // try from 0064bf84 to 0074bfcb has its CatchHandler @ 0064c088 */
  plVar2[0x1a] = (long)"February";
  plVar2[0x1b] = (long)"March";
  plVar2[0x1c] = (long)"April";
  plVar2[0x1e] = (long)&DAT_0069ef00;
  plVar2[0x1f] = (long)&DAT_0069ef08;
  plVar2[0x20] = (long)"August";
  plVar2[0x21] = (long)"September";
  plVar2[0x22] = (long)"October";
  plVar2[0x23] = (long)"November";
  plVar2[0x29] = (long)&DAT_0069eef8;
  plVar2[0x24] = (long)"December";
  plVar2[0x25] = (long)&DAT_0069ef50;
  plVar2[0x26] = (long)&DAT_0069ef58;
  plVar2[0x27] = (long)&DAT_0069ef60;
                    /* try { // try from 0064c02c to 0074c053 has its CatchHandler @ 0064c084 */
  plVar2[0x28] = (long)&DAT_0069ef68;
  plVar2[0x2a] = (long)&DAT_0069ef70;
  plVar2[0x2b] = (long)&DAT_0069ef78;
  plVar2[0x2c] = (long)&DAT_0069ef80;
                    /* try { // try from 0064c054 to 0074c0ab has its CatchHandler @ 0064bef4 */
  plVar2[0x2d] = (long)&DAT_0069ef88;
  plVar2[0x2e] = (long)&DAT_0069ef90;
  plVar2[0x2f] = (long)&DAT_0069ef98;
  plVar2[0x30] = (long)&DAT_0069efa0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064c02c with catch @ 0064c084
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064bf84 with catch @ 0064c088
                        */
  return;
}


