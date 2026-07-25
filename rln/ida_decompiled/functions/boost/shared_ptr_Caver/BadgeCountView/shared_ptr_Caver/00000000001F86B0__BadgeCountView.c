/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F86B0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver14BadgeCountViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(Caver::BadgeCountView *)
 *
 * Callers: 1
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *
 * Callees: 1
 *   0x00000000003957A4  boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(Caver::BadgeCountView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F86B8 string=0x00000000001F86BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>()
{
  return _ZN5boost10shared_ptrIN5Caver14BadgeCountViewEEC2IS2_EEPT_();
}

