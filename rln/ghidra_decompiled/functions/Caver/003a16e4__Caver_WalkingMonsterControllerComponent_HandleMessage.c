/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a16e4
 * Function: Caver::WalkingMonsterControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(WalkingMonsterControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WalkingMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::WalkingMonsterControllerComponent::HandleMessage
          (WalkingMonsterControllerComponent *this,int param_1,void *param_2)

{
  EntityComponent *this_00;
  int iVar1;
  
  if ((param_1 == 0x15) && (*(float *)((long)param_2 + 0x2c) <= DAT_00684430)) {
    iVar1 = -1;
    if (0.0 <= *(float *)((long)param_2 + 0x28)) {
      iVar1 = 1;
    }
    if (*(int *)(this + 0xe8) != iVar1) {
      this_00 = *(EntityComponent **)(this + 0x80);
      *(int *)(this + 0xe8) = iVar1;
      if (this_00 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(this_00,iVar1);
    }
  }
  return 0;
}


