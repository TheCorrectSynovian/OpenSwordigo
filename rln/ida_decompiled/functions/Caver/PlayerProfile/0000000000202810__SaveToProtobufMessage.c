/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202810
 * Mangled: ._ZN5Caver13PlayerProfile21SaveToProtobufMessageEPNS_5Proto13PlayerProfileE
 * Demangled: Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202818 string=0x000000000020281C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::SaveToProtobufMessage(
        Caver::PlayerProfile *this,
        Caver::Proto::PlayerProfile *a2)
{
  return _ZN5Caver13PlayerProfile21SaveToProtobufMessageEPNS_5Proto13PlayerProfileE(this, a2);
}

