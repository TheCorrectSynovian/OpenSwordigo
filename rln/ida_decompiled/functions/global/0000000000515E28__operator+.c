/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515E28
 * Mangled: _ZplcRK11CPVRTString
 * Demangled: operator+(char,CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 19
 *   insn=0x0000000000515E4C string=0x0000000000515E50 ""
 *   insn=0x0000000000515E50 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515E6C string=0x0000000000515E70 ")"
 *   insn=0x0000000000515E7C string=0x0000000000515E80 "@"
 *   insn=0x0000000000515E88 string=0x0000000000515E8C "W"
 *   insn=0x0000000000515E8C string=0x0000000000515E90 "_k58G"
 *   insn=0x0000000000515E90 string=0x0000000000515E94 "G"
 *   insn=0x0000000000515E94 string=0x0000000000515E98 "_"
 *   insn=0x0000000000515E94 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515E98 string=0x0000000000515E9C "_k58 "
 *   insn=0x0000000000515E9C string=0x0000000000515EA0 " "
 *   insn=0x0000000000515EA8 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000515EB8 string=0x0000000000515EBC "="
 *   insn=0x0000000000515EC4 string=0x0000000000515EC8 ""
 *   insn=0x0000000000515ECC string=0x0000000000515ED0 "A"
 *   insn=0x0000000000515ED0 string=0x0000000000515ED4 "h~"
 *   insn=0x0000000000515EE4 string=0x0000000000515EE8 "uZ"
 *   insn=0x0000000000515EF0 string=0x0000000000515EF4 "W"
 *   insn=0x0000000000515EF4 string=0x0000000000515EF8 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall operator+(char a1@<W0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
{
  _BYTE *v6; // x20
  size_t v7; // x24
  const void *v8; // x25
  size_t v9; // x21
  _BYTE *v10; // x26
  void *v11; // x23

  v6 = malloc(2u);
  *v6 = a1;
  v6[1] = 0;
  v8 = *(const void **)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  v9 = v7 + 1;
  if ( v7 != 0 && v7 < 0xFFFFFFFFFFFFFFFELL )
  {
    v10 = malloc(v7 + 2);
    *v10 = a1;
    v10[v9] = 0;
    memmove(v10 + 1, v8, v7);
    v10[v9] = 0;
    if ( v10 != v6 )
    {
      free(v6);
      v6 = v10;
    }
  }
  else
  {
    memmove(v6 + 1, v8, v7);
    v6[v9] = 0;
  }
  *a3 = off_6D8E38;
  a3[1] = 0;
  v11 = malloc(v7 + 2);
  a3[2] = v9;
  a3[3] = v7 + 2;
  memcpy(v11, v6, v7 + 1);
  *((_BYTE *)v11 + v9) = 0;
  if ( v11 )
    a3[1] = v11;
  free(v6);
}

