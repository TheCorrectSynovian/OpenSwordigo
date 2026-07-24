/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f338
 * Function: Caver::AudioSystem::Setup
 * Signature: undefined __thiscall Setup(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::Setup() */

undefined8 __thiscall Caver::AudioSystem::Setup(AudioSystem *this)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  MusicPlayer *pMVar4;
  long lVar5;
  undefined *local_90;
  MusicPlayer *local_88;
  undefined8 uStack_80;
  AudioSystem *local_78;
  undefined *local_70;
  MusicPlayer *local_68;
  undefined8 uStack_60;
  AudioSystem *local_58;
  MusicPlayer *local_50;
  long *plStack_48;
  AudioSystem *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x68) == 0) {
    local_70 = (undefined *)0x0;
                    /* try { // try from 0057f370 to 0067f37f has its CatchHandler @ 0057f3c4 */
                    /* try { // try from 0057f380 to 0067f3d3 has its CatchHandler @ 0057f314 */
    plStack_48 = (long *)0x0;
    local_50 = (MusicPlayer *)PTR_AudioInterruptionDidBegin_007e4fe8;
    local_40 = this;
    uVar3 = boost::detail::function::has_empty_target(&local_50);
    if ((uVar3 & 1) == 0) {
      local_58 = local_40;
      uStack_60 = plStack_48;
      local_68 = local_50;
      local_70 = PTR_stored_vtable_007e7480;
    }
    else {
      local_70 = (undefined *)0x0;
    }
    local_90 = (undefined *)0x0;
                    /* catch() { ... } // from try @ 0057f370 with catch @ 0057f3c4 */
    plStack_48 = (long *)0x0;
    local_50 = (MusicPlayer *)PTR_AudioInterruptionDidEnd_007e5928;
    local_40 = this;
    uVar3 = boost::detail::function::has_empty_target(&local_50);
                    /* try { // try from 0057f3d4 to 0067f3d7 has its CatchHandler @ 0057f3d8 */
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 0057f3e0 to 0067f3eb has its CatchHandler @ 0057f314 */
                    /* catch() { ... } // from try @ 0057f3dc with catch @ 0057f3e8 */
      local_78 = local_40;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f418 with catch @ 0057f3ec
                       catch(type#1 @ 00000000) { ... } // from try @ 0057f45c with catch @ 0057f3ec
                        */
      uStack_80 = plStack_48;
      local_88 = local_50;
      local_90 = PTR_stored_vtable_007e7480;
    }
    else {
                    /* catch() { ... } // from try @ 0057f3d4 with catch @ 0057f3d8 */
      local_90 = (undefined *)0x0;
                    /* try { // try from 0057f3dc to 0067f3df has its CatchHandler @ 0057f3e8 */
    }
    InitAudioSession(&local_70,&local_90);
    if (local_90 != (undefined *)0x0) {
                    /* try { // try from 0057f410 to 0067f417 has its CatchHandler @ 0057f434 */
                    /* try { // try from 0057f418 to 0067f44f has its CatchHandler @ 0057f3ec */
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f410 with catch @ 0057f434
                        */
      local_90 = (undefined *)0x0;
    }
    if (local_70 != (undefined *)0x0) {
      if ((((ulong)local_70 & 1) == 0) &&
         (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 0057f450 to 0067f453 has its CatchHandler @ 0057f454 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f450 with catch @ 0057f454
                        */
                    /* try { // try from 0057f458 to 0067f45b has its CatchHandler @ 0057f464 */
                    /* try { // try from 0057f45c to 0067f467 has its CatchHandler @ 0057f3ec */
        (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f458 with catch @ 0057f464
                        */
      local_70 = (undefined *)0x0;
    }
    SetAudioSessionActive(true);
    pMVar4 = operator_new(0x88);
    MusicPlayer::MusicPlayer(pMVar4);
    local_50 = pMVar4;
    boost::detail::shared_count::shared_count<Caver::MusicPlayer>
              ((shared_count *)&plStack_48,pMVar4);
    boost::detail::sp_enable_shared_from_this(&local_50,pMVar4,pMVar4);
    pMVar4 = *(MusicPlayer **)(this + 0x68);
    plVar1 = *(long **)(this + 0x70);
    *(MusicPlayer **)(this + 0x68) = local_50;
    *(long **)(this + 0x70) = plStack_48;
    local_50 = pMVar4;
    plStack_48 = plVar1;
    if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    CreateDevice(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


