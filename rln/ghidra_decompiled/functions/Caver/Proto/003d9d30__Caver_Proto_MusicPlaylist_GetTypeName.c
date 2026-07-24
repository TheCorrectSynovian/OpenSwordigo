/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9d30
 * Function: Caver::Proto::MusicPlaylist::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::GetTypeName() const */

void __thiscall Caver::Proto::MusicPlaylist::GetTypeName(MusicPlaylist *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


