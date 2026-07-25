/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002010A0
 * Mangled: ._ZN5Caver16ProfilePanelView10AnimateOutEv
 * Demangled: Caver::ProfilePanelView::AnimateOut(void)
 *
 * Callers: 1
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Callees: 1
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002010A8 string=0x00000000002010AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfilePanelView::AnimateOut(Caver::ProfilePanelView *this)
{
  JUMPOUT(0x39DB60);
}

