/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521B48
 * Mangled: sub_521B48
 * Demangled: sub_521B48
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x0000000000521A9C  sub_521A9C
 *   0x0000000000522CAC  sub_522CAC
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000521B60 string=0x0000000000521B64 "aB"
 *   insn=0x0000000000521B74 string=0x000000000053B7DC "!"
 *   insn=0x0000000000521B80 string=0x0000000000521B84 "J"
 *   insn=0x0000000000521B88 string=0x0000000000521B8C "Oi"
 *   insn=0x0000000000521B98 string=0x0000000000521B9C "sv@"
 *   insn=0x0000000000521BA0 string=0x0000000000521BA4 "w"
 *   insn=0x0000000000521BAC string=0x0000000000521BB0 "g"
 *   insn=0x0000000000521BB0 string=0x0000000000521BB4 "b"
 *   insn=0x0000000000521BBC string=0x0000000000521BC0 "B@"
 *   insn=0x0000000000521BC0 string=0x0000000000521BC4 "@"
 *   insn=0x0000000000521BD4 string=0x0000000000521BD8 "<i"
 *   insn=0x0000000000521BF8 string=0x0000000000521BFC "3i"
 *   insn=0x0000000000521C00 string=0x0000000000521C04 "0"
 *   insn=0x0000000000521C0C string=0x0000000000521C10 ".i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_521B48@<X0>(_QWORD *a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v6; // x19
  __int64 v8; // [xsp+48h] [xbp+48h] BYREF

  sub_53B7DC(a3, a1 + 26);
  sub_522CAC(&v8, a1, a2);
  sub_53C0C8(&v8);
  sub_521A9C(a1, a2);
  v6 = a1[29];
  if ( v6 )
  {
    sub_53B7DC(&v8, v6 + 56);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a2);
    sub_53C028(v6 + 56, a2);
    sub_53C0C8(&v8);
  }
  return a3;
}

