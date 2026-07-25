/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD7C0
 * Mangled: _ZN5Caver28TextureLoadTimeSortPredicateERKN5boost13intrusive_ptrINS_7TextureEEES5_
 * Demangled: Caver::TextureLoadTimeSortPredicate(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004CD7C0 string=0x00000000004CD7C4 ")"
 *   insn=0x00000000004CD7C8 string=0x00000000004CD7CC "!M@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TextureLoadTimeSortPredicate(__int64 a1, __int64 a2)
{
  return *(double *)(*(_QWORD *)a1 + 152LL) > *(double *)(*(_QWORD *)a2 + 152LL);
}

