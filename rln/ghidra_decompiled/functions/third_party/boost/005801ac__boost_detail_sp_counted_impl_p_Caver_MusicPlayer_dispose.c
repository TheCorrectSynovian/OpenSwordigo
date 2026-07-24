/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005801ac
 * Function: boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::MusicPlayer> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::MusicPlayer>::dispose
          (sp_counted_impl_p<Caver::MusicPlayer> *this)

{
  MusicPlayer *this_00;
  
                    /* try { // try from 005801b4 to 006801bf has its CatchHandler @ 005801cc */
  this_00 = *(MusicPlayer **)(this + 0x18);
  if (this_00 != (MusicPlayer *)0x0) {
    Caver::MusicPlayer::~MusicPlayer(this_00);
                    /* catch() { ... } // from try @ 005801b4 with catch @ 005801cc */
    operator_delete(this_00);
    return;
  }
  return;
}


