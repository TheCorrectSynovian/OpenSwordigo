/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004358dc
 * Function: Caver::Proto::ProjectileControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::Clear() */

void __thiscall
Caver::Proto::ProjectileControllerComponent::Clear(ProjectileControllerComponent *this)

{
  if (this[0x10] != (ProjectileControllerComponent)0x0) {
    *(undefined2 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


