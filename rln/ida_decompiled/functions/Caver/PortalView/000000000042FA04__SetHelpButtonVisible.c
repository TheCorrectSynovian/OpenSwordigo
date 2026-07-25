/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042FA04
 * Mangled: _ZN5Caver10PortalView20SetHelpButtonVisibleEb
 * Demangled: Caver::PortalView::SetHelpButtonVisible(bool)
 *
 * Callers: 1
 *   0x00000000001F4DD0  Caver::PortalView::SetHelpButtonVisible(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000042FA08 string=0x000000000042FA0C ")"
 *   insn=0x000000000042FA0C string=0x000000000042FA10 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::SetHelpButtonVisible(__int64 this, char a2)
{
  *(_BYTE *)(*(_QWORD *)(this + 320) + 228LL) = (a2 & 1) == 0;
  return this;
}

