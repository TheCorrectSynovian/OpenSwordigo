/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D82C8
 * Mangled: _ZNK5Caver5Proto12SoundLibrary13SetCachedSizeEi
 * Demangled: Caver::Proto::SoundLibrary::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D8290  Caver::Proto::SoundLibrary::~SoundLibrary()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

