/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520780
 * Mangled: sub_520780
 * Demangled: sub_520780
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFDA0  .iswctype
 *
 * Referenced strings: 7
 *   insn=0x00000000005207A8 string=0x00000000005207AC "b"
 *   insn=0x00000000005207BC string=0x00000000005207C0 "x"
 *   insn=0x00000000005207DC string=0x00000000005207E0 "a"
 *   insn=0x00000000005207E0 string=0x00000000005207E4 "s""
 *   insn=0x00000000005207E8 string=0x00000000005207EC "m}"
 *   insn=0x00000000005207F0 string=0x00000000005207F4 "`"
 *   insn=0x0000000000520804 string=0x0000000000520808 "uk48"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_520780(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // x20
  wctype_t *v7; // x26
  _BYTE *v8; // x25
  wctype_t *v9; // x22
  wctype_t *v10; // x19
  _BYTE *v11; // x28
  char v12; // w21
  wctype_t v13; // x1

  if ( a2 < a3 )
  {
    v6 = 0;
    v7 = (wctype_t *)(a1 + 1200);
    v8 = (_BYTE *)(a1 + 1180);
    v9 = (wctype_t *)(a1 + 1328);
    do
    {
      v10 = v7;
      v11 = v8;
      v12 = 0;
      do
      {
        v13 = *v10++;
        if ( iswctype(*(_DWORD *)(a2 + 4 * v6), v13) )
          v12 |= *v11;
        ++v11;
      }
      while ( v10 != v9 );
      *(_BYTE *)(a4 + v6++) = v12;
    }
    while ( v6 != ((~a2 + a3) >> 2) + 1 );
  }
  return a3;
}

