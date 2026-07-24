/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411988
 * Function: Caver::Proto::AnimationControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::New() const */

void Caver::Proto::AnimationControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e78a0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *(undefined8 *)((long)plVar2 + 0xd) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
                    /* catch() { ... } // from try @ 00411a24 with catch @ 004119b4
                       catch() { ... } // from try @ 00411ac8 with catch @ 004119b4 */
  return;
}


