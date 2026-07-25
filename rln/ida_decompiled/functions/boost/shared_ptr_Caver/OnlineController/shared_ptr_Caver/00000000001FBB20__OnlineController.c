/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB20
 * Mangled: ._ZN5boost10shared_ptrIN5Caver16OnlineControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
 *
 * Callers: 1
 *   0x0000000000389004  Caver::OnlineController::SharedController(void)
 *
 * Callees: 1
 *   0x00000000003892AC  boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB28 string=0x00000000001FBB2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>()
{
  return _ZN5boost10shared_ptrIN5Caver16OnlineControllerEEC2IS2_EEPT_();
}

