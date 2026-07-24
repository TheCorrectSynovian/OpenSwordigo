/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040c9c0
 * Function: Caver::Proto::CollisionShapeComponent::Swap
 * Signature: undefined __thiscall Swap(CollisionShapeComponent * this, CollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::Swap(Caver::Proto::CollisionShapeComponent*) */

void __thiscall
Caver::Proto::CollisionShapeComponent::Swap
          (CollisionShapeComponent *this,CollisionShapeComponent *param_1)

{
  undefined4 uVar1;
  CollisionShapeComponent CVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    CVar2 = this[0xc];
    this[0xc] = param_1[0xc];
    param_1[0xc] = CVar2;
    CVar2 = this[0xd];
    this[0xd] = param_1[0xd];
    param_1[0xd] = CVar2;
    CVar2 = this[0xe];
    this[0xe] = param_1[0xe];
    param_1[0xe] = CVar2;
    CVar2 = this[0xf];
    this[0xf] = param_1[0xf];
    param_1[0xf] = CVar2;
    CVar2 = this[0x10];
    this[0x10] = param_1[0x10];
    param_1[0x10] = CVar2;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    CVar2 = this[0x24];
    this[0x24] = param_1[0x24];
    param_1[0x24] = CVar2;
    uVar3 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


