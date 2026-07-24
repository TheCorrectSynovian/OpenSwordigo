/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035f148
 * Function: Caver::CharControllerComponent::Pickup
 * Signature: undefined __thiscall Pickup(CharControllerComponent * this, SceneObject * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::Pickup(Caver::SceneObject*, bool) */

void __thiscall
Caver::CharControllerComponent::Pickup
          (CharControllerComponent *this,SceneObject *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  SwingableWeaponControllerComponent *pSVar3;
  long lVar4;
  CharAnimControllerComponent *pCVar5;
  CharControllerComponent *pCVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x2d0) < 5) && ((1 << (ulong)(*(uint *)(this + 0x2d0) & 0x1f) & 0x1aU) != 0)
     ) goto LAB_0035f194;
  if (param_1 != (SceneObject *)0x0) {
    *(undefined4 *)(this + 0x290) = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    plVar2 = *(long **)(this + 0x298);
    *(SceneObject **)(this + 0x298) = param_1;
    if ((plVar2 != (long *)0x0) &&
       (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (this[0x2bd] == (CharControllerComponent)0x0) {
    PickupWithoutAnimation(this);
    if (this[0x2bd] == (CharControllerComponent)0x0) goto LAB_0035f194;
    lVar4 = *(long *)(this + 0xb0);
    if (lVar4 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
      lVar4 = *(long *)(this + 0xb0);
      if (lVar4 != 0) goto LAB_0035f4d8;
    }
    else {
LAB_0035f4d8:
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    pCVar6 = this + 400;
    plVar2 = *(long **)pCVar6;
    *(long *)pCVar6 = lVar4;
    if ((plVar2 != (long *)0x0) &&
       (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    this[0x1c8] = (CharControllerComponent)0x1;
    if (pSVar3 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
      pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
      if (pSVar3 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035f530;
    }
    else {
LAB_0035f530:
      SwingableWeaponControllerComponent::SetWeaponHidden(pSVar3,true);
    }
    pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar3 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
      pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
      if (pSVar3 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035f554;
    }
    else {
LAB_0035f554:
      SwingableWeaponControllerComponent::SetWeaponHidden(pSVar3,true);
    }
    SetInitialAnimationControllerState(this);
    if (param_2) {
      plVar2 = *(long **)(this + 200);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
        plVar2 = *(long **)(this + 200);
        if (plVar2 == (long *)0x0) goto LAB_0035f660;
      }
      lVar4 = (**(code **)(*plVar2 + 0x108))();
      *(undefined4 *)(lVar4 + 0xc) = 0;
      pCVar5 = *(CharAnimControllerComponent **)pCVar6;
      if (pCVar5 == (CharAnimControllerComponent *)0x0) {
        pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar5 == (CharAnimControllerComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
          if (pCVar5 != (CharAnimControllerComponent *)0x0) goto LAB_0035f6a4;
        }
        else {
LAB_0035f6a4:
          *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
        }
        plVar2 = *(long **)pCVar6;
        *(CharAnimControllerComponent **)pCVar6 = pCVar5;
        if ((plVar2 == (long *)0x0) ||
           (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 != 0))
        goto LAB_0035f59c;
        (**(code **)(*plVar2 + 8))();
        pCVar5 = *(CharAnimControllerComponent **)pCVar6;
        plVar2 = *(long **)(this + 200);
      }
      else {
LAB_0035f59c:
        plVar2 = *(long **)(this + 200);
      }
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
        plVar2 = *(long **)(this + 200);
      }
      local_50 = (long *)(**(code **)(*plVar2 + 0x108))();
      if (local_50 != (long *)0x0) {
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      }
      CharAnimControllerComponent::BlendFromAnimationNode
                (pCVar5,(intrusive_ptr *)&local_50,_DAT_00683c38);
      if ((local_50 != (long *)0x0) &&
         (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
      lVar4 = *(long *)(this + 0x80);
      if (lVar4 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar4 = *(long *)(this + 0x80);
      }
      *(undefined1 *)(lVar4 + 0x114) = 1;
      plVar2 = *(long **)(this + 200);
      *(undefined8 *)(this + 0x2d0) = 1;
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
        plVar2 = *(long **)(this + 200);
      }
      lVar4 = (**(code **)(*plVar2 + 0x108))();
      *(undefined4 *)(this + 0x2d8) = *(undefined4 *)(lVar4 + 0x28);
    }
    else {
LAB_0035f660:
      *(undefined8 *)(this + 0x2d0) = 0x3f80000000000002;
    }
    *(undefined8 *)(this + 0x2e4) = 0x7f7fffff7f7fffff;
    *(undefined4 *)(this + 0x22c) = 0;
    this[0x244] = (CharControllerComponent)0x0;
    goto LAB_0035f194;
  }
  lVar4 = *(long *)(this + 0x98);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar4 = *(long *)(this + 0x98);
    if (lVar4 != 0) goto LAB_0035f24c;
  }
  else {
LAB_0035f24c:
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pCVar6 = this + 400;
  plVar2 = *(long **)pCVar6;
  *(long *)pCVar6 = lVar4;
  if ((plVar2 != (long *)0x0) &&
     (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  SetInitialAnimationControllerState(this);
  if (!param_2) {
    if (this[0x2bd] != (CharControllerComponent)0x0) {
      SceneObject::HandleMessage(*(SceneObject **)(this + 0x298),0x11,(void *)0x0);
      SceneObject::RemoveChildObject
                (*(SceneObject **)(this + 0x28),*(SceneObject **)(this + 0x298),false);
      plVar2 = *(long **)(this + 0x298);
      *(undefined8 *)(this + 0x298) = 0;
      if ((plVar2 != (long *)0x0) &&
         (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
      this[0x2bd] = (CharControllerComponent)0x0;
      *(undefined4 *)(this + 0x2d0) = 0;
    }
    goto LAB_0035f194;
  }
  if ((*(int *)(this + 0x230) == 0) && (*(int *)(this + 0x22c) == 0)) {
    lVar4 = *(long *)(this + 0x80);
    if (lVar4 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar4 = *(long *)(this + 0x80);
    }
    if (((*(float *)(lVar4 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(lVar4 + 0x8c))) &&
       (*(char *)(lVar4 + 0x90) == '\0')) {
      plVar2 = *(long **)(this + 0xe0);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar2 = *(long **)(this + 0xe0);
        if (plVar2 == (long *)0x0) goto LAB_0035f194;
      }
      lVar4 = (**(code **)(*plVar2 + 0x108))();
      *(undefined4 *)(lVar4 + 0xc) = 0;
      pCVar5 = *(CharAnimControllerComponent **)pCVar6;
      if (pCVar5 == (CharAnimControllerComponent *)0x0) {
        pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar5 == (CharAnimControllerComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
          if (pCVar5 != (CharAnimControllerComponent *)0x0) goto LAB_0035f860;
        }
        else {
LAB_0035f860:
          *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
        }
        plVar2 = *(long **)pCVar6;
        *(CharAnimControllerComponent **)pCVar6 = pCVar5;
        if ((plVar2 == (long *)0x0) ||
           (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 != 0))
        goto LAB_0035f71c;
        (**(code **)(*plVar2 + 8))();
        pCVar5 = *(CharAnimControllerComponent **)pCVar6;
        plVar2 = *(long **)(this + 0xe0);
      }
      else {
LAB_0035f71c:
        plVar2 = *(long **)(this + 0xe0);
      }
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar2 = *(long **)(this + 0xe0);
      }
      local_50 = (long *)(**(code **)(*plVar2 + 0x108))();
      if (local_50 != (long *)0x0) {
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      }
      CharAnimControllerComponent::BlendFromAnimationNode
                (pCVar5,(intrusive_ptr *)&local_50,_DAT_00683c38);
      if ((local_50 != (long *)0x0) &&
         (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
      plVar2 = *(long **)(this + 0xe0);
      *(undefined8 *)(this + 0x2d0) = 0x3f80000000000003;
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar2 = *(long **)(this + 0xe0);
      }
      lVar4 = (**(code **)(*plVar2 + 0x108))();
      fVar7 = DAT_00687998;
      fVar8 = DAT_00683944;
      if (DAT_00683944 <= *(float *)(lVar4 + 0x28) + DAT_00687998) {
        plVar2 = *(long **)(this + 0xe0);
        if (plVar2 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar2 = *(long **)(this + 0xe0);
        }
        lVar4 = (**(code **)(*plVar2 + 0x108))();
        fVar8 = *(float *)(lVar4 + 0x28) + fVar7;
      }
      lVar4 = *(long *)(this + 0x80);
      *(float *)(this + 0x2d8) = fVar8;
      if (lVar4 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar4 = *(long *)(this + 0x80);
      }
      iVar9 = *(int *)(lVar4 + 0x70);
      *(undefined4 *)(this + 0x2e8) = 0xc1a00000;
      *(float *)(this + 0x2e4) = (float)iVar9 * 10.0;
      goto LAB_0035f194;
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar2 = *(long **)(this + 0xf8);
    if (plVar2 != (long *)0x0) goto LAB_0035f2f8;
  }
  else {
LAB_0035f2f8:
    lVar4 = (**(code **)(*plVar2 + 0x108))();
    *(undefined4 *)(lVar4 + 0xc) = 0;
    pCVar5 = *(CharAnimControllerComponent **)pCVar6;
    if (pCVar5 == (CharAnimControllerComponent *)0x0) {
      pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar5 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar5 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar5 != (CharAnimControllerComponent *)0x0) goto LAB_0035f47c;
      }
      else {
LAB_0035f47c:
        *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
      }
      plVar2 = *(long **)pCVar6;
      *(CharAnimControllerComponent **)pCVar6 = pCVar5;
      if ((plVar2 == (long *)0x0) ||
         (iVar9 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar9, iVar9 != 0)) goto LAB_0035f310;
      (**(code **)(*plVar2 + 8))();
      pCVar5 = *(CharAnimControllerComponent **)pCVar6;
      plVar2 = *(long **)(this + 0xf8);
    }
    else {
LAB_0035f310:
      plVar2 = *(long **)(this + 0xf8);
    }
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar2 = *(long **)(this + 0xf8);
    }
    local_50 = (long *)(**(code **)(*plVar2 + 0x108))();
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    CharAnimControllerComponent::BlendFromAnimationNode
              (pCVar5,(intrusive_ptr *)&local_50,_DAT_00683c38);
    if ((local_50 != (long *)0x0) &&
       (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
    plVar2 = *(long **)(this + 0xf8);
    *(undefined8 *)(this + 0x2d0) = 0x3f80000000000004;
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar2 = *(long **)(this + 0xf8);
    }
    lVar4 = (**(code **)(*plVar2 + 0x108))();
    fVar7 = DAT_00683944;
    if (DAT_00683944 <= *(float *)(lVar4 + 0x28)) {
      plVar2 = *(long **)(this + 0xf8);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        plVar2 = *(long **)(this + 0xf8);
      }
      lVar4 = (**(code **)(*plVar2 + 0x108))();
      fVar7 = *(float *)(lVar4 + 0x28);
    }
    *(float *)(this + 0x2d8) = fVar7;
    *(undefined8 *)(this + 0x2e4) = 0;
  }
  *(undefined4 *)(this + 0x22c) = 0;
LAB_0035f194:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


