/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412e38
 * Function: Caver::Proto::CharControllerComponent::Clear
 * Signature: undefined __thiscall Clear(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::Clear() */

void __thiscall Caver::Proto::CharControllerComponent::Clear(CharControllerComponent *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x7c);
  if ((uVar1 & 0xff) != 0) {
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


