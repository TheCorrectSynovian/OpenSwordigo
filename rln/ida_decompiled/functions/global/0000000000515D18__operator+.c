/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515D18
 * Mangled: _ZplPKcRK11CPVRTString
 * Demangled: operator+(char const*,CPVRTString const&)
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
 * Referenced strings: 24
 *   insn=0x0000000000515D38 string=0x0000000000515D3C "="
 *   insn=0x0000000000515D48 string=0x0000000000515D4C "I"
 *   insn=0x0000000000515D4C string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515D70 string=0x0000000000515D74 "_"
 *   insn=0x0000000000515D74 string=0x0000000000515D78 "b"
 *   insn=0x0000000000515D7C string=0x0000000000515D80 "<"
 *   insn=0x0000000000515D8C string=0x0000000000515D90 "t"
 *   insn=0x0000000000515D90 string=0x0000000000515D94 "@"
 *   insn=0x0000000000515D9C string=0x0000000000515DA0 "_k58"
 *   insn=0x0000000000515DA4 string=0x0000000000515DA8 "_"
 *   insn=0x0000000000515DA4 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515DA8 string=0x0000000000515DAC "_k58 "
 *   insn=0x0000000000515DAC string=0x0000000000515DB0 " "
 *   insn=0x0000000000515DB4 string=0x0000000000515DB8 "\n"
 *   insn=0x0000000000515DB8 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000515DC8 string=0x0000000000515DCC "y"
 *   insn=0x0000000000515DD4 string=0x0000000000515DD8 ""
 *   insn=0x0000000000515DDC string=0x0000000000515DE0 "A"
 *   insn=0x0000000000515DE0 string=0x0000000000515DE4 "h~"
 *   insn=0x0000000000515DE4 string=0x0000000000515DE8 """
 *   insn=0x0000000000515DF4 string=0x0000000000515DF8 "uZ"
 *   insn=0x0000000000515DF8 string=0x0000000000515DFC "Y"
 *   insn=0x0000000000515E00 string=0x0000000000515E04 "W"
 *   insn=0x0000000000515E04 string=0x0000000000515E08 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall operator+(const char *a1@<X0>, __int64 a2@<X1>, _QWORD *a3@<X8>)
{
  size_t v6; // x23
  char *v7; // x20
  size_t v8; // x24
  const void *v9; // x25
  size_t v10; // x21
  unsigned __int64 v11; // x22
  char *v12; // x26
  _BYTE *v13; // x0
  size_t v14; // x2
  _BYTE *v15; // x23

  v6 = strlen(a1);
  v7 = (char *)malloc(v6 + 1);
  memcpy(v7, a1, v6);
  v7[v6] = 0;
  v9 = *(const void **)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  v10 = v8 + v6;
  v11 = v8 + v6 + 1;
  if ( v6 + 1 >= v11 )
  {
    memmove(&v7[v6], v9, v8);
    v7[v10] = 0;
  }
  else
  {
    v12 = (char *)malloc(v8 + v6 + 1);
    memcpy(v12, v7, v6);
    v12[v10] = 0;
    memmove(&v12[v6], v9, v8);
    v12[v10] = 0;
    if ( v12 != v7 )
    {
      free(v7);
      v7 = v12;
    }
  }
  *a3 = off_6D8E38;
  a3[1] = 0;
  v13 = malloc(v8 + v6 + 1);
  v14 = v8 + v6;
  v15 = v13;
  a3[2] = v10;
  a3[3] = v11;
  memcpy(v13, v7, v14);
  v15[v10] = 0;
  if ( v15 )
    a3[1] = v15;
  free(v7);
}

