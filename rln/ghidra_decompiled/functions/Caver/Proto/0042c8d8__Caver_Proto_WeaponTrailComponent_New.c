/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c8d8
 * Function: Caver::Proto::WeaponTrailComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::New() const */

void Caver::Proto::WeaponTrailComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7db8;
                    /* try { // try from 0042c8ec to 0052c8ef has its CatchHandler @ 0042ca60 */
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


