/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D91C0
 * Mangled: _ZN5Caver5Proto13MusicPlaylist10SharedCtorEv
 * Demangled: Caver::Proto::MusicPlaylist::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D91C0 string=0x00000000002D91C4 "h "
 *   insn=0x00000000002D91C4 string=0x00000000002D91C8 ""
 *   insn=0x00000000002D91CC string=0x00000000002D91D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::MusicPlaylist::_default_name_;
  return this;
}

