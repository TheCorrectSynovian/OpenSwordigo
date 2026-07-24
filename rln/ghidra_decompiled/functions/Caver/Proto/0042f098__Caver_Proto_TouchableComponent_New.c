/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f098
 * Function: Caver::Proto::TouchableComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::New() const */

void Caver::Proto::TouchableComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0042f0a0 to 0052f0a3 has its CatchHandler @ 0042f124 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6360;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


