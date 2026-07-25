/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515B1C
 * Mangled: _ZplRK11CPVRTStringPKc
 * Demangled: operator+(CPVRTString const&,char const*)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 18
 *   insn=0x0000000000515B40 string=0x0000000000515B44 ""
 *   insn=0x0000000000515B4C string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515B5C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515B64 string=0x0000000000515B68 "_"
 *   insn=0x0000000000515B70 string=0x0000000000515B74 "5"
 *   insn=0x0000000000515B7C string=0x0000000000515B80 "B"
 *   insn=0x0000000000515B98 string=0x0000000000515B9C "@"
 *   insn=0x0000000000515BA8 string=0x0000000000515BAC "_"
 *   insn=0x0000000000515BAC string=0x0000000000515BB0 "_k58@"
 *   insn=0x0000000000515BB0 string=0x0000000000515BB4 "@"
 *   insn=0x0000000000515BBC string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000515BDC string=0x0000000000515BE0 ""
 *   insn=0x0000000000515BE4 string=0x0000000000515BE8 "A"
 *   insn=0x0000000000515BE8 string=0x0000000000515BEC "h~"
 *   insn=0x0000000000515BFC string=0x0000000000515C00 "uZ"
 *   insn=0x0000000000515C08 string=0x0000000000515C0C "W"
 *   insn=0x0000000000515C0C string=0x0000000000515C10 "w"
 *   insn=0x0000000000515C2C string=0x0000000000515C30 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall operator+(__int64 a1@<X0>, const char *a2@<X1>, _QWORD *a3@<X8>)
{
  const void *v3; // x21
  size_t v4; // x24
  char *v7; // x20
  size_t v8; // x0
  size_t v9; // x25
  size_t v10; // x21
  size_t v11; // x22
  char *v12; // x26
  void *v13; // x23

  v3 = *(const void **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = (char *)malloc(v4 + 1);
  memmove(v7, v3, v4);
  v7[v4] = 0;
  v8 = strlen(a2);
  v9 = v8;
  v10 = v8 + v4;
  v11 = v8 + v4 + 1;
  if ( v4 + 1 >= v11 )
  {
    memcpy(&v7[v4], a2, v8);
    v7[v10] = 0;
  }
  else
  {
    v12 = (char *)malloc(v8 + v4 + 1);
    memcpy(v12, v7, v4);
    memcpy(&v12[v4], a2, v9);
    v12[v10] = 0;
    if ( v12 != v7 )
    {
      free(v7);
      v7 = v12;
    }
  }
  *a3 = off_6D8E38;
  a3[1] = 0;
  v13 = malloc(v11);
  a3[2] = v10;
  a3[3] = v11;
  memcpy(v13, v7, v10);
  *((_BYTE *)v13 + v10) = 0;
  if ( v13 )
    a3[1] = v13;
  free(v7);
}

