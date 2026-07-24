/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040b538
 * Function: Caver::Proto::ShapeComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ShapeComponent * this, ShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::CopyFrom(Caver::Proto::ShapeComponent const&) */

void __thiscall Caver::Proto::ShapeComponent::CopyFrom(ShapeComponent *this,ShapeComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


