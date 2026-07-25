/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4660
 * Mangled: ._ZN5Caver13GUIViewLayout31UpdateWithViewWithFrameinBoundsERKNS_9RectangleES3_
 * Demangled: Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(Caver::Rectangle const&,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000004A823C  Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(Caver::Rectangle const&,Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4664 string=0x00000000004A823C "!"
 *   insn=0x00000000001F4668 string=0x00000000001F466C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(
        Caver::GUIViewLayout *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3)
{
  return _ZN5Caver13GUIViewLayout31UpdateWithViewWithFrameinBoundsERKNS_9RectangleES3_(this, a2, a3);
}

