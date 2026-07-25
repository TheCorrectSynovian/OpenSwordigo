/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0B54
 * Mangled: _ZN5Caver18CopyToFileBuffer32EPhPKhi
 * Demangled: Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x00000000001FDE10  Caver::CopyToFileBuffer32(uchar *,uchar const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004D0B58 string=0x00000000004D0B5C "(D@"
 *   insn=0x00000000004D0B5C string=0x00000000004D0B60 "B"
 *   insn=0x00000000004D0B60 string=0x00000000004D0B64 ""
 *   insn=0x00000000004D0B64 string=0x00000000004D0B68 "\t}S\n}"
 *   insn=0x00000000004D0B68 string=0x00000000004D0B6C "\n}"
 *   insn=0x00000000004D0B6C string=0x00000000004D0B70 "}"
 *   insn=0x00000000004D0B70 string=0x00000000004D0B74 "\t"
 *   insn=0x00000000004D0B74 string=0x00000000004D0B78 "\n"
 *   insn=0x00000000004D0B78 string=0x00000000004D0B7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CopyToFileBuffer32(_DWORD *this, unsigned __int8 *a2, const unsigned __int8 *a3)
{
  int v3; // t1

  if ( (int)a3 >= 1 )
  {
    do
    {
      v3 = *(_DWORD *)a2;
      a2 += 4;
      LODWORD(a3) = (_DWORD)a3 - 1;
      *this++ = v3;
    }
    while ( (_DWORD)a3 );
  }
  return this;
}

