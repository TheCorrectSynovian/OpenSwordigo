/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2b44
 * Function: Caver::Proto::CharacterState_ItemState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::New() const */

void Caver::Proto::CharacterState_ItemState::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e65c0;
  *(undefined4 *)(plVar3 + 1) = 0;
  lVar1 = DAT_00689bc8;
  *plVar3 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_name__007e5e50;
  plVar3[3] = lVar1;
  plVar3[2] = (long)puVar2;
  return;
}


