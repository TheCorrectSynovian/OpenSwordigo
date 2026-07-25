/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC470
 * Mangled: ._ZN5Caver14GUIRoundedRect21CreateWithInnerBoundsERKNS_9RectangleEf
 * Demangled: Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000004D4048  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004A9B68  Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC478 string=0x00000000001FC47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIRoundedRect::CreateWithInnerBounds(
        Caver::GUIRoundedRect *this,
        const Caver::Rectangle *a2,
        float a3)
{
  return _ZN5Caver14GUIRoundedRect21CreateWithInnerBoundsERKNS_9RectangleEf(this, a2, a3);
}

