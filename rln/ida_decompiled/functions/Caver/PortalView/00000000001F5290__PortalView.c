/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5290
 * Mangled: ._ZN5Caver10PortalViewC2Ev
 * Demangled: Caver::PortalView::PortalView(void)
 *
 * Callers: 1
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5298 string=0x00000000001F529C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalView::PortalView(Caver::PortalView *this)
{
  return _ZN5Caver10PortalViewC2Ev(this);
}

