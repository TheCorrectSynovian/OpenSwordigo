/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c03c
 * Function: Caver::ProjectileMonsterControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ProjectileMonsterControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ProjectileMonsterControllerComponent::HandleMessage
          (ProjectileMonsterControllerComponent *this,int param_1,void *param_2)

{
  if (param_1 == 7) {
    if (*(char *)(*(long *)param_2 + 0x17b) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)((long)param_2 + 8) + 0x17a) == '\0') {
      return 0;
    }
  }
  else if (param_1 != 6) {
    return 0;
  }
  *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  return 0;
}


