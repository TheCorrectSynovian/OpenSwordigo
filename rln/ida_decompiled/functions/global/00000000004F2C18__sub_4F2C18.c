/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2C18
 * Mangled: sub_4F2C18
 * Demangled: sub_4F2C18
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 4
 *   0x00000000004FE088  sub_4FE088
 *   0x00000000004FE340  sub_4FE340
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 30
 *   insn=0x00000000004F2C24 string=0x00000000004F2C28 "h"
 *   insn=0x00000000004F2C2C string=0x00000000004F2C30 "4"
 *   insn=0x00000000004F2C30 string=0x00000000004F2C34 "\t5"
 *   insn=0x00000000004F2C34 string=0x00000000004F2C38 "?\t"
 *   insn=0x00000000004F2C58 string=0x00000000004F2C5C ""
 *   insn=0x00000000004F2C80 string=0x00000000004F2C84 "O."
 *   insn=0x00000000004F2C8C string=0x00000000004F2C90 "u>@"
 *   insn=0x00000000004F2CB8 string=0x00000000004FDAEC "\t F))}@"
 *   insn=0x00000000004FDAEC string=0x00000000004FDAF0 ")}@"
 *   insn=0x00000000004FDAF0 string=0x00000000004FDAF4 "?"
 *   insn=0x00000000004FDAF4 string=0x00000000004FDAF8 "M"
 *   insn=0x00000000004FDAF8 string=0x00000000004FDB60 ""
 *   insn=0x00000000004FDAFC string=0x00000000004FDB00 ""
 *   insn=0x00000000004FDAFC string=0x00000000004FDB54 "(A9"
 *   insn=0x00000000004FDB00 string=0x00000000004FDB04 ")"
 *   insn=0x00000000004FDB04 string=0x00000000004FDB08 "@"
 *   insn=0x00000000004FDB08 string=0x00000000004FDB0C "\nyi"
 *   insn=0x00000000004FDB0C string=0x00000000004FDB10 "K"
 *   insn=0x00000000004FDB14 string=0x00000000004FDB18 "A"
 *   insn=0x00000000004FDB18 string=0x00000000004FDB1C "K5"
 *   insn=0x00000000004FDB24 string=0x00000000004FDB28 "K}"
 *   insn=0x00000000004FDB28 string=0x00000000004FDB2C "l"
 *   insn=0x00000000004FDB30 string=0x00000000004FDB34 "k"
 *   insn=0x00000000004FDB34 string=0x00000000004FDB38 ","
 *   insn=0x00000000004FDB48 string=0x00000000004FDB4C "\ny)"
 *   insn=0x00000000004FDB58 string=0x00000000004FDB5C "-"
 *   insn=0x00000000004FDB60 string=0x00000000004FDB64 "I"
 *   insn=0x00000000004FDB64 string=0x00000000004FDB68 ")!\tS"
 *   insn=0x00000000004FDB6C string=0x00000000004FDB70 "("
 *   insn=0x00000000004FDB70 string=0x00000000004FDB74 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2C18(__int64 result, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // x19
  int v5; // w20
  int v6; // w20
  int v7; // w21
  __int64 v8; // x9
  __int64 v9; // x9
  __int64 v10; // x8
  unsigned int v11; // w10
  int v12; // w12

  v4 = *(_QWORD *)(result + 48);
  v5 = a2 - a3;
  if ( (unsigned int)(*a4 - 13) < 2 )
  {
    v6 = (v5 + 1) & ~((v5 + 1) >> 31);
    result = sub_4FE340(*(_QWORD *)(result + 48), a4, (unsigned int)v6);
    if ( v6 >= 2 )
      return sub_4FE088(v4, (unsigned int)(v6 - 1));
    return result;
  }
  if ( *a4 )
    result = sub_4FE5C0(*(_QWORD *)(result + 48), a4);
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)(v4 + 60);
    sub_4FE088(v4, (unsigned int)v5);
    result = v4;
    v8 = *(int *)(v4 + 48);
    if ( (int)v8 > *(_DWORD *)(v4 + 52) )
    {
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        v10 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
        v11 = *(_DWORD *)(v10 + 4 * v9);
        if ( (v11 & 0x3F) == 3 && (unsigned __int8)(v11 >> 6) <= v7 && (int)((v11 >> 23) + 1) >= v7 )
        {
          v12 = v7 + v5 - 1;
          if ( v12 > (int)(v11 >> 23) )
            *(_DWORD *)(v10 + 4 * v9) = v11 & 0x7FFFFF | ((unsigned __int16)v12 << 23);
          return result;
        }
      }
      else if ( *(unsigned __int8 *)(v4 + 74) <= v7 )
      {
        return result;
      }
    }
    return sub_5001E8();
  }
  return result;
}

