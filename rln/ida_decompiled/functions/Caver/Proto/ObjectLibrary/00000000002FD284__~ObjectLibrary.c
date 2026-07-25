/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD284
 * Mangled: _ZN5Caver5Proto13ObjectLibraryD0Ev
 * Demangled: Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB3C0  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x00000000002FD2BC  Caver::Proto::ObjectLibrary::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002FD290 string=0x00000000002FD294 "K"
 *   insn=0x00000000002FD294 string=0x00000000001FB3C0 "0'"
 *   insn=0x00000000002FD2A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLibrary::~ObjectLibrary(Caver::Proto::ObjectLibrary *this)
{
  Caver::Proto::ObjectLibrary::~ObjectLibrary(this);
  operator delete(this);
}

