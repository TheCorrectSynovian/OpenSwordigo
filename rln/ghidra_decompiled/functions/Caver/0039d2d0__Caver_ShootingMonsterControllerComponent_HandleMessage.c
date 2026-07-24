/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039d2d0
 * Function: Caver::ShootingMonsterControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ShootingMonsterControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ShootingMonsterControllerComponent::HandleMessage
          (ShootingMonsterControllerComponent *this,int param_1,void *param_2)

{
  EntityComponent *this_00;
  int iVar1;
  
  if ((param_1 == 0x15) && (*(float *)((long)param_2 + 0x2c) <= DAT_00684430)) {
    iVar1 = -1;
    if (0.0 <= *(float *)((long)param_2 + 0x28)) {
      iVar1 = 1;
    }
    if (*(int *)(this + 0x108) != iVar1) {
      this_00 = *(EntityComponent **)(this + 0x80);
      *(int *)(this + 0x108) = iVar1;
      if (this_00 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(this_00,iVar1);
      *(undefined4 *)(this + 0x120) = 0;
    }
  }
  return 0;
}


