/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1710
 * Mangled: _ZN5Caver15AudioPlayerImplC2Ev
 * Demangled: Caver::AudioPlayerImpl::AudioPlayerImpl(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004D1710 string=0x00000000004D1714 ""
 *   insn=0x00000000004D1720 string=0x00000000004D1724 "A"
 *   insn=0x00000000004D1724 string=0x00000000004D1728 ""
 *   insn=0x00000000004D1728 string=0x00000000004D172C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::AudioPlayerImpl(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 12) = 0;
  *(_QWORD *)this = off_6D7E00;
  *(_DWORD *)(this + 16) = 1065353216;
  return this;
}

