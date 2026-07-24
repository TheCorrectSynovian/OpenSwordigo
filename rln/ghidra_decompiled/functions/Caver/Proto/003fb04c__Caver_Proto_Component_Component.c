/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb04c
 * Function: Caver::Proto::Component::Component
 * Signature: undefined __thiscall Component(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::Component() */

void __thiscall Caver::Proto::Component::Component(Component *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_007e6b00 + 0x10;
  google::protobuf::internal::ExtensionSet::ExtensionSet((ExtensionSet *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  puVar1 = PTR__default_class_name__007e5328;
  *(undefined8 *)(this + 0x48) = 0;
  puVar2 = PTR__default_label__007e6320;
  *(undefined **)(this + 0x40) = puVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined **)(this + 0x50) = puVar2;
  return;
}


