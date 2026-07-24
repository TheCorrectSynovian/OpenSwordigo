/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f664
 * Function: Caver::SnappingMonsterControllerComponent::Attack
 * Signature: undefined __thiscall Attack(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::Attack() */

void __thiscall
Caver::SnappingMonsterControllerComponent::Attack(SnappingMonsterControllerComponent *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  SoundEffectComponent *pSVar4;
  Component *pCVar5;
  SoundEffectComponent *this_00;
  float fVar6;
  
  plVar2 = *(long **)(this + 0xf8);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar2 = *(long **)(this + 0xf8);
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  lVar3 = (**(code **)(*plVar2 + 0x108))();
  if (lVar3 != 0) {
    plVar2 = *(long **)(this + 0x110);
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
      plVar2 = *(long **)(this + 0x110);
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
    lVar3 = (**(code **)(*plVar2 + 0x108))();
    if (lVar3 != 0) {
      plVar2 = *(long **)(this + 0xf8);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        plVar2 = *(long **)(this + 0xf8);
      }
      lVar3 = (**(code **)(*plVar2 + 0x108))();
      *(undefined4 *)(lVar3 + 0xc) = 0;
      plVar2 = *(long **)(this + 0x110);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
        plVar2 = *(long **)(this + 0x110);
      }
      lVar3 = (**(code **)(*plVar2 + 0x108))();
      *(undefined1 *)(lVar3 + 0x2c) = 0;
      plVar2 = *(long **)(this + 0x110);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
        plVar2 = *(long **)(this + 0x110);
      }
      lVar3 = (**(code **)(*plVar2 + 0x108))();
      *(undefined1 *)(lVar3 + 0x2d) = 1;
      this[0x148] = (SnappingMonsterControllerComponent)0x1;
      if ((*(long *)(this + 0x140) != 0) ||
         (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this),
         *(long *)(this + 0x140) != 0)) {
        pCVar5 = *(Component **)(this + 0x98);
        if (pCVar5 == (Component *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pCVar5 = *(Component **)(this + 0x98);
          lVar3 = *(long *)(pCVar5 + 0x80);
        }
        else {
          lVar3 = *(long *)(pCVar5 + 0x80);
        }
        if (lVar3 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar5 + 0x70),pCVar5);
          cVar1 = *(char *)(*(long *)(pCVar5 + 0x80) + 0x13e);
        }
        else {
          cVar1 = *(char *)(lVar3 + 0x13e);
        }
        if (cVar1 != '\0') {
          this_00 = *(SoundEffectComponent **)(this + 0x140);
          pSVar4 = this_00;
          if (this_00 == (SoundEffectComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
            this_00 = *(SoundEffectComponent **)(this + 0x140);
            pSVar4 = this_00;
            if (this_00 == (SoundEffectComponent *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
              pSVar4 = *(SoundEffectComponent **)(this + 0x140);
            }
          }
          plVar2 = *(long **)(this + 0xf8);
          fVar6 = *(float *)(pSVar4 + 0x84);
          if (plVar2 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
            plVar2 = *(long **)(this + 0xf8);
          }
          lVar3 = (**(code **)(*plVar2 + 0x108))();
          SoundEffectComponent::PlayWithDelay(this_00,fVar6 / *(float *)(lVar3 + 0x30));
          return;
        }
      }
    }
  }
  return;
}


