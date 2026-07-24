/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ff44
 * Function: Caver::Proto::FireEmitterComponent::~FireEmitterComponent
 * Signature: undefined __thiscall ~FireEmitterComponent(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::~FireEmitterComponent() */

void __thiscall
Caver::Proto::FireEmitterComponent::~FireEmitterComponent(FireEmitterComponent *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041fea0 with catch @ 0041ff48
                        */
  *(undefined **)this = PTR_vtable_007e5028 + 0x10;
                    /* try { // try from 0041ff6c to 0051ff93 has its CatchHandler @ 0041ff9c */
  if (*(FireEmitterComponent **)PTR_default_instance__007e7b98 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 0041ff94 to 0051ff9f has its CatchHandler @ 0041fdfc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041ff6c with catch @ 0041ff9c
                        */
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x38) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


