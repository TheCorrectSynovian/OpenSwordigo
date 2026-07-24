/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394b00
 * Function: Caver::BouncingMonsterControllerComponent::Fall
 * Signature: undefined __thiscall Fall(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::Fall() */

void __thiscall
Caver::BouncingMonsterControllerComponent::Fall(BouncingMonsterControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x100;
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar1 = *(long **)(this + 0xf8);
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  *(undefined4 *)(lVar2 + 0xc) = 0;
  this[0x119] = (BouncingMonsterControllerComponent)0x1;
  return;
}


