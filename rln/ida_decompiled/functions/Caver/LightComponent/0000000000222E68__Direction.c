/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222E68
 * Mangled: _ZNK5Caver14LightComponent9DirectionEv
 * Demangled: Caver::LightComponent::Direction(void)
 *
 * Callers: 1
 *   0x00000000001F54C0  Caver::LightComponent::Direction(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000222E74 string=0x0000000000222E78 "T"
 *   insn=0x0000000000222E84 string=0x0000000000222E88 ""
 *   insn=0x0000000000222E8C string=0x0000000000222E90 "\t9@"
 *   insn=0x0000000000222E90 string=0x0000000000222E94 "y@"
 *   insn=0x0000000000222E9C string=0x0000000000222EA0 "$u"
 *   insn=0x0000000000222EAC string=0x0000000000222EB0 "!@!"
 *   insn=0x0000000000222EB0 string=0x0000000000222EB4 "`"
 *   insn=0x0000000000222EB4 string=0x0000000000222EB8 "a\n"
 *   insn=0x0000000000222EDC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::LightComponent::Direction@<D0>(Caver::LightComponent *this@<X0>, float32x2_t *a2@<X8>)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  float32x2_t result; // d0
  float v6; // s1
  float32x2_t v7; // [xsp+8h] [xbp-28h] BYREF
  float v8; // [xsp+10h] [xbp-20h]
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((_QWORD *)this + 5);
  v4 = *(_QWORD *)(v3 + 112);
  LODWORD(v3) = *(_DWORD *)(v3 + 120);
  v7.n64_u64[0] = v4;
  v8 = *(float *)&v3;
  Caver::Vector3::Normalize((Caver::Vector3 *)&v7);
  result.n64_u64[0] = vneg_f32(v7).n64_u64[0];
  v6 = -v8;
  a2->n64_u64[0] = result.n64_u64[0];
  a2[1].n64_f32[0] = v6;
  return result;
}

