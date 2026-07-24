/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00396230
 * Function: Caver::ChargingMonsterControllerComponent::StartCharging
 * Signature: undefined __thiscall StartCharging(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::StartCharging() */

void __thiscall
Caver::ChargingMonsterControllerComponent::StartCharging(ChargingMonsterControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  if (this[0x130] == (ChargingMonsterControllerComponent)0x0) {
    plVar1 = *(long **)(this + 0xf8);
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar1 = *(long **)(this + 0xf8);
      if (plVar1 == (long *)0x0) {
        return;
      }
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    if (lVar2 != 0) {
      plVar1 = *(long **)(this + 0xf8);
      if (plVar1 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        plVar1 = *(long **)(this + 0xf8);
      }
      lVar2 = (**(code **)(*plVar1 + 0x108))();
      *(undefined4 *)(lVar2 + 0xc) = 0;
      lVar2 = *(long *)(this + 0x120);
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined1 *)(lVar2 + 0x2d) = 0;
      *(undefined2 *)(*(long *)(this + 0x118) + 0x2c) = 0x100;
      *(undefined2 *)(this + 0x130) = 1;
      *(undefined8 *)(this + 0x138) = 0;
    }
  }
  return;
}


