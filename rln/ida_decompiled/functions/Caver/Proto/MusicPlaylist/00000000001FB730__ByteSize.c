/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB730
 * Mangled: ._ZNK5Caver5Proto13MusicPlaylist8ByteSizeEv
 * Demangled: Caver::Proto::MusicPlaylist::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E6200  Caver::Proto::GameOptions::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D9A40  Caver::Proto::MusicPlaylist::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB738 string=0x00000000001FB73C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MusicPlaylist::ByteSize(Caver::Proto::MusicPlaylist *this)
{
  return _ZNK5Caver5Proto13MusicPlaylist8ByteSizeEv(this);
}

