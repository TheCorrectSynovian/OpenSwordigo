/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004381b0
 * Function: Caver::Proto::MeshData::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MeshData * this, MeshData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::CopyFrom(Caver::Proto::MeshData const&) */

void __thiscall Caver::Proto::MeshData::CopyFrom(MeshData *this,MeshData *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* catch() { ... } // from try @ 00437534 with catch @ 004381e4 */
                    /* catch() { ... } // from try @ 004374b0 with catch @ 004381e8 */
                    /* catch() { ... } // from try @ 00437438 with catch @ 004381ec */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


