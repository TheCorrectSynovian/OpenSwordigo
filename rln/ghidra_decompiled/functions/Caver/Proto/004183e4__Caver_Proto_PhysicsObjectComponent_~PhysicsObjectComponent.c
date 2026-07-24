/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004183e4
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
                    /* try { // try from 004183e8 to 005183fb has its CatchHandler @ 00419534 */
  *(undefined **)this = PTR_vtable_007e7938 + 0x10;
                    /* try { // try from 0041840c to 00518417 has its CatchHandler @ 004194fc */
  if ((*(PhysicsObjectComponent **)PTR_default_instance__007e5a38 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
                    /* try { // try from 00418438 to 00518473 has its CatchHandler @ 004194a0 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


