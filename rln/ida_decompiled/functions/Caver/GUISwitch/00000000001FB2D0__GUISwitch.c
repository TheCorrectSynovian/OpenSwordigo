/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2D0
 * Mangled: ._ZN5Caver9GUISwitchC2Ev
 * Demangled: Caver::GUISwitch::GUISwitch(void)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000049D874  Caver::GUISwitch::GUISwitch(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2D8 string=0x00000000001FB2DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUISwitch::GUISwitch(Caver::GUISwitch *this)
{
  return _ZN5Caver9GUISwitchC2Ev(this);
}

