/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b1918
 * Function: Caver::BushControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::Prepare() */

void __thiscall Caver::BushControllerComponent::Prepare(BushControllerComponent *this)

{
  int iVar1;
  Component *pCVar2;
  long lVar3;
  
  pCVar2 = *(Component **)(this + 0x80);
  if (pCVar2 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pCVar2 = *(Component **)(this + 0x80);
    if (pCVar2 == (Component *)0x0) {
      return;
    }
  }
  lVar3 = *(long *)(pCVar2 + 0x80);
  if (lVar3 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar2 + 0x70),pCVar2);
    lVar3 = *(long *)(pCVar2 + 0x80);
  }
  iVar1 = fastrandom();
  *(float *)(lVar3 + 0xd4) =
       (float)((double)((float)iVar1 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * DAT_00684790);
  return;
}


