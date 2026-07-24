/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004085fc
 * Function: Caver::Proto::GroundMeshComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GroundMeshComponent * this, GroundMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::CopyFrom(Caver::Proto::GroundMeshComponent const&) */

void __thiscall
Caver::Proto::GroundMeshComponent::CopyFrom(GroundMeshComponent *this,GroundMeshComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


