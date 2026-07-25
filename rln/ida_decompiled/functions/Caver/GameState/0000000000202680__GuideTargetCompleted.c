/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202680
 * Mangled: ._ZN5Caver9GameState20GuideTargetCompletedERKN5boost10shared_ptrINS_11GuideTargetEEE
 * Demangled: Caver::GameState::GuideTargetCompleted(boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Callers: 4
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035B3DC  Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *   0x000000000035B4A8  Caver::GameViewController::RemoveGuideTargetIfCompleted(void)
 *   0x00000000003B9078  Caver::GameState::CurrentGuideTarget(void)
 *
 * Callees: 1
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202688 string=0x000000000020268C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameState::GuideTargetCompleted()
{
  JUMPOUT(0x3B8BE8);
}

