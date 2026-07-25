/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B30
 * Mangled: ._ZN5Caver20ProfileSelectionView9AnimateInEv
 * Demangled: Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000003A4AC4  Caver::ProfileSelectionViewController::ViewDidAppear(void)
 *
 * Callees: 1
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B38 string=0x00000000001F4B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileSelectionView::AnimateIn(Caver::ProfileSelectionView *this)
{
  return _ZN5Caver20ProfileSelectionView9AnimateInEv(this);
}

