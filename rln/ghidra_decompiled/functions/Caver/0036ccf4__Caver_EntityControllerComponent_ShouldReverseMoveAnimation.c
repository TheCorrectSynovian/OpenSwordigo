/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ccf4
 * Function: Caver::EntityControllerComponent::ShouldReverseMoveAnimation
 * Signature: undefined __thiscall ShouldReverseMoveAnimation(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::ShouldReverseMoveAnimation() */

bool __thiscall
Caver::EntityControllerComponent::ShouldReverseMoveAnimation(EntityControllerComponent *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x80);
  iVar1 = *(int *)(this + 0x108);
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar2 = *(long *)(this + 0x80);
  }
  return iVar1 != *(int *)(lVar2 + 0x70);
}


