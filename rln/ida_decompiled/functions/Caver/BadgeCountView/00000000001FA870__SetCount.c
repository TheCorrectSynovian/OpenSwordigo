/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA870
 * Mangled: ._ZN5Caver14BadgeCountView8SetCountEi
 * Demangled: Caver::BadgeCountView::SetCount(int)
 *
 * Callers: 1
 *   0x000000000039465C  Caver::MainMenuView::Update(float)
 *
 * Callees: 1
 *   0x0000000000389C70  Caver::BadgeCountView::SetCount(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA878 string=0x00000000001FA87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BadgeCountView::SetCount(Caver::BadgeCountView *this, int a2)
{
  return _ZN5Caver14BadgeCountView8SetCountEi(this, a2);
}

