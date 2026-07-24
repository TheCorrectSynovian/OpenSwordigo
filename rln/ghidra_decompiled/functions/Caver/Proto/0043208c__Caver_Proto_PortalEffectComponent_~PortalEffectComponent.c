/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043208c
 * Function: Caver::Proto::PortalEffectComponent::~PortalEffectComponent
 * Signature: undefined __thiscall ~PortalEffectComponent(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::~PortalEffectComponent() */

void __thiscall
Caver::Proto::PortalEffectComponent::~PortalEffectComponent(PortalEffectComponent *this)

{
  *(undefined **)this = PTR_vtable_007e64b8 + 0x10;
  if (*(PortalEffectComponent **)PTR_default_instance__007e69c0 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 004320fc to 00532107 has its CatchHandler @ 00432210 */
  operator_delete(this);
  return;
}


