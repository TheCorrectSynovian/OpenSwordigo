/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515A14
 * Mangled: _ZplRK11CPVRTStringS1_
 * Demangled: operator+(CPVRTString const&,CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 20
 *   insn=0x0000000000515A40 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515A4C string=0x0000000000515A50 "X"
 *   insn=0x0000000000515A50 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515A64 string=0x0000000000515A68 "_"
 *   insn=0x0000000000515A68 string=0x0000000000515A6C "b"
 *   insn=0x0000000000515A80 string=0x0000000000515A84 "7"
 *   insn=0x0000000000515A84 string=0x0000000000515A88 "@"
 *   insn=0x0000000000515A90 string=0x0000000000515A94 "_k58F"
 *   insn=0x0000000000515A94 string=0x0000000000515A98 "F"
 *   insn=0x0000000000515A98 string=0x0000000000515A9C "_"
 *   insn=0x0000000000515A9C string=0x0000000000515AA0 "_k58 "
 *   insn=0x0000000000515AA0 string=0x0000000000515AA4 " "
 *   insn=0x0000000000515AAC string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000515ABC string=0x0000000000515AC0 "<"
 *   insn=0x0000000000515AC8 string=0x0000000000515ACC ""
 *   insn=0x0000000000515AD0 string=0x0000000000515AD4 "A"
 *   insn=0x0000000000515AD4 string=0x0000000000515AD8 "h~"
 *   insn=0x0000000000515AE8 string=0x0000000000515AEC "uZ"
 *   insn=0x0000000000515AF4 string=0x0000000000515AF8 "W"
 *   insn=0x0000000000515AF8 string=0x0000000000515AFC "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall operator+(__int64 a1@<X0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
{
  const void *v3; // x22
  size_t v4; // x23
  char *v7; // x20
  size_t v8; // x24
  const void *v9; // x25
  size_t v10; // x21
  unsigned __int64 v11; // x22
  char *v12; // x26
  _BYTE *v13; // x0
  size_t v14; // x2
  _BYTE *v15; // x23

  v3 = *(const void **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = (char *)malloc(v4 + 1);
  memmove(v7, v3, v4);
  v7[v4] = 0;
  v9 = *(const void **)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  v10 = v8 + v4;
  v11 = v8 + v4 + 1;
  if ( v4 + 1 >= v11 )
  {
    memmove(&v7[v4], v9, v8);
    v7[v10] = 0;
  }
  else
  {
    v12 = (char *)malloc(v8 + v4 + 1);
    memcpy(v12, v7, v4);
    v12[v10] = 0;
    memmove(&v12[v4], v9, v8);
    v12[v10] = 0;
    if ( v12 != v7 )
    {
      free(v7);
      v7 = v12;
    }
  }
  *a3 = off_6D8E38;
  a3[1] = 0;
  v13 = malloc(v8 + v4 + 1);
  v14 = v8 + v4;
  v15 = v13;
  a3[2] = v10;
  a3[3] = v11;
  memcpy(v13, v7, v14);
  v15[v10] = 0;
  if ( v15 )
    a3[1] = v15;
  free(v7);
}

