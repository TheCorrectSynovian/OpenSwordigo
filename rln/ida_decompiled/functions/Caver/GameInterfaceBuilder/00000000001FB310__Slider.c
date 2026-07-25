/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB310
 * Mangled: ._ZN5Caver20GameInterfaceBuilder6SliderEff
 * Demangled: Caver::GameInterfaceBuilder::Slider(float,float)
 *
 * Callers: 2
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB318 string=0x00000000001FB31C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameInterfaceBuilder::Slider(Caver::GameInterfaceBuilder *this, float a2, float a3)
{
  JUMPOUT(0x341108);
}

