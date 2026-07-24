/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043d5e0
 * Function: Caver::Proto::UnpackedMesh::Swap
 * Signature: undefined __thiscall Swap(UnpackedMesh * this, UnpackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::Swap(Caver::Proto::UnpackedMesh*) */

void __thiscall Caver::Proto::UnpackedMesh::Swap(UnpackedMesh *this,UnpackedMesh *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  UnpackedMesh *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_1 != this) {
    uVar8 = *(undefined8 *)(this + 0x28);
    uVar6 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0043d604 to 0053d64b has its CatchHandler @ 0043d568 */
    pUVar4 = *(UnpackedMesh **)(this + 0x10);
    uVar5 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = uVar7;
    *(UnpackedMesh **)(param_1 + 0x10) = pUVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    if (*(UnpackedMesh **)(this + 0x10) == param_1 + 0x20) {
      *(UnpackedMesh **)(this + 0x10) = this + 0x20;
      pUVar4 = *(UnpackedMesh **)(param_1 + 0x10);
    }
    if (pUVar4 == this + 0x20) {
      *(UnpackedMesh **)(param_1 + 0x10) = param_1 + 0x20;
    }
                    /* try { // try from 0043d64c to 0053d65f has its CatchHandler @ 0043d71c */
    uVar8 = *(undefined8 *)(this + 0x48);
    uVar6 = *(undefined8 *)(this + 0x40);
    pUVar4 = *(UnpackedMesh **)(this + 0x30);
    uVar5 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 0043d660 to 0053d697 has its CatchHandler @ 0043d72c */
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x40) = uVar7;
    *(UnpackedMesh **)(param_1 + 0x30) = pUVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    if (*(UnpackedMesh **)(this + 0x30) == param_1 + 0x40) {
      *(UnpackedMesh **)(this + 0x30) = this + 0x40;
      pUVar4 = *(UnpackedMesh **)(param_1 + 0x30);
    }
    if (pUVar4 == this + 0x40) {
      *(UnpackedMesh **)(param_1 + 0x30) = param_1 + 0x40;
    }
                    /* try { // try from 0043d698 to 0053d7df has its CatchHandler @ 0043d568 */
    uVar8 = *(undefined8 *)(this + 0x68);
    uVar6 = *(undefined8 *)(this + 0x60);
    pUVar4 = *(UnpackedMesh **)(this + 0x50);
    uVar5 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0x60) = uVar7;
    *(UnpackedMesh **)(param_1 + 0x50) = pUVar4;
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    if (*(UnpackedMesh **)(this + 0x50) == param_1 + 0x60) {
      *(UnpackedMesh **)(this + 0x50) = this + 0x60;
      pUVar4 = *(UnpackedMesh **)(param_1 + 0x50);
    }
                    /* catch() { ... } // from try @ 0043d5cc with catch @ 0043d76c */
    if (pUVar4 == this + 0x60) {
      *(UnpackedMesh **)(param_1 + 0x50) = param_1 + 0x60;
    }
    uVar5 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    uVar1 = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
                    /* catch() { ... } // from try @ 0043d64c with catch @ 0043d71c */
                    /* catch() { ... } // from try @ 0043d5b8 with catch @ 0043d720 */
  if (*(long *)(lVar2 + 0x28) == lVar3) {
                    /* catch() { ... } // from try @ 0043d660 with catch @ 0043d72c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


