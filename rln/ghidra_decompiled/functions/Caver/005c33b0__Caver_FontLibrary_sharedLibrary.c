/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c33b0
 * Function: Caver::FontLibrary::sharedLibrary
 * Signature: undefined __cdecl sharedLibrary(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::sharedLibrary() */

void Caver::FontLibrary::sharedLibrary(void)

{
  undefined8 *puVar1;
  
  if (DAT_007e9fa8 == (void *)0x0) {
                    /* catch() { ... } // from try @ 005c30a8 with catch @ 005c33c8 */
    DAT_007e9fa8 = operator_new(0x38);
                    /* catch() { ... } // from try @ 005c3128 with catch @ 005c33d0 */
    puVar1 = (undefined8 *)((long)DAT_007e9fa8 + 8);
    *puVar1 = 0;
    *(undefined1 *)((long)DAT_007e9fa8 + 0x30) = 0;
    *(undefined8 *)((long)DAT_007e9fa8 + 0x10) = 0;
    *(undefined8 **)((long)DAT_007e9fa8 + 0x18) = puVar1;
                    /* catch() { ... } // from try @ 005c3120 with catch @ 005c33e0 */
    *(undefined8 **)((long)DAT_007e9fa8 + 0x20) = puVar1;
    *(undefined8 *)((long)DAT_007e9fa8 + 0x28) = 0;
  }
                    /* catch() { ... } // from try @ 005c3114 with catch @ 005c33e8 */
                    /* catch() { ... } // from try @ 005c3108 with catch @ 005c33f0 */
  return;
}


