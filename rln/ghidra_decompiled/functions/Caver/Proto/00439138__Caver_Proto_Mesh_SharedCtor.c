/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439138
 * Function: Caver::Proto::Mesh::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::SharedCtor() */

void __thiscall Caver::Proto::Mesh::SharedCtor(Mesh *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00439144 to 0053918f has its CatchHandler @ 00439474 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  puVar1 = PTR__default_vertex_data__007e5ae0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  puVar2 = PTR__default_index_data__007e6c48;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined **)(this + 0x98) = puVar2;
  *(undefined **)(this + 0x90) = puVar1;
  return;
}


