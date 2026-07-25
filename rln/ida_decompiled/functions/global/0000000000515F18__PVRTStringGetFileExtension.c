/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515F18
 * Mangled: _Z26PVRTStringGetFileExtensionRK11CPVRTString
 * Demangled: PVRTStringGetFileExtension(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 19
 *   insn=0x0000000000515F28 string=0x0000000000515F2C "\t@"
 *   insn=0x0000000000515F30 string=0x0000000000515F34 "i"
 *   insn=0x0000000000515F38 string=0x0000000000515F3C "8"
 *   insn=0x0000000000515F48 string=0x0000000000515F4C "@"
 *   insn=0x0000000000515F58 string=0x0000000000515F5C "C"
 *   insn=0x0000000000515F60 string=0x0000000000515F64 ""
 *   insn=0x0000000000515F68 string=0x0000000000515F6C "A"
 *   insn=0x0000000000515F6C string=0x0000000000515F70 "h~"
 *   insn=0x0000000000515F74 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515F80 string=0x0000000000515F84 "`"
 *   insn=0x0000000000515F84 string=0x0000000000515F88 "@"
 *   insn=0x0000000000515F88 string=0x0000000000515F8C "`"
 *   insn=0x0000000000515F94 string=0x0000000000515F98 ""
 *   insn=0x0000000000515FA0 string=0x0000000000515FA4 "A"
 *   insn=0x0000000000515FA4 string=0x0000000000515FA8 "h~"
 *   insn=0x0000000000515FB8 string=0x0000000000515FBC "tZ"
 *   insn=0x0000000000515FC0 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515FC4 string=0x0000000000515FC8 "U"
 *   insn=0x0000000000515FC8 string=0x0000000000515FCC "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__usercall PVRTStringGetFileExtension@<X0>(const CPVRTString *a1@<X0>, _QWORD *a2@<X8>)
{
  unsigned __int64 v2; // x9
  __int64 v4; // x23
  unsigned __int64 v5; // x24
  size_t v6; // x20
  _BYTE *result; // x0
  void *v8; // x21

  v2 = *((_QWORD *)a1 + 2);
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 1);
    v5 = v2 - 1;
    v6 = 1;
    while ( *(_BYTE *)(v4 + v5) != 46 )
    {
      --v5;
      ++v6;
      if ( v5 >= v2 )
        goto LABEL_5;
    }
    *a2 = off_6D8E38;
    a2[1] = 0;
    v8 = malloc(v6 + 1);
    a2[2] = v6;
    a2[3] = v6 + 1;
    result = memmove(v8, (const void *)(v4 + v5), v6);
    *((_BYTE *)v8 + v6) = 0;
    if ( v8 )
      a2[1] = v8;
  }
  else
  {
LABEL_5:
    *a2 = off_6D8E38;
    a2[1] = 0;
    result = malloc(1u);
    *result = 0;
    *((_OWORD *)a2 + 1) = xmmword_58B480;
    if ( result )
      a2[1] = result;
  }
  return result;
}

