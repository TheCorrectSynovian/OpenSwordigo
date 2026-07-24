/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e4090
 * Function: Caver::Proto::GuideTarget::~GuideTarget
 * Signature: undefined __thiscall ~GuideTarget(GuideTarget * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::~GuideTarget() */

void __thiscall Caver::Proto::GuideTarget::~GuideTarget(GuideTarget *this)

{
  GuideTarget *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e5c88 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x44);
  pGVar1 = *(GuideTarget **)(this + 0x38);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x44);
        pGVar1 = *(GuideTarget **)(this + 0x38);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x50) && (pGVar1 != (GuideTarget *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


