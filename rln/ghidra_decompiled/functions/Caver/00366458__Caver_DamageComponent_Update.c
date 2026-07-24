/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366458
 * Function: Caver::DamageComponent::Update
 * Signature: undefined __thiscall Update(DamageComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DamageComponent::Update(float) */

void __thiscall Caver::DamageComponent::Update(DamageComponent *this,float param_1)

{
  if (this[0xb8] != (DamageComponent)0x0) {
    ResolvePotentialImpacts(this + -0x18,false);
    return;
  }
  return;
}


