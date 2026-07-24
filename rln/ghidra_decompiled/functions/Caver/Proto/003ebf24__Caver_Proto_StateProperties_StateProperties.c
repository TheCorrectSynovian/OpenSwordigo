/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ebf24
 * Function: Caver::Proto::StateProperties::StateProperties
 * Signature: undefined __thiscall StateProperties(StateProperties * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::StateProperties() */

void __thiscall Caver::Proto::StateProperties::StateProperties(StateProperties *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6290;
  *(StateProperties **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


