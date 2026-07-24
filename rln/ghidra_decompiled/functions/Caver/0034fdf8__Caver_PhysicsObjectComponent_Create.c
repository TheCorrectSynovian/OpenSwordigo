/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fdf8
 * Function: Caver::PhysicsObjectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::Create() */

PhysicsObjectComponent * Caver::PhysicsObjectComponent::Create(void)

{
  PhysicsObjectComponent *this;
  
  this = operator_new(0x118);
  PhysicsObjectComponent(this);
  return this;
}


