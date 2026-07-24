/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419a50
 * Function: Caver::Proto::EntityControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::New() const */

void Caver::Proto::EntityControllerComponent::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x30);
  puVar2 = PTR_vtable_007e7ec8;
  lVar1 = DAT_00689bc8;
                    /* catch() { ... } // from try @ 004199b4 with catch @ 00419a6c */
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[5] = lVar1;
  return;
}


