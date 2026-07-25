/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C1C0
 * Mangled: _ZNK5Caver5Proto19BackgroundComponent3NewEv
 * Demangled: Caver::Proto::BackgroundComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x000000000031C1CC string=0x000000000031C1D0 "H"
 *   insn=0x000000000031C1CC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031C1D0 string=0x000000000031C1D4 "9E"
 *   insn=0x000000000031C1D8 string=0x000000000031C1DC "I"
 *   insn=0x000000000031C1DC string=0x000000000031C1E0 ")UC"
 *   insn=0x000000000031C1E0 string=0x000000000031C1E4 "A"
 *   insn=0x000000000031C1E4 string=0x000000000031C1E8 ""
 *   insn=0x000000000031C1EC string=0x000000000031C1F0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::New(Caver::Proto::BackgroundComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C8640;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::BackgroundComponent::_default_texture_name_;
  return result;
}

