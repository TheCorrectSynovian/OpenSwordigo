/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ab70
 * Function: Caver::Proto::PhysicsPlatformComponent::Clear
 * Signature: undefined __thiscall Clear(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::Clear() */

void __thiscall Caver::Proto::PhysicsPlatformComponent::Clear(PhysicsPlatformComponent *this)

{
  if (this[0x1c] != (PhysicsPlatformComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


