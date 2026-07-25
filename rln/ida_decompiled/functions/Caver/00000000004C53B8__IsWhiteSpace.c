/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C53B8
 * Mangled: _ZN5Caver12IsWhiteSpaceEc
 * Demangled: Caver::IsWhiteSpace(char)
 *
 * Callers: 1
 *   0x00000000004C5170  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004C53B8 string=0x00000000004C53BC ""
 *   insn=0x00000000004C53C4 string=0x00000000004C53C8 "i"
 *   insn=0x00000000004C53C8 string=0x00000000004C53D0 "(%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::IsWhiteSpace(Caver *this)
{
  unsigned int v1; // w8

  v1 = (unsigned __int8)((_BYTE)this - 9);
  if ( v1 > 0x17 )
    return 0;
  else
    return (0x800003u >> v1) & 1;
}

