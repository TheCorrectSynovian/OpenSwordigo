/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cf00
 * Function: Caver::Proto::PortalComponent::~PortalComponent
 * Signature: undefined __thiscall ~PortalComponent(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::~PortalComponent() */

void __thiscall Caver::Proto::PortalComponent::~PortalComponent(PortalComponent *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042cd5c with catch @ 0042cf14
                        */
  *(undefined **)this = PTR_vtable_007e6f58 + 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042cd14 with catch @ 0042cf20
                        */
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


