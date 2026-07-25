/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002007C0
 * Mangled: ._ZN5Caver8DateTime30FormattedTimeIntervalSinceDateERKS0_
 * Demangled: Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *
 * Callers: 1
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *
 * Callees: 1
 *   0x00000000004CF91C  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002007C8 string=0x00000000002007CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime *this, const Caver::DateTime *a2)
{
  return _ZN5Caver8DateTime30FormattedTimeIntervalSinceDateERKS0_(this, a2);
}

