/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041811c
 * Function: Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent
 * Signature: undefined __thiscall PhysicsObjectComponent(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent() */

void __thiscall
Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(PhysicsObjectComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7938;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 00418130 to 00518143 has its CatchHandler @ 00419794 */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x21) = 0;
  this[0xc] = (PhysicsObjectComponent)0x1;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}


