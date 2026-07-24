/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372d10
 * Function: Caver::HeroEntityComponent::HandleDamageCollision
 * Signature: undefined __thiscall HandleDamageCollision(HeroEntityComponent * this, CollisionShapeComponent * param_1, CollisionShapeComponent * param_2, CollisionInfo * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent*,
   Caver::CollisionShapeComponent*, Caver::CollisionInfo const&) */

void __thiscall
Caver::HeroEntityComponent::HandleDamageCollision
          (HeroEntityComponent *this,CollisionShapeComponent *param_1,
          CollisionShapeComponent *param_2,CollisionInfo *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(param_2 + 0x28),(long)PTR_Interface_007e6cd0);
  if (*(float *)(*(long *)(this + 0x130) + 0x94) <= DAT_00683734) {
    if (lVar3 != 0) goto LAB_00372d84;
  }
  else {
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0xa0) == '\0')) goto LAB_00372e60;
LAB_00372d84:
    if ((*(long *)(this + 0x130) != 0) &&
       ((*(char *)(lVar3 + 0xbc) == '\0' || (*(int *)(lVar3 + 0xb4) != 0)))) goto LAB_00372e60;
  }
  local_88 = *(long *)(param_3 + 0x18);
  if ((*(float *)(this + 0x80) < _DAT_00684434) && (fVar4 = *(float *)(this + 0x8c), 0.0 < fVar4)) {
    fVar5 = *(float *)(this + 0x88);
    if (fVar5 * (float)local_88 + fVar4 * (float)((ulong)local_88 >> 0x20) < 0.0) {
      if (0.0 <= (float)local_88) {
        local_88 = CONCAT44(-fVar5,fVar4);
      }
      else {
        local_88 = CONCAT44(fVar5,-fVar4);
      }
      Vector2::Rotate((Vector2 *)&local_88,DAT_006883bc);
    }
  }
  local_78 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x70);
  local_80 = *(long **)(this + 0x28);
  if (local_80 != (long *)0x0) {
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
  }
  local_70 = local_88;
  local_88 = lVar3;
  HandleDamageImpact(this,(DamageImpact *)&local_88);
  if ((local_80 != (long *)0x0) &&
     (iVar1 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
LAB_00372e60:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


