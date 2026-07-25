/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5780
 * Mangled: ._ZN5Caver4Font23LoadFromProtobufMessageERKNS_5Proto4FontE
 * Demangled: Caver::Font::LoadFromProtobufMessage(Caver::Proto::Font const&)
 *
 * Callers: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5788 string=0x00000000001F578C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Font::LoadFromProtobufMessage(Caver::Font *this, const Font *a2)
{
  JUMPOUT(0x4C2710);
}

