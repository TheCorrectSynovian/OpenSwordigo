/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7A58
 * Mangled: _ZNK5Caver5Proto11SoundEffect3NewEv
 * Demangled: Caver::Proto::SoundEffect::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D7A64 string=0x00000000002D7A68 "h "
 *   insn=0x00000000002D7A64 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D7A68 string=0x00000000002D7A6C ""
 *   insn=0x00000000002D7A74 string=0x00000000002D7A78 ")"
 *   insn=0x00000000002D7A78 string=0x00000000002D7A7C "j "
 *   insn=0x00000000002D7A7C string=0x00000000002D7A80 "JuC"
 *   insn=0x00000000002D7A84 string=0x00000000002D7A88 "a"
 *   insn=0x00000000002D7A88 string=0x00000000002D7A8C " "
 *   insn=0x00000000002D7A8C string=0x00000000002D7A90 "A"
 *   insn=0x00000000002D7A90 string=0x00000000002D7A94 "@"
 *   insn=0x00000000002D7A94 string=0x00000000002D7A98 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::SoundEffect::New(Caver::Proto::SoundEffect *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x30u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::SoundEffect::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::SoundEffect::_default_resource_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C6110;
  v1[1] = result;
  v1[2].n128_u64[0] = 0x3DCCCCCD3F800000LL;
  v1[2].n128_u32[2] = 0;
  return result;
}

