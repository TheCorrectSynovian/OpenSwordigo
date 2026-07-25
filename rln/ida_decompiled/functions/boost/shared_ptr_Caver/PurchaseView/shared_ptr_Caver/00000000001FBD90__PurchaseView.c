/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD90
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12PurchaseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *
 * Callers: 1
 *   0x00000000003E8354  Caver::PurchaseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003EBB20  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD98 string=0x00000000001FBD9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>()
{
  return _ZN5boost10shared_ptrIN5Caver12PurchaseViewEEC2IS2_EEPT_();
}

