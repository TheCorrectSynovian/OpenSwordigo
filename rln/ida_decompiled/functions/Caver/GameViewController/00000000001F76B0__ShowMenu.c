/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76B0
 * Mangled: ._ZN5Caver18GameViewController8ShowMenuEv
 * Demangled: Caver::GameViewController::ShowMenu(void)
 *
 * Callers: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 1
 *   0x0000000000356DCC  Caver::GameViewController::ShowMenu(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F76B8 string=0x00000000001F76BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::ShowMenu(Caver::GameViewController *this)
{
  return _ZN5Caver18GameViewController8ShowMenuEv(this);
}

