/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BD7C
 * Mangled: sub_56BD7C
 * Demangled: sub_56BD7C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 5
 *   insn=0x000000000056BD8C string=0x000000000056BD90 "5"
 *   insn=0x000000000056BDA0 string=0x000000000056BDA4 "T"
 *   insn=0x000000000056BDA4 string=0x000000000056BDA8 "_"
 *   insn=0x000000000056BDB8 string=0x000000000056BDBC "s"
 *   insn=0x000000000056BDD8 string=0x000000000056BDDC "%R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BD7C(__int64 *a1, const wchar_t **a2, unsigned __int64 a3)
{
  __int64 v4; // x0
  const wchar_t *v5; // x21
  unsigned __int64 v6; // x19
  __int64 v7; // x20
  size_t v8; // x23
  wchar_t v9; // w1

  v4 = *a1;
  v5 = *a2;
  v6 = a3;
  v7 = 4 * a3;
  v8 = *((_QWORD *)*a2 - 3);
  if ( a3 >= *(_QWORD *)(v4 - 24) )
    return -1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v4 + v7);
    v7 += 4;
    if ( !wmemchr(v5, v9, v8) )
      break;
    v4 = *a1;
    if ( ++v6 >= *(_QWORD *)(*a1 - 24) )
      return -1;
  }
  return v6;
}

