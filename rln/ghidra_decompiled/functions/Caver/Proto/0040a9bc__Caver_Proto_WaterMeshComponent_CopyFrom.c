/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a9bc
 * Function: Caver::Proto::WaterMeshComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(WaterMeshComponent * this, WaterMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::CopyFrom(Caver::Proto::WaterMeshComponent const&) */

void __thiscall
Caver::Proto::WaterMeshComponent::CopyFrom(WaterMeshComponent *this,WaterMeshComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


