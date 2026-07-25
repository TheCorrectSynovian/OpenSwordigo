/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB250
 * Mangled: ._ZN5Caver30TimerSecondsSinceReferenceDateEv
 * Demangled: Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Callers: 1
 *   0x00000000004CF8E0  Caver::DateTime::Now(void)
 *
 * Callees: 1
 *   0x00000000004B4D4C  Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB258 string=0x00000000001FB25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TimerSecondsSinceReferenceDate(Caver *this)
{
  return _ZN5Caver30TimerSecondsSinceReferenceDateEv(this);
}

