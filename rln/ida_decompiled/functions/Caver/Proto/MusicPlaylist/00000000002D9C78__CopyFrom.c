/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9C78
 * Mangled: _ZN5Caver5Proto13MusicPlaylist8CopyFromERKS1_
 * Demangled: Caver::Proto::MusicPlaylist::CopyFrom(Caver::Proto::MusicPlaylist const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203A50  Caver::Proto::MusicPlaylist::MergeFrom(Caver::Proto::MusicPlaylist const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D9C8C string=0x00000000002D9C90 "@"
 *   insn=0x00000000002D9C98 string=0x00000000002D9C9C ""
 *   insn=0x00000000002D9CB0 string=0x00000000002D9CB4 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicPlaylist::CopyFrom(
        Caver::Proto::MusicPlaylist *this,
        const Caver::Proto::MusicPlaylist *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MusicPlaylist *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MusicPlaylist::MergeFrom(this, a2);
  }
}

