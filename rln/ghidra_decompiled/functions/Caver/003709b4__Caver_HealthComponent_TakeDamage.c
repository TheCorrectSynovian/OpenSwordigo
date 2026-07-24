/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003709b4
 * Function: Caver::HealthComponent::TakeDamage
 * Signature: undefined __thiscall TakeDamage(HealthComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::TakeDamage(int) */

int __thiscall Caver::HealthComponent::TakeDamage(HealthComponent *this,int param_1)

{
  uint uVar1;
  
  if (0 < param_1) {
    this[0xc0] = (HealthComponent)0x1;
    uVar1 = *(int *)(this + 0x80) - param_1;
    *(uint *)(this + 0x80) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar1 < 1) {
      this[0x78] = (HealthComponent)0x1;
      return param_1;
    }
  }
  return param_1;
}


