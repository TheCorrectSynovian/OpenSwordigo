/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dad24
 * Function: Caver::HealthBar::SetMaxHealth
 * Signature: undefined __thiscall SetMaxHealth(HealthBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::SetMaxHealth(int) */

void __thiscall Caver::HealthBar::SetMaxHealth(HealthBar *this,int param_1)

{
  if (*(int *)(this + 0x10c) == param_1) {
    return;
  }
  *(int *)(this + 0x10c) = param_1;
  if (param_1 < *(int *)(this + 0x110)) {
    *(int *)(this + 0x110) = param_1;
  }
  UpdateSprite(this);
  return;
}


