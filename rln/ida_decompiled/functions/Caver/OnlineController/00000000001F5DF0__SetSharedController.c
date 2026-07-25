/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DF0
 * Mangled: ._ZN5Caver16OnlineController19SetSharedControllerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::OnlineController::SetSharedController(boost::shared_ptr<Caver::OnlineController> const&)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000003890EC  Caver::OnlineController::SetSharedController(boost::shared_ptr<Caver::OnlineController> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5DF4 string=0x00000000003890EC "\t @"
 *   insn=0x00000000001F5DF8 string=0x00000000001F5DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OnlineController::SetSharedController()
{
  return _ZN5Caver16OnlineController19SetSharedControllerERKN5boost10shared_ptrIS0_EE();
}

