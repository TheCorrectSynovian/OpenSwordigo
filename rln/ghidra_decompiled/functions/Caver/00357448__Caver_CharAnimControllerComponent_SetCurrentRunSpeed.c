/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357448
 * Function: Caver::CharAnimControllerComponent::SetCurrentRunSpeed
 * Signature: undefined __thiscall SetCurrentRunSpeed(CharAnimControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::SetCurrentRunSpeed(float) */

void __thiscall
Caver::CharAnimControllerComponent::SetCurrentRunSpeed
          (CharAnimControllerComponent *this,float param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  if (lVar2 != 0) {
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar1 = *(long **)(this + 0xe0);
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    *(float *)(lVar2 + 0x34) = param_1 / _DAT_0068782c;
  }
  return;
}


