/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B70
 * Mangled: ._ZNK5Caver4Font21SaveToProtobufMessageEPNS_5Proto4FontE
 * Demangled: Caver::Font::SaveToProtobufMessage(Caver::Proto::Font *)
 *
 * Callers: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B78 string=0x00000000001F9B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Font::SaveToProtobufMessage(Caver::Font *this, Caver::Proto::Font *a2)
{
  JUMPOUT(0x4C2A18);
}

