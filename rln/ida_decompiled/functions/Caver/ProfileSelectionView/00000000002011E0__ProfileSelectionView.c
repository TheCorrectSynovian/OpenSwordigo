/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002011E0
 * Mangled: ._ZN5Caver20ProfileSelectionViewC2Ev
 * Demangled: Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callers: 1
 *   0x00000000003A4890  Caver::ProfileSelectionViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002011E8 string=0x00000000002011EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileSelectionView::ProfileSelectionView(Caver::ProfileSelectionView *this)
{
  return _ZN5Caver20ProfileSelectionViewC2Ev(this);
}

