/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431c44
 * Function: Caver::Proto::OverlayTextComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(OverlayTextComponent * this, OverlayTextComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::CopyFrom(Caver::Proto::OverlayTextComponent const&) */

void __thiscall
Caver::Proto::OverlayTextComponent::CopyFrom
          (OverlayTextComponent *this,OverlayTextComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


