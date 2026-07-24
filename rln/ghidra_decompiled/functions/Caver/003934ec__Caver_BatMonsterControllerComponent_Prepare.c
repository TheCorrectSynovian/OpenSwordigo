/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003934ec
 * Function: Caver::BatMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::Prepare() */

void __thiscall Caver::BatMonsterControllerComponent::Prepare(BatMonsterControllerComponent *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x80);
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar2 = *(long *)(this + 0x80);
    if (lVar2 == 0) goto LAB_0039351c;
  }
  *(undefined4 *)(lVar2 + 0xe8) = 0;
LAB_0039351c:
  iVar1 = fastrandom();
  *(float *)(this + 0x100) = ((float)iVar1 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * 10.0;
  return;
}


