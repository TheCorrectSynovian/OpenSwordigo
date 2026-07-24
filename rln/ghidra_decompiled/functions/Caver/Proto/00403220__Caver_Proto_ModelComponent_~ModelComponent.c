/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403220
 * Function: Caver::Proto::ModelComponent::~ModelComponent
 * Signature: undefined __thiscall ~ModelComponent(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::~ModelComponent() */

void __thiscall Caver::Proto::ModelComponent::~ModelComponent(ModelComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4d30 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


