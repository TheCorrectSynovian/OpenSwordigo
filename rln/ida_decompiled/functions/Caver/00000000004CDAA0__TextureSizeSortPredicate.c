/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CDAA0
 * Mangled: _ZN5Caver24TextureSizeSortPredicateEPKNS_7TextureES2_
 * Demangled: Caver::TextureSizeSortPredicate(Caver::Texture const*,Caver::Texture const*)
 *
 * Callers: 1
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CDAA0 string=0x00000000004CDAA4 ")H@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TextureSizeSortPredicate(Caver *this, const Caver::Texture *a2, const Caver::Texture *a3)
{
  return *((_DWORD *)this + 18) > *((_DWORD *)a2 + 18);
}

