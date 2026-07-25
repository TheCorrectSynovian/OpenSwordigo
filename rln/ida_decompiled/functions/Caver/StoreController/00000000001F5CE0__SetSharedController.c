/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5CE0
 * Mangled: ._ZN5Caver15StoreController19SetSharedControllerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::StoreController::SetSharedController(boost::shared_ptr<Caver::StoreController> const&)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000003A9688  Caver::StoreController::SetSharedController(boost::shared_ptr<Caver::StoreController> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5CE8 string=0x00000000001F5CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreController::SetSharedController()
{
  return _ZN5Caver15StoreController19SetSharedControllerERKN5boost10shared_ptrIS0_EE();
}

