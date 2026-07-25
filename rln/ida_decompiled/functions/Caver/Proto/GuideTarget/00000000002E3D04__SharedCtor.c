/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3D04
 * Mangled: _ZN5Caver5Proto11GuideTarget10SharedCtorEv
 * Demangled: Caver::Proto::GuideTarget::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000002E3D04 string=0x00000000002E3D08 " "
 *   insn=0x00000000002E3D08 string=0x00000000002E3D0C "\t "
 *   insn=0x00000000002E3D0C string=0x00000000002E3D10 "* "
 *   insn=0x00000000002E3D10 string=0x00000000002E3D14 ""
 *   insn=0x00000000002E3D14 string=0x00000000002E3D18 ")"
 *   insn=0x00000000002E3D18 string=0x00000000002E3D1C "J"
 *   insn=0x00000000002E3D1C string=0x00000000002E3D20 " "
 *   insn=0x00000000002E3D20 string=0x00000000002E3D24 "k"
 *   insn=0x00000000002E3D28 string=0x00000000002E3D2C "A"
 *   insn=0x00000000002E3D2C string=0x00000000002E3D30 " "
 *   insn=0x00000000002E3D30 string=0x00000000002E3D34 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GuideTarget::SharedCtor(__n128 *this)
{
  __n128 v1; // q1
  __n128 result; // q0

  this->n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_name_;
  v1.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_object_identifier_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_level_name_;
  v1.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_carry_object_identifier_;
  this[3].n128_u8[0] = 0;
  this[1] = result;
  this[2] = v1;
  this[7].n128_u32[0] = 0;
  return result;
}

