/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418154
 * Function: Caver::Proto::PhysicsObjectComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::SharedCtor() */

void __thiscall Caver::Proto::PhysicsObjectComponent::SharedCtor(PhysicsObjectComponent *this)

{
                    /* try { // try from 00418154 to 0051815f has its CatchHandler @ 0041975c */
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x21) = 0;
  this[0xc] = (PhysicsObjectComponent)0x1;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}


