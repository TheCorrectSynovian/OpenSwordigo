/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004390d4
 * Function: Caver::Proto::Mesh::Mesh
 * Signature: undefined __thiscall Mesh(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::Mesh() */

void __thiscall Caver::Proto::Mesh::Mesh(Mesh *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 0x28) = 0;
  *(Mesh **)(this + 0x30) = this + 0x48;
  *(undefined4 *)(this + 0x40) = 4;
  puVar1 = PTR__default_vertex_data__007e5ae0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR_vtable_007e6d30;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)this = puVar2 + 0x10;
  puVar2 = PTR__default_index_data__007e6c48;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined **)(this + 0x98) = puVar2;
  *(undefined **)(this + 0x90) = puVar1;
  return;
}


