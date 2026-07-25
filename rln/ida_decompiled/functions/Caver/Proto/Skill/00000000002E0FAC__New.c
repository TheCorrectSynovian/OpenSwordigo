/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E0FAC
 * Mangled: _ZNK5Caver5Proto5Skill3NewEv
 * Demangled: Caver::Proto::Skill::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 14
 *   insn=0x00000000002E0FB8 string=0x00000000002E0FBC "( "
 *   insn=0x00000000002E0FB8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E0FBC string=0x00000000002E0FC0 ""
 *   insn=0x00000000002E0FC4 string=0x00000000002E0FC8 ") "
 *   insn=0x00000000002E0FC8 string=0x00000000002E0FCC ")"
 *   insn=0x00000000002E0FCC string=0x00000000002E0FD0 "* "
 *   insn=0x00000000002E0FD0 string=0x00000000002E0FD4 "J"
 *   insn=0x00000000002E0FD4 string=0x00000000002E0FD8 "+ "
 *   insn=0x00000000002E0FD8 string=0x00000000002E0FDC "k"
 *   insn=0x00000000002E0FDC string=0x00000000002E0FE0 " "
 *   insn=0x00000000002E0FE0 string=0x00000000002E0FE4 "A"
 *   insn=0x00000000002E0FE4 string=0x00000000002E0FE8 "@"
 *   insn=0x00000000002E0FEC string=0x00000000002E0FF0 ""
 *   insn=0x00000000002E0FF4 string=0x00000000002E0FF8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Skill::New(Caver::Proto::Skill *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x38u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Skill::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Skill::_default_title_;
  v1[2].n128_u64[1] = 0;
  v1[3].n128_u64[0] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C6868;
  v1[1] = result;
  v1[2].n128_u64[0] = (unsigned __int64)&Caver::Proto::Skill::_default_description_;
  return result;
}

