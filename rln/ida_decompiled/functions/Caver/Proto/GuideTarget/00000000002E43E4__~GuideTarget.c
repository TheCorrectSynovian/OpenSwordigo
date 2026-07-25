/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E43E4
 * Mangled: _ZN5Caver5Proto11GuideTargetD0Ev
 * Demangled: Caver::Proto::GuideTarget::~GuideTarget()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCD20  Caver::Proto::GuideTarget::~GuideTarget()
 *   0x00000000002E441C  Caver::Proto::GuideTarget::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002E43F0 string=0x00000000002E43F4 "Kb"
 *   insn=0x00000000002E43F4 string=0x00000000001FCD20 "0'"
 *   insn=0x00000000002E4404 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E4414 string=0x00000000002E4418 "+u\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GuideTarget::~GuideTarget(Caver::Proto::GuideTarget *this)
{
  Caver::Proto::GuideTarget::~GuideTarget(this);
  operator delete(this);
}

