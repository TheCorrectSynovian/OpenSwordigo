/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c4ec
 * Function: Caver::Proto::PackedMesh::Swap
 * Signature: undefined __thiscall Swap(PackedMesh * this, PackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::Swap(Caver::Proto::PackedMesh*) */

void __thiscall Caver::Proto::PackedMesh::Swap(PackedMesh *this,PackedMesh *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  PackedMesh *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_1 != this) {
    uVar8 = *(undefined8 *)(this + 0x28);
    uVar6 = *(undefined8 *)(this + 0x20);
    pPVar4 = *(PackedMesh **)(this + 0x10);
    uVar5 = *(undefined8 *)(this + 0x18);
                    /* catch() { ... } // from try @ 0043c2e0 with catch @ 0043c518 */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0043c58c with catch @ 0043c520 */
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = uVar7;
    *(PackedMesh **)(param_1 + 0x10) = pPVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    if (*(PackedMesh **)(this + 0x10) == param_1 + 0x20) {
      *(PackedMesh **)(this + 0x10) = this + 0x20;
      pPVar4 = *(PackedMesh **)(param_1 + 0x10);
    }
    if (pPVar4 == this + 0x20) {
      *(PackedMesh **)(param_1 + 0x10) = param_1 + 0x20;
    }
    uVar8 = *(undefined8 *)(this + 0x50);
    uVar6 = *(undefined8 *)(this + 0x48);
    pPVar4 = *(PackedMesh **)(this + 0x38);
    uVar5 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
                    /* try { // try from 0043c578 to 0053c58b has its CatchHandler @ 0043c608 */
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = uVar7;
    *(PackedMesh **)(param_1 + 0x38) = pPVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    *(undefined8 *)(param_1 + 0x48) = uVar6;
                    /* try { // try from 0043c58c to 0053c66f has its CatchHandler @ 0043c520 */
    if (*(PackedMesh **)(this + 0x38) == param_1 + 0x48) {
      *(PackedMesh **)(this + 0x38) = this + 0x48;
      pPVar4 = *(PackedMesh **)(param_1 + 0x38);
    }
    if (pPVar4 == this + 0x48) {
      *(PackedMesh **)(param_1 + 0x38) = param_1 + 0x48;
    }
    uVar8 = *(undefined8 *)(this + 0x78);
    uVar6 = *(undefined8 *)(this + 0x70);
    pPVar4 = *(PackedMesh **)(this + 0x60);
    uVar5 = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x70) = uVar7;
    *(PackedMesh **)(param_1 + 0x60) = pPVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    if (*(PackedMesh **)(this + 0x60) == param_1 + 0x70) {
      *(PackedMesh **)(this + 0x60) = this + 0x70;
      pPVar4 = *(PackedMesh **)(param_1 + 0x60);
    }
                    /* try { // try from 0043c678 to 0053c6b7 has its CatchHandler @ 0043c678
                       catch() { ... } // from try @ 0043c678 with catch @ 0043c678
                       catch() { ... } // from try @ 0043c72c with catch @ 0043c678
                       catch() { ... } // from try @ 0043c7d8 with catch @ 0043c678 */
    if (pPVar4 == this + 0x70) {
      *(PackedMesh **)(param_1 + 0x60) = param_1 + 0x70;
    }
    uVar5 = *(undefined8 *)(this + 0x88);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    uVar1 = *(undefined4 *)(this + 0x90);
                    /* catch() { ... } // from try @ 0043c578 with catch @ 0043c608 */
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


