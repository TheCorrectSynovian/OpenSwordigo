/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039cb0c
 * Function: Caver::ShootingMonsterControllerComponent::Shoot
 * Signature: undefined __thiscall Shoot(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::Shoot() */

void __thiscall
Caver::ShootingMonsterControllerComponent::Shoot(ShootingMonsterControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar1 = *(long **)(this + 0xf8);
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x100;
  *(undefined2 *)(this + 0x11c) = 1;
  *(undefined4 *)(this + 0x118) = 0;
  return;
}


