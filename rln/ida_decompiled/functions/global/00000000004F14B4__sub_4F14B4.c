/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F14B4
 * Mangled: sub_4F14B4
 * Demangled: sub_4F14B4
 *
 * Callers: 2
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F244C  sub_4F244C
 *
 * Callees: 15
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EEE00  sub_4EEE00
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FE340  sub_4FE340
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000005002D4  sub_5002D4
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *   0x0000000000501C24  sub_501C24
 *
 * Referenced strings: 46
 *   insn=0x00000000004F14D0 string=0x00000000004F14D4 "Z"
 *   insn=0x00000000004F14D4 string=0x00000000004F14D8 "H"
 *   insn=0x00000000004F14E0 string=0x00000000004F14E4 "A"
 *   insn=0x00000000004F1504 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F150C string=0x00000000004F1510 "h"
 *   insn=0x00000000004F1538 string=0x00000000004F153C "!4"
 *   insn=0x00000000004F154C string=0x00000000004F1550 "a"
 *   insn=0x00000000004F1554 string=0x00000000004F1558 "u<"
 *   insn=0x00000000004F1558 string=0x00000000004F155C "A"
 *   insn=0x00000000004F155C string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F1560 string=0x00000000004F1564 "!"
 *   insn=0x00000000004F157C string=0x00000000004F1580 "=="
 *   insn=0x00000000004F1590 string=0x00000000004F1594 "W"
 *   insn=0x00000000004F1594 string=0x00000000004F1598 "X"
 *   insn=0x00000000004F1594 string=0x000000000059A06D "main function has more than %d %s"
 *   insn=0x00000000004F1598 string=0x00000000004F159C "Y"
 *   insn=0x00000000004F1598 string=0x000000000059A056 "items in a constructor"
 *   insn=0x00000000004F159C string=0x000000000059A08F "function at line %d has more than %d %s"
 *   insn=0x00000000004F15AC string=0x00000000004F15B0 "9?"
 *   insn=0x00000000004F15E4 string=0x00000000004F15E8 "C"
 *   insn=0x00000000004F15F0 string=0x00000000004F15F4 "8;"
 *   insn=0x00000000004F1608 string=0x00000000004F160C "A"
 *   insn=0x00000000004F1628 string=0x00000000004F162C ">"
 *   insn=0x00000000004F162C string=0x00000000004F1630 """
 *   insn=0x00000000004F164C string=0x00000000004F16A4 ""
 *   insn=0x00000000004F1670 string=0x00000000004F1674 "X"
 *   insn=0x00000000004F1688 string=0x00000000004F168C "R"
 *   insn=0x00000000004F1698 string=0x00000000004F169C "A<"
 *   insn=0x00000000004F16AC string=0x00000000004F16B0 ""
 *   insn=0x00000000004F16BC string=0x00000000004F16C0 "`"
 *   insn=0x00000000004F16E0 string=0x00000000004F16E4 "b"
 *   insn=0x00000000004F16EC string=0x00000000004F16F0 "j"
 *   insn=0x00000000004F16F8 string=0x00000000004F176C "h"
 *   insn=0x00000000004F16FC string=0x00000000004F1700 "\t5"
 *   insn=0x00000000004F1700 string=0x00000000004F1704 "?\t"
 *   insn=0x00000000004F1714 string=0x00000000004F1718 "\n3"
 *   insn=0x00000000004F1734 string=0x00000000004F1738 ""
 *   insn=0x00000000004F173C string=0x00000000004F1740 ""
 *   insn=0x00000000004F1774 string=0x00000000004F1778 "@"
 *   insn=0x00000000004F1780 string=0x00000000004F1784 "h"
 *   insn=0x00000000004F1788 string=0x00000000004F178C "@"
 *   insn=0x00000000004F1798 string=0x00000000004F179C "h"
 *   insn=0x00000000004F17A0 string=0x00000000004F17A4 "@"
 *   insn=0x00000000004F17A8 string=0x00000000004F17AC "H"
 *   insn=0x00000000004F17B4 string=0x00000000004F17B8 "!"
 *   insn=0x00000000004F17DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F14B4(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  int v5; // w22
  int v6; // w20
  _QWORD *v7; // x23
  const char *v8; // x0
  __int64 v9; // x0
  int v10; // w8
  _QWORD *v11; // x28
  _QWORD *v12; // x0
  int v13; // w2
  __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x3
  __int64 v17; // x20
  int v18; // w21
  int v19; // w21
  __int64 result; // x0
  _DWORD v21[4]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v22; // [xsp+18h] [xbp-78h]
  __int64 v23; // [xsp+20h] [xbp-70h]
  __int64 v24; // [xsp+28h] [xbp-68h]
  unsigned int v25; // [xsp+30h] [xbp-60h]
  __int64 v26; // [xsp+38h] [xbp-58h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = sub_4FDB84(v4, 10);
  v25 = 0;
  v23 = a2;
  v24 = 0;
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 16) = -1;
  *(_DWORD *)a2 = 11;
  v22 = -1;
  v21[0] = 0;
  v21[2] = 0;
  sub_4FE5C0(*(_QWORD *)(a1 + 48), a2);
  if ( *(_DWORD *)(a1 + 16) != 123 )
  {
    v7 = *(_QWORD **)(a1 + 56);
    v8 = (const char *)sub_50072C(a1, 123);
    v9 = sub_4EF3D4(v7, "'%s' expected", v8);
    sub_500968(a1, v9);
  }
  sub_500A74(a1);
  if ( *(_DWORD *)(a1 + 16) != 125 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 == 91 || v10 == 285 && (sub_501C24(a1), *(_DWORD *)(a1 + 32) == 61) )
      {
        sub_4F1F24(a1, v21);
      }
      else
      {
        sub_4F1154(a1, (__int64)v21, 0);
        if ( SHIDWORD(v24) > 2147483645 )
        {
          v11 = *(_QWORD **)(a1 + 48);
          v12 = (_QWORD *)v11[4];
          v13 = *(_DWORD *)(*v11 + 96LL);
          if ( v13 )
            v14 = sub_4EF3D4(v12, "function at line %d has more than %d %s", v13, 2147483645, "items in a constructor");
          else
            v14 = sub_4EF3D4(v12, "main function has more than %d %s", 2147483645, "items in a constructor");
          sub_5007A0(v11[3], v14, 0);
        }
        ++HIDWORD(v24);
        ++v25;
      }
      v15 = *(_DWORD *)(a1 + 16);
      if ( v15 != 44 && v15 != 59 )
        break;
      sub_500A74(a1);
      if ( *(_DWORD *)(a1 + 16) == 125 )
        break;
      if ( v21[0] )
      {
        sub_4FE5C0(v4, v21);
        v21[0] = 0;
        if ( v25 == 50 )
        {
          sub_5002D4(v4, *(unsigned int *)(v23 + 8), HIDWORD(v24), 50);
          v25 = 0;
        }
      }
    }
  }
  sub_4F1098(a1, 125, 123, v5);
  v16 = v25;
  if ( v25 )
  {
    if ( (unsigned int)(v21[0] - 13) >= 2 )
    {
      if ( v21[0] )
      {
        sub_4FE5C0(v4, v21);
        v16 = v25;
      }
      sub_5002D4(v4, *(unsigned int *)(v23 + 8), HIDWORD(v24), v16);
    }
    else
    {
      sub_4FE340(v4, v21, 0xFFFFFFFFLL);
      sub_5002D4(v4, *(unsigned int *)(v23 + 8), HIDWORD(v24), 0xFFFFFFFFLL);
      --HIDWORD(v24);
    }
  }
  v17 = 4LL * v6;
  v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + v17);
  v19 = v18 & 0x7FFFFF | ((unsigned __int16)sub_4EEE00(HIDWORD(v24)) << 23);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + v17) = v19;
  result = sub_4EEE00((unsigned int)v24);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + v17) = v19 & 0xFF803FFF | ((result & 0x1FF) << 14);
  return result;
}

