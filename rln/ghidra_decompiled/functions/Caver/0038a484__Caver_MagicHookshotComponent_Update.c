/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038a484
 * Function: Caver::MagicHookshotComponent::Update
 * Signature: undefined __thiscall Update(MagicHookshotComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicHookshotComponent::Update(float) */

void __thiscall Caver::MagicHookshotComponent::Update(MagicHookshotComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  SceneObject *pSVar3;
  SceneObject *pSVar4;
  long lVar5;
  SceneObject *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *local_90;
  long *local_88;
  long *local_80;
  Vector2 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  SpellComponent::CasterObject();
  if (local_50 != (long *)0x0) {
    iVar1 = (int)local_50[1] + -1;
    *(int *)(local_50 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*local_50 + 8))();
    }
    pSVar4 = *(SceneObject **)(this + 0x28);
    SpellComponent::CastPoint();
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_68);
    local_70 = CONCAT44((float)((ulong)*(undefined8 *)(pSVar4 + 0x70) >> 0x20) - fStack_54,
                        (float)*(undefined8 *)(pSVar4 + 0x70) - local_58);
    fVar6 = (float)Vector2::Angle((Vector2 *)&local_70);
    if ((DAT_00683488 < ABS(fVar6 - *(float *)(pSVar4 + 0x80))) &&
       (*(float *)(pSVar4 + 0x80) = fVar6, pSVar4[0xb4] == (SceneObject)0x0)) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar4);
      pSVar4[0xb4] = (SceneObject)0x1;
    }
    lVar5 = *(long *)(this + 0x120);
    SpellComponent::CastPoint();
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_68);
    *(ulong *)(lVar5 + 0xa4) = CONCAT44(fStack_54,local_58);
    *(undefined8 *)(*(long *)(this + 0x120) + 0xac) = *(undefined8 *)(*(long *)(this + 0x28) + 0x70)
    ;
  }
  if (*(DamageComponent **)(this + 0x138) != (DamageComponent *)0x0) {
    DamageComponent::ResolvePotentialImpacts(*(DamageComponent **)(this + 0x138),false);
  }
  fVar6 = DAT_00688c90;
  if (this[0x158] != (MagicHookshotComponent)0x0) {
    if (*(float *)(*(long *)(this + 0x28) + 0x8c) < DAT_00688c8c) {
      *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
    }
    goto LAB_0038a980;
  }
  if ((DAT_00688c90 / *(float *)(this + 0x16c) + _DAT_00684434 < *(float *)(this + 0x160)) ||
     ((*(float *)(this + 0x168) - *(float *)(this + 0x15c)) + _DAT_00684940 <
      *(float *)(this + 0x164) * DAT_00688c94)) {
    Destroy(this);
  }
  if ((this[0x145] == (MagicHookshotComponent)0x0) && (this[0x144] == (MagicHookshotComponent)0x0))
  {
    SpellComponent::CasterObject();
    if (local_90 == (long *)0x0) goto LAB_0038a980;
    iVar1 = (int)local_90[1] + -1;
    *(int *)(local_90 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*local_90 + 8))();
    }
    lVar5 = *(long *)(this + 0x28);
    SpellComponent::CastPoint();
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_68);
    local_58 = local_58 - (float)*(undefined8 *)(lVar5 + 0x70);
    fStack_54 = fStack_54 - (float)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20);
    fVar7 = local_58 * local_58 + fStack_54 * fStack_54;
    fVar8 = SQRT(fVar7);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar7);
    }
    *(float *)(this + 0x15c) = fVar8;
    *(float *)(this + 0x168) = fVar8;
    if (fVar8 <= fVar6) {
      *(float *)(this + 0x160) = *(float *)(this + 0x160) + param_1;
      goto LAB_0038a980;
    }
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
    CreateBlast(this);
  }
  else {
    lVar5 = *(long *)(this + 0x28);
    SpellComponent::CastPoint();
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_68);
    fVar6 = local_58 - *(float *)(lVar5 + 0x70);
    fVar8 = fStack_54 - *(float *)(lVar5 + 0x74);
    fVar8 = fVar6 * fVar6 + fVar8 * fVar8;
    fVar6 = SQRT(fVar8);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar8);
    }
    fVar8 = DAT_00688c98;
    *(float *)(this + 0x164) = *(float *)(this + 0x164) + param_1;
    *(float *)(this + 0x15c) = fVar6 + param_1 * fVar8;
    if (this[0x145] == (MagicHookshotComponent)0x0) {
      if (this[0x144] == (MagicHookshotComponent)0x0) goto LAB_0038a980;
      SpellComponent::CastPoint();
      Vector2::Vector2(local_78,(Vector3 *)&local_68);
      local_68 = CONCAT44(local_78._4_4_ -
                          (float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20),
                          local_78._0_4_ - (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70));
      Vector2::Normalize((Vector2 *)&local_68);
      fVar6 = (float)local_68;
      fVar8 = local_68._4_4_;
      SpellComponent::CasterObject();
      SpellComponent::CasterObject();
      fVar7 = 1.0 - (param_1 + param_1);
      fVar9 = fVar8 * *(float *)(local_88 + 0xd) + *(float *)((long)local_88 + 0x6c) * -fVar6;
      local_80[0xd] =
           CONCAT44(-fVar6 * fVar9 * fVar7 - (float)((ulong)local_68 >> 0x20) * 700.0,
                    fVar8 * fVar9 * fVar7 - (float)local_68 * 700.0);
      if ((local_88 != (long *)0x0) &&
         (iVar1 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_88 + 8))();
      }
      if ((local_80 != (long *)0x0) &&
         (iVar1 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_80 + 8))();
      }
      if (_DAT_00688c9c <= *(float *)(this + 0x15c)) goto LAB_0038a980;
    }
    else {
      lVar5 = *(long *)(this + 0x148);
      SpellComponent::CastPoint();
      Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_68);
      local_68 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20) - fStack_54,
                          (float)*(undefined8 *)(lVar5 + 0x70) - local_58);
      Vector2::Normalize((Vector2 *)&local_68);
      pSVar4 = *(SceneObject **)(this + 0x148);
      *(long *)(pSVar4 + 0x68) =
           CONCAT44((float)((ulong)local_68 >> 0x20) * -700.0,(float)local_68 * -700.0);
      this_00 = *(SceneObject **)(this + 0x28);
      if (pSVar4 == this_00) {
LAB_0038a7c0:
        fVar8 = *(float *)(this + 0x15c);
      }
      else {
        fVar6 = (float)*(long *)(pSVar4 + 0x70) - (float)*(undefined8 *)(this + 0x150);
        fVar8 = (float)((ulong)*(long *)(pSVar4 + 0x70) >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 0x150) >> 0x20);
        pSVar3 = pSVar4 + 0x6c;
        if (((DAT_00683488 < ABS(fVar6 - *(float *)(this_00 + 0x70))) ||
            (DAT_00683488 < ABS(fVar8 - *(float *)(this_00 + 0x74)))) &&
           (*(ulong *)(this_00 + 0x70) = CONCAT44(fVar8,fVar6), this_00[0xb4] == (SceneObject)0x0))
        {
          SceneObject::RegisterForWorldBoundsUpdate(this_00);
          this_00[0xb4] = (SceneObject)0x1;
          pSVar4 = *(SceneObject **)(this + 0x148);
          this_00 = *(SceneObject **)(this + 0x28);
          pSVar3 = pSVar4 + 0x6c;
        }
        fVar6 = _DAT_00688c9c;
        *(undefined4 *)(this_00 + 0x68) = *(undefined4 *)(pSVar4 + 0x68);
        *(undefined4 *)(this_00 + 0x6c) = *(undefined4 *)pSVar3;
        fVar8 = *(float *)(this + 0x15c);
        if (fVar8 < fVar6) {
          *(undefined4 *)(pSVar4 + 0x68) = 0;
          *(undefined4 *)pSVar3 = 0;
          *(undefined8 *)(this + 0x150) = 0;
          if (this_00 != (SceneObject *)0x0) {
            *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
          }
          *(SceneObject **)(this + 0x148) = this_00;
          iVar1 = *(int *)(pSVar4 + 8);
          *(int *)(pSVar4 + 8) = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            (**(code **)(*(long *)pSVar4 + 8))();
          }
          goto LAB_0038a7c0;
        }
      }
      if (30.0 <= fVar8) goto LAB_0038a980;
      *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
    }
  }
  Destroy(this);
LAB_0038a980:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


