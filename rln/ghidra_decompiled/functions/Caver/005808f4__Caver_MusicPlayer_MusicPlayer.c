/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005808f4
 * Function: Caver::MusicPlayer::MusicPlayer
 * Signature: undefined __thiscall MusicPlayer(MusicPlayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::MusicPlayer() */

void __thiscall Caver::MusicPlayer::MusicPlayer(MusicPlayer *this)

{
  MusicPlayer *pMVar1;
  
  *(undefined2 *)this = 1;
  this[2] = (MusicPlayer)0x1;
  this[8] = (MusicPlayer)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  pMVar1 = this + 0x60;
  *(undefined8 *)pMVar1 = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x50] = (MusicPlayer)0x0;
  *(MusicPlayer **)(this + 0x70) = pMVar1;
  *(MusicPlayer **)(this + 0x78) = pMVar1;
  return;
}


