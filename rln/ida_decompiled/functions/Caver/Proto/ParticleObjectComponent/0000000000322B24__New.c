/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322B24
 * Mangled: _ZNK5Caver5Proto23ParticleObjectComponent3NewEv
 * Demangled: Caver::Proto::ParticleObjectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000322B30 string=0x0000000000322B34 "("
 *   insn=0x0000000000322B30 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000322B34 string=0x0000000000322B38 "A@"
 *   insn=0x0000000000322B3C string=0x0000000000322B40 "A"
 *   insn=0x0000000000322B40 string=0x0000000000322B44 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::New(Caver::Proto::ParticleObjectComponent *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C8988;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

