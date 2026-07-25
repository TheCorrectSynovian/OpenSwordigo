/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE50
 * Mangled: ._ZN5Caver9GameState16PercentCompletedEv
 * Demangled: Caver::GameState::PercentCompleted(void)
 *
 * Callers: 6
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *   0x00000000004BBB00  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *   0x00000000004BC740  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE58 string=0x00000000001FFE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameState::PercentCompleted(Caver::GameState *this)
{
  JUMPOUT(0x3B861C);
}

