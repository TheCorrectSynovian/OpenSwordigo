/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ad3c
 * Function: Caver::ManaComponent::GainMana
 * Signature: undefined __thiscall GainMana(ManaComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::GainMana(int) */

void __thiscall Caver::ManaComponent::GainMana(ManaComponent *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x74) + param_1;
  if ((int)*(uint *)(this + 0x70) <= *(int *)(this + 0x74) + param_1) {
    uVar1 = *(uint *)(this + 0x70);
  }
  *(uint *)(this + 0x74) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  return;
}


