/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7840
 * Mangled: ._ZN5Caver8DateTime16SecondsSinceDateERKS0_
 * Demangled: Caver::DateTime::SecondsSinceDate(Caver::DateTime const&)
 *
 * Callers: 1
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *
 * Callees: 1
 *   0x00000000004CF90C  Caver::DateTime::SecondsSinceDate(Caver::DateTime const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7848 string=0x00000000001F784C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::SecondsSinceDate(Caver::DateTime *this, const Caver::DateTime *a2)
{
  return _ZN5Caver8DateTime16SecondsSinceDateERKS0_(this, a2);
}

