/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330504
 * Function: Caver::PortalComponent::Activate
 * Signature: undefined __thiscall Activate(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PortalComponent::Activate() */

void __thiscall Caver::PortalComponent::Activate(PortalComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  SceneObject *pSVar5;
  long *plVar6;
  SimpleGlowComponent *this_00;
  FloatColor *this_01;
  SpriteComponent *this_02;
  string *psVar7;
  undefined *puVar8;
  TouchableComponent *this_03;
  CollisionShapeComponent *this_04;
  TransformControllerComponent *this_05;
  int *piVar9;
  long lVar10;
  long *plVar11;
  PortalComponent *pPVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_70 [8];
  long local_68;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0x98] == (PortalComponent)0x0) {
    Enter(this);
    goto LAB_0033090c;
  }
  if (*(long *)(*(long *)(this + 0x88) + -0x18) == 0) {
    lVar10 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
    plVar6 = *(long **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x18);
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    FUN_0066a528(&local_60,lVar10 + 0x158);
    FUN_0066a6a8(lVar10 + 0x168,&local_60);
    if (local_60 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar11 = local_60 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = (int)*plVar11;
        *(int *)plVar11 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = (int)*plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *(int *)plVar11 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete(local_60 + -3);
      }
    }
    FUN_0066a6a8(lVar10 + 0x160,*(long *)(this + 0x28) + 0x50);
    if ((plVar6 != (long *)0x0) && (lVar10 = plVar6[1], plVar6[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar10 = plVar6[2];
      plVar6[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  pPVar12 = this + 0xa0;
  if (*(long *)pPVar12 != 0) goto LAB_0033090c;
  pSVar5 = operator_new(0x128);
  SceneObject::SceneObject(pSVar5);
  *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
  plVar6 = *(long **)pPVar12;
  *(SceneObject **)pPVar12 = pSVar5;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  this_00 = operator_new(0xe0);
  this_01 = (FloatColor *)SimpleGlowComponent::SimpleGlowComponent(this_00);
  FloatColor::FromHSLA(this_01,0.0,0.0,DAT_00684430,0.0);
  *(undefined8 *)(this_00 + 0xac) = uStack_58;
  *(long **)(this_00 + 0xa4) = local_60;
  *(undefined8 *)(this_00 + 0xb4) = 0x14425c0000;
  *(undefined4 *)(this_00 + 200) = 0x3f000000;
  SimpleGlowComponent::AnimateToScale(this_00,1.0,0.25);
  SceneObject::AddComponent(*(SceneObject **)pPVar12,(Component *)this_00);
  this_02 = operator_new(0xa0);
  SpriteComponent::SpriteComponent(this_02);
  iVar4 = FUN_006689e0(this + 0x88,"iapstore");
  if (iVar4 == 0) {
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_68,"button_taptobrowse",auStack_70);
    TextureLibrary::TextureForName(psVar7,SUB81(&local_68,0));
    SpriteComponent::SetTexture(this_02,(intrusive_ptr *)&local_60);
    if ((local_60 != (long *)0x0) &&
       (iVar4 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*local_60 + 8))();
    }
    puVar8 = (undefined *)(local_68 + -0x18);
    if (puVar8 != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_003309b0;
      do {
        iVar4 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_003309bc;
    }
  }
  else {
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_68,"button_taptoenter",auStack_70);
    TextureLibrary::TextureForName(psVar7,SUB81(&local_68,0));
    SpriteComponent::SetTexture(this_02,(intrusive_ptr *)&local_60);
    if ((local_60 != (long *)0x0) &&
       (iVar4 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*local_60 + 8))();
    }
    puVar8 = (undefined *)(local_68 + -0x18);
    if (puVar8 != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_003309b0:
        iVar4 = *piVar9;
        *piVar9 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
LAB_003309bc:
      if (iVar4 < 1) {
        operator_delete(puVar8);
      }
    }
  }
  SceneObject::AddComponent(*(SceneObject **)pPVar12,(Component *)this_02);
  this_03 = operator_new(0xa8);
  TouchableComponent::TouchableComponent(this_03);
  *(undefined8 *)(this_03 + 0x78) = *(undefined8 *)(this + 0x28);
  SceneObject::AddComponent(*(SceneObject **)(this + 0xa0),(Component *)this_03);
  lVar10 = *(long *)(this + 0x28);
  pSVar5 = *(SceneObject **)(this + 0xa0);
  fVar13 = *(float *)(lVar10 + 0xa4) + *(float *)(lVar10 + 0xac) * 0.5;
  fVar14 = *(float *)(lVar10 + 0xa8) + *(float *)(lVar10 + 0xb0);
  if ((DAT_00683488 < ABS(fVar13 - *(float *)(pSVar5 + 0x70))) ||
     (DAT_00683488 < ABS(fVar14 - *(float *)(pSVar5 + 0x74)))) {
    *(float *)(pSVar5 + 0x70) = fVar13;
    *(float *)(pSVar5 + 0x74) = fVar14;
    if (pSVar5[0xb4] != (SceneObject)0x0) goto LAB_0033086c;
    SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
    pSVar5[0xb4] = (SceneObject)0x1;
    pSVar5 = *(SceneObject **)pPVar12;
    this_04 = *(CollisionShapeComponent **)(this + 0x80);
    if (this_04 == (CollisionShapeComponent *)0x0) goto LAB_00330894;
LAB_003308a8:
    fVar13 = (float)CollisionShapeComponent::WorldMinDepth(this_04);
  }
  else {
LAB_0033086c:
    this_04 = *(CollisionShapeComponent **)(this + 0x80);
    if (this_04 != (CollisionShapeComponent *)0x0) goto LAB_003308a8;
LAB_00330894:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    this_04 = *(CollisionShapeComponent **)(this + 0x80);
    if (this_04 != (CollisionShapeComponent *)0x0) goto LAB_003308a8;
    fVar13 = *(float *)(*(long *)(this + 0x28) + 0x78) + *(float *)(*(long *)(this + 0x28) + 0xb8);
  }
  *(float *)(pSVar5 + 0x78) = fVar13;
  this_05 = operator_new(0xc0);
  TransformControllerComponent::TransformControllerComponent(this_05);
  SceneObject::AddComponent(*(SceneObject **)(this + 0xa0),(Component *)this_05);
  TransformControllerComponent::ScaleTo(this_05,DAT_00683944,0.0);
  TransformControllerComponent::ScaleTo(this_05,1.0,_DAT_00684434);
  (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
            (*(long **)(*(long *)(this + 0x28) + 0x20),pPVar12);
LAB_0033090c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


