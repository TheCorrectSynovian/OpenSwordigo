/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005685C8
 * Mangled: sub_5685C8
 * Demangled: sub_5685C8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203020  .memchr
 *
 * Referenced strings: 7
 *   insn=0x00000000005685DC string=0x00000000005685E0 "4"
 *   insn=0x00000000005685EC string=0x0000000000568600 " "
 *   insn=0x0000000000568600 string=0x0000000000568604 "_"
 *   insn=0x0000000000568604 string=0x0000000000568608 "S"
 *   insn=0x0000000000568624 string=0x0000000000568628 "~j"
 *   insn=0x0000000000568628 string=0x000000000056862C " "
 *   insn=0x000000000056862C string=0x0000000000568610 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5685C8(__int64 *a1, const void **a2, unsigned __int64 a3)
{
  __int64 v3; // x21
  __int64 result; // x0
  _QWORD *v5; // x20
  __int64 v6; // x1
  size_t v7; // x22
  unsigned __int64 v8; // x19

  v3 = *a1;
  result = -1;
  v5 = *a2;
  v6 = *(_QWORD *)(v3 - 24);
  v7 = *(v5 - 3);
  if ( v6 )
  {
    if ( a3 > v6 - 1 )
      v8 = v6 - 1;
    else
      v8 = a3;
    do
    {
      if ( !memchr(v5, *(unsigned __int8 *)(v3 + v8), v7) )
        break;
      --v8;
    }
    while ( v8 != -1 );
    return v8;
  }
  return result;
}

