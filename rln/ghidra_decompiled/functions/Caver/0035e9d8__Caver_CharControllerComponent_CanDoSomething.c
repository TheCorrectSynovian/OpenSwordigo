/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035e9d8
 * Function: Caver::CharControllerComponent::CanDoSomething
 * Signature: undefined __thiscall CanDoSomething(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::CanDoSomething() */

bool __thiscall Caver::CharControllerComponent::CanDoSomething(CharControllerComponent *this)

{
  bool bVar1;
  long lVar2;
  
  if (*(float *)(this + 0x2f8) <= DAT_00683944) {
    lVar2 = *(long *)(this + 0x80);
    if (lVar2 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar2 = *(long *)(this + 0x80);
    }
    bVar1 = *(char *)(lVar2 + 0x115) == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


