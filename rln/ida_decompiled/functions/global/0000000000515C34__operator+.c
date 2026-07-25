/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515C34
 * Mangled: _ZplRK11CPVRTStringc
 * Demangled: operator+(CPVRTString const&,char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 16
 *   insn=0x0000000000515C60 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515C70 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515C84 string=0x0000000000515C88 "z"
 *   insn=0x0000000000515C98 string=0x0000000000515C9C "?"
 *   insn=0x0000000000515C9C string=0x0000000000515CA0 "7k88?k48"
 *   insn=0x0000000000515CA0 string=0x0000000000515CA4 "?k48"
 *   insn=0x0000000000515CAC string=0x0000000000515CB0 "L"
 *   insn=0x0000000000515CB0 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000515CC4 string=0x0000000000515CC8 ""
 *   insn=0x0000000000515CCC string=0x0000000000515CD0 "A"
 *   insn=0x0000000000515CD0 string=0x0000000000515CD4 "h~"
 *   insn=0x0000000000515CD4 string=0x0000000000515CD8 "f"
 *   insn=0x0000000000515CE4 string=0x0000000000515CE8 "tZ"
 *   insn=0x0000000000515CF0 string=0x0000000000515CF4 "W"
 *   insn=0x0000000000515CF4 string=0x0000000000515CF8 "w"
 *   insn=0x0000000000515D10 string=0x0000000000515D14 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall operator+(__int64 a1@<X0>, char a2@<W1>, _QWORD *a3@<X8>)
{
  const void *v3; // x22
  size_t v4; // x24
  size_t v7; // x20
  void *v8; // x21
  void *v9; // x25
  void *v10; // x23

  v3 = *(const void **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = v4 + 1;
  v8 = malloc(v4 + 1);
  memmove(v8, v3, v4);
  *((_BYTE *)v8 + v4) = 0;
  if ( v4 + 1 >= v4 + 2 )
  {
    *((_BYTE *)v8 + v4) = a2;
    *((_BYTE *)v8 + v7) = 0;
  }
  else
  {
    v9 = malloc(v4 + 2);
    memcpy(v9, v8, v4);
    *((_BYTE *)v9 + v4) = a2;
    *((_BYTE *)v9 + v7) = 0;
    if ( v9 != v8 )
    {
      free(v8);
      v8 = v9;
    }
  }
  *a3 = off_6D8E38;
  a3[1] = 0;
  v10 = malloc(v4 + 2);
  a3[2] = v7;
  a3[3] = v4 + 2;
  memcpy(v10, v8, v4 + 1);
  *((_BYTE *)v10 + v7) = 0;
  if ( v10 )
    a3[1] = v10;
  free(v8);
}

