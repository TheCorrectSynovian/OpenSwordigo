/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f4e4
 * Function: Caver::SnappingMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::Prepare() */

void __thiscall
Caver::SnappingMonsterControllerComponent::Prepare(SnappingMonsterControllerComponent *this)

{
  long lVar1;
  
  RegisterLibrary(this);
  lVar1 = *(long *)(this + 0x80);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) {
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0xec) = 0;
  return;
}


