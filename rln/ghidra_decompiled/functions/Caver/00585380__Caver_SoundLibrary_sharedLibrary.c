/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585380
 * Function: Caver::SoundLibrary::sharedLibrary
 * Signature: undefined __cdecl sharedLibrary(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::sharedLibrary() */

void Caver::SoundLibrary::sharedLibrary(void)

{
  undefined8 *puVar1;
  
  if (DAT_007e9db8 == (void *)0x0) {
    DAT_007e9db8 = operator_new(0x60);
    puVar1 = (undefined8 *)((long)DAT_007e9db8 + 8);
    *puVar1 = 0;
    *(undefined8 *)((long)DAT_007e9db8 + 0x10) = 0;
    *(undefined8 **)((long)DAT_007e9db8 + 0x18) = puVar1;
    *(undefined8 **)((long)DAT_007e9db8 + 0x20) = puVar1;
    *(undefined8 *)((long)DAT_007e9db8 + 0x28) = 0;
    puVar1 = (undefined8 *)((long)DAT_007e9db8 + 0x38);
    *puVar1 = 0;
    *(undefined8 *)((long)DAT_007e9db8 + 0x40) = 0;
    *(undefined8 **)((long)DAT_007e9db8 + 0x48) = puVar1;
    *(undefined8 **)((long)DAT_007e9db8 + 0x50) = puVar1;
    *(undefined8 *)((long)DAT_007e9db8 + 0x58) = 0;
  }
  return;
}


