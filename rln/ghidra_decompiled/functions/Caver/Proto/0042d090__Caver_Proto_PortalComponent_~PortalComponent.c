/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d090
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
  *(undefined **)this = PTR_vtable_007e6f58 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 0042d0c0 to 0052d173 has its CatchHandler @ 0042d0c0
                       catch() { ... } // from try @ 0042d0c0 with catch @ 0042d0c0
                       catch() { ... } // from try @ 0042d178 with catch @ 0042d0c0
                       catch() { ... } // from try @ 0042d1fc with catch @ 0042d0c0 */
  operator_delete(this);
  return;
}


