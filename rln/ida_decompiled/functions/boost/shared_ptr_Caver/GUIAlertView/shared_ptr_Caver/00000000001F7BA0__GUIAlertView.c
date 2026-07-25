/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7BA0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12GUIAlertViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIAlertView>::shared_ptr<Caver::GUIAlertView>(Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7BA8 string=0x00000000001F7BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUIAlertView>::shared_ptr<Caver::GUIAlertView>()
{
  JUMPOUT(0x341020);
}

