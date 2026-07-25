/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581474
 * Mangled: sub_581474
 * Demangled: sub_581474
 *
 * Callers: 3
 *   0x00000000005817D0  sub_5817D0
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000005819C0  sub_5819C0
 *
 * Callees: 2
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000581368  sub_581368
 *
 * Referenced strings: 10
 *   insn=0x00000000005814A0 string=0x00000000005814A4 "Y"
 *   insn=0x00000000005814A4 string=0x00000000005814A8 "Z"
 *   insn=0x00000000005814B0 string=0x00000000005814B4 "}"
 *   insn=0x00000000005814BC string=0x00000000005814C0 "@"
 *   insn=0x00000000005814C4 string=0x0000000000581538 "@"
 *   insn=0x00000000005814CC string=0x00000000005814D0 " "
 *   insn=0x00000000005814D0 string=0x00000000005814D4 "!"
 *   insn=0x000000000058150C string=0x0000000000581510 " "
 *   insn=0x0000000000581510 string=0x0000000000581514 "A"
 *   insn=0x0000000000581530 string=0x0000000000581534 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581474(_QWORD *a1, __int64 *a2)
{
  unsigned int (__fastcall *v2)(__int64, __int64, _QWORD, _QWORD *, __int64 *, __int64); // x23
  __int64 v3; // x24
  unsigned int v6; // w0
  unsigned int v7; // w19
  __int64 v8; // x1
  unsigned int v9; // w0
  __int64 v11[202]; // [xsp+50h] [xbp+50h] BYREF
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD *, __int64 *); // [xsp+6A0h] [xbp+6A0h]

  v2 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64 *, __int64))a1[2];
  v3 = a1[3];
  while ( 1 )
  {
    v6 = sub_5806A8(a2, (char *)v11);
    v7 = v6;
    if ( v6 != 5 && v6 )
      return 2;
    v8 = v6 == 5 ? 26LL : 10LL;
    if ( v2(1, v8, *a1, a1, a2, v3) )
      return 2;
    if ( v7 == 5 )
      return v7;
    if ( v12 )
      break;
LABEL_10:
    sub_581368(a2, v11);
  }
  v9 = v12(1, 10, *a1, a1, a2);
  v7 = v9;
  if ( v9 != 7 )
  {
    if ( v9 != 8 )
      return 2;
    goto LABEL_10;
  }
  return v7;
}

