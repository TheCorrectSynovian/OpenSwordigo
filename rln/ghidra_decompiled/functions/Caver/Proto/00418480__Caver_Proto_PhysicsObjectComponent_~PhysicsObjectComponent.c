/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418480
 * Function: Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent
 * Signature: undefined __thiscall ~PhysicsObjectComponent(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent() */

void __thiscall
Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent(PhysicsObjectComponent *this)

{
                    /* try { // try from 00418494 to 005184a7 has its CatchHandler @ 0041949c */
  *(undefined **)this = PTR_vtable_007e7938 + 0x10;
                    /* try { // try from 004184b8 to 005184c3 has its CatchHandler @ 00419464 */
  if ((*(PhysicsObjectComponent **)PTR_default_instance__007e5a38 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


