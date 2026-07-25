/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581658
 * Mangled: sub_581658
 * Demangled: sub_581658
 *
 * Callers: 3
 *   0x000000000051E108  __cxa_throw
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *   0x00000000005819C0  sub_5819C0
 *
 * Callees: 8
 *   0x0000000000201760  .memcpy
 *   0x000000000057FF60  sub_57FF60
 *   0x000000000058006C  sub_58006C
 *   0x00000000005806A8  sub_5806A8
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581368  sub_581368
 *   0x00000000005813B4  sub_5813B4
 *   0x0000000000581654  nullsub_6
 *
 * Referenced strings: 10
 *   insn=0x00000000005816B8 string=0x00000000005816BC ")"
 *   insn=0x00000000005816D0 string=0x00000000005816D4 "`"
 *   insn=0x00000000005816D4 string=0x00000000005816D8 "`"
 *   insn=0x00000000005816D8 string=0x00000000005816DC ","
 *   insn=0x00000000005816E4 string=0x00000000005816F8 " "
 *   insn=0x0000000000581718 string=0x000000000058171C "`"
 *   insn=0x0000000000581728 string=0x000000000058172C "P"
 *   insn=0x000000000058172C string=0x0000000000581730 "a"
 *   insn=0x0000000000581768 string=0x000000000058176C "t"
 *   insn=0x0000000000581770 string=0x0000000000581774 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_581658(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x30
  int v11; // w0
  __int64 v12; // x0
  _QWORD v15[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v16[120]; // [xsp+490h] [xbp+490h] BYREF
  __int64 v17[202]; // [xsp+850h] [xbp+850h] BYREF
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD, _QWORD *, __int64 *); // [xsp+EA0h] [xbp+EA0h]

  sub_58128C(v15, (__int64)&a9, v9);
  memcpy(v16, v15, sizeof(v16));
  while ( !(unsigned int)sub_5806A8(v16, (char *)v17) )
  {
    if ( v18 )
    {
      v11 = v18(1, 1, *a1, a1, v16);
      if ( v11 == 6 )
      {
        a1[2] = 0;
        v12 = sub_58006C((__int64)v16);
        a1[3] = v12 - ((unsigned __int64)v16[104] >> 63);
        memcpy(v16, v15, sizeof(v16));
        if ( (unsigned int)sub_5813B4(a1, v16) == 7 )
        {
          sub_57FF60((__int64)v15, (__int64)v16);
          nullsub_6();
        }
        return a1;
      }
      if ( v11 != 8 )
        return a1;
    }
    sub_581368(v16, v17);
  }
  return a1;
}

