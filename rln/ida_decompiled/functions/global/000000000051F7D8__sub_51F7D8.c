/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F7D8
 * Mangled: sub_51F7D8
 * Demangled: sub_51F7D8
 *
 * Callers: 2
 *   0x000000000055DC98  sub_55DC98
 *   0x000000000055DDF8  sub_55DDF8
 *
 * Callees: 4
 *   0x00000000001F9C10  .__errno
 *   0x0000000000200890  .writev
 *   0x000000000051F3E0  sub_51F3E0
 *   0x000000000051F664  sub_51F664
 *
 * Referenced strings: 11
 *   insn=0x000000000051F7E0 string=0x000000000051F7E4 "Y"
 *   insn=0x000000000051F81C string=0x000000000051F820 "B"
 *   insn=0x000000000051F824 string=0x000000000051F828 "u"
 *   insn=0x000000000051F828 string=0x000000000051F82C "t"
 *   insn=0x000000000051F838 string=0x000000000051F83C "`"
 *   insn=0x000000000051F848 string=0x000000000051F898 " "
 *   insn=0x000000000051F850 string=0x000000000051F854 "D"
 *   insn=0x000000000051F854 string=0x000000000051F858 "A"
 *   insn=0x000000000051F868 string=0x000000000051F86C " "
 *   insn=0x000000000051F888 string=0x00000000001F9C10 "0'"
 *   insn=0x000000000051F890 string=0x000000000051F894 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_51F7D8(FILE **a1, char *a2, __kernel_size_t a3, __int64 a4, __int64 a5)
{
  __kernel_size_t v5; // x25
  __kernel_size_t v7; // x20
  __kernel_size_t v10; // x22
  int v11; // w23
  int v12; // w0
  __int64 v13; // x2
  iovec iovec; // [xsp+50h] [xbp+50h] BYREF
  __int64 v16; // [xsp+60h] [xbp+60h]
  __int64 v17; // [xsp+68h] [xbp+68h]

  v5 = a3 + a5;
  v7 = a3;
  v10 = a3 + a5;
  v11 = sub_51F664(a1);
  v16 = a4;
  v17 = a5;
  do
  {
    while ( 1 )
    {
      iovec.iov_base = a2;
      iovec.iov_len = v7;
      v12 = writev(v11, &iovec, 2);
      if ( v12 == -1 )
        break;
      v10 -= v12;
      a2 += v12;
      if ( !v10 )
        return v5 - v10;
      v13 = v12 - v7;
      v7 -= v12;
      if ( v13 >= 0 )
        return v5 - (v10 - sub_51F3E0(v11, (char *)(a4 + v13), a5 - v13));
    }
  }
  while ( *(_DWORD *)__errno() == 4 );
  return v5 - v10;
}

