/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4450
 * Mangled: ._ZN5Caver9HealthBar19AddAnimationToHeartEiRKN5boost10shared_ptrINS_12GUIAnimationEEE
 * Demangled: Caver::HealthBar::AddAnimationToHeart(int,boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callers: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4458 string=0x00000000001F445C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::HealthBar::AddAnimationToHeart()
{
  JUMPOUT(0x3DB7D0);
}

