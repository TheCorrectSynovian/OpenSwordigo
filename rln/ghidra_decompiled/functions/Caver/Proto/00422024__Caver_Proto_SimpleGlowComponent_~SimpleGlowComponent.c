/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422024
 * Function: Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent
 * Signature: undefined __thiscall ~SimpleGlowComponent(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent() */

void __thiscall Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent(SimpleGlowComponent *this)

{
  *(undefined **)this = PTR_vtable_007e71b0 + 0x10;
                    /* try { // try from 00422054 to 0052208f has its CatchHandler @ 00422774 */
  if (*(SimpleGlowComponent **)PTR_default_instance__007e53a8 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


