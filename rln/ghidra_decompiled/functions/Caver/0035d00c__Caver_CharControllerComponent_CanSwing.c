/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035d00c
 * Function: Caver::CharControllerComponent::CanSwing
 * Signature: undefined __thiscall CanSwing(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::CanSwing() */

bool __thiscall Caver::CharControllerComponent::CanSwing(CharControllerComponent *this)

{
  char cVar1;
  
  if (*(float *)(this + 0x2f8) <= DAT_00683944) {
    if (*(long *)(this + 0x80) == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
    }
    else {
      cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
    }
    if (cVar1 == '\0') {
      return this[0x1c8] == (CharControllerComponent)0x0;
    }
  }
  return false;
}


