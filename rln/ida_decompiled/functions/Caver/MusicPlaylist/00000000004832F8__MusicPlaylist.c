/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004832F8
 * Mangled: _ZN5Caver13MusicPlaylistC2Ev
 * Demangled: Caver::MusicPlaylist::MusicPlaylist(void)
 *
 * Callers: 1
 *   0x00000000001FB570  Caver::MusicPlaylist::MusicPlaylist(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004832F8 string=0x00000000004832FC ""
 *   insn=0x0000000000483304 string=0x0000000000483308 "\t "
 *   insn=0x0000000000483308 string=0x000000000048330C "a"
 *   insn=0x000000000048330C string=0x0000000000483310 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MusicPlaylist::MusicPlaylist(__int64 this)
{
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 8) = 1;
  *(_QWORD *)this = &byte_6FD2F8;
  *(_QWORD *)(this + 16) = 0;
  return this;
}

