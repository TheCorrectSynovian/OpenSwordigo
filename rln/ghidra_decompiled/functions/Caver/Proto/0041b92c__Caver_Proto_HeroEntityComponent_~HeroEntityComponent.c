/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b92c
 * Function: Caver::Proto::HeroEntityComponent::~HeroEntityComponent
 * Signature: undefined __thiscall ~HeroEntityComponent(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::~HeroEntityComponent() */

void __thiscall Caver::Proto::HeroEntityComponent::~HeroEntityComponent(HeroEntityComponent *this)

{
  *(undefined **)this = PTR_vtable_007e77d8 + 0x10;
  if ((*(HeroEntityComponent **)PTR_default_instance__007e4d60 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 0041b980 to 0051b9bb has its CatchHandler @ 0041b980
                       catch() { ... } // from try @ 0041b980 with catch @ 0041b980
                       catch() { ... } // from try @ 0041b9c4 with catch @ 0041b980 */
  operator_delete(this);
  return;
}


