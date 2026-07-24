/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043799c
 * Function: Caver::Proto::DimensionSpellComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(DimensionSpellComponent * this, DimensionSpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::CopyFrom(Caver::Proto::DimensionSpellComponent const&) */

void __thiscall
Caver::Proto::DimensionSpellComponent::CopyFrom
          (DimensionSpellComponent *this,DimensionSpellComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


