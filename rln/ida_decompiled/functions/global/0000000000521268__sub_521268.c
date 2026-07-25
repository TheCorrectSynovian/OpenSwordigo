/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521268
 * Mangled: sub_521268
 * Demangled: sub_521268
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000005211BC  sub_5211BC
 *   0x0000000000522CAC  sub_522CAC
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000521280 string=0x0000000000521284 "aB"
 *   insn=0x0000000000521290 string=0x0000000000521294 "Ri"
 *   insn=0x0000000000521294 string=0x000000000053B7DC "!"
 *   insn=0x00000000005212B8 string=0x00000000005212BC "sv@"
 *   insn=0x00000000005212C0 string=0x00000000005212C4 "w"
 *   insn=0x00000000005212CC string=0x00000000005212D0 "Ci"
 *   insn=0x00000000005212D0 string=0x00000000005212D4 "b"
 *   insn=0x00000000005212DC string=0x00000000005212E0 "B@"
 *   insn=0x00000000005212E0 string=0x00000000005212E4 "@"
 *   insn=0x00000000005212EC string=0x00000000005212F0 "Nk"
 *   insn=0x00000000005212F4 string=0x00000000005212F8 "tk"
 *   insn=0x0000000000521318 string=0x000000000052131C "kk"
 *   insn=0x0000000000521320 string=0x0000000000521324 "h"
 *   insn=0x000000000052132C string=0x0000000000521330 "fk"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_521268@<X0>(_QWORD *a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v6; // x19
  __int64 v8; // [xsp+48h] [xbp+48h] BYREF

  sub_53B7DC(a3, a1 + 26);
  sub_522CAC(&v8, a1, a2);
  sub_53C0C8(&v8);
  sub_5211BC(a1, a2);
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

