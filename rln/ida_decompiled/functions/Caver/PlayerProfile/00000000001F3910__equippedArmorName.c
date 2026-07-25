/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3910
 * Mangled: ._ZN5Caver13PlayerProfile17equippedArmorNameEv
 * Demangled: Caver::PlayerProfile::equippedArmorName(void)
 *
 * Callers: 2
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3918 string=0x00000000001F391C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::equippedArmorName(Caver::PlayerProfile *this)
{
  return _ZN5Caver13PlayerProfile17equippedArmorNameEv(this);
}

