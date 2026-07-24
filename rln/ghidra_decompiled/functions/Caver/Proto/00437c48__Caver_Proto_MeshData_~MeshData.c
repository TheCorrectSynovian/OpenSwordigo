/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437c48
 * Function: Caver::Proto::MeshData::~MeshData
 * Signature: undefined __thiscall ~MeshData(MeshData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::~MeshData() */

void __thiscall Caver::Proto::MeshData::~MeshData(MeshData *this)

{
  *(undefined **)this = PTR_vtable_007e7be0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


