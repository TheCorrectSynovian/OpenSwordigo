/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA830
 * Mangled: ._ZN5Caver16UniqueIdentifierEv
 * Demangled: Caver::UniqueIdentifier(void)
 *
 * Callers: 2
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x0000000000477C14  Java_com_touchfoo_swordigo_Native_uniqueIdentifier
 *
 * Callees: 1
 *   0x00000000004B2D7C  Caver::UniqueIdentifier(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA838 string=0x00000000001FA83C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::UniqueIdentifier(Caver *this)
{
  return _ZN5Caver16UniqueIdentifierEv(this);
}

