/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f84c
 * Function: Caver::SnappingMonsterControllerComponent::StopAttacking
 * Signature: undefined __thiscall StopAttacking(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::StopAttacking() */

void __thiscall
Caver::SnappingMonsterControllerComponent::StopAttacking(SnappingMonsterControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  SoundEffectComponent *this_00;
  
  plVar1 = *(long **)(this + 0x110);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
    plVar1 = *(long **)(this + 0x110);
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  *(undefined1 *)(lVar2 + 0x2c) = 1;
  plVar1 = *(long **)(this + 0x110);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
    plVar1 = *(long **)(this + 0x110);
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  *(undefined1 *)(lVar2 + 0x2d) = 1;
  this_00 = *(SoundEffectComponent **)(this + 0x140);
  this[0x148] = (SnappingMonsterControllerComponent)0x0;
  *(undefined4 *)(this + 0x14c) = 0;
  if (this_00 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    this_00 = *(SoundEffectComponent **)(this + 0x140);
    if (this_00 == (SoundEffectComponent *)0x0) {
      return;
    }
  }
  SoundEffectComponent::CancelDelayed(this_00);
  return;
}


