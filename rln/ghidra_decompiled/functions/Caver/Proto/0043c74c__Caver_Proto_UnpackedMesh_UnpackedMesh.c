/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c74c
 * Function: Caver::Proto::UnpackedMesh::UnpackedMesh
 * Signature: undefined __thiscall UnpackedMesh(UnpackedMesh * this, UnpackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&) */

void __thiscall Caver::Proto::UnpackedMesh::UnpackedMesh(UnpackedMesh *this,UnpackedMesh *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e64d8 + 0x10;
  *(undefined **)(this + 0x70) = PTR__default_vertex_data__007e7148;
  *(undefined4 *)(this + 8) = 0;
  *(UnpackedMesh **)(this + 0x10) = this + 0x20;
  *(UnpackedMesh **)(this + 0x30) = this + 0x40;
  *(UnpackedMesh **)(this + 0x50) = this + 0x60;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar2;
                    /* catch() { ... } // from try @ 0043c6dc with catch @ 0043c7ac */
  *(undefined4 *)(this + 0x78) = 0;
  MergeFrom(this,param_1);
  return;
}


