/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EBBD4
 * Mangled: sub_4EBBD4
 * Demangled: sub_4EBBD4
 *
 * Callers: 3
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC3A4  sub_4EC3A4
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EBA24  sub_4EBA24
 *
 * Referenced strings: 38
 *   insn=0x00000000004EBBE8 string=0x00000000004EBBEC "T"
 *   insn=0x00000000004EBBF8 string=0x00000000004EBBFC "u:@"
 *   insn=0x00000000004EBBFC string=0x00000000004EBC00 "U"
 *   insn=0x00000000004EBC00 string=0x00000000004EBC04 "h"
 *   insn=0x00000000004EBC04 string=0x00000000004EBC08 ""
 *   insn=0x00000000004EBC08 string=0x00000000004EBC0C "k"
 *   insn=0x00000000004EBC0C string=0x00000000004EBC10 "j\n@"
 *   insn=0x00000000004EBC10 string=0x00000000004EBC14 "h"@"
 *   insn=0x00000000004EBC14 string=0x00000000004EBC18 "?"
 *   insn=0x00000000004EBC18 string=0x00000000004EBC1C "i\t@"
 *   insn=0x00000000004EBC24 string=0x00000000004EBC28 "a"
 *   insn=0x00000000004EBC28 string=0x00000000004EBC34 "l*@"
 *   insn=0x00000000004EBC2C string=0x00000000004EBC30 ""
 *   insn=0x00000000004EBC34 string=0x00000000004EBC38 "k"
 *   insn=0x00000000004EBC3C string=0x00000000004EBC40 "k"
 *   insn=0x00000000004EBC44 string=0x00000000004EBC48 "k}"
 *   insn=0x00000000004EBC4C string=0x00000000004EBC50 "k"
 *   insn=0x00000000004EBC50 string=0x00000000004EBC54 "V"
 *   insn=0x00000000004EBC54 string=0x00000000004EBC58 "7"
 *   insn=0x00000000004EBC58 string=0x00000000004EBC5C "j"
 *   insn=0x00000000004EBC5C string=0x00000000004EBC60 "_"
 *   insn=0x00000000004EBC60 string=0x00000000004EBC64 ","
 *   insn=0x00000000004EBC64 string=0x00000000004EBC68 "hZ@"
 *   insn=0x00000000004EBC64 string=0x00000000004EBC88 "h\n@"
 *   insn=0x00000000004EBC6C string=0x00000000004EBC70 "j"
 *   insn=0x00000000004EBC80 string=0x00000000004EBC84 "h"
 *   insn=0x00000000004EBC88 string=0x00000000004EBC8C "i"
 *   insn=0x00000000004EBC94 string=0x00000000004EBC98 ""
 *   insn=0x00000000004EBC98 string=0x00000000004EBC9C "(\t"
 *   insn=0x00000000004EBCA4 string=0x00000000004EBCA8 "h"@"
 *   insn=0x00000000004EBCA8 string=0x00000000004EBCAC "j"
 *   insn=0x00000000004EBCB0 string=0x00000000004EBCB4 "i"
 *   insn=0x00000000004EBCB4 string=0x00000000004EBCB8 "\t"
 *   insn=0x00000000004EBCB8 string=0x00000000004EBCBC ""
 *   insn=0x00000000004EBCBC string=0x00000000004EBCC0 "I\t"
 *   insn=0x00000000004EBCC0 string=0x00000000004EBCC4 "h\n"
 *   insn=0x00000000004EBCD4 string=0x00000000004EBCF0 "x)"
 *   insn=0x00000000004EBCF0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EBBD4(__int64 result, int a2, int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall *v4)(__int64, _DWORD *); // x21
  __int64 v5; // x11
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x9
  int v9; // w11
  __int64 v10; // x22
  __int64 v11; // x23
  int v12; // w8
  int v13; // w1
  __int64 v14; // x8
  __int64 v15; // x10
  _DWORD v16[30]; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v17; // [xsp+78h] [xbp-38h]

  v3 = result;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(__int64 (__fastcall **)(__int64, _DWORD *))(result + 112);
  if ( v4 && *(_BYTE *)(result + 101) )
  {
    v5 = *(_QWORD *)(result + 40);
    v6 = *(_QWORD *)(result + 16);
    v7 = *(_QWORD *)(result + 64);
    v8 = *(_QWORD *)(v5 + 16);
    v16[0] = a2;
    v16[10] = a3;
    if ( a2 == 4 )
      v9 = 0;
    else
      v9 = -858993459 * ((unsigned __int64)(v5 - *(_QWORD *)(result + 80)) >> 3);
    v16[29] = v9;
    v10 = v6 - v7;
    v11 = v8 - v7;
    if ( *(_QWORD *)(result + 56) - v6 <= 320 )
    {
      v12 = *(_DWORD *)(result + 88);
      if ( v12 >= 20 )
        v13 = 2 * v12;
      else
        v13 = v12 + 20;
      sub_4EBA24(result, v13);
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL) = *(_QWORD *)(v3 + 16) + 320LL;
    *(_BYTE *)(v3 + 101) = 0;
    result = v4(v3, v16);
    v14 = *(_QWORD *)(v3 + 64);
    v15 = *(_QWORD *)(v3 + 40);
    *(_BYTE *)(v3 + 101) = 1;
    *(_QWORD *)(v15 + 16) = v14 + v11;
    *(_QWORD *)(v3 + 16) = v14 + v10;
  }
  return result;
}

