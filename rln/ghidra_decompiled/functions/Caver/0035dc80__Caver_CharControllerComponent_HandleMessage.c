/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035dc80
 * Function: Caver::CharControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(CharControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::CharControllerComponent::HandleMessage
          (CharControllerComponent *this,int param_1,void *param_2)

{
  int iVar1;
  long *plVar2;
  SoundEffectComponent *this_00;
  CharAnimControllerComponent *this_01;
  SwingableWeaponControllerComponent *pSVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  switch(param_1) {
  case 7:
    if (*(char *)(*(long *)param_2 + 0x17b) != '\0') {
      lVar6 = *(long *)((long)param_2 + 8);
      iVar4 = *(int *)(lVar6 + 0x180);
      if (iVar4 != 3) {
        if (iVar4 == 2) {
          if (_DAT_00684434 <= ABS(*(float *)((long)param_2 + 0x2c))) {
            return 0;
          }
          iVar4 = *(int *)(this + 0x22c);
          if (iVar4 == 0) {
            return 0;
          }
          if (0.0 <= *(float *)((long)param_2 + 0x28) * (float)iVar4) {
            return 0;
          }
          lVar6 = *(long *)(lVar6 + 0x28);
          if (lVar6 != 0) {
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          }
          plVar2 = *(long **)(this + 0x2a8);
          *(long *)(this + 0x2a8) = lVar6;
          if ((plVar2 != (long *)0x0) &&
             (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar2 + 8))();
            iVar4 = *(int *)(this + 0x22c);
          }
          *(int *)(this + 0x2b0) = iVar4;
          *(undefined4 *)(this + 0x2b4) = 0;
          return 0;
        }
        if (iVar4 != 1) {
          return 0;
        }
      }
      if (this[0x2bd] == (CharControllerComponent)0x0) {
        if (iVar4 == 3) {
          lVar5 = *(long *)(lVar6 + 0x28);
          *(undefined4 *)(this + 0x290) = 3;
        }
        else {
          lVar7 = *(long *)(this + 0x80);
          if (lVar7 == 0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            lVar7 = *(long *)(this + 0x80);
          }
          lVar5 = *(long *)(lVar6 + 0x28);
          if ((*(float *)(lVar5 + 0x70) - *(float *)(*(long *)(this + 0x28) + 0x70)) *
              (float)*(int *)(lVar7 + 0x70) <= 0.0) {
            return 0;
          }
          *(undefined4 *)(this + 0x290) = *(undefined4 *)(lVar6 + 0x180);
        }
        if (lVar5 != 0) {
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        }
        plVar2 = *(long **)(this + 0x298);
        *(long *)(this + 0x298) = lVar5;
        if ((plVar2 != (long *)0x0) &&
           (iVar4 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*plVar2 + 8))();
        }
        *(undefined4 *)(this + 0x2a0) = 0;
      }
    }
    break;
  case 10:
    if (*(int *)(*(long *)param_2 + 0xb4) != 1) {
      *(undefined4 *)(this + 0x260) = 0;
    }
    if (this[0x244] != (CharControllerComponent)0x0) {
      this[0x244] = (CharControllerComponent)0x0;
    }
    Hurt(this);
    break;
  case 0xb:
    if (this[0x244] != (CharControllerComponent)0x0) {
      this[0x244] = (CharControllerComponent)0x0;
    }
    Die(this);
    break;
  case 0x15:
    fVar9 = *(float *)((long)param_2 + 0x1c);
    lVar6 = *(long *)param_2;
    fVar8 = *(float *)((long)param_2 + 0x2c);
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    plVar2 = *(long **)(this + 0x288);
    *(long *)(this + 0x288) = lVar6;
    if ((plVar2 != (long *)0x0) &&
       (iVar4 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    if (((double)fVar8 < DAT_00687900) && (*(int *)(this + 0x250) == 3)) {
      this[0x24c] = (CharControllerComponent)0x0;
    }
    if (((DAT_00684430 < fVar8) && (fVar9 < DAT_00687994)) &&
       (this[0x25c] != (CharControllerComponent)0x0)) {
      this_00 = *(SoundEffectComponent **)(this + 0x188);
      if (this_00 == (SoundEffectComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x178),(Component *)this);
        this_00 = *(SoundEffectComponent **)(this + 0x188);
        if (this_00 == (SoundEffectComponent *)0x0) goto LAB_0035ddf8;
      }
      SoundEffectComponent::Play(this_00);
    }
LAB_0035ddf8:
    if ((ABS(fVar8) < DAT_00683484) && (this[0x244] != (CharControllerComponent)0x0)) {
      this[0x244] = (CharControllerComponent)0x0;
    }
    lVar6 = *(long *)(this + 0x80);
    if (lVar6 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar6 = *(long *)(this + 0x80);
    }
    if (((*(float *)(lVar6 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(lVar6 + 0x8c))) &&
       ((*(char *)(lVar6 + 0x90) == '\0' &&
        (this[0x25c] = (CharControllerComponent)0x0, *(int *)(this + 0x250) == 0)))) {
      this_01 = *(CharAnimControllerComponent **)(this + 400);
      if (this_01 == (CharAnimControllerComponent *)0x0) {
        this_01 = *(CharAnimControllerComponent **)(this + 0x98);
        if (this_01 == (CharAnimControllerComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          this_01 = *(CharAnimControllerComponent **)(this + 0x98);
          if (this_01 != (CharAnimControllerComponent *)0x0) goto LAB_0035de88;
        }
        else {
LAB_0035de88:
          *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
        }
        plVar2 = *(long **)(this + 400);
        *(CharAnimControllerComponent **)(this + 400) = this_01;
        if ((plVar2 != (long *)0x0) &&
           (iVar4 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*plVar2 + 8))(plVar2);
          this_01 = *(CharAnimControllerComponent **)(this + 400);
        }
        if (this_01 == (CharAnimControllerComponent *)0x0) goto LAB_0035decc;
      }
      CharAnimControllerComponent::StandOnGround(this_01);
    }
LAB_0035decc:
    if (this[0x2bd] != (CharControllerComponent)0x0) {
      UpdatePickupObjectPosition(this);
    }
    pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar3 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
      pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
      if (pSVar3 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035def8;
    }
    else {
LAB_0035def8:
      SwingableWeaponControllerComponent::UpdateWeaponTransform(pSVar3);
    }
    pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    if (pSVar3 == (SwingableWeaponControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
      pSVar3 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
      if (pSVar3 == (SwingableWeaponControllerComponent *)0x0) {
        return 0;
      }
    }
    SwingableWeaponControllerComponent::UpdateWeaponTransform(pSVar3);
  }
  return 0;
}


