/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522158
 * Mangled: sub_522158
 * Demangled: sub_522158
 *
 * Callers: 4
 *   0x0000000000521338  sub_521338
 *   0x0000000000521C18  sub_521C18
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000522234  sub_522234
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 11
 *   insn=0x0000000000522170 string=0x0000000000522174 "A"
 *   insn=0x0000000000522178 string=0x000000000052217C " P"
 *   insn=0x000000000052217C string=0x0000000000522180 "b"
 *   insn=0x0000000000522180 string=0x00000000005221CC """
 *   insn=0x0000000000522184 string=0x0000000000522188 "C"
 *   insn=0x0000000000522198 string=0x00000000005221B0 "3"
 *   insn=0x00000000005221B0 string=0x00000000005221B4 "?T"
 *   insn=0x00000000005221B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000005221C0 string=0x00000000005221C4 " P"
 *   insn=0x00000000005221CC string=0x00000000005221D0 "@"
 *   insn=0x00000000005221D0 string=0x00000000005221D4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_522158(__int64 a1)
{
  _DWORD *v1; // x1
  unsigned int *v3; // x0
  unsigned int v4; // w2
  _DWORD *v5; // x19

  v1 = *(_DWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1 + 5;
    if ( !&pthread_create )
      goto LABEL_8;
    do
LABEL_3:
      v4 = __ldaxr(v3);
    while ( __stlxr(v4 - 1, v3) );
    while ( !v4 )
    {
      v5 = *(_DWORD **)v1;
      operator delete(v1);
      v1 = v5;
      if ( !v5 )
        break;
      v3 = v5 + 5;
      if ( &pthread_create )
        goto LABEL_3;
LABEL_8:
      v4 = v1[5];
      v1[5] = v4 - 1;
    }
  }
  *(_QWORD *)(a1 + 40) = 0;
}

