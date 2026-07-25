/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427990
 * Mangled: _ZN5Caver7MapView17SelectNodeAtIndexEm
 * Demangled: Caver::MapView::SelectNodeAtIndex(ulong)
 *
 * Callers: 1
 *   0x00000000001FF860  Caver::MapView::SelectNodeAtIndex(ulong)
 *
 * Callees: 1
 *   0x00000000001FD3D0  Caver::MapView::UpdateSelectionSprite(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000427990 string=0x0000000000427994 ""
 *   insn=0x000000000042799C string=0x00000000001FD3D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::SelectNodeAtIndex(Caver::MapView *this, __int64 a2)
{
  *((_BYTE *)this + 1016) = 1;
  *((_QWORD *)this + 128) = a2;
  Caver::MapView::UpdateSelectionSprite(this);
}

