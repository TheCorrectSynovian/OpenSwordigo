/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb320
 * Function: Caver::Proto::Component::~Component
 * Signature: undefined __thiscall ~Component(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::~Component() */

void __thiscall Caver::Proto::Component::~Component(Component *this)

{
  *(undefined **)this = PTR_vtable_007e6b00 + 0x10;
  SharedDtor(this);
  google::protobuf::internal::ExtensionSet::~ExtensionSet((ExtensionSet *)(this + 8));
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


