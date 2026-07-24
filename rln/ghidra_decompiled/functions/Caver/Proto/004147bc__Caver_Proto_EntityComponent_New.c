/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004147bc
 * Function: Caver::Proto::EntityComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::New() const */

void Caver::Proto::EntityComponent::New(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x18);
  lVar2 = DAT_0068aa60;
                    /* catch() { ... } // from try @ 00414824 with catch @ 004147cc
                       catch() { ... } // from try @ 004148cc with catch @ 004147cc */
  puVar1 = PTR_vtable_007e5ea8 + 0x10;
  *(undefined1 *)(plVar3 + 2) = 1;
  *plVar3 = (long)puVar1;
  plVar3[1] = lVar2;
  *(undefined4 *)((long)plVar3 + 0x14) = 0;
  return;
}


