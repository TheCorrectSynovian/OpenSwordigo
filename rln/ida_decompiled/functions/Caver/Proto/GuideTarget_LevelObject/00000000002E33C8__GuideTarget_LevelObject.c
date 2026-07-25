/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E33C8
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObjectC2Ev
 * Demangled: Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(void)
 *
 * Callers: 1
 *   0x0000000000203350  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(void)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002E33C8 string=0x00000000002E33CC ""
 *   insn=0x00000000002E33D0 string=0x00000000002E33D4 "\t "
 *   insn=0x00000000002E33D4 string=0x00000000002E33D8 ")"
 *   insn=0x00000000002E33D8 string=0x00000000002E33DC "* "
 *   insn=0x00000000002E33DC string=0x00000000002E33E0 "J"
 *   insn=0x00000000002E33E0 string=0x00000000002E33E4 "A"
 *   insn=0x00000000002E33E4 string=0x00000000002E33E8 " "
 *   insn=0x00000000002E33E8 string=0x00000000002E33EC ""
 *   insn=0x00000000002E33EC string=0x00000000002E33F0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
  this->n128_u64[0] = (unsigned __int64)off_6C69D0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
  this[1] = result;
  this[2].n128_u32[0] = 0;
  return result;
}

