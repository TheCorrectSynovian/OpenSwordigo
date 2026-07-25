/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202200
 * Mangled: ._ZNK5Caver13ObjectLibrary21SaveToProtobufMessageEPNS_5Proto13ObjectLibraryE
 * Demangled: Caver::ObjectLibrary::SaveToProtobufMessage(Caver::Proto::ObjectLibrary *)
 *
 * Callers: 2
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202208 string=0x000000000020220C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectLibrary::SaveToProtobufMessage(
        Caver::ObjectLibrary *this,
        Caver::Proto::ObjectLibrary *a2)
{
  JUMPOUT(0x45CAB0);
}

