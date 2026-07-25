/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302B98
 * Mangled: _ZNK5Caver5Proto15SpriteComponent3NewEv
 * Demangled: Caver::Proto::SpriteComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x0000000000302BA4 string=0x0000000000302BA8 "("
 *   insn=0x0000000000302BA4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000302BA8 string=0x0000000000302BAC "1C"
 *   insn=0x0000000000302BB0 string=0x0000000000302BB4 "\t"
 *   insn=0x0000000000302BB4 string=0x0000000000302BB8 ")"
 *   insn=0x0000000000302BB8 string=0x0000000000302BBC "A"
 *   insn=0x0000000000302BBC string=0x0000000000302BC0 ""
 *   insn=0x0000000000302BC4 string=0x0000000000302BC8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::New(Caver::Proto::SpriteComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C7560;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::SpriteComponent::_default_texture_name_;
  return result;
}

