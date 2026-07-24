/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00344140
 * Function: Caver::ComponentFactory::sharedManager
 * Signature: undefined __cdecl sharedManager(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ComponentFactory::sharedManager() */

undefined * Caver::ComponentFactory::sharedManager(void)

{
  int iVar1;
  
  if (((DAT_007e8b40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007e8b40), iVar1 != 0)) {
    DAT_007e8b20 = 0;
    DAT_007e8b28 = 0;
    DAT_007e8b00 = 0;
    DAT_007e8b08 = 0;
    puRam00000000007e8b18 = &DAT_007e8b00;
    _DAT_007e8b10 = &DAT_007e8b00;
    DAT_007e8b30 = 0;
    DAT_007e8b38 = 0;
    __cxa_atexit(PTR__ComponentFactory_007e5c48,&DAT_007e8af8,&PTR_LOOP_007e8000);
    __cxa_guard_release(&DAT_007e8b40);
  }
  return &DAT_007e8af8;
}


