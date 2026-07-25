/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A10
 * Mangled: ._ZN5Caver16ProfilePanelView14ShowNamePromptEv
 * Demangled: Caver::ProfilePanelView::ShowNamePrompt(void)
 *
 * Callers: 1
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Callees: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A18 string=0x0000000000203A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfilePanelView::ShowNamePrompt(Caver::ProfilePanelView *this)
{
  JUMPOUT(0x39EDCC);
}

