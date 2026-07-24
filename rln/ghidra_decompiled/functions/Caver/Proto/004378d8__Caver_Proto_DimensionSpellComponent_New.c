/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004378d8
 * Function: Caver::Proto::DimensionSpellComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::New() const */

void Caver::Proto::DimensionSpellComponent::New(void)

{
  long *plVar1;
  
  plVar1 = operator_new(0x10);
                    /* try { // try from 004378ec to 005378ff has its CatchHandler @ 00437e58 */
  *plVar1 = (long)(PTR_vtable_007e64e8 + 0x10);
  plVar1[1] = 0;
  return;
}


