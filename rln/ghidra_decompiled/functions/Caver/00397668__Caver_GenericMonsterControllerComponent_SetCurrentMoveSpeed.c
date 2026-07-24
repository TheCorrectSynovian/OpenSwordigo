/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00397668
 * Function: Caver::GenericMonsterControllerComponent::SetCurrentMoveSpeed
 * Signature: undefined __thiscall SetCurrentMoveSpeed(GenericMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::SetCurrentMoveSpeed(float) */

void __thiscall
Caver::GenericMonsterControllerComponent::SetCurrentMoveSpeed
          (GenericMonsterControllerComponent *this,float param_1)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_00683734 < ABS(param_1 - *(float *)(this + 0x114))) {
    plVar1 = *(long **)(this + 0xe0);
    *(float *)(this + 0x114) = param_1;
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar1 = *(long **)(this + 0xe0);
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    *(float *)(lVar2 + 0x34) = *(float *)(this + 0x114) / *(float *)(this + 200);
  }
  return;
}


