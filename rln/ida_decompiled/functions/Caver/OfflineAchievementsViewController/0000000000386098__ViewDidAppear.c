/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000386098
 * Mangled: _ZN5Caver33OfflineAchievementsViewController13ViewDidAppearEv
 * Demangled: Caver::OfflineAchievementsViewController::ViewDidAppear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3710  Caver::OfflineAchievementsView::AnimateIn(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000003860A4 string=0x00000000003860A8 "`.@"
 *   insn=0x00000000003860A8 string=0x00000000003860AC ""
 *   insn=0x00000000003860AC string=0x00000000003860B0 "y@"
 *   insn=0x00000000003860B8 string=0x00000000003860C0 ""
 *   insn=0x00000000003860C0 string=0x00000000003860C4 "`.@"
 *   insn=0x00000000003860D0 string=0x00000000001F3710 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OfflineAchievementsViewController::ViewDidAppear(
        Caver::OfflineAchievementsViewController *this)
{
  *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 240LL))(*((_QWORD *)this + 11)) + 476) = 1064346583;
  return Caver::OfflineAchievementsView::AnimateIn(*((Caver::OfflineAchievementsView **)this + 11));
}

