/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5EC0
 * Mangled: ._ZN5Caver18GameViewController32PortalViewControllerDidGotoLevelEPNS_20PortalViewControllerERKSs
 * Demangled: Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *
 * Callers: 1
 *   0x0000000000357C70  `non-virtual thunk to'Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *
 * Callees: 1
 *   0x0000000000357A14  Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5EC8 string=0x00000000001F5ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameViewController::PortalViewControllerDidGotoLevel()
{
  return _ZN5Caver18GameViewController32PortalViewControllerDidGotoLevelEPNS_20PortalViewControllerERKSs();
}

