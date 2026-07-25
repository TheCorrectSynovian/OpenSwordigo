/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B70
 * Mangled: ._ZN5boost10shared_ptrIN5Caver17GuidePurchaseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000368034  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B78 string=0x0000000000200B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>()
{
  return _ZN5boost10shared_ptrIN5Caver17GuidePurchaseViewEEC2IS2_EEPT_();
}

