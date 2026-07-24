/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f1de0
 * Function: Caver::Proto::LevelState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::New() const */

void Caver::Proto::LevelState::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x38);
  puVar1 = PTR_vtable_007e4a60;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_level_name__007e5098;
  *(undefined1 *)(plVar3 + 3) = 0;
  plVar3[4] = 0;
  plVar3[2] = (long)puVar2;
  plVar3[5] = 0xffffffff;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 6) = 0;
  return;
}


