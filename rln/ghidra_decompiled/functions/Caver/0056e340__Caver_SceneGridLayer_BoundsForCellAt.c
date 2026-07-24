/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056e340
 * Function: Caver::SceneGridLayer::BoundsForCellAt
 * Signature: undefined __cdecl BoundsForCellAt(int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::BoundsForCellAt(int, int) */

void Caver::SceneGridLayer::BoundsForCellAt(int param_1,int param_2)

{
  undefined4 in_w2;
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)((ulong)(uint)param_1 + 0x18);
  uVar2 = *(undefined8 *)((ulong)(uint)param_1 + 8);
                    /* catch() { ... } // from try @ 0056d69c with catch @ 0056e348 */
                    /* catch() { ... } // from try @ 0056d688 with catch @ 0056e350 */
  uVar3 = NEON_scvtf(CONCAT44(in_w2,param_2),4);
                    /* catch() { ... } // from try @ 0056d890 with catch @ 0056e354
                       catch() { ... } // from try @ 0056d8d4 with catch @ 0056e354 */
  *in_x8 = CONCAT44((float)((ulong)uVar2 >> 0x20) +
                    (float)((ulong)uVar1 >> 0x20) * (float)((ulong)uVar3 >> 0x20),
                    (float)uVar2 + (float)uVar1 * (float)uVar3);
  in_x8[1] = uVar1;
  return;
}


