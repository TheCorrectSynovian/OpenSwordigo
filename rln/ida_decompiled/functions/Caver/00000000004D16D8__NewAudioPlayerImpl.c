/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D16D8
 * Mangled: _ZN5Caver18NewAudioPlayerImplEv
 * Demangled: Caver::NewAudioPlayerImpl(void)
 *
 * Callers: 1
 *   0x00000000001FB5C0  Caver::NewAudioPlayerImpl(void)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000004D16E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D16E8 string=0x00000000004D16EC ""
 *   insn=0x00000000004D16F8 string=0x00000000004D16FC "A"
 *   insn=0x00000000004D16FC string=0x00000000004D1700 ""
 *   insn=0x00000000004D1700 string=0x00000000004D1704 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewAudioPlayerImpl(Caver *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_QWORD *)result = off_6D7E00;
  *(_DWORD *)(result + 16) = 1065353216;
  return result;
}

