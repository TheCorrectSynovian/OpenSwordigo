/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4AC4
 * Mangled: _ZN5Caver30ProfileSelectionViewController13ViewDidAppearEv
 * Demangled: Caver::ProfileSelectionViewController::ViewDidAppear(void)
 *
 * Callers: 1
 *   0x00000000003A4890  Caver::ProfileSelectionViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000001F4B30  Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000003A4AC8 string=0x00000000001F4B30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionViewController::ViewDidAppear(Caver::ProfileSelectionView **this)
{
  return Caver::ProfileSelectionView::AnimateIn(this[11]);
}

