/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201290
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9StoreViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *
 * Callers: 1
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003F5220  boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201298 string=0x000000000020129C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>()
{
  return _ZN5boost10shared_ptrIN5Caver9StoreViewEEC2IS2_EEPT_();
}

