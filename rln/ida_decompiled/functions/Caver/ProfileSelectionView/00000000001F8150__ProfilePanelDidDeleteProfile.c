/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8150
 * Mangled: ._ZN5Caver20ProfileSelectionView28ProfilePanelDidDeleteProfileEPNS_16ProfilePanelViewE
 * Demangled: Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callers: 1
 *   0x00000000003A25BC  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callees: 1
 *   0x00000000003A25BC  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8158 string=0x00000000001F815C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(
        Caver::ProfileSelectionView *this,
        Caver::ProfilePanelView *a2)
{
  return _ZN5Caver20ProfileSelectionView28ProfilePanelDidDeleteProfileEPNS_16ProfilePanelViewE(this, a2);
}

