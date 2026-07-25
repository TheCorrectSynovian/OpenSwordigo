/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3960
 * Mangled: ._ZN5Caver20ProfileSelectionView10AnimateOutEv
 * Demangled: Caver::ProfileSelectionView::AnimateOut(void)
 *
 * Callers: 4
 *   0x00000000003A4ACC  Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A4B08  `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A4B44  Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *   0x00000000003A4B6C  `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *
 * Callees: 1
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3968 string=0x00000000001F396C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileSelectionView::AnimateOut(Caver::ProfileSelectionView *this)
{
  JUMPOUT(0x3A2A80);
}

