/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8300
 * Function: Caver::Proto::SoundLibrary::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::New() const */

void Caver::Proto::SoundLibrary::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x50);
  puVar1 = PTR_vtable_007e58e8;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 9) = 0;
  return;
}


