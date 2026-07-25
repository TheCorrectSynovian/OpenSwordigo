/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9630
 * Mangled: _ZNK5Caver5Proto13MusicPlaylist3NewEv
 * Demangled: Caver::Proto::MusicPlaylist::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D963C string=0x00000000002D9640 "h "
 *   insn=0x00000000002D963C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D9640 string=0x00000000002D9644 "5B"
 *   insn=0x00000000002D964C string=0x00000000002D9650 "k "
 *   insn=0x00000000002D9650 string=0x00000000002D9654 "k"
 *   insn=0x00000000002D9654 string=0x00000000002D9658 "\t"
 *   insn=0x00000000002D965C string=0x00000000002D9660 "A"
 *   insn=0x00000000002D9660 string=0x00000000002D9664 "$"
 *   insn=0x00000000002D9664 string=0x00000000002D9668 "\n("
 *   insn=0x00000000002D9668 string=0x00000000002D966C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::New(Caver::Proto::MusicPlaylist *this)
{
  __int64 result; // x0

  result = operator new(0x58u);
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::MusicPlaylist::_default_name_;
  *(_QWORD *)(result + 24) = result + 48;
  *(_DWORD *)(result + 40) = 4;
  *(_QWORD *)result = off_6C6278;
  *(_DWORD *)(result + 80) = 0;
  return result;
}

