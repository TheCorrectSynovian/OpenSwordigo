/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B10
 * Mangled: ._ZN5boost10shared_ptrIN5Caver24OnlineController_AndroidEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(Caver::OnlineController_Android *)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x000000000047B670  boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(Caver::OnlineController_Android *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B18 string=0x00000000001F5B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>()
{
  return _ZN5boost10shared_ptrIN5Caver24OnlineController_AndroidEEC2IS2_EEPT_();
}

