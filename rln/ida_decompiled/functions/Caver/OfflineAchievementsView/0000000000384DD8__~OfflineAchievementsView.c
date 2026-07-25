/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384DD8
 * Mangled: _ZN5Caver23OfflineAchievementsViewD0Ev
 * Demangled: Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *
 * Callers: 1
 *   0x0000000000384904  Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *
 * Callees: 4
 *   0x00000000001F66C0  Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000384E10  Caver::OfflineAchievementsView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000384DE4 string=0x0000000000384DE8 "6"
 *   insn=0x0000000000384DE8 string=0x00000000001F66C0 "0'"
 *   insn=0x0000000000384DF4 string=0x0000000000384DF8 "."
 *   insn=0x0000000000384DF8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000384E00 string=0x0000000000384E04 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OfflineAchievementsView::~OfflineAchievementsView(Caver::OfflineAchievementsView *this)
{
  Caver::OfflineAchievementsView::~OfflineAchievementsView(this);
  operator delete(this);
}

