/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425ae0
 * Function: Caver::Proto::AttackComponent::Clear
 * Signature: undefined __thiscall Clear(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::Clear() */

void __thiscall Caver::Proto::AttackComponent::Clear(AttackComponent *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x48);
  if ((uVar1 & 0xff) != 0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    if (((uVar1 >> 4 & 1) != 0) && (*(Program **)(this + 0x20) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x20));
      uVar1 = *(uint *)(this + 0x48);
    }
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


