/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366444
 * Function: Caver::DamageComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::Update(float) */

void Caver::DamageComponent::Update(float param_1)

{
  DamageComponent *in_x0;
  
  if (in_x0[0xd0] != (DamageComponent)0x0) {
    ResolvePotentialImpacts(in_x0,false);
    return;
  }
  return;
}


