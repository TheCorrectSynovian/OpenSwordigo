/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4b98
 * Function: boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>
 * Signature: undefined __thiscall shared_ptr<Caver::MusicPlaylist>(shared_ptr<Caver::MusicPlaylist> * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist*)
    */

void __thiscall
boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>
          (shared_ptr<Caver::MusicPlaylist> *this,MusicPlaylist *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 004b4bb4 to 005b4bdb has its CatchHandler @ 004b4c80 */
  lVar4 = *(long *)(lVar1 + 0x28);
  *(MusicPlaylist **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e74e0;
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
                    /* try { // try from 004b4bf0 to 005b4bfb has its CatchHandler @ 004b4c84 */
  *(long **)(this + 8) = plVar3;
                    /* try { // try from 004b4bfc to 005b4cef has its CatchHandler @ 004b4b6c */
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


