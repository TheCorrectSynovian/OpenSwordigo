/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f084
 * Function: Caver::SkillComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::HandleMessage(int, void*) */

undefined8 Caver::SkillComponent::HandleMessage(int param_1,void *param_2)

{
  long lVar1;
  
  if ((int)param_2 == 2) {
    lVar1 = *(long *)((ulong)(uint)param_1 + 0xb0);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xe8) = 1;
    }
    lVar1 = *(long *)((ulong)(uint)param_1 + 0xc0);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xe8) = 1;
    }
  }
  return 0;
}


