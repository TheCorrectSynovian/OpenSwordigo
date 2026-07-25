/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4B44
 * Mangled: _ZN5Caver30ProfileSelectionViewController38ProfileSelectionViewCloseButtonPressedEPNS_20ProfileSelectionViewE
 * Demangled: Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3960  Caver::ProfileSelectionView::AnimateOut(void)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000003A4B50 string=0x00000000003A4B54 "`.@"
 *   insn=0x00000000003A4B58 string=0x00000000003A4B5C "`"
 *   insn=0x00000000003A4B58 string=0x00000000001F3960 "P'"
 *   insn=0x00000000003A4B64 string=0x00000000003A4B68 "*I"
 *   insn=0x00000000003A4B68 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(
        Caver::ProfileSelectionView **this,
        Caver::ProfileSelectionView *a2)
{
  Caver::ProfileSelectionView::AnimateOut(this[11]);
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

