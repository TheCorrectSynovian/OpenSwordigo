/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002018D0
 * Mangled: ._ZN5Caver11MapMenuPage19UpdateMapViewBoundsEv
 * Demangled: Caver::MapMenuPage::UpdateMapViewBounds(void)
 *
 * Callers: 1
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002018D8 string=0x00000000002018DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapMenuPage::UpdateMapViewBounds(Caver::MapMenuPage *this)
{
  JUMPOUT(0x41E268);
}

