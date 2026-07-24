/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b374
 * Function: Caver::Proto::PackedMesh::PackedMesh
 * Signature: undefined __thiscall PackedMesh(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::PackedMesh() */

void __thiscall Caver::Proto::PackedMesh::PackedMesh(PackedMesh *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(PackedMesh **)(this + 0x10) = this + 0x20;
  uVar1 = DAT_0068b470;
  *(PackedMesh **)(this + 0x38) = this + 0x48;
  *(PackedMesh **)(this + 0x60) = this + 0x70;
  *(undefined **)(this + 0x88) = PTR__default_vertex_data__007e74e8;
  puVar2 = PTR_vtable_007e5790;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


