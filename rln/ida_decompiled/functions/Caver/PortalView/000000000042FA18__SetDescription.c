/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042FA18
 * Mangled: _ZN5Caver10PortalView14SetDescriptionERKSs
 * Demangled: Caver::PortalView::SetDescription(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8DF0  Caver::PortalView::SetDescription(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000042FA1C string=0x00000000001F7060 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::PortalView::SetDescription()
{
  return Caver::StripeView::SetTitle();
}

