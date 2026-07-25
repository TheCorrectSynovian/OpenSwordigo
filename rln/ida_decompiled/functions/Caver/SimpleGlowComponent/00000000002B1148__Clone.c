/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1148
 * Mangled: _ZNK5Caver19SimpleGlowComponent5CloneEv
 * Demangled: Caver::SimpleGlowComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002B10D0  Caver::SimpleGlowComponent::~SimpleGlowComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x00000000002B121C  Caver::SimpleGlowComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000002B1158 string=0x00000000002B115C "!"
 *   insn=0x00000000002B115C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B1164 string=0x00000000001FCFB0 "0'"
 *   insn=0x00000000002B1168 string=0x00000000002B116C "aE"
 *   insn=0x00000000002B1178 string=0x00000000002B117C "\t"
 *   insn=0x00000000002B117C string=0x00000000002B1180 " "
 *   insn=0x00000000002B1180 string=0x00000000002B1184 "\t"
 *   insn=0x00000000002B1184 string=0x00000000002B1188 " "
 *   insn=0x00000000002B1190 string=0x00000000002B1194 " "
 *   insn=0x00000000002B1194 string=0x00000000002B1198 "\t4"
 *   insn=0x00000000002B11A8 string=0x00000000002B11AC " "
 *   insn=0x00000000002B11AC string=0x00000000002B11B0 "I3"
 *   insn=0x00000000002B11B0 string=0x00000000002B11B8 "A"
 *   insn=0x00000000002B11D0 string=0x00000000002B11D4 "CH"
 *   insn=0x00000000002B11D4 string=0x00000000002B11D8 "`B"
 *   insn=0x00000000002B11E4 string=0x00000000002B11E8 "h"
 *   insn=0x00000000002B11EC string=0x00000000002B11F0 "`B"
 *   insn=0x00000000002B11F4 string=0x00000000002B11F8 "h"
 *   insn=0x00000000002B120C string=0x00000000002B1210 "("
 *   insn=0x00000000002B1210 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::SimpleGlowComponent::Clone(Caver::SimpleGlowComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  long double result; // q0

  v2 = operator new(0xE0u);
  Caver::GlowComponent::GlowComponent((Caver::GlowComponent *)v2);
  *(_QWORD *)&v3 = 0x3F0000003F000000LL;
  *((_QWORD *)&v3 + 1) = 0x3F0000003F000000LL;
  *(_OWORD *)(v2 + 164) = v3;
  *(_QWORD *)&v3 = &off_6C4048;
  *((_QWORD *)&v3 + 1) = &off_6C4088;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 180) = 0xA41A00000LL;
  *(_OWORD *)(v2 + 188) = xmmword_589A60;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 204) = 1041865114;
  *(_QWORD *)v2 = off_6C3F20;
  *(_OWORD *)(v2 + 208) = xmmword_589A70;
  Caver::GlowComponent::InitWithComponent((Caver::GlowComponent *)v2, this);
  *(_OWORD *)(v2 + 164) = *(_OWORD *)((char *)this + 164);
  *(_DWORD *)(v2 + 196) = *((_DWORD *)this + 49);
  result = *(long double *)((char *)this + 180);
  *(long double *)(v2 + 180) = result;
  *(_QWORD *)(v2 + 204) = *(_QWORD *)((char *)this + 204);
  return result;
}

