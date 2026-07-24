/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00397528
 * Function: Caver::GenericMonsterControllerComponent::StartMovingToDirection
 * Signature: undefined __thiscall StartMovingToDirection(GenericMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::StartMovingToDirection(int) */

void __thiscall
Caver::GenericMonsterControllerComponent::StartMovingToDirection
          (GenericMonsterControllerComponent *this,int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(this + 0x108) != param_1) {
    lVar3 = *(long *)(this + 0x80);
    *(int *)(this + 0x108) = param_1;
    *(undefined4 *)(this + 0x10c) = 0;
    if (lVar3 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar3 = *(long *)(this + 0x80);
    }
    plVar2 = *(long **)(this + 0xe0);
    iVar1 = *(int *)(lVar3 + 0x70);
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar2 = *(long **)(this + 0xe0);
    }
    lVar3 = (**(code **)(*plVar2 + 0x108))();
    *(bool *)(lVar3 + 0x39) = iVar1 != param_1;
  }
  return;
}


