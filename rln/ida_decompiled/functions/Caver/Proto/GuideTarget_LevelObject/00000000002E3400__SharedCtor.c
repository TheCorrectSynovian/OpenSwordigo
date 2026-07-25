/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3400
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject10SharedCtorEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002E3400 string=0x00000000002E3404 " "
 *   insn=0x00000000002E3404 string=0x00000000002E3408 ""
 *   insn=0x00000000002E3408 string=0x00000000002E340C ") "
 *   insn=0x00000000002E340C string=0x00000000002E3410 ")"
 *   insn=0x00000000002E3418 string=0x00000000002E341C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GuideTarget_LevelObject::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u32[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
  this[1] = result;
  return result;
}

