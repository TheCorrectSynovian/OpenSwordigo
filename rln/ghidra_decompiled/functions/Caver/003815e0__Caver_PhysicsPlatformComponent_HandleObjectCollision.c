/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003815e0
 * Function: Caver::PhysicsPlatformComponent::HandleObjectCollision
 * Signature: undefined __thiscall HandleObjectCollision(PhysicsPlatformComponent * this, CollisionMessageData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&) */

void __thiscall
Caver::PhysicsPlatformComponent::HandleObjectCollision
          (PhysicsPlatformComponent *this,CollisionMessageData *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x2c);
  if ((fVar2 < DAT_00688924) &&
     (fVar3 = *(float *)(param_1 + 0x28),
     *(float *)(param_1 + 0x20) * DAT_00688920 * fVar3 +
     *(float *)(param_1 + 0x24) * DAT_00688920 * fVar2 <= *(float *)(param_1 + 0x30) + DAT_00683944)
     ) {
    if (DAT_00683488 < *(float *)(this + 0x7c)) {
      *(undefined4 *)(this + 0x80) = 0;
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x78) = 0;
    }
    *(undefined4 *)(this + 0x7c) = 0;
    if (*(int *)(this + 0x70) == 1) {
      fVar2 = fVar3 * 0.0 - fVar2;
      fVar3 = fVar2 * 0.0 * DAT_00688928 + *(float *)(this + 0x74);
      fVar2 = *(float *)(this + 0x78) - fVar2 * DAT_00688928;
      *(float *)(this + 0x74) = fVar3;
      *(float *)(this + 0x78) = fVar2;
      lVar1 = *(long *)(this + 0x28);
      *(float *)(this + 0x80) =
           *(float *)(this + 0x80) +
           (1.0 / (*(float *)(this + 0x94) * DAT_00687978 * *(float *)(lVar1 + 0x9c))) *
           (fVar2 * (*(float *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x70) -
                    *(float *)(lVar1 + 0x70)) -
           fVar3 * (*(float *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x74) -
                   *(float *)(lVar1 + 0x74)));
    }
    else if (*(int *)(this + 0x70) == 0) {
      fVar2 = fVar3 * 0.0 - fVar2;
      fVar3 = fVar2 * DAT_00688928;
      *(float *)(this + 0x74) = fVar2 * 0.0 * DAT_00688928 + *(float *)(this + 0x74);
      *(float *)(this + 0x78) = *(float *)(this + 0x78) - fVar3;
      return;
    }
  }
  return;
}


