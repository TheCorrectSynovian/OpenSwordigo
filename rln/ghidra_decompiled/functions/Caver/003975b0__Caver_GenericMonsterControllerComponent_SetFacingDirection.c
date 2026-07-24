/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003975b0
 * Function: Caver::GenericMonsterControllerComponent::SetFacingDirection
 * Signature: undefined __thiscall SetFacingDirection(GenericMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::SetFacingDirection(int) */

void __thiscall
Caver::GenericMonsterControllerComponent::SetFacingDirection
          (GenericMonsterControllerComponent *this,int param_1)

{
  int iVar1;
  int iVar2;
  EntityComponent *this_00;
  long *plVar3;
  long lVar4;
  
  this_00 = *(EntityComponent **)(this + 0x80);
  if (this_00 == (EntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    this_00 = *(EntityComponent **)(this + 0x80);
  }
  if (*(int *)(this_00 + 0x70) != param_1) {
    if (this_00 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      this_00 = *(EntityComponent **)(this + 0x80);
    }
    EntityComponent::SetFacingDirection(this_00,param_1);
    lVar4 = *(long *)(this + 0x80);
    iVar1 = *(int *)(this + 0x108);
    if (lVar4 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar4 = *(long *)(this + 0x80);
    }
    plVar3 = *(long **)(this + 0xe0);
    iVar2 = *(int *)(lVar4 + 0x70);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar3 = *(long **)(this + 0xe0);
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    *(bool *)(lVar4 + 0x39) = iVar1 != iVar2;
  }
  return;
}


