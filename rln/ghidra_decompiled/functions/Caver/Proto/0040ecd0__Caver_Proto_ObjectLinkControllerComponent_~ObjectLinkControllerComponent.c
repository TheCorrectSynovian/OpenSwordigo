/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ecd0
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
                    /* try { // try from 0040ecec to 0050ecf7 has its CatchHandler @ 0041028c */
  *(undefined **)this = PTR_vtable_007e6098 + 0x10;
  SharedDtor(this);
                    /* try { // try from 0040ecf8 to 0050ecff has its CatchHandler @ 0041005c */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


