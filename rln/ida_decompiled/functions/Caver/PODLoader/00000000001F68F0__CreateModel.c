/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F68F0
 * Mangled: ._ZN5Caver9PODLoader11CreateModelEv
 * Demangled: Caver::PODLoader::CreateModel(void)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F68F8 string=0x00000000001F68FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PODLoader::CreateModel(Caver::PODLoader *this)
{
  return _ZN5Caver9PODLoader11CreateModelEv(this);
}

