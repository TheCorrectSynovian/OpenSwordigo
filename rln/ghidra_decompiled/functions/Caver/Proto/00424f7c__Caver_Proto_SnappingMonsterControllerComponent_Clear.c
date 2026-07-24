/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424f7c
 * Function: Caver::Proto::SnappingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::Clear(SnappingMonsterControllerComponent *this)

{
  if (this[0x20] != (SnappingMonsterControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


