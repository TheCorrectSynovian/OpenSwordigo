/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC040
 * Mangled: ._ZN5boost10shared_ptrIN5Caver25ProfileManagerLoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *
 * Callers: 1
 *   0x00000000003A8E38  Caver::ProfileManagerLoadingViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003A9304  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC048 string=0x00000000001FC04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>()
{
  return _ZN5boost10shared_ptrIN5Caver25ProfileManagerLoadingViewEEC2IS2_EEPT_();
}

