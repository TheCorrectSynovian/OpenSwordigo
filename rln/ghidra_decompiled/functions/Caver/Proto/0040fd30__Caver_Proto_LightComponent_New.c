/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fd30
 * Function: Caver::Proto::LightComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::New() const */

void Caver::Proto::LightComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0040fd38 to 00510657 has its CatchHandler @ 004109c8 */
  plVar2 = operator_new(0x40);
  puVar1 = PTR_vtable_007e64f0;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 5) = 0;
  return;
}


