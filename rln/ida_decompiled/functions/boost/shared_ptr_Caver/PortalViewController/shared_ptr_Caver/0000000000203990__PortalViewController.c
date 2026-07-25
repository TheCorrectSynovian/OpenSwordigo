/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203990
 * Mangled: ._ZN5boost10shared_ptrIN5Caver20PortalViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203998 string=0x000000000020399C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver20PortalViewControllerEEC2IS2_EEPT_();
}

