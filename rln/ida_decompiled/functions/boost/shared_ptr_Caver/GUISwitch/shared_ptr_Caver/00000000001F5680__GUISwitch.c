/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5680
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9GUISwitchEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUISwitch>::shared_ptr<Caver::GUISwitch>(Caver::GUISwitch *)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5688 string=0x00000000001F568C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUISwitch>::shared_ptr<Caver::GUISwitch>()
{
  JUMPOUT(0x341D1C);
}

