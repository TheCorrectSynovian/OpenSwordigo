/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414d94
 * Function: Caver::Proto::BushControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::New() const */

void Caver::Proto::BushControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4c90;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 00414dc0 to 00514dcb has its CatchHandler @ 00414e7c */
  return;
}


