/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F00
 * Mangled: ._ZN5Caver7FWMouse14RemoveListenerEPNS_16IFWMouseListenerE
 * Demangled: Caver::FWMouse::RemoveListener(Caver::IFWMouseListener *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004AB964  Caver::FWMouse::RemoveListener(Caver::IFWMouseListener *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F08 string=0x00000000001F4F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWMouse::RemoveListener()
{
  return _ZN5Caver7FWMouse14RemoveListenerEPNS_16IFWMouseListenerE();
}

