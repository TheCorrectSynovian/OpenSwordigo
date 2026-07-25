/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E0A48
 * Mangled: _ZN5Caver5Proto5Skill10SharedCtorEv
 * Demangled: Caver::Proto::Skill::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002E0A48 string=0x00000000002E0A4C "( "
 *   insn=0x00000000002E0A4C string=0x00000000002E0A50 ""
 *   insn=0x00000000002E0A50 string=0x00000000002E0A54 ") "
 *   insn=0x00000000002E0A54 string=0x00000000002E0A58 ")"
 *   insn=0x00000000002E0A58 string=0x00000000002E0A5C "* "
 *   insn=0x00000000002E0A5C string=0x00000000002E0A60 "J"
 *   insn=0x00000000002E0A64 string=0x00000000002E0A68 " "
 *   insn=0x00000000002E0A70 string=0x00000000002E0A74 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Skill::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Skill::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Skill::_default_title_;
  this[2].n128_u64[1] = 0;
  this[3].n128_u64[0] = 0;
  this[1] = result;
  this[2].n128_u64[0] = (unsigned __int64)&Caver::Proto::Skill::_default_description_;
  return result;
}

