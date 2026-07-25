/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005161D8
 * Mangled: _Z36PVRTStringStripWhiteSpaceFromStartOfRK11CPVRTString
 * Demangled: PVRTStringStripWhiteSpaceFromStartOf(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 18
 *   insn=0x000000000051622C string=0x0000000000516230 ""
 *   insn=0x0000000000516238 string=0x000000000051623C "A"
 *   insn=0x000000000051623C string=0x0000000000516240 "h~"
 *   insn=0x0000000000516240 string=0x0000000000516244 ""
 *   insn=0x0000000000516244 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000516250 string=0x0000000000516254 "u^"
 *   insn=0x0000000000516254 string=0x0000000000516258 "V"
 *   insn=0x0000000000516258 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051625C string=0x0000000000516260 "V"
 *   insn=0x0000000000516260 string=0x0000000000516264 "v"
 *   insn=0x0000000000516280 string=0x0000000000516284 "J"
 *   insn=0x0000000000516288 string=0x000000000051628C "?"
 *   insn=0x0000000000516294 string=0x0000000000516298 "JA"
 *   insn=0x000000000051629C string=0x00000000005162A0 "j~"
 *   insn=0x00000000005162B0 string=0x00000000005162B4 "v^"
 *   insn=0x00000000005162B4 string=0x00000000005162B8 ">"
 *   insn=0x00000000005162BC string=0x00000000005162C0 "U"
 *   insn=0x00000000005162C0 string=0x00000000005162C4 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__usercall PVRTStringStripWhiteSpaceFromStartOf@<X0>(const CPVRTString *a1@<X0>, _QWORD *a2@<X8>)
{
  _BYTE *v2; // x20
  size_t v3; // x21
  __int64 v5; // x24
  void *v6; // x22
  void *result; // x0
  size_t v8; // x22
  void *v9; // x21

  v2 = (_BYTE *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = 0;
    while ( v2[v5] == 32 || v2[v5] == 9 )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    if ( v3 + 2 == v5 )
      v8 = v3 - v5;
    else
      v8 = v3 - v5 + 1;
    *a2 = off_6D8E38;
    a2[1] = 0;
    v9 = malloc(v8 + 1);
    a2[2] = v8;
    a2[3] = v8 + 1;
    result = memmove(v9, &v2[v5], v8);
    *((_BYTE *)v9 + v8) = 0;
    if ( v9 )
      a2[1] = v9;
  }
  else
  {
LABEL_6:
    *a2 = off_6D8E38;
    a2[1] = 0;
    v6 = malloc(v3 + 1);
    a2[2] = v3;
    a2[3] = v3 + 1;
    result = memmove(v6, v2, v3);
    *((_BYTE *)v6 + v3) = 0;
    if ( v6 )
      a2[1] = v6;
  }
  return result;
}

