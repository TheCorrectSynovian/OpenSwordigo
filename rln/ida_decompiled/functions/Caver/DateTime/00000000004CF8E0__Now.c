/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF8E0
 * Mangled: _ZN5Caver8DateTime3NowEv
 * Demangled: Caver::DateTime::Now(void)
 *
 * Callers: 1
 *   0x0000000000203E80  Caver::DateTime::Now(void)
 *
 * Callees: 1
 *   0x00000000001FB250  Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004CF8E0 string=0x00000000001FB250 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::Now(Caver::DateTime *this)
{
  return Caver::TimerSecondsSinceReferenceDate(this);
}

