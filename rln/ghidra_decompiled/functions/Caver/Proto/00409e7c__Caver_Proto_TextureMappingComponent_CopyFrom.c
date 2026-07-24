/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409e7c
 * Function: Caver::Proto::TextureMappingComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(TextureMappingComponent * this, TextureMappingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::CopyFrom(Caver::Proto::TextureMappingComponent const&) */

void __thiscall
Caver::Proto::TextureMappingComponent::CopyFrom
          (TextureMappingComponent *this,TextureMappingComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


