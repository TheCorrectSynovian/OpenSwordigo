/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7280
 * Mangled: ._ZN5Caver7FWMouse11AddListenerEPNS_16IFWMouseListenerE
 * Demangled: Caver::FWMouse::AddListener(Caver::IFWMouseListener *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004AB934  Caver::FWMouse::AddListener(Caver::IFWMouseListener *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7288 string=0x00000000001F728C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWMouse::AddListener()
{
  return _ZN5Caver7FWMouse11AddListenerEPNS_16IFWMouseListenerE();
}

