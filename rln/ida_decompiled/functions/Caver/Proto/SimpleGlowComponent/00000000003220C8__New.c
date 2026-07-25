/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003220C8
 * Mangled: _ZNK5Caver5Proto19SimpleGlowComponent3NewEv
 * Demangled: Caver::Proto::SimpleGlowComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000003220D0 string=0x00000000003220D4 "CM"
 *   insn=0x00000000003220D4 string=0x00000000003220D8 "("
 *   insn=0x00000000003220D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003220D8 string=0x00000000003220DC ""
 *   insn=0x00000000003220E8 string=0x00000000003220EC "A"
 *   insn=0x00000000003220F0 string=0x00000000003220F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::New(Caver::Proto::SimpleGlowComponent *this)
{
  __int64 result; // x0

  result = operator new(0x40u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)result = off_6C8910;
  *(_DWORD *)(result + 56) = 0;
  return result;
}

