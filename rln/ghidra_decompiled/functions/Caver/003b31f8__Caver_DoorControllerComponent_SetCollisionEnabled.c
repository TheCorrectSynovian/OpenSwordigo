/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b31f8
 * Function: Caver::DoorControllerComponent::SetCollisionEnabled
 * Signature: undefined __thiscall SetCollisionEnabled(DoorControllerComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::SetCollisionEnabled(bool) */

void __thiscall
Caver::DoorControllerComponent::SetCollisionEnabled(DoorControllerComponent *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR_Interface_007e5b08;
  puVar2 = *(undefined8 **)(*(long *)(this + 0x28) + 200);
  for (puVar1 = *(undefined8 **)(*(long *)(this + 0x28) + 0xc0); puVar1 != puVar2;
      puVar1 = puVar1 + 1) {
    uVar4 = (**(code **)(*(long *)*puVar1 + 0xa0))((long *)*puVar1,puVar3);
    if ((uVar4 & 1) != 0) {
      CollisionShapeComponent::SetEnabled((CollisionShapeComponent *)*puVar1,param_1);
    }
  }
  return;
}


