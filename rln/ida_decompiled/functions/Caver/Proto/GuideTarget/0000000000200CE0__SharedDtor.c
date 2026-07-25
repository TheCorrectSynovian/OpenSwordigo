/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CE0
 * Mangled: ._ZN5Caver5Proto11GuideTarget10SharedDtorEv
 * Demangled: Caver::Proto::GuideTarget::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *
 * Callees: 1
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CE8 string=0x0000000000200CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget::SharedDtor(Caver::Proto::GuideTarget *this)
{
  JUMPOUT(0x2E4198);
}

