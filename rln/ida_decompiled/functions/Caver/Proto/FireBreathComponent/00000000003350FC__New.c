/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003350FC
 * Mangled: _ZNK5Caver5Proto19FireBreathComponent3NewEv
 * Demangled: Caver::Proto::FireBreathComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000335104 string=0x0000000000335108 "6"
 *   insn=0x0000000000335108 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033510C string=0x0000000000335110 ""
 *   insn=0x000000000033511C string=0x0000000000335120 "A"
 *   insn=0x0000000000335120 string=0x0000000000335124 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::New(Caver::Proto::FireBreathComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C9900;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

