/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568208
 * Mangled: sub_568208
 * Demangled: sub_568208
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 8
 *   insn=0x0000000000568210 string=0x0000000000568214 "4"
 *   insn=0x0000000000568224 string=0x0000000000568228 "U"
 *   insn=0x000000000056822C string=0x0000000000568244 "s"
 *   insn=0x0000000000568244 string=0x0000000000568248 "_"
 *   insn=0x0000000000568248 string=0x000000000056824C "S"
 *   insn=0x0000000000568268 string=0x000000000056826C "mk"
 *   insn=0x000000000056826C string=0x0000000000568270 " "
 *   insn=0x0000000000568270 string=0x0000000000568254 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568208(__int64 *a1, const void **a2, unsigned __int64 a3)
{
  const void *v3; // x20
  __int64 v4; // x22
  size_t v5; // x21
  __int64 v6; // x19
  unsigned __int64 v8; // x19

  v3 = *a2;
  v4 = *a1;
  v5 = *((_QWORD *)*a2 - 3);
  v6 = *(_QWORD *)(*a1 - 24);
  if ( !v5 || !v6 )
    return -1;
  v8 = v6 - 1;
  if ( a3 <= v8 )
    v8 = a3;
  do
  {
    if ( memchr(v3, *(unsigned __int8 *)(v4 + v8), v5) )
      break;
    --v8;
  }
  while ( v8 != -1 );
  return v8;
}

