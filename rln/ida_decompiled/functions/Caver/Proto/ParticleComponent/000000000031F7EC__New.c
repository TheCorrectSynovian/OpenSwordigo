/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F7EC
 * Mangled: _ZNK5Caver5Proto17ParticleComponent3NewEv
 * Demangled: Caver::Proto::ParticleComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x000000000031F7F4 string=0x000000000031F7F8 "zW"
 *   insn=0x000000000031F7F8 string=0x000000000031F7FC "("
 *   insn=0x000000000031F7F8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031F7FC string=0x000000000031F800 "%E"
 *   insn=0x000000000031F804 string=0x000000000031F808 ")"
 *   insn=0x000000000031F808 string=0x000000000031F80C ")"
 *   insn=0x000000000031F80C string=0x000000000031F810 "A"
 *   insn=0x000000000031F810 string=0x000000000031F814 ""
 *   insn=0x000000000031F814 string=0x000000000031F818 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::New(Caver::Proto::ParticleComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C8820;
  *(_QWORD *)(result + 16) = &Caver::Proto::ParticleComponent::_default_texture_name_;
  *(_QWORD *)(result + 24) = 0;
  return result;
}

