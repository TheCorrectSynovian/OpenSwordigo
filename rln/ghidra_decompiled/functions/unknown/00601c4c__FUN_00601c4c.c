/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00601c4c
 * Function: FUN_00601c4c
 * Signature: undefined FUN_00601c4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00601c4c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  
                    /* try { // try from 00601c50 to 00701c77 has its CatchHandler @ 00601c90 */
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *param_1;
  lVar4 = *plVar3;
  *plVar3 = lVar4 + -1;
  if (lVar4 == 0) {
    uVar1 = FUN_005f8650();
  }
  else {
    pbVar5 = (byte *)plVar3[1];
                    /* try { // try from 00601c78 to 00701c7f has its CatchHandler @ 00601ca4 */
    plVar3[1] = (long)(pbVar5 + 1);
    uVar1 = (uint)*pbVar5;
  }
                    /* catch() { ... } // from try @ 00601c50 with catch @ 00601c90 */
  *param_1 = uVar1;
                    /* try { // try from 00601c94 to 00701c9b has its CatchHandler @ 00601ca0 */
                    /* try { // try from 00601c9c to 00701cb7 has its CatchHandler @ 00601c10 */
                    /* catch() { ... } // from try @ 00601c94 with catch @ 00601ca0 */
                    /* catch() { ... } // from try @ 00601c78 with catch @ 00601ca4 */
  if (((uVar1 == 0xd) || (uVar1 == 10)) && (uVar1 != uVar2)) {
    plVar3 = *(long **)(param_1 + 0x10);
    lVar4 = *plVar3;
    *plVar3 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar2 = FUN_005f8650();
    }
    else {
      pbVar5 = (byte *)plVar3[1];
      plVar3[1] = (long)(pbVar5 + 1);
      uVar2 = (uint)*pbVar5;
    }
    *param_1 = uVar2;
  }
  uVar2 = param_1[1];
  param_1[1] = uVar2 + 1;
  if (0x7ffffffb < (int)uVar2) {
                    /* try { // try from 00601d04 to 00701d5f has its CatchHandler @ 00601d04
                       catch() { ... } // from try @ 00601d04 with catch @ 00601d04
                       catch() { ... } // from try @ 006030c0 with catch @ 00601d04
                       catch() { ... } // from try @ 0060439c with catch @ 00601d04 */
    FUN_006007a0(param_1,&DAT_0069b342,param_1[4]);
    return;
  }
  return;
}


