/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9c1c
 * Function: Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance(CollisionShapeComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


