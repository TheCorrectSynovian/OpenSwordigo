/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F244C
 * Mangled: sub_4F244C
 * Demangled: sub_4F244C
 *
 * Callers: 1
 *   0x00000000004F1CF4  sub_4F1CF4
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FE340  sub_4FE340
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000005001D0  sub_5001D0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 24
 *   insn=0x00000000004F2460 string=0x00000000004F2464 "W"
 *   insn=0x00000000004F2498 string=0x00000000004F25D8 "A"
 *   insn=0x00000000004F24A4 string=0x00000000004F24A8 "A"
 *   insn=0x00000000004F24A8 string=0x000000000059A125 "ambiguous syntax (function call x new statement)"
 *   insn=0x00000000004F24B0 string=0x00000000004F24B4 "-9"
 *   insn=0x00000000004F24B8 string=0x00000000004F24BC "n9"
 *   insn=0x00000000004F24D0 string=0x00000000004F2514 "!"
 *   insn=0x00000000004F24D4 string=0x00000000004F24D8 "g9"
 *   insn=0x00000000004F24E0 string=0x00000000004F24E4 "70"
 *   insn=0x00000000004F2534 string=0x00000000004F2538 ""
 *   insn=0x00000000004F255C string=0x00000000004F2560 "E9"
 *   insn=0x00000000004F2568 string=0x00000000004F256C "\t5"
 *   insn=0x00000000004F256C string=0x00000000004F2570 "?\t"
 *   insn=0x00000000004F2570 string=0x00000000004F2574 "b"
 *   insn=0x00000000004F2578 string=0x00000000004F257C ""
 *   insn=0x00000000004F2580 string=0x00000000004F2590 "h>@"
 *   insn=0x00000000004F2588 string=0x00000000004F258C "0"
 *   insn=0x00000000004F25A4 string=0x00000000004F25A8 "w-"
 *   insn=0x00000000004F25A8 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F25C8 string=0x00000000005001D0 ""
 *   insn=0x00000000004F25CC string=0x00000000004F25D0 "h>"
 *   insn=0x00000000004F25D8 string=0x000000000059A156 "function arguments expected"
 *   insn=0x00000000004F25F4 string=0x00000000004F2610 "0"
 *   insn=0x00000000004F2610 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F244C(__int64 a1, __int64 a2)
{
  int v4; // w8
  __int64 v5; // x19
  unsigned int v6; // w20
  int v7; // w22
  __int64 result; // x0
  _DWORD v9[4]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v10; // [xsp+10h] [xbp-40h]
  __int64 v11; // [xsp+18h] [xbp-38h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 4);
  switch ( v4 )
  {
    case 286:
      v9[2] = sub_4FE100(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 24));
      v10 = -1;
      v9[0] = 4;
      sub_500A74(a1);
      break;
    case 123:
      sub_4F14B4(a1, (__int64)v9);
      break;
    case 40:
      if ( v6 != *(_DWORD *)(a1 + 8) )
        sub_500968(a1, "ambiguous syntax (function call x new statement)");
      sub_500A74(a1);
      if ( *(_DWORD *)(a1 + 16) == 41 )
      {
        v9[0] = 0;
      }
      else
      {
        while ( 1 )
        {
          sub_4F1154(a1, (__int64)v9, 0);
          if ( *(_DWORD *)(a1 + 16) != 44 )
            break;
          sub_500A74(a1);
          sub_4FE5C0(*(_QWORD *)(a1 + 48), v9);
        }
        sub_4FE340(v5, v9, 0xFFFFFFFFLL);
      }
      sub_4F1098(a1, 41, 40, v6);
      break;
    default:
      sub_500968(a1, "function arguments expected");
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v9[0] - 13) >= 2 && v9[0] )
    sub_4FE5C0(v5, v9);
  *(_DWORD *)(a2 + 8) = sub_4FDB84(v5, 28);
  *(_QWORD *)(a2 + 16) = -1;
  *(_DWORD *)a2 = 13;
  result = sub_5001D0(v5, v6);
  *(_DWORD *)(v5 + 60) = v7 + 1;
  return result;
}

