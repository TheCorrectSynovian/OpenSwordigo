/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0C34
 * Mangled: _ZN5Caver20CopyFromFileBuffer32EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x00000000001F8BE0  Caver::CopyFromFileBuffer32(uchar *,uchar const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004D0C38 string=0x00000000004D0C3C "(D@"
 *   insn=0x00000000004D0C3C string=0x00000000004D0C40 "B"
 *   insn=0x00000000004D0C40 string=0x00000000004D0C44 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CopyFromFileBuffer32(_DWORD *this, unsigned __int8 *a2, const unsigned __int8 *a3)
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

