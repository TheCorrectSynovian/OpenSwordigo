/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4480
 * Mangled: ._ZN5Caver5Proto13ObjectLibraryD2Ev
 * Demangled: Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *
 * Callers: 2
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002FCE78  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4488 string=0x00000000001F448C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLibrary::~ObjectLibrary(Caver::Proto::ObjectLibrary *this)
{
  _ZN5Caver5Proto13ObjectLibraryD2Ev(this);
}

