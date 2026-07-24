/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039fbe8
 * Function: Caver::SnappingMonsterControllerComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 Caver::SnappingMonsterControllerComponent::HandleMessage(int param_1,void *param_2)

{
  if (((int)param_2 == 10) &&
     (((SnappingMonsterControllerComponent *)(ulong)(uint)param_1)[0x148] !=
      (SnappingMonsterControllerComponent)0x0)) {
    StopAttacking((SnappingMonsterControllerComponent *)(ulong)(uint)param_1);
  }
  return 0;
}


