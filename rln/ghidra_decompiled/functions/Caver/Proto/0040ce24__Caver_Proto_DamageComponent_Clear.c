/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ce24
 * Function: Caver::Proto::DamageComponent::Clear
 * Signature: undefined __thiscall Clear(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::Clear() */

void __thiscall Caver::Proto::DamageComponent::Clear(DamageComponent *this)

{
  if ((*(uint *)(this + 0x2c) & 0xff) != 0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    this[0x1c] = (DamageComponent)0x0;
    this[0x28] = (DamageComponent)0x0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  if ((*(uint *)(this + 0x2c) & 0xff00) != 0) {
    this[0x29] = (DamageComponent)0x1;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


