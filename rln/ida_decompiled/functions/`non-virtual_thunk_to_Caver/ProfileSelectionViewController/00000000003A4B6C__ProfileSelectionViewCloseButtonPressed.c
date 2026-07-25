/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4B6C
 * Mangled: _ZThn72_N5Caver30ProfileSelectionViewController38ProfileSelectionViewCloseButtonPressedEPNS_20ProfileSelectionViewE
 * Demangled: `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3960  Caver::ProfileSelectionView::AnimateOut(void)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000003A4B78 string=0x00000000003A4B7C "`\n@"
 *   insn=0x00000000003A4B7C string=0x00000000003A4B80 "x;"
 *   insn=0x00000000003A4B80 string=0x00000000003A4B84 "`"
 *   insn=0x00000000003A4B80 string=0x00000000001F3960 "P'"
 *   insn=0x00000000003A4B8C string=0x00000000003A4B90 " I"
 *   insn=0x00000000003A4B90 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(
        Caver::ProfileSelectionView **this,
        Caver::ProfileSelectionView *a2)
{
  Caver::ProfileSelectionView::AnimateOut(this[2]);
  return Caver::GUIViewController::DismissModalViewController(*(this - 4));
}

