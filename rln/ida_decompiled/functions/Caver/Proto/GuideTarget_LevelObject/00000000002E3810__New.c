/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3810
 * Mangled: _ZNK5Caver5Proto23GuideTarget_LevelObject3NewEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 12
 *   insn=0x00000000002E3818 string=0x00000000002E381C "qG"
 *   insn=0x00000000002E381C string=0x00000000002E3820 " "
 *   insn=0x00000000002E381C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E3820 string=0x00000000002E3824 ""
 *   insn=0x00000000002E3828 string=0x00000000002E382C "\t "
 *   insn=0x00000000002E382C string=0x00000000002E3830 ")"
 *   insn=0x00000000002E3830 string=0x00000000002E3834 "* "
 *   insn=0x00000000002E3834 string=0x00000000002E3838 "J"
 *   insn=0x00000000002E3838 string=0x00000000002E383C "A"
 *   insn=0x00000000002E383C string=0x00000000002E3840 " "
 *   insn=0x00000000002E3840 string=0x00000000002E3844 ""
 *   insn=0x00000000002E3844 string=0x00000000002E3848 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GuideTarget_LevelObject::New(Caver::Proto::GuideTarget_LevelObject *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x28u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C69D0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
  v1[1] = result;
  v1[2].n128_u32[0] = 0;
  return result;
}

