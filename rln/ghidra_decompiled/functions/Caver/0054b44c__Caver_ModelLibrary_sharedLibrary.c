/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054b44c
 * Function: Caver::ModelLibrary::sharedLibrary
 * Signature: undefined __cdecl sharedLibrary(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelLibrary::sharedLibrary() */

void * Caver::ModelLibrary::sharedLibrary(void)

{
  void *__s;
  undefined8 *puVar1;
  
  if (DAT_007e9a38 == (void *)0x0) {
    __s = operator_new(0x90);
    memset(__s,0,0x90);
    *(long *)((long)__s + 0x18) = (long)__s + 8;
    *(long *)((long)__s + 0x20) = (long)__s + 8;
    puVar1 = (undefined8 *)((long)__s + 0x38);
    *puVar1 = 0;
    *(undefined8 *)((long)__s + 0x40) = 0;
    *(undefined8 **)((long)__s + 0x48) = puVar1;
    *(undefined8 **)((long)__s + 0x50) = puVar1;
    *(undefined8 *)((long)__s + 0x58) = 0;
    puVar1 = (undefined8 *)((long)__s + 0x68);
    *puVar1 = 0;
    *(undefined8 *)((long)__s + 0x70) = 0;
    *(undefined8 **)((long)__s + 0x78) = puVar1;
    *(undefined8 **)((long)__s + 0x80) = puVar1;
    *(undefined8 *)((long)__s + 0x88) = 0;
    DAT_007e9a38 = __s;
  }
  return DAT_007e9a38;
}


