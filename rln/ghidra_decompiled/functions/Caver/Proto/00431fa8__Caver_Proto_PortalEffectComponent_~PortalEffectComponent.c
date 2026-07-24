/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431fa8
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
                    /* catch() { ... } // from try @ 004319d4 with catch @ 00431fbc */
  *(undefined **)this = PTR_vtable_007e64b8 + 0x10;
                    /* try { // try from 00431fc8 to 00532083 has its CatchHandler @ 00431fc8
                       catch() { ... } // from try @ 00431fc8 with catch @ 00431fc8
                       catch() { ... } // from try @ 00432198 with catch @ 00431fc8
                       catch() { ... } // from try @ 00432300 with catch @ 00431fc8 */
  if (*(PortalEffectComponent **)PTR_default_instance__007e69c0 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


