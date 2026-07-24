/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429b38
 * Function: Caver::Proto::SwingableWeaponComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::New() const */

void Caver::Proto::SwingableWeaponComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x48);
  puVar1 = PTR_vtable_007e4a48;
                    /* catch() { ... } // from try @ 00429a48 with catch @ 00429b4c */
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


