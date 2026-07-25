/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBBF0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15StoreControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *
 * Callers: 4
 *   0x00000000003A9598  Caver::StoreController::SharedController(void)
 *   0x00000000003A9710  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *
 * Callees: 1
 *   0x00000000003AB06C  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBBF8 string=0x00000000001FBBFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>()
{
  return _ZN5boost10shared_ptrIN5Caver15StoreControllerEEC2IS2_EEPT_();
}

