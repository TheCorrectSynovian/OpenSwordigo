/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415c7c
 * Function: Caver::Proto::PressureTriggerComponent::Clear
 * Signature: undefined __thiscall Clear(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::Clear() */

void __thiscall Caver::Proto::PressureTriggerComponent::Clear(PressureTriggerComponent *this)

{
  PressureTriggerComponent PVar1;
  uint uVar2;
  
  PVar1 = this[0x28];
  uVar2 = (uint)(byte)PVar1;
  if (PVar1 != (PressureTriggerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    this[0x10] = (PressureTriggerComponent)0x0;
    if ((((byte)PVar1 >> 2 & 1) != 0) && (*(Program **)(this + 0x18) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x18));
                    /* try { // try from 00415cac to 00515e7b has its CatchHandler @ 00415aa8 */
      uVar2 = *(uint *)(this + 0x28);
    }
    if (((uVar2 >> 3 & 1) != 0) && (*(Program **)(this + 0x20) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x20));
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


