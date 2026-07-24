/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004120d4
 * Function: Caver::Proto::CharAnimControllerComponent::Clear
 * Signature: undefined __thiscall Clear(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::Clear() */

void __thiscall Caver::Proto::CharAnimControllerComponent::Clear(CharAnimControllerComponent *this)

{
  if (this[0x24] != (CharAnimControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


