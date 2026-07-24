/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425a10
 * Function: Caver::Proto::AttackComponent::~AttackComponent
 * Signature: undefined __thiscall ~AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::~AttackComponent() */

void __thiscall Caver::Proto::AttackComponent::~AttackComponent(AttackComponent *this)

{
                    /* try { // try from 00425a10 to 00525a6b has its CatchHandler @ 00425a10
                       catch() { ... } // from try @ 00425a10 with catch @ 00425a10
                       catch() { ... } // from try @ 00425ad8 with catch @ 00425a10
                       catch() { ... } // from try @ 00425c84 with catch @ 00425a10 */
  *(undefined **)this = PTR_vtable_007e66a0 + 0x10;
  if ((*(AttackComponent **)PTR_default_instance__007e7ad0 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00425a6c to 00525a7b has its CatchHandler @ 00425c8c */
  operator_delete(this);
  return;
}


