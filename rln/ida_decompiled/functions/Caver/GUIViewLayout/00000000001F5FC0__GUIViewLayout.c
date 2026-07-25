/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5FC0
 * Mangled: ._ZN5Caver13GUIViewLayoutC2Ev
 * Demangled: Caver::GUIViewLayout::GUIViewLayout(void)
 *
 * Callers: 2
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callees: 1
 *   0x00000000004A7914  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5FC8 string=0x00000000001F5FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIViewLayout::GUIViewLayout(Caver::GUIViewLayout *this)
{
  JUMPOUT(0x4A7BCC);
}

