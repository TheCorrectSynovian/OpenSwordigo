/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F6604
 * Mangled: sub_4F6604
 * Demangled: sub_4F6604
 *
 * Callers: 2
 *   0x00000000004E7560  lua_equal(lua_State *,int,int)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 4
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EEE84  sub_4EEE84
 *   0x00000000004F4E8C  sub_4F4E8C
 *
 * Referenced strings: 48
 *   insn=0x00000000004F6628 string=0x00000000004F662C "("
 *   insn=0x00000000004F662C string=0x00000000004F6630 ")"
 *   insn=0x00000000004F6630 string=0x00000000004F6638 "(y"
 *   insn=0x00000000004F663C string=0x00000000004F6640 ""
 *   insn=0x00000000004F664C string=0x00000000004F6650 "?"
 *   insn=0x00000000004F6654 string=0x00000000004F6658 "8A"
 *   insn=0x00000000004F6658 string=0x00000000004F665C "A"
 *   insn=0x00000000004F665C string=0x00000000004F6660 "x"
 *   insn=0x00000000004F6660 string=0x00000000004F6664 "\t+@9) 7i"
 *   insn=0x00000000004F6664 string=0x00000000004F6668 ") 7i"
 *   insn=0x00000000004F6668 string=0x00000000004F666C "i"
 *   insn=0x00000000004F6678 string=0x00000000004F667C """
 *   insn=0x00000000004F6690 string=0x00000000004F66CC "h\n@"
 *   insn=0x00000000004F669C string=0x00000000004F66A0 "h"
 *   insn=0x00000000004F66B4 string=0x00000000004F66B8 "\t"
 *   insn=0x00000000004F66C4 string=0x00000000004EEE84 "@"
 *   insn=0x00000000004F66D0 string=0x00000000004F66D4 "j"@"
 *   insn=0x00000000004F66D4 string=0x00000000004F66D8 "\t"
 *   insn=0x00000000004F66DC string=0x00000000004F66E0 "\t\t"
 *   insn=0x00000000004F66E0 string=0x00000000004F66E4 "i\n@"
 *   insn=0x00000000004F66E8 string=0x00000000004F66EC "+\t"
 *   insn=0x00000000004F66F0 string=0x00000000004F66F4 "+"
 *   insn=0x00000000004F66F4 string=0x00000000004F66F8 "i\n@"
 *   insn=0x00000000004F66FC string=0x00000000004F6700 "+"
 *   insn=0x00000000004F6708 string=0x00000000004F670C "+)"
 *   insn=0x00000000004F670C string=0x00000000004F6710 "i"
 *   insn=0x00000000004F6710 string=0x00000000004F6714 "a\n@"
 *   insn=0x00000000004F6714 string=0x00000000004F6718 ")"
 *   insn=0x00000000004F6718 string=0x00000000004F671C "?"
 *   insn=0x00000000004F6720 string=0x00000000004F6734 "("
 *   insn=0x00000000004F6728 string=0x00000000004F672C "#"
 *   insn=0x00000000004F672C string=0x00000000004F6730 "a\n@"
 *   insn=0x00000000004F672C string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F673C string=0x00000000004F6740 "h\n"
 *   insn=0x00000000004F6744 string=0x00000000004F6748 "h\n@"
 *   insn=0x00000000004F6748 string=0x00000000004F674C "i"@"
 *   insn=0x00000000004F674C string=0x00000000004F6750 "\nA"
 *   insn=0x00000000004F6750 string=0x00000000004F6754 "j\n"
 *   insn=0x00000000004F6754 string=0x00000000004F6758 "\n"
 *   insn=0x00000000004F6758 string=0x00000000004F675C ")"
 *   insn=0x00000000004F675C string=0x00000000004F6760 "*"
 *   insn=0x00000000004F6760 string=0x00000000004F6764 ""
 *   insn=0x00000000004F6764 string=0x00000000004F6768 "(\t"
 *   insn=0x00000000004F6768 string=0x00000000004F676C "h\n@"
 *   insn=0x00000000004F676C string=0x00000000004F6770 "\t\t@"
 *   insn=0x00000000004F6774 string=0x00000000004F6778 "?"
 *   insn=0x00000000004F677C string=0x00000000004F6780 ""
 *   insn=0x00000000004F67B0 string=0x00000000004F67B4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F6604(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // x0
  __int64 v7; // x24
  __int64 v8; // x23
  _DWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x10
  __int64 v12; // x9
  __int64 v13; // x9
  int v14; // w11
  __int64 v15; // x20
  unsigned __int64 v16; // x1
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x9
  _DWORD *v20; // x8
  int v21; // w9

  result = 1;
  switch ( a2[2] )
  {
    case 0:
      return result;
    case 1:
      return *a2 == *a3;
    case 3:
      return *(double *)a2 == *(double *)a3;
    case 5:
    case 7:
      if ( *(_QWORD *)a2 == *(_QWORD *)a3 )
        return 1;
      v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
      if ( !v7 || (*(_BYTE *)(v7 + 10) & 0x10) != 0 )
        return 0;
      v8 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
      result = (__int64)sub_4F4E8C(v7, 4, *(_QWORD *)(a1[4] + 328LL));
      v9 = (_DWORD *)result;
      if ( !result )
        return result;
      if ( v7 == v8 )
        goto LABEL_11;
      if ( !v8 || (*(_BYTE *)(v8 + 10) & 0x10) != 0 )
        return 0;
      result = (__int64)sub_4F4E8C(v8, 4, *(_QWORD *)(a1[4] + 328LL));
      if ( result )
      {
        result = sub_4EEE84(v9, (_DWORD *)result);
        if ( (_DWORD)result )
        {
LABEL_11:
          v10 = a1[2];
          v11 = a1[8];
          *(_QWORD *)v10 = *(_QWORD *)v9;
          *(_DWORD *)(v10 + 8) = v9[2];
          v12 = a1[2];
          *(_QWORD *)(v12 + 16) = *(_QWORD *)a2;
          *(_DWORD *)(v12 + 24) = a2[2];
          v13 = a1[2];
          *(_QWORD *)(v13 + 32) = *(_QWORD *)a3;
          v14 = a3[2];
          v15 = v10 - v11;
          *(_DWORD *)(v13 + 40) = v14;
          v16 = a1[2];
          if ( (__int64)(a1[7] - v16) <= 48 )
          {
            sub_4EBBB8((__int64)a1, 3);
            v16 = a1[2];
          }
          a1[2] = v16 + 48;
          sub_4EC63C((__int64)a1, v16, 1);
          v17 = a1[2];
          v18 = a1[8];
          a1[2] = v17 - 16;
          v19 = v18 + v15;
          *(_QWORD *)v19 = *(_QWORD *)(v17 - 16);
          *(_DWORD *)(v19 + 8) = *(_DWORD *)(v17 - 8);
          v20 = (_DWORD *)a1[2];
          v21 = v20[2];
          if ( v21 )
          {
            if ( v21 == 1 )
              return *v20 != 0;
            return 1;
          }
          else
          {
            return 0;
          }
        }
      }
      return result;
    default:
      return *(_QWORD *)a2 == *(_QWORD *)a3;
  }
}

