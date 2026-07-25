/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB560
 * Mangled: ._ZN5Caver20ProfileSelectionView24ProfilePanelViewDidStartEPNS_16ProfilePanelViewE
 * Demangled: Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *
 * Callers: 1
 *   0x00000000003A2494  Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *
 * Callees: 1
 *   0x00000000003A2494  Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB568 string=0x00000000001FB56C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileSelectionView::ProfilePanelViewDidStart(
        Caver::ProfileSelectionView *this,
        Caver::ProfilePanelView *a2)
{
  return _ZN5Caver20ProfileSelectionView24ProfilePanelViewDidStartEPNS_16ProfilePanelViewE(this, a2);
}

