/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381720
 * Function: Caver::PhysicsPlatformComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(PhysicsPlatformComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::PhysicsPlatformComponent::HandleMessage
          (PhysicsPlatformComponent *this,int param_1,void *param_2)

{
  if (((param_1 == 7) && (*(char *)(*(long *)param_2 + 0x17a) != '\0')) &&
     (*(char *)(*(long *)((long)param_2 + 8) + 0x17b) != '\0')) {
    HandleObjectCollision(this,param_2);
  }
  return 0;
}


