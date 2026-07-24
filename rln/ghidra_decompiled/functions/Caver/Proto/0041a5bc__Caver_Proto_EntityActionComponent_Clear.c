/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a5bc
 * Function: Caver::Proto::EntityActionComponent::Clear
 * Signature: undefined __thiscall Clear(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::Clear() */

void __thiscall Caver::Proto::EntityActionComponent::Clear(EntityActionComponent *this)

{
  if ((((byte)this[0x18] & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


