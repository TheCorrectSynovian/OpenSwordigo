/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436f98
 * Function: Caver::Proto::SpellComponent::~SpellComponent
 * Signature: undefined __thiscall ~SpellComponent(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::~SpellComponent() */

void __thiscall Caver::Proto::SpellComponent::~SpellComponent(SpellComponent *this)

{
                    /* try { // try from 00436fb0 to 00537077 has its CatchHandler @ 00437080 */
  *(undefined **)this = PTR_vtable_007e7f10 + 0x10;
  if ((*(SpellComponent **)PTR_default_instance__007e66b8 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00436f10 with catch @ 00436fdc */
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


