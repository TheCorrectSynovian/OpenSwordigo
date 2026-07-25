/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB70
 * Mangled: ._ZN5Caver14BadgeCountViewC2Ev
 * Demangled: Caver::BadgeCountView::BadgeCountView(void)
 *
 * Callers: 1
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *
 * Callees: 1
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB78 string=0x00000000001FCB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BadgeCountView::BadgeCountView(Caver::BadgeCountView *this)
{
  return _ZN5Caver14BadgeCountViewC2Ev(this);
}

