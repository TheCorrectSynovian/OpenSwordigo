/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283854
 * Mangled: _ZNK5Caver22HookshotTrailComponent5CloneEv
 * Demangled: Caver::HookshotTrailComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002837DC  Caver::HookshotTrailComponent::~HookshotTrailComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x00000000002838D8  Caver::HookshotTrailComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000283864 string=0x0000000000283868 "^"
 *   insn=0x0000000000283868 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000283870 string=0x0000000000283874 "(#"
 *   insn=0x0000000000283870 string=0x00000000001FCFB0 "0'"
 *   insn=0x0000000000283874 string=0x0000000000283878 ""
 *   insn=0x0000000000283884 string=0x0000000000283888 "\n"
 *   insn=0x0000000000283888 string=0x000000000028388C "\tA"
 *   insn=0x000000000028388C string=0x0000000000283890 ""
 *   insn=0x0000000000283890 string=0x0000000000283894 "A"
 *   insn=0x00000000002838C8 string=0x00000000002838CC "y"
 *   insn=0x00000000002838CC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HookshotTrailComponent::Clone(Caver::HookshotTrailComponent *this)
{
  __int64 v2; // x20
  __int128 v8; // q1

  v2 = operator new(0xC8u);
  Caver::GlowComponent::GlowComponent((Caver::GlowComponent *)v2);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)&v8 = &off_6C03E8;
  *((_QWORD *)&v8 + 1) = &off_6C0428;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)v2 = off_6C02C0;
  *(_OWORD *)(v2 + 16) = v8;
  *(_OWORD *)(v2 + 180) = _Q0;
  Caver::GlowComponent::InitWithComponent((Caver::GlowComponent *)v2, this);
  return v2;
}

