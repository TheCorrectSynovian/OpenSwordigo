/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C50
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9PauseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *
 * Callers: 1
 *   0x0000000000370120  Caver::PauseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003704B8  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C58 string=0x0000000000203C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>()
{
  return _ZN5boost10shared_ptrIN5Caver9PauseViewEEC2IS2_EEPT_();
}

