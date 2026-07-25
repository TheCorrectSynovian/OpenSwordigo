/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E50
 * Mangled: ._ZN5Caver16ProfilePanelViewC2Ev
 * Demangled: Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Callers: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 1
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E58 string=0x00000000001F3E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfilePanelView::ProfilePanelView(Caver::ProfilePanelView *this)
{
  return _ZN5Caver16ProfilePanelViewC2Ev(this);
}

