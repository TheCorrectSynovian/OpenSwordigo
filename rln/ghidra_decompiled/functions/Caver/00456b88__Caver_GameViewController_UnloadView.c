/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00456b88
 * Function: Caver::GameViewController::UnloadView
 * Signature: undefined __thiscall UnloadView(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::UnloadView() */

void __thiscall Caver::GameViewController::UnloadView(GameViewController *this)

{
  if ((*(char *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0xe4) == '\0') &&
     (*(char *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1a0) == '\0')) {
    SaveGameState(this,true);
    return;
  }
  return;
}


