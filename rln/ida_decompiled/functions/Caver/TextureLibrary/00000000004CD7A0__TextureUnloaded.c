/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD7A0
 * Mangled: _ZN5Caver14TextureLibrary15TextureUnloadedEPNS_7TextureE
 * Demangled: Caver::TextureLibrary::TextureUnloaded(Caver::Texture *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004CD7A0 string=0x00000000004CD7A4 "H"
 *   insn=0x00000000004CD7A4 string=0x00000000004CD7AC "(H@"
 *   insn=0x00000000004CD7AC string=0x00000000004CD7B0 "\t<@"
 *   insn=0x00000000004CD7B0 string=0x00000000004CD7B4 "("
 *   insn=0x00000000004CD7B4 string=0x00000000004CD7B8 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureLibrary::TextureUnloaded(__int64 this, Caver::Texture *a2)
{
  if ( !*((_QWORD *)a2 + 14) )
    *(_DWORD *)(this + 60) -= *((_DWORD *)a2 + 18);
  return this;
}

