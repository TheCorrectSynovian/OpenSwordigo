/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE60
 * Mangled: ._ZN5Caver16ProfilePanelView22ShowDeleteConfirmationEv
 * Demangled: Caver::ProfilePanelView::ShowDeleteConfirmation(void)
 *
 * Callers: 1
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Callees: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE68 string=0x00000000001FBE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfilePanelView::ShowDeleteConfirmation(Caver::ProfilePanelView *this)
{
  JUMPOUT(0x39E2F8);
}

