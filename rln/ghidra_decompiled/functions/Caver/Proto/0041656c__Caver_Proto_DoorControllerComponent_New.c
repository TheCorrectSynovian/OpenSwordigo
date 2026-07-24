/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041656c
 * Function: Caver::Proto::DoorControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::New() const */

void Caver::Proto::DoorControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e7608;
  *(undefined4 *)(plVar2 + 4) = 0;
                    /* catch() { ... } // from try @ 0041655c with catch @ 00416588 */
  plVar2[1] = 0;
  plVar2[2] = 0;
                    /* catch() { ... } // from try @ 0041622c with catch @ 0041658c */
  *(undefined8 *)((long)plVar2 + 0x15) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* catch() { ... } // from try @ 0041615c with catch @ 00416598 */
  return;
}


