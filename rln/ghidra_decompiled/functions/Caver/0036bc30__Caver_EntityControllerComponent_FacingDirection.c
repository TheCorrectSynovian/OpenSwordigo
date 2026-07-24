/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036bc30
 * Function: Caver::EntityControllerComponent::FacingDirection
 * Signature: undefined __thiscall FacingDirection(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::FacingDirection() */

undefined4 __thiscall
Caver::EntityControllerComponent::FacingDirection(EntityControllerComponent *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar1 + 0x70);
}


