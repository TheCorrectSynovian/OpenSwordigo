/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4AD0
 * Mangled: ._ZN5Caver13PlayerProfile16armorTrinketNameEv
 * Demangled: Caver::PlayerProfile::armorTrinketName(void)
 *
 * Callers: 2
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4AD8 string=0x00000000001F4ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::armorTrinketName(Caver::PlayerProfile *this)
{
  JUMPOUT(0x39D474);
}

