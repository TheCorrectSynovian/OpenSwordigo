/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c7cc
 * Function: Caver::Proto::PropertiesComponent::Clear
 * Signature: undefined __thiscall Clear(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::Clear() */

void __thiscall Caver::Proto::PropertiesComponent::Clear(PropertiesComponent *this)

{
  if ((((byte)this[0x18] & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


