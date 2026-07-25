/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ECC2C
 * Mangled: sub_4ECC2C
 * Demangled: sub_4ECC2C
 *
 * Callers: 1
 *   0x00000000004ECB9C  sub_4ECB9C
 *
 * Callees: 7
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004ED424  sub_4ED424
 *   0x00000000004ED4B4  sub_4ED4B4
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004F4F30  sub_4F4F30
 *   0x00000000004F86C8  sub_4F86C8
 *
 * Referenced strings: 23
 *   insn=0x00000000004ECC50 string=0x00000000004ECC54 "h"
 *   insn=0x00000000004ECC58 string=0x00000000004ECC5C "\t!G"
 *   insn=0x00000000004ECC60 string=0x00000000004ECC64 "c"
 *   insn=0x00000000004ECC74 string=0x00000000004ECC78 ""
 *   insn=0x00000000004ECC78 string=0x00000000004ECC7C "I"
 *   insn=0x00000000004ECC7C string=0x00000000004ECC80 "a"
 *   insn=0x00000000004ECC80 string=0x00000000004ECC84 ")"
 *   insn=0x00000000004ECC88 string=0x00000000004ECC8C "("
 *   insn=0x00000000004ECCA0 string=0x00000000004ECCA4 "b>@"
 *   insn=0x00000000004ECCB8 string=0x00000000004ECCBC "H"
 *   insn=0x00000000004ECCBC string=0x00000000004ECCE4 "h\n@"
 *   insn=0x00000000004ECCDC string=0x00000000004ECCE0 "C"
 *   insn=0x00000000004ECCEC string=0x00000000004ECCF0 "\t\t"
 *   insn=0x00000000004ECCF0 string=0x00000000004ECCF4 "h"
 *   insn=0x00000000004ECCF4 string=0x00000000004ECCF8 "i\n@"
 *   insn=0x00000000004ECCF8 string=0x00000000004ECCFC ""
 *   insn=0x00000000004ECD00 string=0x00000000004ECD04 ","
 *   insn=0x00000000004ECD04 string=0x00000000004ECD08 "hZ@"
 *   insn=0x00000000004ECD04 string=0x00000000004ECD28 "h\n@"
 *   insn=0x00000000004ECD0C string=0x00000000004ECD10 "k"
 *   insn=0x00000000004ECD20 string=0x00000000004ECD24 "@"
 *   insn=0x00000000004ECD28 string=0x00000000004ECD2C "A"
 *   insn=0x00000000004ECD2C string=0x00000000004ECD30 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ECC2C(__int64 a1, _QWORD *a2)
{
  int v4; // w21
  __int64 (__fastcall *v5)(int, int); // x8
  __int64 v6; // x20
  __int64 result; // x0
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x8
  int v11; // w8
  int v12; // w1

  v4 = sub_4F86C8(*a2);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  v5 = (__int64 (__fastcall *)(int, int))sub_4EF598;
  if ( v4 == 27 )
    v5 = sub_4F4F30;
  v6 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))v5)(a1, *a2, a2 + 1, a2[4]);
  result = sub_4ED424(a1, *(unsigned __int8 *)(v6 + 112), *(_QWORD *)(a1 + 120));
  v8 = result;
  *(_QWORD *)(result + 32) = v6;
  if ( *(_BYTE *)(v6 + 112) )
  {
    v9 = 0;
    do
    {
      result = sub_4ED4B4(a1);
      *(_QWORD *)(v8 + 40 + 8 * v9++) = result;
    }
    while ( v9 < *(unsigned __int8 *)(v6 + 112) );
  }
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v10 = v8;
  *(_DWORD *)(v10 + 8) = 6;
  if ( (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 16)) <= 16 )
  {
    v11 = *(_DWORD *)(a1 + 88);
    if ( v11 < 1 )
      v12 = v11 + 1;
    else
      v12 = 2 * v11;
    result = sub_4EBA24(a1, v12);
  }
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

