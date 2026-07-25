/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D80
 * Mangled: ._ZN5boost10shared_ptrIN5Caver10PortalViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *
 * Callers: 1
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000371AF0  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D88 string=0x0000000000202D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>()
{
  return _ZN5boost10shared_ptrIN5Caver10PortalViewEEC2IS2_EEPT_();
}

