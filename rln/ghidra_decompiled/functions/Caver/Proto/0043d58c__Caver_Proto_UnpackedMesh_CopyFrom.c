/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043d58c
 * Function: Caver::Proto::UnpackedMesh::CopyFrom
 * Signature: undefined __thiscall CopyFrom(UnpackedMesh * this, UnpackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::CopyFrom(Caver::Proto::UnpackedMesh const&) */

void __thiscall Caver::Proto::UnpackedMesh::CopyFrom(UnpackedMesh *this,UnpackedMesh *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 0043d5b8 to 0053d5cb has its CatchHandler @ 0043d720 */
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 0043d5cc to 0053d603 has its CatchHandler @ 0043d76c */
  return;
}


