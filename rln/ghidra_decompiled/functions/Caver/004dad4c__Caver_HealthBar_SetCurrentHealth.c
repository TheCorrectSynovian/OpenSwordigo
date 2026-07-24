/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dad4c
 * Function: Caver::HealthBar::SetCurrentHealth
 * Signature: undefined __thiscall SetCurrentHealth(HealthBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::SetCurrentHealth(int) */

void __thiscall Caver::HealthBar::SetCurrentHealth(HealthBar *this,int param_1)

{
  if (*(int *)(this + 0x110) != param_1) {
    *(int *)(this + 0x110) = param_1;
  }
  return;
}


