/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4780
 * Mangled: ._ZN5Caver13ObjectLibrary15LibraryWithNameERKSs
 * Demangled: Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Callers: 2
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 1
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4788 string=0x00000000001F478C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ObjectLibrary::LibraryWithName()
{
  return _ZN5Caver13ObjectLibrary15LibraryWithNameERKSs();
}

