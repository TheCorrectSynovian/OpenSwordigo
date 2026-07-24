/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c6e0
 * Function: Caver::Proto::UnpackedMesh::UnpackedMesh
 * Signature: undefined __thiscall UnpackedMesh(UnpackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::UnpackedMesh() */

void __thiscall Caver::Proto::UnpackedMesh::UnpackedMesh(UnpackedMesh *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(UnpackedMesh **)(this + 0x10) = this + 0x20;
  uVar1 = DAT_0068b470;
  *(UnpackedMesh **)(this + 0x30) = this + 0x40;
  *(UnpackedMesh **)(this + 0x50) = this + 0x60;
  *(undefined **)(this + 0x70) = PTR__default_vertex_data__007e7148;
  puVar2 = PTR_vtable_007e64d8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
                    /* try { // try from 0043c728 to 0053c72b has its CatchHandler @ 0043c7e0 */
  *(undefined8 *)(this + 0x58) = uVar1;
                    /* try { // try from 0043c72c to 0053c7cf has its CatchHandler @ 0043c678 */
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


