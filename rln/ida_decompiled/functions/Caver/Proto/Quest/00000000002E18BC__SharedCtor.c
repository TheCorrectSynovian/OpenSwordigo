/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E18BC
 * Mangled: _ZN5Caver5Proto5Quest10SharedCtorEv
 * Demangled: Caver::Proto::Quest::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000002E18BC string=0x00000000002E18C0 "( "
 *   insn=0x00000000002E18C0 string=0x00000000002E18C4 ") "
 *   insn=0x00000000002E18C4 string=0x00000000002E18C8 "* "
 *   insn=0x00000000002E18C8 string=0x00000000002E18CC ""
 *   insn=0x00000000002E18CC string=0x00000000002E18D0 ")"
 *   insn=0x00000000002E18D0 string=0x00000000002E18D4 "J"
 *   insn=0x00000000002E18D4 string=0x00000000002E18D8 " "
 *   insn=0x00000000002E18D8 string=0x00000000002E18DC "kAF"
 *   insn=0x00000000002E18E0 string=0x00000000002E18E4 "A"
 *   insn=0x00000000002E18E4 string=0x00000000002E18E8 " "
 *   insn=0x00000000002E18E8 string=0x00000000002E18EC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Quest::SharedCtor(__n128 *this)
{
  __n128 v1; // q1
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Quest::_default_name_;
  v1.n128_u64[0] = (unsigned __int64)&Caver::Proto::Quest::_default_follow_up_quest_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Quest::_default_title_;
  v1.n128_u64[1] = (unsigned __int64)&Caver::Proto::Quest::_default_map_location_;
  this[1] = result;
  this[2] = v1;
  this[3].n128_u32[0] = 0;
  return result;
}

