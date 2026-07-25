/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8970
 * Mangled: ._ZN5Caver12GUIAlertViewC2Ev
 * Demangled: Caver::GUIAlertView::GUIAlertView(void)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8978 string=0x00000000001F897C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAlertView::GUIAlertView(Caver::GUIAlertView *this)
{
  return _ZN5Caver12GUIAlertViewC2Ev(this);
}

