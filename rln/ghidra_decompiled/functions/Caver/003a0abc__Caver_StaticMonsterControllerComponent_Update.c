/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0abc
 * Function: Caver::StaticMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(StaticMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::Update(float) */

void __thiscall
Caver::StaticMonsterControllerComponent::Update
          (StaticMonsterControllerComponent *this,float param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  SoundEffectComponent *this_00;
  Component *pCVar4;
  StaticMonsterControllerComponent *pSVar5;
  undefined4 in_register_00005004;
  float fVar6;
  
  if ((*(long *)(this + 0x98) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this),
     *(long *)(this + 0x98) == 0)) {
    return;
  }
  plVar2 = *(long **)(this + 0x80);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar2 = *(long **)(this + 0x80);
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  if (param_1 <= DAT_00683734) goto LAB_003a0c10;
  plVar2 = *(long **)(this + 0xe0);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar2 = *(long **)(this + 0xe0);
  }
  lVar3 = (**(code **)(*plVar2 + 0x108))();
  fVar6 = *(float *)(lVar3 + 0xc);
  if (fVar6 < *(float *)(this + 0x11c)) {
    pCVar4 = *(Component **)(this + 0x98);
    if (pCVar4 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar4 = *(Component **)(this + 0x98);
      lVar3 = *(long *)(pCVar4 + 0x80);
      if (lVar3 != 0) goto LAB_003a0b64;
LAB_003a0b9c:
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar4 + 0x70),pCVar4);
      cVar1 = *(char *)(*(long *)(pCVar4 + 0x80) + 0x13e);
    }
    else {
      lVar3 = *(long *)(pCVar4 + 0x80);
      if (lVar3 == 0) goto LAB_003a0b9c;
LAB_003a0b64:
      cVar1 = *(char *)(lVar3 + 0x13e);
    }
    if ((cVar1 != '\0') && (0 < *(int *)(this + 0x118))) {
      lVar3 = 0;
      pSVar5 = this + 0xe8;
      do {
        this_00 = (SoundEffectComponent *)(**(code **)(*(long *)pSVar5 + 0x18))(pSVar5,this);
        SoundEffectComponent::Play(this_00);
        lVar3 = lVar3 + 1;
        pSVar5 = pSVar5 + 0x18;
      } while (lVar3 < *(int *)(this + 0x118));
    }
  }
  plVar2 = *(long **)(this + 0x80);
  *(float *)(this + 0x11c) = fVar6;
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar2 = *(long **)(this + 0x80);
  }
LAB_003a0c10:
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar2 = *(long **)(this + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x003a0c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


