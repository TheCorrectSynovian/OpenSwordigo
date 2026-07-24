/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038d098
 * Function: Caver::ProjectileControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ProjectileControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProjectileControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ProjectileControllerComponent::HandleMessage
          (ProjectileControllerComponent *this,int param_1,void *param_2)

{
  CollisionShapeComponent *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  intrusive_ptr *piVar8;
  string *psVar9;
  Vector2 *pVVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  SceneObject *this_01;
  SceneObject *pSVar15;
  DamageComponent *this_02;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 != 0xd) {
    if (param_1 == 7) {
      fVar16 = *(float *)((long)param_2 + 0x18);
      fVar17 = *(float *)((long)param_2 + 0x1c);
      fVar19 = *(float *)((long)param_2 + 0x28);
      fVar18 = *(float *)((long)param_2 + 0x2c);
      lVar7 = *(long *)param_2;
      this_00 = *(CollisionShapeComponent **)((long)param_2 + 8);
      if ((((*(char *)((long)param_2 + 0x34) != '\0') &&
           (DAT_00683488 < fVar16 * fVar16 + fVar17 * fVar17)) && (*(char *)(lVar7 + 0x17d) != '\0')
          ) && ((this_00[0x17c] != (CollisionShapeComponent)0x0 || (*(int *)(this_00 + 0x180) == 6))
               )) {
        lVar5 = SceneObject::ComponentWithInterface
                          (*(SceneObject **)(this_00 + 0x28),(long)PTR_Interface_007e7450);
        if (*(int *)(this_00 + 0x180) == 6) {
          lVar6 = SceneObject::ComponentWithInterface
                            (*(SceneObject **)(this_00 + 0x28),(long)PTR_Interface_007e6cd0);
          lVar11 = *(long *)(this + 0x78);
          if ((lVar6 == 0) || (lVar11 == 0)) goto LAB_0038d2f8;
          if (((*(int *)(lVar6 + 0xb4) == 1) && (DAT_0068493c < *(float *)(lVar11 + 0xcc))) &&
             (*(float *)(lVar6 + 0xcc) < _DAT_00684434)) goto LAB_0038d3ac;
        }
        else {
          lVar11 = *(long *)(this + 0x78);
LAB_0038d2f8:
          if (lVar11 == 0) goto LAB_0038d3ac;
        }
        if ((*(char *)(lVar11 + 0xbc) != '\0') &&
           ((lVar5 == 0 || (*(int *)(lVar11 + 0xb4) != *(int *)(lVar5 + 0x88))))) {
          pVVar10 = (Vector2 *)CollisionShapeComponent::collisionShape(this_00);
          CollisionShape::NearestPointInShape(pVVar10);
          local_80 = *(long **)(this_00 + 0x28);
          this_02 = *(DamageComponent **)(this + 0x78);
          if (local_80 != (long *)0x0) {
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          }
          local_88 = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
          Vector2::Normalize((Vector2 *)&local_88);
          local_98 = (long *)0x0;
          uStack_90 = 0;
          DamageComponent::AddPotentialImpact
                    (this_02,(intrusive_ptr *)&local_80,(Vector2 *)&local_78,(Vector2 *)&local_88,
                     *(int *)(this_00 + 0x180) == 6,(Vector4 *)&local_98);
          if ((local_80 != (long *)0x0) &&
             (iVar13 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar13, iVar13 == 0)) {
            (**(code **)(*local_80 + 8))();
          }
        }
      }
LAB_0038d3ac:
      if ((((this[0x71] == (ProjectileControllerComponent)0x0) || (*(char *)(lVar7 + 0x17b) == '\0')
           ) || (this_00[0x17a] == (CollisionShapeComponent)0x0)) ||
         (0.0 <= fVar19 * fVar16 + fVar18 * fVar17)) goto LAB_0038d4a4;
      CreateBlast(this);
    }
    else if (param_1 != 6) goto LAB_0038d4a4;
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
    goto LAB_0038d4a4;
  }
  if (*(char *)((long)param_2 + 0x24) == '\0') {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  else {
    lVar7 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)((long)param_2 + 8),(long)PTR_Interface_007e6cd0);
    if ((lVar7 != 0) && (lVar5 = *(long *)(this + 0x78), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)(lVar7 + 0xb4);
      iVar1 = *(int *)(lVar7 + 0xac) << 1;
      *(int *)(lVar5 + 0xac) = iVar1;
      iVar13 = *(int *)(lVar7 + 0xb0);
      *(int *)(lVar5 + 0xa4) = iVar1;
      iVar13 = iVar13 << 1;
      *(int *)(lVar5 + 0xa8) = iVar13;
      *(int *)(lVar5 + 0xb0) = iVar13;
    }
    piVar8 = (intrusive_ptr *)AudioSystem::sharedSystem();
    psVar9 = (string *)SoundLibrary::sharedLibrary();
    FUN_00666bb8(&local_78,"shield_block",&local_88);
    SoundLibrary::EffectForName(psVar9);
    AudioSystem::PlaySoundEffect(piVar8,1.0);
    if ((local_70 != (long *)0x0) &&
       (iVar13 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar13, iVar13 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
    if ((local_98 != (long *)0x0) &&
       (iVar13 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar13, iVar13 == 0)) {
      (**(code **)(*local_98 + 8))();
    }
    if ((undefined *)(local_78 + -0x18) == PTR_DAT_007e5de8) {
LAB_0038d2b4:
      if (lVar7 == 0) goto LAB_0038d430;
LAB_0038d2b8:
      if (*(int *)(lVar7 + 0xb4) != 1) goto LAB_0038d430;
      local_98 = *(long **)(this + 0x28);
      pfVar14 = (float *)(local_98 + 0xd);
      fVar16 = (float)*(long *)pfVar14 * -1.2;
      fVar17 = (float)((ulong)*(long *)pfVar14 >> 0x20) * -1.2;
    }
    else {
      piVar12 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *piVar12;
        *piVar12 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *piVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0 < iVar13) goto LAB_0038d2b4;
      operator_delete((undefined *)(local_78 + -0x18));
      if (lVar7 != 0) goto LAB_0038d2b8;
LAB_0038d430:
      local_98 = *(long **)(this + 0x28);
      pfVar14 = (float *)(local_98 + 0xd);
      fVar16 = -(float)*(long *)pfVar14;
      fVar17 = -(float)((ulong)*(long *)pfVar14 >> 0x20);
    }
    *pfVar14 = fVar16;
    *(float *)((long)local_98 + 0x6c) = fVar17;
    pSVar15 = *(SceneObject **)((long)param_2 + 8);
    do {
      this_01 = pSVar15;
      pSVar15 = *(SceneObject **)(this_01 + 0x30);
    } while (pSVar15 != (SceneObject *)0x0);
    if (local_98 != (long *)0x0) {
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    }
    SceneObject::AddChildObject(this_01,(intrusive_ptr *)&local_98);
    if ((local_98 != (long *)0x0) &&
       (iVar13 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar13, iVar13 == 0)) {
      (**(code **)(*local_98 + 8))();
    }
  }
  CreateBlast(this);
LAB_0038d4a4:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


