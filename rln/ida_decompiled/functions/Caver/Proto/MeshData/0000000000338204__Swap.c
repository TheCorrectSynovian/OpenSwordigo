/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338204
 * Mangled: _ZN5Caver5Proto8MeshData4SwapEPS1_
 * Demangled: Caver::Proto::MeshData::Swap(Caver::Proto::MeshData*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000338204 string=0x0000000000338208 " "
 *   insn=0x0000000000338208 string=0x000000000033820C "("
 *   insn=0x000000000033820C string=0x0000000000338210 "\t"
 *   insn=0x0000000000338210 string=0x0000000000338214 ""
 *   insn=0x0000000000338214 string=0x0000000000338218 ")"
 *   insn=0x0000000000338218 string=0x000000000033821C "("
 *   insn=0x000000000033821C string=0x0000000000338220 "\t"
 *   insn=0x0000000000338220 string=0x0000000000338224 ""
 *   insn=0x0000000000338224 string=0x0000000000338228 ")"
 *   insn=0x0000000000338228 string=0x000000000033822C "("
 *   insn=0x000000000033822C string=0x0000000000338230 "\t"
 *   insn=0x0000000000338230 string=0x0000000000338234 ""
 *   insn=0x0000000000338234 string=0x0000000000338238 ")"
 *   insn=0x0000000000338238 string=0x000000000033823C "("
 *   insn=0x000000000033823C string=0x0000000000338240 "\t"
 *   insn=0x0000000000338240 string=0x0000000000338244 ""
 *   insn=0x0000000000338244 string=0x0000000000338248 ")"
 *   insn=0x0000000000338248 string=0x000000000033824C "("
 *   insn=0x000000000033824C string=0x0000000000338250 "\t"
 *   insn=0x0000000000338250 string=0x0000000000338254 ""
 *   insn=0x0000000000338254 string=0x0000000000338258 ")"
 *   insn=0x0000000000338258 string=0x000000000033825C "(@"
 *   insn=0x000000000033825C string=0x0000000000338260 "\t@"
 *   insn=0x0000000000338260 string=0x0000000000338264 ""
 *   insn=0x0000000000338264 string=0x0000000000338268 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MeshData *__fastcall Caver::Proto::MeshData::Swap(
        Caver::Proto::MeshData *this,
        Caver::Proto::MeshData *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

