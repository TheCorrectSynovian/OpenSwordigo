/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005160D8
 * Mangled: _Z21PVRTStringGetFileNameRK11CPVRTString
 * Demangled: PVRTStringGetFileName(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 24
 *   insn=0x0000000000516100 string=0x0000000000516104 "_"
 *   insn=0x0000000000516104 string=0x0000000000516108 "`"
 *   insn=0x0000000000516108 string=0x000000000051610C ")"
 *   insn=0x000000000051610C string=0x0000000000516110 "?"
 *   insn=0x0000000000516110 string=0x0000000000516114 "c"
 *   insn=0x0000000000516118 string=0x000000000051611C "?q"
 *   insn=0x0000000000516120 string=0x0000000000516124 ""
 *   insn=0x0000000000516128 string=0x000000000051612C "c"
 *   insn=0x0000000000516130 string=0x0000000000516134 ""
 *   insn=0x000000000051613C string=0x0000000000516140 "A"
 *   insn=0x0000000000516140 string=0x0000000000516144 "h~"
 *   insn=0x0000000000516144 string=0x0000000000516148 "J"
 *   insn=0x0000000000516148 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000516154 string=0x0000000000516158 "t^"
 *   insn=0x000000000051615C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000516164 string=0x0000000000516168 "v"
 *   insn=0x0000000000516174 string=0x0000000000516178 "J"
 *   insn=0x000000000051617C string=0x0000000000516180 "("
 *   insn=0x000000000051618C string=0x0000000000516190 "JA"
 *   insn=0x0000000000516194 string=0x0000000000516198 "j~"
 *   insn=0x000000000051619C string=0x00000000005161A0 "4"
 *   insn=0x00000000005161AC string=0x00000000005161B0 "v^"
 *   insn=0x00000000005161B8 string=0x00000000005161BC "T"
 *   insn=0x00000000005161BC string=0x00000000005161C0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__usercall PVRTStringGetFileName@<X0>(const CPVRTString *a1@<X0>, _QWORD *a2@<X8>)
{
  size_t v2; // x20
  _BYTE *v3; // x21
  size_t v5; // x8
  size_t v6; // x9
  void *v7; // x22
  void *result; // x0
  size_t v9; // x8
  size_t v10; // x9
  size_t v11; // x22
  size_t v12; // x23
  char *v13; // x21
  void *v14; // x20

  v3 = (_BYTE *)*((_QWORD *)a1 + 1);
  v2 = *((_QWORD *)a1 + 2);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = v2 - 1;
    while ( v3[v6] != 47 )
    {
      if ( --v6 >= v2 )
      {
        while ( v3[v5] != 92 )
        {
          if ( --v5 >= v2 )
            goto LABEL_7;
        }
        v6 = v5;
        break;
      }
    }
    v9 = v6 + 1;
    if ( v2 == -1 )
      v10 = v6 + 1;
    else
      v10 = 0;
    v11 = v2 - v10;
    v12 = v2 - v10 + 1;
    *a2 = off_6D8E38;
    a2[1] = 0;
    v13 = &v3[v9];
    v14 = malloc(v12);
    a2[2] = v11;
    a2[3] = v12;
    result = memmove(v14, v13, v11);
    *((_BYTE *)v14 + v11) = 0;
    if ( v14 )
      a2[1] = v14;
  }
  else
  {
LABEL_7:
    *a2 = off_6D8E38;
    a2[1] = 0;
    v7 = malloc(v2 + 1);
    a2[2] = v2;
    a2[3] = v2 + 1;
    result = memmove(v7, v3, v2);
    *((_BYTE *)v7 + v2) = 0;
    if ( v7 )
      a2[1] = v7;
  }
  return result;
}

