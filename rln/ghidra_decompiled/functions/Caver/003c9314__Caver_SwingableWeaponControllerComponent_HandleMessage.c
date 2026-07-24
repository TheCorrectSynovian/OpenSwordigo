/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9314
 * Function: Caver::SwingableWeaponControllerComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::HandleMessage(int, void*) */

undefined8 Caver::SwingableWeaponControllerComponent::HandleMessage(int param_1,void *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (((int)param_2 == 2) &&
     (plVar2 = *(long **)((ulong)(uint)param_1 + 0x98), plVar2 != (long *)0x0)) {
    *(undefined8 *)((ulong)(uint)param_1 + 0x98) = 0;
    iVar1 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
      return 0;
    }
  }
  return 0;
}


