/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004376a8
 * Function: Caver::Proto::DimensionObjectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(DimensionObjectComponent * this, DimensionObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::CopyFrom(Caver::Proto::DimensionObjectComponent const&)
    */

void __thiscall
Caver::Proto::DimensionObjectComponent::CopyFrom
          (DimensionObjectComponent *this,DimensionObjectComponent *param_1)

{
                    /* try { // try from 004376b8 to 005376c3 has its CatchHandler @ 00438044 */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 004376e4 to 005376eb has its CatchHandler @ 00437f8c */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


