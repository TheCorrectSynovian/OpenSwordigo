/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203AB0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder6SwitchEv
 * Demangled: Caver::GameInterfaceBuilder::Switch(void)
 *
 * Callers: 1
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203AB8 string=0x0000000000203ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameInterfaceBuilder::Switch(Caver::GameInterfaceBuilder *this)
{
  JUMPOUT(0x34188C);
}

