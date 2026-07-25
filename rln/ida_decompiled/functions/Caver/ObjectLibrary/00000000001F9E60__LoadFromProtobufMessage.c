/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E60
 * Mangled: ._ZN5Caver13ObjectLibrary23LoadFromProtobufMessageERKNS_5Proto13ObjectLibraryE
 * Demangled: Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callers: 3
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9E68 string=0x00000000001F9E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLibrary::LoadFromProtobufMessage(
        Caver::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  return _ZN5Caver13ObjectLibrary23LoadFromProtobufMessageERKNS_5Proto13ObjectLibraryE(this, a2);
}

