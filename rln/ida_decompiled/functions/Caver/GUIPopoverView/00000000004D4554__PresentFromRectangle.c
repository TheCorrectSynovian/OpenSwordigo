/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4554
 * Mangled: _ZN5Caver14GUIPopoverView20PresentFromRectangleERKNS_9RectangleEj
 * Demangled: Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *
 * Callers: 1
 *   0x00000000001FDD10  Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *
 * Callees: 1
 *   0x0000000000203970  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000004D4554 string=0x00000000004D4558 ""
 *   insn=0x00000000004D4564 string=0x00000000004D4568 "\t"
 *   insn=0x00000000004D4568 string=0x00000000004D456C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIPopoverView::PresentFromRectangle(__int64 this, const Caver::Rectangle *a2, int a3)
{
  __int128 v3; // q0
  __int64 v4; // x8

  v3 = *(_OWORD *)a2;
  v4 = *(_QWORD *)(this + 256);
  *(_DWORD *)(this + 272) = a3;
  *(_OWORD *)(this + 236) = v3;
  *(_BYTE *)(this + 233) = 1;
  if ( v4 )
    return Caver::GUIPopoverView::UpdateLayout((Caver::GUIPopoverView *)this);
  return this;
}

