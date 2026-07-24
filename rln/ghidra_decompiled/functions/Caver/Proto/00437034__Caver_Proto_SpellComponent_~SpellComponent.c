/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437034
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
  *(undefined **)this = PTR_vtable_007e7f10 + 0x10;
  if ((*(SpellComponent **)PTR_default_instance__007e66b8 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* try { // try from 00437078 to 00537083 has its CatchHandler @ 00436dac */
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
                    /* catch() { ... } // from try @ 00436fb0 with catch @ 00437080 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00437084 to 005370fb has its CatchHandler @ 00437084
                       catch(type#1 @ 00000000) { ... } // from try @ 00437084 with catch @ 00437084
                       catch(type#1 @ 00000000) { ... } // from try @ 00437124 with catch @ 00437084
                       catch(type#1 @ 00000000) { ... } // from try @ 004371f0 with catch @ 00437084
                        */
  operator_delete(this);
  return;
}


