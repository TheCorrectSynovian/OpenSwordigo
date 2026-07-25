/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7950
 * Mangled: ._ZN5Caver9PODLoader17ReadModelFromFileERKSs
 * Demangled: Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7958 string=0x00000000001F795C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PODLoader::ReadModelFromFile()
{
  return _ZN5Caver9PODLoader17ReadModelFromFileERKSs();
}

