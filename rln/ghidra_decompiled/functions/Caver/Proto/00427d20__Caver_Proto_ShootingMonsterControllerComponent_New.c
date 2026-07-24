/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427d20
 * Function: Caver::Proto::ShootingMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::New() const */

void Caver::Proto::ShootingMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e6b18;
                    /* catch() { ... } // from try @ 00427034 with catch @ 00427d30 */
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


