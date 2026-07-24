/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b3c8
 * Function: Caver::Proto::PackedMesh::SharedCtor
 * Signature: undefined __thiscall SharedCtor(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::SharedCtor() */

void __thiscall Caver::Proto::PackedMesh::SharedCtor(PackedMesh *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_vertex_data__007e74e8;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)(this + 0x88) = puVar1;
                    /* catch() { ... } // from try @ 0043b2ac with catch @ 0043b3dc */
  return;
}


