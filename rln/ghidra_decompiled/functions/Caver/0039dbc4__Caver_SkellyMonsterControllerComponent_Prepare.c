/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039dbc4
 * Function: Caver::SkellyMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::Prepare() */

void __thiscall
Caver::SkellyMonsterControllerComponent::Prepare(SkellyMonsterControllerComponent *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0xe0) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this),
     *(long *)(this + 0xe0) != 0)) {
    CreateWeapons(this);
    lVar1 = *(long *)(this + 0xe0);
    if (lVar1 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      lVar1 = *(long *)(this + 0xe0);
      *(undefined1 *)(lVar1 + 0x245) = 0;
      if (lVar1 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        lVar1 = *(long *)(this + 0xe0);
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0x245) = 0;
    }
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(lVar1 + 0x268);
  }
  return;
}


