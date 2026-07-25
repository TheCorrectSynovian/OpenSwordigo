/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515FE4
 * Mangled: _Z36PVRTStringGetContainingDirectoryPathRK11CPVRTString
 * Demangled: PVRTStringGetContainingDirectoryPath(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 23
 *   insn=0x000000000051600C string=0x0000000000516010 "_"
 *   insn=0x0000000000516010 string=0x0000000000516014 "`"
 *   insn=0x0000000000516014 string=0x0000000000516018 ")"
 *   insn=0x0000000000516018 string=0x000000000051601C "?"
 *   insn=0x000000000051601C string=0x0000000000516020 "c"
 *   insn=0x0000000000516024 string=0x0000000000516028 "?q"
 *   insn=0x000000000051602C string=0x0000000000516030 ""
 *   insn=0x0000000000516034 string=0x0000000000516038 "c"
 *   insn=0x000000000051603C string=0x0000000000516040 ""
 *   insn=0x0000000000516048 string=0x000000000051604C "A"
 *   insn=0x000000000051604C string=0x0000000000516050 "h~"
 *   insn=0x0000000000516054 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000516060 string=0x0000000000516064 "u^"
 *   insn=0x0000000000516068 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000516070 string=0x0000000000516074 "v"
 *   insn=0x0000000000516080 string=0x0000000000516084 ""
 *   insn=0x0000000000516084 string=0x0000000000516088 "?"
 *   insn=0x0000000000516090 string=0x0000000000516094 "A"
 *   insn=0x0000000000516098 string=0x000000000051609C "h~"
 *   insn=0x000000000051609C string=0x00000000005160A0 "t"
 *   insn=0x00000000005160AC string=0x00000000005160B0 "v^"
 *   insn=0x00000000005160B8 string=0x00000000005160BC "U"
 *   insn=0x00000000005160BC string=0x00000000005160C0 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__usercall PVRTStringGetContainingDirectoryPath@<X0>(const CPVRTString *a1@<X0>, _QWORD *a2@<X8>)
{
  _BYTE *v2; // x20
  size_t v3; // x21
  size_t v5; // x8
  size_t v6; // x9
  void *v7; // x22
  void *result; // x0
  size_t v9; // x22
  void *v10; // x21

  v2 = (_BYTE *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = v3 - 1;
    while ( v2[v6] != 47 )
    {
      if ( --v6 >= v3 )
      {
        while ( v2[v5] != 92 )
        {
          if ( --v5 >= v3 )
            goto LABEL_7;
        }
        v6 = v5;
        break;
      }
    }
    if ( v6 == -1 )
      v9 = *((_QWORD *)a1 + 2);
    else
      v9 = v6;
    *a2 = off_6D8E38;
    a2[1] = 0;
    v10 = malloc(v9 + 1);
    a2[2] = v9;
    a2[3] = v9 + 1;
    result = memmove(v10, v2, v9);
    *((_BYTE *)v10 + v9) = 0;
    if ( v10 )
      a2[1] = v10;
  }
  else
  {
LABEL_7:
    *a2 = off_6D8E38;
    a2[1] = 0;
    v7 = malloc(v3 + 1);
    a2[2] = v3;
    a2[3] = v3 + 1;
    result = memmove(v7, v2, v3);
    *((_BYTE *)v7 + v3) = 0;
    if ( v7 )
      a2[1] = v7;
  }
  return result;
}

