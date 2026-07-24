/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040eeb8
 * Function: Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent
 * Signature: undefined __thiscall ~ObjectLinkControllerComponent(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent
          (ObjectLinkControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6098 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 0040eeec to 0050ef03 has its CatchHandler @ 0040fe04 */
  operator_delete(this);
  return;
}


