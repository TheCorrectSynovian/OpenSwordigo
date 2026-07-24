/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061a2a4
 * Function: modifyPixel
 * Signature: undefined __cdecl modifyPixel(int param_1, int param_2, int param_3, int param_4, int param_5, ulong param_6, int param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* modifyPixel(int, int, int, int, int, unsigned long, int) */

uint modifyPixel(int param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6,
                int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_5 + param_4 * 4;
                    /* try { // try from 0061a2a8 to 0071a2b3 has its CatchHandler @ 00619100 */
                    /* catch() { ... } // from try @ 00619dd4 with catch @ 0061a2b0
                       catch() { ... } // from try @ 0061a134 with catch @ 0061a2b0 */
                    /* try { // try from 0061a2b4 to 0071a303 has its CatchHandler @ 0061a2b4
                       catch() { ... } // from try @ 0061a2b4 with catch @ 0061a2b4
                       catch() { ... } // from try @ 0061a354 with catch @ 0061a2b4
                       catch() { ... } // from try @ 0061a3ec with catch @ 0061a2b4
                       catch() { ... } // from try @ 0061a454 with catch @ 0061a2b4 */
  iVar4 = 0x18;
  if (7 < iVar1) {
    iVar4 = 8;
  }
  iVar5 = -8;
  if (iVar1 < 8) {
    iVar5 = 8;
  }
  iVar4 = *(int *)(&UNK_0069c0f0 +
                  ((param_6 << 1) >> ((ulong)(uint)(iVar5 + iVar1) & 0x3f) & 2 |
                  param_6 >> ((ulong)(uint)(iVar4 + iVar1) & 0x3f) & 1) * 4 + (long)param_7 * 0x10);
  iVar1 = iVar4 + param_1;
  if (iVar1 < 0xff) {
    iVar5 = 0;
    if (-1 < iVar1) {
      iVar5 = iVar1 * 0x10000;
    }
  }
  else {
                    /* try { // try from 0061a304 to 0071a317 has its CatchHandler @ 0061a5cc */
    iVar5 = 0xff0000;
  }
  iVar1 = iVar4 + param_2;
  if (iVar1 < 0xff) {
    iVar6 = 0;
    if (-1 < iVar1) {
      iVar6 = iVar1 * 0x100;
    }
  }
  else {
    iVar6 = 0xff00;
  }
  uVar2 = iVar4 + param_3;
  uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar3 = 0xff;
  }
                    /* try { // try from 0061a344 to 0071a353 has its CatchHandler @ 0061a5d4 */
  return iVar5 + uVar3 + iVar6 | 0xff000000;
}


