/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b97c
 * Function: Caver::Proto::PackedMesh::~PackedMesh
 * Signature: undefined __thiscall ~PackedMesh(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::~PackedMesh() */

void __thiscall Caver::Proto::PackedMesh::~PackedMesh(PackedMesh *this)

{
  ~PackedMesh(this);
  operator_delete(this);
  return;
}


