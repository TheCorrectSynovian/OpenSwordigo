/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB180
 * Mangled: ._ZN5Caver15GameOverlayView15SetCurrentSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameOverlayView::SetCurrentSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 2
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB188 string=0x00000000001FB18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOverlayView::SetCurrentSkill()
{
  JUMPOUT(0x3D47F4);
}

