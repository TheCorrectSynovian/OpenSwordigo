/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00592d44
 * Function: Caver::GUIApplication::sharedApplication
 * Signature: undefined __cdecl sharedApplication(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::sharedApplication() */

undefined * Caver::GUIApplication::sharedApplication(void)

{
  int iVar1;
  
  if (((DAT_007e9e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007e9e40), iVar1 != 0)) {
    memset(&DAT_007e9de8,0,0x50);
    std::
    _Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
    ::_M_initialize_map((_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
                         *)&DAT_007e9de8,0);
    __cxa_atexit(PTR__GUIApplication_007e62e8,&DAT_007e9de8,&PTR_LOOP_007e8000);
    __cxa_guard_release(&DAT_007e9e40);
                    /* try { // try from 00592dd0 to 00692df7 has its CatchHandler @ 00593070 */
  }
  return &DAT_007e9de8;
}


