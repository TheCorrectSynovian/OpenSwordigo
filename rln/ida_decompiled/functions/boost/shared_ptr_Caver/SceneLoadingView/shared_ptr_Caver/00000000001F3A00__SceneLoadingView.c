/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A00
 * Mangled: ._ZN5boost10shared_ptrIN5Caver16SceneLoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *
 * Callers: 1
 *   0x000000000036332C  sub_36332C
 *
 * Callees: 1
 *   0x00000000003641FC  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A08 string=0x00000000001F3A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>()
{
  return _ZN5boost10shared_ptrIN5Caver16SceneLoadingViewEEC2IS2_EEPT_();
}

