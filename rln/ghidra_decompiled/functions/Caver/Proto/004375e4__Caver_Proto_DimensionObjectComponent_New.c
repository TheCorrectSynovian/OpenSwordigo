/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004375e4
 * Function: Caver::Proto::DimensionObjectComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::New() const */

void Caver::Proto::DimensionObjectComponent::New(void)

{
  long *plVar1;
  
                    /* try { // try from 004375e8 to 005375fb has its CatchHandler @ 004380b8 */
  plVar1 = operator_new(0x10);
  *plVar1 = (long)(PTR_vtable_007e66d0 + 0x10);
  plVar1[1] = 0;
  return;
}


