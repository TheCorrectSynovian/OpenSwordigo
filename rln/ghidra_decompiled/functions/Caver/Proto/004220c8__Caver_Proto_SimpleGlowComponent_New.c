/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004220c8
 * Function: Caver::Proto::SimpleGlowComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::New() const */

void Caver::Proto::SimpleGlowComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004220d4 to 005220df has its CatchHandler @ 00422738 */
  plVar2 = operator_new(0x40);
  puVar1 = PTR_vtable_007e71b0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 7) = 0;
  return;
}


