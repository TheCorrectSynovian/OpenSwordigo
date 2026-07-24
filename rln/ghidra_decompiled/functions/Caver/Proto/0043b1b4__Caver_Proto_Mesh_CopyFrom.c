/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b1b4
 * Function: Caver::Proto::Mesh::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Mesh * this, Mesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::CopyFrom(Caver::Proto::Mesh const&) */

void __thiscall Caver::Proto::Mesh::CopyFrom(Mesh *this,Mesh *param_1)

{
                    /* try { // try from 0043b1b4 to 0053b1db has its CatchHandler @ 0043b6bc */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 0043b1f4 to 0053b207 has its CatchHandler @ 0043b670 */
  return;
}


