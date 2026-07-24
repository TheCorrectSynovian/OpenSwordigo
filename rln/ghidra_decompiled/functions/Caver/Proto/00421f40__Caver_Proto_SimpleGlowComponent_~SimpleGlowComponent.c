/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421f40
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
                    /* try { // try from 00421f44 to 00521f57 has its CatchHandler @ 004228dc */
  *(undefined **)this = PTR_vtable_007e71b0 + 0x10;
                    /* try { // try from 00421f64 to 00521f6f has its CatchHandler @ 00422870 */
  if (*(SimpleGlowComponent **)PTR_default_instance__007e53a8 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 00421f98 to 00521fd3 has its CatchHandler @ 0042280c */
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


