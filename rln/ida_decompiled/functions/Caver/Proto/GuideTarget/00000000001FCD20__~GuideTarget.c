/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCD20
 * Mangled: ._ZN5Caver5Proto11GuideTargetD2Ev
 * Demangled: Caver::Proto::GuideTarget::~GuideTarget()
 *
 * Callers: 1
 *   0x00000000002E43E4  Caver::Proto::GuideTarget::~GuideTarget()
 *
 * Callees: 1
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCD28 string=0x00000000001FCD2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget::~GuideTarget(Caver::Proto::GuideTarget *this)
{
  JUMPOUT(0x2E4090);
}

