/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041817c
 * Function: Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent
 * Signature: undefined __thiscall PhysicsObjectComponent(PhysicsObjectComponent * this, PhysicsObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent
   const&) */

void __thiscall
Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent
          (PhysicsObjectComponent *this,PhysicsObjectComponent *param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 00418188 to 005181c3 has its CatchHandler @ 00419700 */
  puVar1 = PTR_vtable_007e7938 + 0x10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x21) = 0;
  this[0xc] = (PhysicsObjectComponent)0x1;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x1c) = 0;
  MergeFrom(this,param_1);
  return;
}


