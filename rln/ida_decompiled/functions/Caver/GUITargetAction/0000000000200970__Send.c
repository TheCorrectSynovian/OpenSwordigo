/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200970
 * Mangled: ._ZN5Caver15GUITargetAction4SendEPvRKNS_8GUIEventE
 * Demangled: Caver::GUITargetAction::Send(void *,Caver::GUIEvent const&)
 *
 * Callers: 2
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000004A71A8  Caver::GUIEffect::Update(float)
 *
 * Callees: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200978 string=0x000000000020097C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUITargetAction::Send()
{
  JUMPOUT(0x4A6AF8);
}

