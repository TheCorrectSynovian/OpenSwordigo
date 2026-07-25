/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD8E0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver14GUILoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *
 * Callers: 1
 *   0x000000000033E574  Caver::GUIViewController::NewLoadingView(void)
 *
 * Callees: 1
 *   0x000000000033E5CC  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD8E8 string=0x00000000001FD8EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>()
{
  return _ZN5boost10shared_ptrIN5Caver14GUILoadingViewEEC2IS2_EEPT_();
}

