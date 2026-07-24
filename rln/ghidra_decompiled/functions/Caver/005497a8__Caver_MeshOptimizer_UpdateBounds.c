/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005497a8
 * Function: Caver::MeshOptimizer::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(MeshOptimizer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::UpdateBounds() */

void __thiscall Caver::MeshOptimizer::UpdateBounds(MeshOptimizer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)(this + 0x10) == 0) {
                    /* try { // try from 005497e4 to 006497ef has its CatchHandler @ 005498ec */
    uVar2 = *(undefined4 *)PTR_Vector3Zero_007e5988;
    uVar4 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 4);
                    /* try { // try from 005497f0 to 0064986b has its CatchHandler @ 0054965c */
    uVar5 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 8);
    uVar1 = uVar2;
    uVar3 = uVar4;
    uVar6 = uVar5;
  }
  else {
    puVar7 = *(undefined4 **)(this + 0x18);
    uVar2 = *(undefined4 *)PTR_Vector3Zero_007e5988;
    uVar4 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 4);
    uVar5 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 8);
    uVar1 = *puVar7;
    uVar3 = puVar7[1];
    uVar6 = puVar7[2];
  }
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar6;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x44) = uVar5;
  if (1 < *(int *)(this + 0x10)) {
    lVar8 = 1;
    lVar9 = 0x28;
    do {
      Box::ExpandToIncludePoint((Box *)(this + 0x30),(Vector3 *)(*(long *)(this + 0x18) + lVar9));
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar8 < *(int *)(this + 0x10));
  }
  return;
}


