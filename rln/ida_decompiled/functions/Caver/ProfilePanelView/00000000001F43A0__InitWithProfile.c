/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F43A0
 * Mangled: ._ZN5Caver16ProfilePanelView15InitWithProfileERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 3
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003A05B8  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 1
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F43A8 string=0x00000000001F43AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfilePanelView::InitWithProfile(Caver::GUIFrameView *this)
{
  return _ZN5Caver16ProfilePanelView15InitWithProfileERKN5boost10shared_ptrINS_13PlayerProfileEEE(this);
}

