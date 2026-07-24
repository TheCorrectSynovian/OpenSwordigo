/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003579d0
 * Function: Caver::CharAnimControllerComponent::IsReadyToJump
 * Signature: undefined __thiscall IsReadyToJump(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::IsReadyToJump() */

bool __thiscall Caver::CharAnimControllerComponent::IsReadyToJump(CharAnimControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar1 = *(long **)(this + 0xf8);
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  return *(float *)(lVar2 + 0x28) * 0.5 < *(float *)(lVar2 + 0xc);
}


