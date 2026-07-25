/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F694
 * Mangled: sub_51F694
 * Demangled: sub_51F694
 *
 * Callers: 2
 *   0x000000000055F390  sub_55F390
 *   0x0000000000562F10  sub_562F10
 *
 * Callees: 2
 *   0x00000000001F9C10  .__errno
 *   0x00000000001FDDC0  .fclose
 *
 * Referenced strings: 5
 *   insn=0x000000000051F6B4 string=0x000000000051F6B8 "Vi"
 *   insn=0x000000000051F6B8 string=0x00000000001F9C10 "0'"
 *   insn=0x000000000051F6C8 string=0x000000000051F6CC "@"
 *   insn=0x000000000051F6C8 string=0x00000000001FDDC0 "0'"
 *   insn=0x000000000051F6D8 string=0x000000000051F70C "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F694(__int64 a1)
{
  FILE *v1; // x20
  _DWORD *v3; // x21

  v1 = *(FILE **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (_DWORD *)__errno();
    *v3 = 0;
    while ( fclose(v1) )
    {
      if ( *v3 != 4 )
      {
        *(_QWORD *)a1 = 0;
        return 0;
      }
      v1 = *(FILE **)a1;
    }
  }
  *(_QWORD *)a1 = 0;
  return a1;
}

