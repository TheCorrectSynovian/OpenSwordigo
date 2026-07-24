/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043c498
 * Function: Caver::Proto::PackedMesh::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PackedMesh * this, PackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::CopyFrom(Caver::Proto::PackedMesh const&) */

void __thiscall Caver::Proto::PackedMesh::CopyFrom(PackedMesh *this,PackedMesh *param_1)

{
                    /* catch() { ... } // from try @ 0043c300 with catch @ 0043c4ac */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


