/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005764B0
 * Mangled: sub_5764B0
 * Demangled: sub_5764B0
 *
 * Callers: 6
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 9
 *   0x00000000001FA120  .strcmp
 *   0x0000000000571F00  sub_571F00
 *   0x00000000005725B4  sub_5725B4
 *   0x00000000005728F4  sub_5728F4
 *   0x0000000000572B14  sub_572B14
 *   0x0000000000572BBC  sub_572BBC
 *   0x0000000000572C48  sub_572C48
 *   0x00000000005761AC  sub_5761AC
 *   0x00000000005762BC  sub_5762BC
 *
 * Referenced strings: 192
 *   insn=0x00000000005764C0 string=0x00000000005764C4 "a"
 *   insn=0x00000000005764C4 string=0x00000000005764C8 """
 *   insn=0x00000000005764C8 string=0x00000000005764CC "B"
 *   insn=0x00000000005764CC string=0x00000000005764D0 "_$"
 *   insn=0x00000000005764D4 string=0x00000000005764D8 """
 *   insn=0x00000000005764D4 string=0x00000000005765F0 "I"
 *   insn=0x00000000005764D8 string=0x00000000005764DC "B"
 *   insn=0x00000000005764DC string=0x00000000005764E0 "_d"
 *   insn=0x00000000005764E4 string=0x00000000005764E8 """
 *   insn=0x00000000005764E8 string=0x00000000005764EC "B"
 *   insn=0x00000000005764EC string=0x00000000005764F0 "_"
 *   insn=0x00000000005764F4 string=0x00000000005764F8 "?0"
 *   insn=0x00000000005764FC string=0x0000000000576500 "?T"
 *   insn=0x00000000005764FC string=0x00000000005767AC "c"
 *   insn=0x0000000000576500 string=0x0000000000576504 "A"
 *   insn=0x0000000000576504 string=0x0000000000576508 "a"
 *   insn=0x0000000000576508 string=0x000000000057650C "?"
 *   insn=0x000000000057650C string=0x0000000000576510 "`"
 *   insn=0x0000000000576510 string=0x0000000000576514 "?"
 *   insn=0x0000000000576510 string=0x000000000057669C "a"
 *   insn=0x0000000000576518 string=0x000000000057651C "a"
 *   insn=0x0000000000576520 string=0x0000000000576524 "d"
 *   insn=0x0000000000576528 string=0x000000000057652C "@"
 *   insn=0x000000000057652C string=0x0000000000576734 "c"
 *   insn=0x000000000057653C string=0x0000000000576540 " "
 *   insn=0x0000000000576540 string=0x0000000000576544 "`"
 *   insn=0x0000000000576548 string=0x000000000057654C "#"
 *   insn=0x0000000000576550 string=0x0000000000576554 " "
 *   insn=0x0000000000576554 string=0x0000000000576558 "`"
 *   insn=0x0000000000576554 string=0x0000000000576618 " "
 *   insn=0x0000000000576564 string=0x0000000000576568 "d"
 *   insn=0x0000000000576570 string=0x0000000000576574 "d"
 *   insn=0x0000000000576574 string=0x0000000000576578 " "
 *   insn=0x000000000057657C string=0x0000000000576580 "!"
 *   insn=0x0000000000576584 string=0x0000000000576588 "!"
 *   insn=0x0000000000576588 string=0x000000000057658C "`"
 *   insn=0x0000000000576598 string=0x000000000057659C "?"
 *   insn=0x00000000005765B8 string=0x00000000005765BC "`&"
 *   insn=0x00000000005765BC string=0x00000000005765C0 "a\t"
 *   insn=0x00000000005765C4 string=0x00000000005765C8 "N"
 *   insn=0x00000000005765C8 string=0x0000000000571F00 "$"
 *   insn=0x00000000005765CC string=0x00000000005765D0 "a"
 *   insn=0x00000000005765D0 string=0x00000000005765D4 " "
 *   insn=0x00000000005765D8 string=0x00000000005765DC " "
 *   insn=0x00000000005765F4 string=0x00000000005765F8 "a"
 *   insn=0x00000000005765F8 string=0x00000000005765FC "$"
 *   insn=0x0000000000576618 string=0x000000000057661C "`"
 *   insn=0x000000000057661C string=0x0000000000576620 "%"
 *   insn=0x0000000000576620 string=0x0000000000576624 "#@9`"
 *   insn=0x0000000000576624 string=0x0000000000576628 "`"
 *   insn=0x0000000000576648 string=0x0000000000576658 "a"
 *   insn=0x0000000000576650 string=0x0000000000576654 "@"
 *   insn=0x0000000000576654 string=0x00000000005767DC "@"
 *   insn=0x0000000000576658 string=0x000000000057665C "$"
 *   insn=0x0000000000576668 string=0x000000000057667C "?"
 *   insn=0x0000000000576670 string=0x0000000000576674 "_`"
 *   insn=0x0000000000576670 string=0x0000000000576848 "bR@"
 *   insn=0x0000000000576680 string=0x0000000000576684 "?"
 *   insn=0x0000000000576680 string=0x0000000000576980 "a"
 *   insn=0x0000000000576684 string=0x0000000000576688 " "
 *   insn=0x0000000000576688 string=0x000000000057686C "a"
 *   insn=0x00000000005766A0 string=0x00000000005766A4 "d"
 *   insn=0x00000000005766A8 string=0x00000000005766AC "!"
 *   insn=0x00000000005766AC string=0x00000000005766B0 "c"
 *   insn=0x00000000005766BC string=0x00000000005766C0 "a"
 *   insn=0x00000000005766C4 string=0x00000000005766C8 "$"
 *   insn=0x00000000005766D0 string=0x00000000005766D4 " "
 *   insn=0x00000000005766D4 string=0x00000000005766D8 "`"
 *   insn=0x00000000005766D8 string=0x00000000005766DC " "
 *   insn=0x00000000005766E4 string=0x0000000000576894 "!"
 *   insn=0x00000000005766F0 string=0x00000000005766F4 "`b"
 *   insn=0x00000000005766FC string=0x0000000000576700 "a"
 *   insn=0x0000000000576704 string=0x0000000000576708 "$"
 *   insn=0x0000000000576714 string=0x0000000000576718 "#"
 *   insn=0x0000000000576718 string=0x000000000057671C "c"
 *   insn=0x0000000000576720 string=0x0000000000576724 "@"
 *   insn=0x0000000000576724 string=0x0000000000576728 "$"
 *   insn=0x0000000000576738 string=0x000000000057673C " "
 *   insn=0x0000000000576740 string=0x0000000000576744 "b*@"
 *   insn=0x0000000000576740 string=0x0000000000576838 "a"
 *   insn=0x0000000000576744 string=0x0000000000576748 "a.@"
 *   insn=0x0000000000576748 string=0x000000000057674C "_"
 *   insn=0x000000000057674C string=0x0000000000576750 "J"
 *   insn=0x0000000000576750 string=0x0000000000576754 "A|@"
 *   insn=0x0000000000576754 string=0x0000000000576758 "c"
 *   insn=0x0000000000576758 string=0x000000000057675C "$"
 *   insn=0x000000000057675C string=0x0000000000576760 "B"
 *   insn=0x0000000000576764 string=0x0000000000576768 "b*"
 *   insn=0x0000000000576768 string=0x000000000057676C "b"
 *   insn=0x000000000057676C string=0x0000000000576770 "@"
 *   insn=0x0000000000576774 string=0x0000000000576778 "dh!"
 *   insn=0x0000000000576778 string=0x000000000057677C "@"
 *   insn=0x000000000057677C string=0x0000000000576780 "`:@"
 *   insn=0x0000000000576780 string=0x0000000000576784 "a>@"
 *   insn=0x0000000000576788 string=0x000000000057678C "j"
 *   insn=0x000000000057678C string=0x0000000000576790 "c"
 *   insn=0x0000000000576794 string=0x0000000000576798 "b"
 *   insn=0x0000000000576798 string=0x000000000057679C "a:"
 *   insn=0x000000000057679C string=0x00000000005767A0 "a"
 *   insn=0x00000000005767A0 string=0x00000000005767A4 "$"
 *   insn=0x00000000005767C0 string=0x00000000005767C4 "!"
 *   insn=0x00000000005767C4 string=0x00000000005767C8 " "
 *   insn=0x00000000005767C8 string=0x00000000005767CC "a"
 *   insn=0x00000000005767D0 string=0x00000000005767D4 "$"
 *   insn=0x00000000005767DC string=0x00000000005767E0 "A"
 *   insn=0x00000000005767E0 string=0x00000000005767E4 "dR@"
 *   insn=0x00000000005767E0 string=0x00000000005A06A8 "li"
 *   insn=0x00000000005767E4 string=0x00000000005767E8 "!"
 *   insn=0x00000000005767F8 string=0x00000000005767FC "c"
 *   insn=0x00000000005767FC string=0x0000000000576800 "cR"
 *   insn=0x0000000000576800 string=0x0000000000576804 "G"
 *   insn=0x0000000000576804 string=0x00000000001FA120 "0'"
 *   insn=0x0000000000576808 string=0x000000000057680C "`"
 *   insn=0x000000000057683C string=0x0000000000576840 "$"
 *   insn=0x0000000000576840 string=0x0000000000576844 "o"
 *   insn=0x000000000057684C string=0x0000000000576850 "A"
 *   insn=0x0000000000576850 string=0x0000000000576854 "aR"
 *   insn=0x0000000000576854 string=0x0000000000576858 "d"
 *   insn=0x0000000000576864 string=0x0000000000576868 "a"
 *   insn=0x000000000057686C string=0x0000000000576870 "!"
 *   insn=0x0000000000576870 string=0x0000000000576874 "?"
 *   insn=0x0000000000576878 string=0x000000000057687C "B"
 *   insn=0x000000000057687C string=0x0000000000576884 "AXaxb"
 *   insn=0x000000000057687C string=0x00000000005A041C "6"
 *   insn=0x0000000000576884 string=0x0000000000576888 "b"
 *   insn=0x0000000000576888 string=0x000000000057688C "A"
 *   insn=0x000000000057688C string=0x0000000000576890 " "
 *   insn=0x0000000000576890 string=0x000000000057695C "e"
 *   insn=0x0000000000576890 string=0x0000000000576964 "E"
 *   insn=0x0000000000576890 string=0x000000000057696C "%"
 *   insn=0x0000000000576898 string=0x000000000057689C "a"
 *   insn=0x000000000057689C string=0x00000000005768A0 "b*@"
 *   insn=0x00000000005768A0 string=0x00000000005768A4 "`.@"
 *   insn=0x00000000005768A4 string=0x00000000005768A8 "_"
 *   insn=0x00000000005768A8 string=0x00000000005768AC "*"
 *   insn=0x00000000005768AC string=0x00000000005768B0 "@|@"
 *   insn=0x00000000005768AC string=0x00000000005768F0 "$"
 *   insn=0x00000000005768B0 string=0x00000000005768B4 "c"
 *   insn=0x00000000005768B8 string=0x00000000005768BC "B"
 *   insn=0x00000000005768C0 string=0x00000000005768C4 "b*"
 *   insn=0x00000000005768C4 string=0x00000000005768C8 "b"
 *   insn=0x00000000005768C8 string=0x00000000005768CC " "
 *   insn=0x00000000005768D0 string=0x00000000005768D4 "dh "
 *   insn=0x00000000005768D4 string=0x00000000005768D8 "T"
 *   insn=0x00000000005768D8 string=0x00000000005768DC "E"
 *   insn=0x00000000005768DC string=0x00000000005768E0 "`:@"
 *   insn=0x00000000005768E0 string=0x00000000005768E4 "c>@"
 *   insn=0x00000000005768E8 string=0x00000000005768EC "+"
 *   insn=0x00000000005768F4 string=0x00000000005768F8 "B"
 *   insn=0x00000000005768FC string=0x0000000000576900 "b*@"
 *   insn=0x0000000000576900 string=0x0000000000576904 "a"
 *   insn=0x0000000000576904 string=0x0000000000576908 "d.@"
 *   insn=0x0000000000576908 string=0x000000000057690C "a"
 *   insn=0x000000000057690C string=0x0000000000576910 "_"
 *   insn=0x0000000000576910 string=0x0000000000576914 "j"
 *   insn=0x0000000000576914 string=0x0000000000576918 "D|@"
 *   insn=0x0000000000576914 string=0x0000000000576A20 "d@9"
 *   insn=0x0000000000576918 string=0x000000000057691C "f"
 *   insn=0x0000000000576920 string=0x0000000000576924 "B"
 *   insn=0x0000000000576928 string=0x000000000057692C "b*"
 *   insn=0x0000000000576930 string=0x0000000000576934 "`"
 *   insn=0x0000000000576934 string=0x0000000000576938 "@"
 *   insn=0x0000000000576938 string=0x000000000057693C ""
 *   insn=0x0000000000576940 string=0x0000000000576944 "E"
 *   insn=0x0000000000576944 string=0x0000000000576948 "@"
 *   insn=0x0000000000576948 string=0x000000000057694C "d@9,"
 *   insn=0x000000000057694C string=0x0000000000576950 ","
 *   insn=0x0000000000576978 string=0x000000000057697C "!"
 *   insn=0x0000000000576980 string=0x0000000000576984 "!"
 *   insn=0x0000000000576984 string=0x0000000000576988 "?"
 *   insn=0x0000000000576988 string=0x000000000057698C ""
 *   insn=0x000000000057698C string=0x0000000000576990 "B"
 *   insn=0x0000000000576990 string=0x0000000000576998 "AHa8b"
 *   insn=0x0000000000576998 string=0x000000000057699C "b"
 *   insn=0x000000000057699C string=0x00000000005769A0 "A"
 *   insn=0x000000000057699C string=0x00000000005769A8 "%"
 *   insn=0x00000000005769A0 string=0x00000000005769A4 " "
 *   insn=0x00000000005769A4 string=0x0000000000576A10 "e"
 *   insn=0x00000000005769A4 string=0x0000000000576A18 "E"
 *   insn=0x00000000005769A8 string=0x00000000005769AC "b*@"
 *   insn=0x00000000005769AC string=0x00000000005769B0 "a"
 *   insn=0x00000000005769B0 string=0x00000000005769B4 "d.@"
 *   insn=0x00000000005769B4 string=0x00000000005769B8 "a"
 *   insn=0x00000000005769B8 string=0x00000000005769BC "_"
 *   insn=0x00000000005769BC string=0x00000000005769C0 "\n"
 *   insn=0x00000000005769C0 string=0x00000000005769C4 "D|@"
 *   insn=0x00000000005769C4 string=0x00000000005769C8 "f"
 *   insn=0x00000000005769CC string=0x00000000005769D0 "B"
 *   insn=0x00000000005769D4 string=0x00000000005769D8 "b*"
 *   insn=0x00000000005769EC string=0x00000000005769F0 "E"
 *   insn=0x00000000005769F0 string=0x00000000005769F4 "@"
 *   insn=0x00000000005769F4 string=0x00000000005769F8 "d@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5764B0(__int64 a1)
{
  unsigned __int8 *v1; // x3
  int v3; // w1
  int v4; // w1
  unsigned __int8 *v5; // x1
  int v6; // w4
  __int64 v7; // x2
  __int64 result; // x0
  int v9; // w5
  int v10; // w3
  __int64 v11; // x1
  char *v12; // x4
  __int64 v13; // x1
  char v14; // t1
  __int64 v15; // x3
  int v16; // w4
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x20
  int v20; // w0
  int v21; // w0
  int v22; // w5
  __int64 v23; // x0
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  int v27; // w0
  __int64 v28; // x0
  __int64 v29; // x0
  int v30; // w3
  const char *v31; // x0
  int v32; // w0
  __int64 v33; // x0
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x0
  int v37; // w5
  int v38; // w2
  int v39; // w4
  __int64 v40; // x6
  __int64 v41; // x4
  int v42; // w5
  int v43; // w2
  int v44; // w4
  __int64 v45; // x6
  __int64 v46; // x4
  __int64 v47; // [xsp+28h] [xbp+28h]
  __int64 v48; // [xsp+28h] [xbp+28h]
  __int64 v49; // [xsp+28h] [xbp+28h]

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v1;
  if ( (unsigned __int8)(v3 - 48) <= 9u )
  {
    v7 = sub_572B14(a1);
    v5 = *(unsigned __int8 **)(a1 + 24);
    v16 = *v5;
    goto LABEL_20;
  }
  if ( (unsigned __int8)(v3 - 97) <= 0x19u )
  {
    v17 = sub_5762BC(a1);
    v7 = v17;
    if ( v17 )
    {
      if ( *(_DWORD *)v17 == 49 )
      {
        v29 = *(_QWORD *)(v17 + 8);
        v49 = v7;
        v30 = *(_DWORD *)(v29 + 16);
        v31 = *(const char **)v29;
        *(_DWORD *)(a1 + 80) += v30 + 7;
        v32 = strcmp(v31, "li");
        v7 = v49;
        if ( !v32 )
        {
          v33 = sub_572B14(a1);
          v7 = sub_571F00(a1, 54, v49, v33);
        }
      }
    }
    v5 = *(unsigned __int8 **)(a1 + 24);
    v16 = *v5;
    goto LABEL_20;
  }
  if ( (unsigned __int8)(v3 - 67) <= 1u )
  {
    v18 = *(_DWORD **)(a1 + 72);
    if ( v18 && (!*v18 || *v18 == 24) )
    {
      *(_DWORD *)(a1 + 80) += v18[4];
      v16 = *v1;
      if ( v16 != 67 )
      {
        if ( v16 != 68 )
        {
          v5 = v1;
          v7 = 0;
          goto LABEL_20;
        }
        goto LABEL_55;
      }
    }
    else if ( v3 != 67 )
    {
      if ( v3 != 68 )
        return 0;
LABEL_55:
      switch ( v1[1] )
      {
        case '0':
          v37 = 1;
          break;
        case '1':
          v37 = 2;
          break;
        case '2':
          v37 = 3;
          break;
        case '4':
          v37 = 4;
          break;
        case '5':
          v37 = 5;
          break;
        default:
          return 0;
      }
      v38 = *(_DWORD *)(a1 + 40);
      v5 = v1 + 2;
      v39 = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(a1 + 24) = v1 + 2;
      if ( v38 < v39 )
      {
        v40 = *(_QWORD *)(a1 + 32);
        v41 = 24LL * v38;
        *(_DWORD *)(a1 + 40) = v38 + 1;
        v7 = v40 + v41;
        if ( v40 + v41 )
        {
          if ( v18 )
          {
            *(_DWORD *)(v40 + v41) = 8;
            *(_DWORD *)(v7 + 8) = v37;
            *(_QWORD *)(v7 + 16) = v18;
            v16 = v1[2];
            goto LABEL_20;
          }
        }
      }
LABEL_81:
      v16 = v1[2];
      v7 = 0;
      goto LABEL_20;
    }
    switch ( v1[1] )
    {
      case '1':
        v42 = 1;
        break;
      case '2':
        v42 = 2;
        break;
      case '3':
        v42 = 3;
        break;
      case '4':
        v42 = 4;
        break;
      case '5':
        v42 = 5;
        break;
      default:
        return 0;
    }
    v43 = *(_DWORD *)(a1 + 40);
    v5 = v1 + 2;
    v44 = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 24) = v1 + 2;
    if ( v43 < v44 )
    {
      v45 = *(_QWORD *)(a1 + 32);
      v46 = 24LL * v43;
      *(_DWORD *)(a1 + 40) = v43 + 1;
      v7 = v45 + v46;
      if ( v45 + v46 )
      {
        if ( v18 )
        {
          *(_DWORD *)(v45 + v46) = 7;
          *(_DWORD *)(v7 + 8) = v42;
          *(_QWORD *)(v7 + 16) = v18;
          v16 = v1[2];
          goto LABEL_20;
        }
      }
    }
    goto LABEL_81;
  }
  if ( v3 == 76 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v28 = sub_572B14(a1);
    if ( v28 )
    {
      v48 = v28;
      if ( (unsigned int)sub_572C48(a1) )
      {
        v5 = *(unsigned __int8 **)(a1 + 24);
        v7 = v48;
        v16 = *v5;
        goto LABEL_20;
      }
    }
    return 0;
  }
  if ( v3 != 85 )
    return 0;
  v4 = v1[1];
  if ( v4 != 108 )
  {
    if ( v4 == 116 )
    {
      v5 = v1 + 1;
      *(_QWORD *)(a1 + 24) = v1 + 1;
      v6 = v1[1];
      if ( v6 != 116 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v23 = sub_572BBC(a1);
      if ( (v23 & 0x8000000000000000LL) == 0 )
      {
        v24 = *(_DWORD *)(a1 + 40);
        if ( v24 < *(_DWORD *)(a1 + 44) )
        {
          v25 = *(_QWORD *)(a1 + 32);
          v26 = 24LL * v24;
          *(_DWORD *)(a1 + 40) = v24 + 1;
          v7 = v25 + v26;
          if ( v25 + v26 )
          {
            *(_DWORD *)(v25 + v26) = 71;
            *(_QWORD *)(v7 + 8) = v23;
            v27 = *(_DWORD *)(a1 + 56);
            if ( v27 < *(_DWORD *)(a1 + 60) )
              goto LABEL_45;
          }
        }
      }
      v5 = *(unsigned __int8 **)(a1 + 24);
      goto LABEL_52;
    }
    return 0;
  }
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v6 = v1[1];
  if ( v6 == 108 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 2;
    v19 = sub_5761AC(a1);
    v5 = *(unsigned __int8 **)(a1 + 24);
    if ( !v19 )
    {
LABEL_52:
      v7 = 0;
      v16 = *v5;
      goto LABEL_20;
    }
    v6 = *v5;
    if ( v6 == 69 )
    {
      *(_QWORD *)(a1 + 24) = v5 + 1;
      v20 = v5[1];
      if ( v20 == 95 )
      {
        v5 += 2;
        v22 = 0;
        *(_QWORD *)(a1 + 24) = v5;
      }
      else
      {
        if ( v20 == 110 )
          return 0;
        v21 = sub_5725B4((unsigned __int8 **)(a1 + 24));
        v5 = *(unsigned __int8 **)(a1 + 24);
        v7 = 0;
        v16 = *v5;
        if ( v16 != 95 )
          goto LABEL_20;
        *(_QWORD *)(a1 + 24) = v5 + 1;
        v22 = v21 + 1;
        if ( v21 + 1 < 0 )
        {
          v16 = *++v5;
          goto LABEL_20;
        }
        ++v5;
      }
      v34 = *(_DWORD *)(a1 + 40);
      if ( v34 < *(_DWORD *)(a1 + 44) )
      {
        v35 = *(_QWORD *)(a1 + 32);
        v36 = 24LL * v34;
        *(_DWORD *)(a1 + 40) = v34 + 1;
        v7 = v35 + v36;
        if ( v35 + v36 )
        {
          *(_DWORD *)(v35 + v36) = 69;
          *(_QWORD *)(v7 + 8) = v19;
          *(_DWORD *)(v7 + 16) = v22;
          v27 = *(_DWORD *)(a1 + 56);
          if ( v27 < *(_DWORD *)(a1 + 60) )
          {
LABEL_45:
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v27) = v7;
            *(_DWORD *)(a1 + 56) = v27 + 1;
            v5 = *(unsigned __int8 **)(a1 + 24);
            v16 = *v5;
            goto LABEL_20;
          }
        }
      }
      v16 = *v5;
      v7 = 0;
LABEL_20:
      result = v7;
      if ( v16 != 66 )
        return result;
      while ( 1 )
      {
LABEL_10:
        *(_QWORD *)(a1 + 24) = v5 + 1;
        v9 = 0;
        v10 = v5[1];
        if ( v10 == 110 )
        {
          *(_QWORD *)(a1 + 24) = v5 + 2;
          v9 = 1;
          LOBYTE(v10) = v5[2];
          if ( (unsigned __int8)(v10 - 48) > 9u )
            goto LABEL_23;
        }
        else if ( (unsigned __int8)(v10 - 48) > 9u )
        {
          goto LABEL_23;
        }
        v11 = 0;
        v12 = (char *)(*(_QWORD *)(a1 + 24) + 1LL);
        do
        {
          *(_QWORD *)(a1 + 24) = v12;
          v13 = 10 * v11 + (unsigned __int8)v10;
          v14 = *v12++;
          LOBYTE(v10) = v14;
          v11 = v13 - 48;
        }
        while ( (unsigned __int8)(v14 - 48) <= 9u );
        if ( v11 <= 0 || v9 )
        {
LABEL_23:
          v15 = 0;
          goto LABEL_17;
        }
        v47 = v7;
        v15 = sub_5728F4(a1, v11);
        v7 = v47;
        *(_QWORD *)(a1 + 72) = v15;
LABEL_17:
        v7 = sub_571F00(a1, 75, v7, v15);
        v5 = *(unsigned __int8 **)(a1 + 24);
        if ( *v5 != 66 )
          return v7;
      }
    }
  }
LABEL_9:
  v7 = 0;
  result = 0;
  if ( v6 == 66 )
    goto LABEL_10;
  return result;
}

