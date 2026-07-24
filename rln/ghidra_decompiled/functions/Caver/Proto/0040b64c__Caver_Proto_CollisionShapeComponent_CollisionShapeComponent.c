/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040b64c
 * Function: Caver::Proto::CollisionShapeComponent::CollisionShapeComponent
 * Signature: undefined __thiscall CollisionShapeComponent(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::CollisionShapeComponent() */

void __thiscall
Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(CollisionShapeComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e73d8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  this[0x24] = (CollisionShapeComponent)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0xc] = (CollisionShapeComponent)0x1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


