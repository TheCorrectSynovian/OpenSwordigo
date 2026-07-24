/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c734
 * Function: Caver::Proto::UnpackedMesh::SharedCtor
 * Signature: undefined __thiscall SharedCtor(UnpackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::SharedCtor() */

void __thiscall Caver::Proto::UnpackedMesh::SharedCtor(UnpackedMesh *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_vertex_data__007e7148;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined **)(this + 0x70) = puVar1;
  return;
}


