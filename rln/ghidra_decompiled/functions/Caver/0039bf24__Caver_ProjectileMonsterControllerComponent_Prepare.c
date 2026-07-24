/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bf24
 * Function: Caver::ProjectileMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ProjectileMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::Prepare() */

void __thiscall
Caver::ProjectileMonsterControllerComponent::Prepare(ProjectileMonsterControllerComponent *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) {
      return;
    }
  }
  *(undefined1 *)(lVar1 + 0xbc) = 1;
  return;
}


