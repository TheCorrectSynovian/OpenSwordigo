/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036c06c
 * Function: Caver::EntityControllerComponent::SetFacingDirection
 * Signature: undefined __thiscall SetFacingDirection(EntityControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SetFacingDirection(int) */

void __thiscall
Caver::EntityControllerComponent::SetFacingDirection(EntityControllerComponent *this,int param_1)

{
  int iVar1;
  EntityComponent *this_00;
  long lVar2;
  long lVar3;
  
  this_00 = *(EntityComponent **)(this + 0x80);
  *(undefined4 *)(this + 0x130) = 0;
  *(int *)(this + 0x128) = param_1;
  if (this_00 == (EntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    this_00 = *(EntityComponent **)(this + 0x80);
  }
  EntityComponent::SetFacingDirection(this_00,param_1);
  lVar3 = *(long *)(this + 0x100);
  if (lVar3 != 0) {
    lVar2 = *(long *)(this + 0x80);
    iVar1 = *(int *)(this + 0x108);
    if (lVar2 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar2 = *(long *)(this + 0x80);
    }
    *(bool *)(lVar3 + 0x39) = iVar1 != *(int *)(lVar2 + 0x70);
  }
  return;
}


