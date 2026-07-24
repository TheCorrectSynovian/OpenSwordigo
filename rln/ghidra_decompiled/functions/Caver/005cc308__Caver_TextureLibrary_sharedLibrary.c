/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc308
 * Function: Caver::TextureLibrary::sharedLibrary
 * Signature: undefined __cdecl sharedLibrary(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TextureLibrary::sharedLibrary() */

void Caver::TextureLibrary::sharedLibrary(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  
  if (DAT_007ea038 == (long *)0x0) {
    plVar2 = operator_new(0x60);
    uVar1 = _DAT_00697f60;
    DAT_007ea038 = plVar2;
    *plVar2 = (long)(PTR_vtable_007e71c8 + 0x10);
    plVar3 = plVar2 + 2;
                    /* try { // try from 005cc348 to 006cc3cf has its CatchHandler @ 005cc348
                       catch() { ... } // from try @ 005cc348 with catch @ 005cc348
                       catch() { ... } // from try @ 005cc48c with catch @ 005cc348
                       catch() { ... } // from try @ 005cc7cc with catch @ 005cc348 */
    *plVar3 = 0;
    *(undefined2 *)(plVar2 + 7) = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[9] = 0;
    plVar2[3] = 0;
    plVar2[4] = (long)plVar3;
    plVar2[5] = (long)plVar3;
    plVar2[6] = 0;
    *(undefined8 *)((long)plVar2 + 0x3c) = uVar1;
  }
  return;
}


