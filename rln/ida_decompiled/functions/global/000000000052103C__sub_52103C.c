/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052103C
 * Mangled: sub_52103C
 * Demangled: sub_52103C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 8
 *   insn=0x0000000000521048 string=0x000000000052104C "4"
 *   insn=0x000000000052104C string=0x0000000000521050 "s"
 *   insn=0x0000000000521050 string=0x0000000000521054 "`"
 *   insn=0x0000000000521058 string=0x000000000052105C "s"
 *   insn=0x000000000052105C string=0x0000000000521060 "`"
 *   insn=0x0000000000521074 string=0x0000000000521078 "b"
 *   insn=0x0000000000521080 string=0x0000000000521084 "B"
 *   insn=0x0000000000521084 string=0x0000000000521088 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52103C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE *v8; // x19
  unsigned int v9; // w20
  char vars0; // [xsp+0h] [xbp+0h]

  v8 = *(_BYTE **)(a1 + 240);
  v9 = (unsigned __int8)a2;
  if ( !v8 )
    sub_5652C8(a1);
  if ( v8[56] )
    return (unsigned __int8)v8[(unsigned __int8)a2 + 57];
  sub_51FEA0(v8, a2, a3, a4, a5, a6, a7, a8, vars0);
  return (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, v9);
}

