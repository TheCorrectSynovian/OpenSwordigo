/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054989c
 * Function: Caver::MeshOptimizer::HashForCell
 * Signature: undefined __thiscall HashForCell(MeshOptimizer * this, Cell * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::HashForCell(Caver::MeshOptimizer::Cell const&) */

int __thiscall Caver::MeshOptimizer::HashForCell(MeshOptimizer *this,Cell *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(int *)param_1 * 0x596f0ddf;
  uVar2 = *(int *)(param_1 + 4) * 0x2f632d69;
  uVar3 = *(int *)(param_1 + 8) * -0x4ee6db1f;
  if (0xfffffffa < uVar1) {
    uVar1 = uVar1 + 5;
  }
  if (0xfffffffa < uVar2) {
    uVar2 = uVar2 + 5;
  }
                    /* catch() { ... } // from try @ 005497e4 with catch @ 005498ec */
  if (0xfffffffa < uVar3) {
    uVar3 = uVar3 + 5;
  }
  return uVar2 + uVar1 + uVar3;
}


