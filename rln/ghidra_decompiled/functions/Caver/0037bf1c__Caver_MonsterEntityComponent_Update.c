/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037bf1c
 * Function: Caver::MonsterEntityComponent::Update
 * Signature: undefined __thiscall Update(MonsterEntityComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MonsterEntityComponent::Update(float) */

void __thiscall Caver::MonsterEntityComponent::Update(MonsterEntityComponent *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  SceneObject *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_register_00005004;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xec] != (MonsterEntityComponent)0x0) {
    fVar5 = DAT_00688630;
    fVar4 = 0.0;
    if (((*(float *)(this + 0x80) < _DAT_00684434) && (fVar4 = 0.0, 0.0 < *(float *)(this + 0x8c)))
       && (this[0x90] == (MonsterEntityComponent)0x0)) {
      local_50 = *(undefined4 *)(this + 0x88);
      local_4c = *(float *)(this + 0x8c);
      fVar4 = (float)Vector2::Angle((Vector2 *)&local_50);
      fVar5 = 1.0;
      fVar4 = (float)((double)fVar4 + DAT_00688608);
    }
    *(float *)(this + 0x180) = fVar4;
    fVar4 = (float)AngleDifference(*(float *)(*(long *)(this + 0x28) + 0x80),fVar4);
    if (DAT_00683944 < ABS(fVar4)) {
      this_00 = *(SceneObject **)(this + 0x28);
      if (fVar5 * param_1 <= ABS(fVar4)) {
        fVar6 = 1.0;
        if (fVar4 <= 0.0) {
          fVar6 = -1.0;
        }
        fVar5 = fVar5 * param_1 * fVar6 + *(float *)(this_00 + 0x80);
        fVar4 = fVar5 - *(float *)(this_00 + 0x80);
      }
      else {
        fVar5 = *(float *)(this + 0x180);
        fVar4 = fVar5 - *(float *)(this_00 + 0x80);
      }
      if ((DAT_00683488 < ABS(fVar4)) &&
         (*(float *)(this_00 + 0x80) = fVar5, this_00[0xb4] == (SceneObject)0x0)) {
        SceneObject::RegisterForWorldBoundsUpdate(this_00);
        this_00[0xb4] = (SceneObject)0x1;
      }
    }
  }
  EntityComponent::Update((EntityComponent *)this,param_1);
  fVar5 = *(float *)(this + 0x184);
  lVar3 = *(long *)(this + 0x188);
  *(float *)(this + 0x184) = fVar5 + param_1;
  if (((lVar3 != 0) && (DAT_00684318 < fVar5 + param_1)) && (*(char *)(lVar3 + 0xbc) == '\0')) {
    *(undefined1 *)(lVar3 + 0xbc) = 1;
  }
  if (*(long **)(this + 400) != (long *)0x0) {
    (**(code **)(**(long **)(this + 400) + 200))(CONCAT44(in_register_00005004,param_1));
  }
  uVar2 = Rectangle::IntersectsWithRect
                    ((Rectangle *)(*(long *)(this + 0x28) + 0xa4),
                     (Rectangle *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x90));
  if ((DAT_00683734 < param_1) && ((uVar2 & 1) == 0)) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


