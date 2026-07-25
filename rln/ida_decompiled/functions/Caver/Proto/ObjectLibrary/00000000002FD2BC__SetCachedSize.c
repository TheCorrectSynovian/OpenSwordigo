/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD2BC
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary13SetCachedSizeEi
 * Demangled: Caver::Proto::ObjectLibrary::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002FD284  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

