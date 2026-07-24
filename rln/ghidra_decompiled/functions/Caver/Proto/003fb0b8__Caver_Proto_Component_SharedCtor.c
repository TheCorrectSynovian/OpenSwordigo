/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb0b8
 * Function: Caver::Proto::Component::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::SharedCtor() */

void __thiscall Caver::Proto::Component::SharedCtor(Component *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 0x38) = 0;
  puVar1 = PTR__default_class_name__007e5328;
  *(undefined8 *)(this + 0x48) = 0;
  puVar2 = PTR__default_label__007e6320;
  *(undefined **)(this + 0x40) = puVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined **)(this + 0x50) = puVar2;
  return;
}


