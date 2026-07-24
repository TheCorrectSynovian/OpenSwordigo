/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427d4c
 * Function: Caver::Proto::ShootingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::Clear(ShootingMonsterControllerComponent *this)

{
  if (this[0x14] != (ShootingMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


