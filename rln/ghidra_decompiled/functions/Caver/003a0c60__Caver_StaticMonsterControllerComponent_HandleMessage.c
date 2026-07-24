/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0c60
 * Function: Caver::StaticMonsterControllerComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 Caver::StaticMonsterControllerComponent::HandleMessage(int param_1,void *param_2)

{
  ulong uVar1;
  SoundEffectComponent *this;
  long lVar2;
  long *plVar3;
  
  uVar1 = (ulong)(uint)param_1;
  if (((int)param_2 == 6) && (0 < *(int *)(uVar1 + 0x118))) {
    lVar2 = 0;
    plVar3 = (long *)(uVar1 + 0xe8);
    do {
      this = (SoundEffectComponent *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      SoundEffectComponent::CancelDelayed(this);
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 3;
    } while (lVar2 < *(int *)(uVar1 + 0x118));
  }
  return 0;
}


