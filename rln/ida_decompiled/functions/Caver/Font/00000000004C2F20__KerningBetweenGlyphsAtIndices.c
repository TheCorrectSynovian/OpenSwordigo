/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2F20
 * Mangled: _ZN5Caver4Font29KerningBetweenGlyphsAtIndicesEii
 * Demangled: Caver::Font::KerningBetweenGlyphsAtIndices(int,int)
 *
 * Callers: 1
 *   0x00000000001F78C0  Caver::Font::KerningBetweenGlyphsAtIndices(int,int)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004C2F20 string=0x00000000004C2F24 "H"
 *   insn=0x00000000004C2F24 string=0x00000000004C2F28 "\t(A"
 *   insn=0x00000000004C2F28 string=0x00000000004C2F2C "I"
 *   insn=0x00000000004C2F2C string=0x00000000004C2F30 ")"
 *   insn=0x00000000004C2F30 string=0x00000000004C2F34 "jt"
 *   insn=0x00000000004C2F34 string=0x00000000004C2F38 ")}"
 *   insn=0x00000000004C2F3C string=0x00000000004C2F40 ")\t\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Font::KerningBetweenGlyphsAtIndices(Caver::Font *this, int a2, int a3)
{
  __int64 v3; // x8

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    return (unsigned int)*(char *)(v3
                                 + (int)(a3 - 1171354717 * ((*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 2) * a2));
  else
    return 0;
}

