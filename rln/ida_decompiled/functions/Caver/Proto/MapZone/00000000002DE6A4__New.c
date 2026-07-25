/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE6A4
 * Mangled: _ZNK5Caver5Proto7MapZone3NewEv
 * Demangled: Caver::Proto::MapZone::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 15
 *   insn=0x00000000002DE6B0 string=0x00000000002DE6B4 ""
 *   insn=0x00000000002DE6B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DE6B4 string=0x00000000002DE6B8 ""
 *   insn=0x00000000002DE6B8 string=0x00000000002DE6BC "( "
 *   insn=0x00000000002DE6BC string=0x00000000002DE6C0 ""
 *   insn=0x00000000002DE6C4 string=0x00000000002DE6C8 "\t0"
 *   insn=0x00000000002DE6CC string=0x00000000002DE6D0 "( "
 *   insn=0x00000000002DE6D0 string=0x00000000002DE6D4 ""
 *   insn=0x00000000002DE6D4 string=0x00000000002DE6D8 "0"
 *   insn=0x00000000002DE6D8 string=0x00000000002DE6DC "H "
 *   insn=0x00000000002DE6DC string=0x00000000002DE6E0 "5A"
 *   insn=0x00000000002DE6E8 string=0x00000000002DE6EC "A"
 *   insn=0x00000000002DE6EC string=0x00000000002DE6F0 ""
 *   insn=0x00000000002DE6F0 string=0x00000000002DE6F4 "H "
 *   insn=0x00000000002DE6F4 string=0x00000000002DE6F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::MapZone::New(Caver::Proto::MapZone *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x70u);
  v1[2].n128_u64[0] = (unsigned __int64)&v1[3].n128_u64[1];
  v1[3].n128_u32[0] = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::MapZone::_default_name_;
  v1[6].n128_u64[0] = (unsigned __int64)&Caver::Proto::MapZone::_default_music_;
  v1[2].n128_u64[1] = 0;
  v1->n128_u32[2] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C6700;
  v1[5].n128_u32[2] = 0;
  v1[6].n128_u32[2] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::MapZone::_default_title_;
  v1[1] = result;
  return result;
}

