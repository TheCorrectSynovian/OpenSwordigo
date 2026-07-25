/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005743B0
 * Mangled: sub_5743B0
 * Demangled: sub_5743B0
 *
 * Callers: 5
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 10
 *   0x00000000001FA120  .strcmp
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000572BBC  sub_572BBC
 *   0x0000000000572CEC  sub_572CEC
 *   0x0000000000572EC4  sub_572EC4
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005762BC  sub_5762BC
 *   0x00000000005764B0  sub_5764B0
 *   0x00000000005776A4  sub_5776A4
 *   0x000000000057781C  sub_57781C
 *
 * Referenced strings: 158
 *   insn=0x00000000005743B8 string=0x00000000005743BC "6"
 *   insn=0x00000000005743D8 string=0x00000000005743DC """
 *   insn=0x00000000005743E0 string=0x00000000005743E4 "_"
 *   insn=0x00000000005743E8 string=0x00000000005743EC "y"
 *   insn=0x00000000005743E8 string=0x0000000000574A60 """
 *   insn=0x00000000005743EC string=0x00000000005743F0 "x"
 *   insn=0x00000000005743EC string=0x00000000005A02F0 "\n"
 *   insn=0x00000000005743F0 string=0x00000000005743F4 "w"
 *   insn=0x00000000005743F0 string=0x00000000005A0698 "qu"
 *   insn=0x00000000005743F4 string=0x00000000005743F8 "9"
 *   insn=0x00000000005743F4 string=0x00000000005A0680 "cl"
 *   insn=0x0000000000574400 string=0x0000000000574404 "uV@"
 *   insn=0x0000000000574404 string=0x0000000000574408 ":"
 *   insn=0x0000000000574408 string=0x000000000057440C "zV"
 *   insn=0x000000000057440C string=0x0000000000574410 " "
 *   insn=0x000000000057441C string=0x0000000000574420 " "
 *   insn=0x0000000000574428 string=0x000000000057459C " "
 *   insn=0x000000000057442C string=0x0000000000574430 "`"
 *   insn=0x0000000000574430 string=0x00000000005745DC " "
 *   insn=0x0000000000574434 string=0x0000000000574438 "B"
 *   insn=0x0000000000574438 string=0x000000000057443C "_$"
 *   insn=0x0000000000574448 string=0x00000000005744C4 " "
 *   insn=0x0000000000574450 string=0x0000000000574454 "#5"
 *   insn=0x0000000000574454 string=0x0000000000574458 " "
 *   insn=0x0000000000574470 string=0x000000000057468C "uV"
 *   insn=0x000000000057447C string=0x0000000000574650 "\@"
 *   insn=0x0000000000574480 string=0x0000000000574484 "`"
 *   insn=0x0000000000574484 string=0x00000000005746F0 "@@"
 *   insn=0x000000000057448C string=0x0000000000574490 "`"
 *   insn=0x0000000000574494 string=0x0000000000574498 "?|"
 *   insn=0x00000000005744B8 string=0x0000000000571F00 "$"
 *   insn=0x00000000005744BC string=0x00000000005744C0 "-"
 *   insn=0x00000000005744C0 string=0x0000000000574574 "uV"
 *   insn=0x00000000005744CC string=0x00000000005744D0 "!"
 *   insn=0x00000000005744D0 string=0x00000000005744D4 "a"
 *   insn=0x00000000005744DC string=0x00000000005744E0 "`"
 *   insn=0x00000000005744E0 string=0x00000000005744E4 "a"
 *   insn=0x00000000005744E8 string=0x00000000005744EC " "
 *   insn=0x00000000005744F4 string=0x00000000005744F8 "uV"
 *   insn=0x0000000000574504 string=0x0000000000574508 "~"
 *   insn=0x000000000057450C string=0x0000000000574510 "`"
 *   insn=0x0000000000574510 string=0x0000000000574514 "a"
 *   insn=0x0000000000574518 string=0x000000000057451C " "
 *   insn=0x0000000000574524 string=0x0000000000574528 "!"
 *   insn=0x0000000000574528 string=0x000000000057452C "a"
 *   insn=0x0000000000574554 string=0x0000000000574558 "["
 *   insn=0x0000000000574568 string=0x000000000057456C "e"
 *   insn=0x0000000000574574 string=0x0000000000574578 """
 *   insn=0x00000000005745A4 string=0x00000000005748FC "!"
 *   insn=0x00000000005745AC string=0x00000000005745B0 "!"
 *   insn=0x00000000005745B4 string=0x00000000005745B8 "a"
 *   insn=0x00000000005745C0 string=0x00000000005745C4 "A\t"
 *   insn=0x00000000005745CC string=0x00000000005745D0 "L"
 *   insn=0x00000000005745E4 string=0x00000000005745E8 " "
 *   insn=0x00000000005745E8 string=0x00000000005745EC "`"
 *   insn=0x00000000005745EC string=0x00000000005745F0 " @9"
 *   insn=0x00000000005745F8 string=0x000000000057470C "!"
 *   insn=0x00000000005745FC string=0x0000000000574600 "o"
 *   insn=0x0000000000574604 string=0x0000000000574608 " "
 *   insn=0x000000000057460C string=0x0000000000574610 "b*@"
 *   insn=0x0000000000574610 string=0x0000000000574614 "a.@"
 *   insn=0x0000000000574614 string=0x0000000000574618 "_"
 *   insn=0x000000000057461C string=0x0000000000574620 "A|@"
 *   insn=0x0000000000574620 string=0x0000000000574624 "c"
 *   insn=0x0000000000574624 string=0x0000000000574628 "$"
 *   insn=0x0000000000574628 string=0x000000000057462C "B"
 *   insn=0x0000000000574630 string=0x0000000000574634 "b*"
 *   insn=0x0000000000574634 string=0x0000000000574638 "b"
 *   insn=0x0000000000574640 string=0x0000000000574644 "dh!"
 *   insn=0x0000000000574644 string=0x0000000000574648 "@"
 *   insn=0x0000000000574650 string=0x0000000000574654 "a"
 *   insn=0x0000000000574654 string=0x0000000000574658 "bR@"
 *   insn=0x0000000000574654 string=0x00000000005A0BF0 "st"
 *   insn=0x0000000000574658 string=0x000000000057465C "!"
 *   insn=0x0000000000574668 string=0x000000000057466C "B"
 *   insn=0x0000000000574670 string=0x0000000000574674 "bR"
 *   insn=0x0000000000574678 string=0x00000000001FA120 "0'"
 *   insn=0x0000000000574688 string=0x000000000057471C "a"
 *   insn=0x00000000005746B8 string=0x00000000005746BC "#"
 *   insn=0x00000000005746C4 string=0x00000000005746C8 "c"
 *   insn=0x00000000005746CC string=0x00000000005746D0 "8"
 *   insn=0x00000000005746E0 string=0x00000000005746E4 ""
 *   insn=0x00000000005746F8 string=0x00000000005746FC " [`xa"
 *   insn=0x00000000005746FC string=0x0000000000574700 "a"
 *   insn=0x0000000000574700 string=0x0000000000574704 " "
 *   insn=0x0000000000574708 string=0x0000000000574750 ""
 *   insn=0x0000000000574708 string=0x000000000057481C ""
 *   insn=0x0000000000574710 string=0x0000000000574714 "a"
 *   insn=0x000000000057471C string=0x0000000000574724 " X`xa"
 *   insn=0x0000000000574724 string=0x0000000000574728 "a"
 *   insn=0x0000000000574728 string=0x000000000057472C " "
 *   insn=0x0000000000574730 string=0x0000000000574820 "@@"
 *   insn=0x0000000000574730 string=0x0000000000574944 "`"
 *   insn=0x0000000000574758 string=0x000000000057475C "q"
 *   insn=0x0000000000574760 string=0x0000000000574764 "`"
 *   insn=0x000000000057476C string=0x0000000000574770 "`@9"
 *   insn=0x0000000000574774 string=0x0000000000574778 "`"
 *   insn=0x000000000057477C string=0x0000000000574780 "a"
 *   insn=0x0000000000574788 string=0x000000000057478C "\t"
 *   insn=0x000000000057479C string=0x00000000005747A0 "`"
 *   insn=0x00000000005747A4 string=0x00000000005747A8 "?"
 *   insn=0x00000000005747AC string=0x00000000005747B0 "?"
 *   insn=0x00000000005747B0 string=0x00000000005747B4 "@"
 *   insn=0x00000000005747B8 string=0x00000000005747BC "?"
 *   insn=0x00000000005747BC string=0x00000000005747C0 "a"
 *   insn=0x00000000005747DC string=0x00000000005747E0 "a"
 *   insn=0x00000000005747EC string=0x00000000005747F0 "A"
 *   insn=0x0000000000574808 string=0x000000000057480C "!"
 *   insn=0x0000000000574814 string=0x0000000000574818 "W"
 *   insn=0x0000000000574828 string=0x000000000057482C "?"
 *   insn=0x000000000057482C string=0x0000000000574830 "`"
 *   insn=0x0000000000574844 string=0x0000000000574848 "6"
 *   insn=0x000000000057484C string=0x0000000000574850 "a"
 *   insn=0x0000000000574850 string=0x00000000005A0688 "dt"
 *   insn=0x0000000000574854 string=0x0000000000574858 "! "
 *   insn=0x0000000000574858 string=0x000000000057485C "1"
 *   insn=0x0000000000574860 string=0x0000000000574864 "a"
 *   insn=0x0000000000574864 string=0x00000000005A0690 "pt"
 *   insn=0x0000000000574868 string=0x000000000057486C "!@"
 *   insn=0x000000000057486C string=0x0000000000574870 ","
 *   insn=0x00000000005748A8 string=0x00000000005748AC "2"
 *   insn=0x00000000005748B8 string=0x00000000005748BC "`"
 *   insn=0x00000000005748D0 string=0x00000000005748D4 "|"
 *   insn=0x0000000000574900 string=0x0000000000574904 "a"
 *   insn=0x0000000000574918 string=0x000000000057491C "`"
 *   insn=0x0000000000574924 string=0x0000000000574928 "@"
 *   insn=0x0000000000574934 string=0x0000000000574938 "r"
 *   insn=0x000000000057493C string=0x0000000000574940 ""
 *   insn=0x0000000000574948 string=0x000000000057494C "`"
 *   insn=0x000000000057494C string=0x0000000000574958 "a@9?"
 *   insn=0x0000000000574950 string=0x0000000000574954 "a"
 *   insn=0x0000000000574958 string=0x000000000057495C "?"
 *   insn=0x0000000000574960 string=0x0000000000574964 "`"
 *   insn=0x0000000000574968 string=0x000000000057496C "?|"
 *   insn=0x0000000000574988 string=0x000000000057498C "]"
 *   insn=0x0000000000574998 string=0x000000000057499C "Z"
 *   insn=0x00000000005749A8 string=0x00000000005749AC "V"
 *   insn=0x00000000005749B0 string=0x00000000005749B4 "a"
 *   insn=0x00000000005749B4 string=0x00000000005749B8 "A"
 *   insn=0x00000000005749C0 string=0x00000000005749C4 "{"
 *   insn=0x00000000005749F4 string=0x00000000005749F8 "z"
 *   insn=0x0000000000574A00 string=0x0000000000574A04 "!"
 *   insn=0x0000000000574A04 string=0x0000000000574A08 "?"
 *   insn=0x0000000000574A20 string=0x0000000000574A24 "8"
 *   insn=0x0000000000574A34 string=0x0000000000574A38 "#"
 *   insn=0x0000000000574A50 string=0x0000000000574A54 "+"
 *   insn=0x0000000000574A94 string=0x0000000000574A98 "a"
 *   insn=0x0000000000574A9C string=0x0000000000574AA0 "D"
 *   insn=0x0000000000574AB0 string=0x0000000000574AB4 "a"
 *   insn=0x0000000000574AB4 string=0x0000000000574AB8 "J"
 *   insn=0x0000000000574ABC string=0x0000000000574AC0 "?"
 *   insn=0x0000000000574AC0 string=0x0000000000574AC4 "A"
 *   insn=0x0000000000574ACC string=0x0000000000574AD0 "a"
 *   insn=0x0000000000574AD8 string=0x0000000000574ADC "5"
 *   insn=0x0000000000574AE4 string=0x0000000000574AE8 ">"
 *   insn=0x0000000000574AEC string=0x0000000000574AF0 "`"
 *   insn=0x0000000000574AF0 string=0x0000000000574AF4 "k"
 *   insn=0x0000000000574AFC string=0x0000000000574B00 "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5743B0(__int64 a1, unsigned __int8 a2)
{
  int v2; // w22
  unsigned __int8 *v3; // x1
  int v5; // w2
  __int64 *v6; // x20
  int v7; // w21
  int v8; // w0
  int *v9; // x0
  __int64 v10; // x26
  int v11; // w0
  _BYTE *v12; // x0
  __int64 v13; // x3
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v18; // x0
  int v19; // w0
  __int64 v20; // x0
  __int64 v21; // x0
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  const char **v25; // x28
  const char *v26; // x27
  const char *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x0
  int v30; // w0
  __int64 v31; // x27
  __int64 v32; // x2
  unsigned __int8 *v33; // x0
  int v34; // w1
  __int64 v35; // x3
  __int64 v36; // x0
  __int64 v37; // x0
  char *v38; // x0
  __int64 v39; // x28
  __int64 v40; // x3
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x27
  __int64 v44; // x3
  int v45; // w0
  _BYTE *v46; // x0
  __int64 v47; // x0
  char v48; // w0
  __int64 v49; // x0
  __int64 v50; // [xsp+68h] [xbp+68h]
  __int64 v51; // [xsp+68h] [xbp+68h]
  __int64 v52; // [xsp+68h] [xbp+68h]
  __int64 v53; // [xsp+68h] [xbp+68h]
  __int64 v54; // [xsp+68h] [xbp+68h]
  __int64 v55; // [xsp+68h] [xbp+68h]
  __int64 v56; // [xsp+68h] [xbp+68h]
  __int64 v57; // [xsp+78h] [xbp+78h] BYREF

  v2 = a2;
  v3 = *(unsigned __int8 **)(a1 + 24);
  v5 = *v3;
  v57 = 0;
  v6 = &v57;
  if ( v5 == v2 )
  {
    *(_QWORD *)(a1 + 24) = v3 + 1;
    return sub_571F00(a1, 46, 0, 0);
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 84) = 1;
    v8 = *v3;
    switch ( v8 )
    {
      case 'L':
        v14 = sub_5776A4(a1);
        goto LABEL_26;
      case 'T':
        v14 = sub_572CEC(a1);
        goto LABEL_26;
      case 's':
        v19 = v3[1];
        if ( v19 == 114 )
        {
          *(_QWORD *)(a1 + 24) = v3 + 2;
          v43 = sub_574B04(a1);
          v44 = sub_5764B0(a1);
          if ( **(_BYTE **)(a1 + 24) == 73 )
          {
            v55 = v44;
            v49 = sub_572EC4(a1);
            v44 = sub_571F00(a1, 4, v55, v49);
          }
          v14 = sub_571F00(a1, 1, v43, v44);
          goto LABEL_26;
        }
        if ( v19 == 112 )
        {
          *(_QWORD *)(a1 + 24) = v3 + 2;
          v20 = sub_57781C(a1);
          v14 = sub_571F00(a1, 74, v20, 0);
          goto LABEL_26;
        }
LABEL_10:
        v9 = (int *)sub_5762BC(a1);
        v10 = (__int64)v9;
        if ( !v9 )
          goto LABEL_40;
        v11 = *v9;
        switch ( v11 )
        {
          case '1':
            v25 = *(const char ***)(v10 + 8);
            v26 = *v25;
            v27 = *v25;
            *(_DWORD *)(a1 + 80) += *((_DWORD *)v25 + 4) - 2;
            if ( strcmp(v27, "st") )
            {
              switch ( *((_DWORD *)v25 + 5) )
              {
                case 0:
LABEL_49:
                  v14 = sub_571F00(a1, 53, v10, 0);
                  goto LABEL_26;
                case 1:
                  v45 = *(unsigned __int8 *)v26;
                  if ( v45 != 109 && v45 != 112 || *((unsigned __int8 *)v26 + 1) != v45 )
                    goto LABEL_15;
                  v46 = *(_BYTE **)(a1 + 24);
                  if ( *v46 != 95 )
                  {
                    v47 = sub_57781C(a1);
                    v13 = sub_571F00(a1, 56, v47, v47);
                    goto LABEL_16;
                  }
                  *(_QWORD *)(a1 + 24) = v46 + 1;
                  goto LABEL_15;
                case 2:
LABEL_62:
                  v38 = **(char ***)(v10 + 8);
                  if ( v38[1] == 99
                    && ((v48 = *v38, (unsigned __int8)(v48 - 114) <= 1u) || (unsigned __int8)(v48 - 99) <= 1u) )
                  {
                    v39 = sub_574B04(a1);
                  }
                  else
                  {
                    v39 = sub_57781C(a1);
                  }
                  if ( !strcmp(v26, "cl") )
                  {
                    v40 = sub_5743B0(a1, 69);
                  }
                  else if ( !strcmp(v26, "dt") || !strcmp(v26, "pt") )
                  {
                    v40 = sub_5764B0(a1);
                    if ( **(_BYTE **)(a1 + 24) == 73 )
                    {
                      v53 = v40;
                      v42 = sub_572EC4(a1);
                      v40 = sub_571F00(a1, 4, v53, v42);
                    }
                  }
                  else
                  {
                    v40 = sub_57781C(a1);
                  }
                  v41 = sub_571F00(a1, 56, v39, v40);
                  v14 = sub_571F00(a1, 55, v10, v41);
                  goto LABEL_26;
                case 3:
LABEL_51:
                  if ( !strcmp(v26, "qu") )
                  {
                    v31 = sub_57781C(a1);
                    v54 = sub_57781C(a1);
                    v35 = sub_57781C(a1);
                    v32 = v54;
                  }
                  else
                  {
                    if ( *v26 != 110 )
                      goto LABEL_40;
                    v30 = *((unsigned __int8 *)v26 + 1);
                    if ( v30 != 97 && v30 != 119 )
                      goto LABEL_40;
                    v31 = sub_5743B0(a1, 95);
                    v32 = sub_574B04(a1);
                    v33 = *(unsigned __int8 **)(a1 + 24);
                    v34 = *v33;
                    if ( v34 == 69 )
                    {
                      v35 = 0;
                      *(_QWORD *)(a1 + 24) = v33 + 1;
                    }
                    else if ( v34 == 112 )
                    {
                      if ( v33[1] != 105 )
                        goto LABEL_40;
                      *(_QWORD *)(a1 + 24) = v33 + 2;
                      v56 = v32;
                      v35 = sub_5743B0(a1, 69);
                      v32 = v56;
                    }
                    else
                    {
                      v52 = v32;
                      if ( v34 != 105 || v33[1] != 108 )
                        goto LABEL_40;
                      v35 = sub_57781C(a1);
                      v32 = v52;
                    }
                  }
                  v36 = sub_571F00(a1, 59, v32, v35);
                  v37 = sub_571F00(a1, 58, v31, v36);
                  v14 = sub_571F00(a1, 57, v10, v37);
                  break;
                default:
                  goto LABEL_40;
              }
              goto LABEL_26;
            }
            v13 = sub_574B04(a1);
            break;
          case '2':
            switch ( *(_DWORD *)(v10 + 8) )
            {
              case 0:
                goto LABEL_49;
              case 1:
                goto LABEL_15;
              case 2:
                v26 = 0;
                goto LABEL_62;
              case 3:
                v26 = 0;
                goto LABEL_51;
              default:
                goto LABEL_40;
            }
          case '3':
            v12 = *(_BYTE **)(a1 + 24);
            if ( *v12 == 95 )
            {
              *(_QWORD *)(a1 + 24) = v12 + 1;
              v13 = sub_5743B0(a1, 69);
            }
            else
            {
LABEL_15:
              v13 = sub_57781C(a1);
            }
            break;
          default:
            goto LABEL_40;
        }
LABEL_16:
        v14 = sub_571F00(a1, 54, v10, v13);
LABEL_26:
        *(_DWORD *)(a1 + 84) = v7;
        if ( !v14 )
          return 0;
        goto LABEL_22;
    }
    if ( v8 == 102 )
      break;
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( v8 != 111 )
      {
        if ( (v8 == 116 || v8 == 105) && v3[1] == 108 )
        {
          v28 = 0;
          if ( v8 == 116 )
          {
            v28 = sub_574B04(a1);
            v3 = *(unsigned __int8 **)(a1 + 24);
          }
          *(_QWORD *)(a1 + 24) = v3 + 2;
          v51 = v28;
          v29 = sub_5743B0(a1, 69);
          v14 = sub_571F00(a1, 48, v51, v29);
          goto LABEL_26;
        }
        goto LABEL_10;
      }
      if ( v3[1] != 110 )
        goto LABEL_10;
      *(_QWORD *)(a1 + 24) = v3 + 2;
    }
    v15 = sub_5764B0(a1);
    if ( !v15 )
      goto LABEL_40;
    v14 = v15;
    if ( **(_BYTE **)(a1 + 24) == 73 )
    {
      v50 = v15;
      v18 = sub_572EC4(a1);
      v14 = sub_571F00(a1, 4, v50, v18);
      goto LABEL_26;
    }
LABEL_21:
    *(_DWORD *)(a1 + 84) = v7;
LABEL_22:
    v16 = sub_571F00(a1, 46, v14, 0);
    *v6 = v16;
    if ( !v16 )
      return 0;
    v3 = *(unsigned __int8 **)(a1 + 24);
    v6 = (__int64 *)(v16 + 16);
    if ( *v3 == v2 )
    {
      *(_QWORD *)(a1 + 24) = v3 + 1;
      return v57;
    }
  }
  if ( v3[1] != 112 )
    goto LABEL_10;
  *(_QWORD *)(a1 + 24) = v3 + 2;
  if ( v3[2] == 84 )
  {
    v21 = 0;
    *(_QWORD *)(a1 + 24) = v3 + 3;
  }
  else
  {
    LODWORD(v21) = sub_572BBC(a1) + 1;
    if ( !(_DWORD)v21 )
      goto LABEL_40;
    v21 = (int)v21;
  }
  v22 = *(_DWORD *)(a1 + 40);
  if ( v22 < *(_DWORD *)(a1 + 44) )
  {
    v23 = *(_QWORD *)(a1 + 32);
    v24 = 24LL * v22;
    *(_DWORD *)(a1 + 40) = v22 + 1;
    v14 = v23 + v24;
    if ( v23 + v24 )
    {
      *(_DWORD *)(v23 + v24) = 6;
      *(_QWORD *)(v14 + 8) = v21;
      goto LABEL_21;
    }
  }
LABEL_40:
  *(_DWORD *)(a1 + 84) = v7;
  return 0;
}

