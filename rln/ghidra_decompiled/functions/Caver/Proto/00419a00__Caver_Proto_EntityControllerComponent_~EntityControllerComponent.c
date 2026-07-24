/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419a00
 * Function: Caver::Proto::EntityControllerComponent::~EntityControllerComponent
 * Signature: undefined __thiscall ~EntityControllerComponent(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::~EntityControllerComponent() */

void __thiscall
Caver::Proto::EntityControllerComponent::~EntityControllerComponent(EntityControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7ec8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00419a24 to 00519a8f has its CatchHandler @ 00419874 */
  operator_delete(this);
  return;
}


