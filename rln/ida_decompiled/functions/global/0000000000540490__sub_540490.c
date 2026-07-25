/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540490
 * Mangled: sub_540490
 * Demangled: sub_540490
 *
 * Callers: 10
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x000000000053E1E4  sub_53E1E4
 *   0x00000000005408D8  sub_5408D8
 *   0x00000000005408FC  sub_5408FC
 *   0x0000000000540920  sub_540920
 *   0x0000000000540944  sub_540944
 *   0x00000000005409B0  sub_5409B0
 *   0x0000000000540A1C  sub_540A1C
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053FC7C  sub_53FC7C
 *   0x000000000053FCF8  sub_53FCF8
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 98
 *   insn=0x00000000005404C8 string=0x00000000005404CC " "
 *   insn=0x00000000005404CC string=0x00000000005404D0 "`"
 *   insn=0x00000000005404D4 string=0x00000000005404D8 "t"
 *   insn=0x00000000005404DC string=0x00000000005404E0 "?"
 *   insn=0x00000000005404E0 string=0x00000000005404E4 "m"
 *   insn=0x00000000005404F0 string=0x00000000005404F4 "A"
 *   insn=0x00000000005404F4 string=0x00000000005404F8 "?"
 *   insn=0x0000000000540520 string=0x0000000000540524 "`"
 *   insn=0x0000000000540524 string=0x0000000000540528 "&"
 *   insn=0x0000000000540528 string=0x00000000001F85C0 "0'"
 *   insn=0x000000000054053C string=0x0000000000540540 "!"
 *   insn=0x0000000000540540 string=0x0000000000540544 " "
 *   insn=0x0000000000540548 string=0x000000000054054C " "
 *   insn=0x0000000000540570 string=0x0000000000540574 " "
 *   insn=0x0000000000540578 string=0x000000000054057C "!"
 *   insn=0x0000000000540580 string=0x0000000000540584 "! @"
 *   insn=0x0000000000540584 string=0x0000000000540588 "!"
 *   insn=0x00000000005405BC string=0x00000000005405C0 "c"
 *   insn=0x00000000005405C0 string=0x00000000005405C4 "c0@"
 *   insn=0x00000000005405C4 string=0x00000000005405C8 "`"
 *   insn=0x00000000005405CC string=0x00000000005405D0 "`"
 *   insn=0x00000000005405D8 string=0x00000000005405DC "a"
 *   insn=0x00000000005405E0 string=0x00000000005405E4 "! @"
 *   insn=0x00000000005405E4 string=0x00000000005405E8 "!"
 *   insn=0x00000000005405EC string=0x00000000005405F0 "`"
 *   insn=0x00000000005405F4 string=0x00000000005405F8 "`"
 *   insn=0x000000000054060C string=0x0000000000540610 "c"
 *   insn=0x0000000000540610 string=0x0000000000540614 "c0@"
 *   insn=0x0000000000540614 string=0x0000000000540618 "`"
 *   insn=0x0000000000540620 string=0x0000000000540624 "`"
 *   insn=0x0000000000540628 string=0x000000000054062C "a"
 *   insn=0x0000000000540630 string=0x0000000000540634 "! @"
 *   insn=0x0000000000540634 string=0x0000000000540638 "!"
 *   insn=0x0000000000540638 string=0x000000000054063C "v"
 *   insn=0x0000000000540640 string=0x0000000000540644 "`"
 *   insn=0x0000000000540648 string=0x000000000054064C "t"
 *   insn=0x0000000000540650 string=0x0000000000540654 "@"
 *   insn=0x0000000000540660 string=0x0000000000540664 "6"
 *   insn=0x0000000000540674 string=0x0000000000540678 "l"
 *   insn=0x0000000000540684 string=0x0000000000540688 "!"
 *   insn=0x0000000000540690 string=0x0000000000540694 "`"
 *   insn=0x000000000054069C string=0x00000000005406A0 "t"
 *   insn=0x00000000005406AC string=0x00000000005406B0 "?"
 *   insn=0x00000000005406B0 string=0x00000000005406B4 "c"
 *   insn=0x00000000005406B4 string=0x0000000000540680 "8"
 *   insn=0x00000000005406BC string=0x00000000005406C0 "B4@"
 *   insn=0x00000000005406C0 string=0x00000000005406C4 "@"
 *   insn=0x00000000005406C8 string=0x00000000005406CC "!"
 *   insn=0x00000000005406CC string=0x00000000005406D0 "`"
 *   insn=0x00000000005406D4 string=0x00000000005406D8 "a"
 *   insn=0x00000000005406DC string=0x00000000005406E0 "! @"
 *   insn=0x00000000005406E0 string=0x00000000005406E4 "!"
 *   insn=0x00000000005406E4 string=0x00000000005406E8 "K"
 *   insn=0x00000000005406E8 string=0x00000000005406EC "`"
 *   insn=0x00000000005406F0 string=0x00000000005406F4 "`"
 *   insn=0x00000000005406FC string=0x0000000000540700 "5"
 *   insn=0x0000000000540710 string=0x0000000000540714 "l"
 *   insn=0x0000000000540714 string=0x0000000000540718 "}"
 *   insn=0x0000000000540720 string=0x0000000000540724 "!"
 *   insn=0x000000000054072C string=0x0000000000540730 "`"
 *   insn=0x0000000000540738 string=0x000000000054073C "t"
 *   insn=0x0000000000540748 string=0x000000000054074C "?"
 *   insn=0x000000000054074C string=0x0000000000540750 "c"
 *   insn=0x0000000000540750 string=0x000000000054071C "6"
 *   insn=0x0000000000540758 string=0x000000000054075C "B4@"
 *   insn=0x000000000054075C string=0x0000000000540760 "@"
 *   insn=0x0000000000540764 string=0x0000000000540768 "!"
 *   insn=0x0000000000540768 string=0x000000000054076C "`"
 *   insn=0x0000000000540774 string=0x0000000000540778 "`"
 *   insn=0x0000000000540778 string=0x000000000054077C "b"
 *   insn=0x0000000000540794 string=0x0000000000540798 " "
 *   insn=0x000000000054079C string=0x00000000005407A0 "`"
 *   insn=0x00000000005407A4 string=0x00000000005407A8 "t"
 *   insn=0x00000000005407BC string=0x00000000005407C0 "`"
 *   insn=0x00000000005407C8 string=0x00000000005407CC " "
 *   insn=0x00000000005407D0 string=0x00000000005407D4 "`"
 *   insn=0x00000000005407D8 string=0x00000000005407DC "t"
 *   insn=0x00000000005407F8 string=0x00000000005407FC "B"
 *   insn=0x00000000005407FC string=0x0000000000540800 "@"
 *   insn=0x000000000054081C string=0x0000000000540820 "B"
 *   insn=0x0000000000540820 string=0x0000000000540824 "@"
 *   insn=0x0000000000540838 string=0x000000000054083C "i"
 *   insn=0x0000000000540838 string=0x000000000054088C "U"
 *   insn=0x000000000054083C string=0x0000000000540840 "`"
 *   insn=0x000000000054083C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000540844 string=0x0000000000540848 "s"
 *   insn=0x0000000000540848 string=0x000000000054084C "`"@"
 *   insn=0x000000000054084C string=0x0000000000540850 "a"
 *   insn=0x0000000000540854 string=0x0000000000540858 "`""
 *   insn=0x0000000000540858 string=0x000000000054085C "a"
 *   insn=0x0000000000540868 string=0x000000000054086C "I"
 *   insn=0x000000000054086C string=0x00000000001FD590 "0'"
 *   insn=0x000000000054088C string=0x0000000000540890 "`"
 *   insn=0x0000000000540894 string=0x0000000000540898 "`"
 *   insn=0x00000000005408A0 string=0x00000000005408A4 "!"
 *   insn=0x00000000005408A8 string=0x00000000005408AC "b"
 *   insn=0x00000000005408AC string=0x00000000005408B0 "8"
 *   insn=0x00000000005408C4 string=0x00000000005408C8 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_540490(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  char *v11; // x20
  __int64 v12; // x25
  __int64 v13; // x2
  char *v14; // x0
  __int64 v15; // x1
  _BOOL4 v16; // w26
  char *v17; // x20
  __int64 v18; // x0
  bool v20; // zf
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  char *v29; // x20
  __int64 v30; // x22
  unsigned int v31; // w24
  __int64 v32; // x0
  _QWORD *v33; // x0
  _BYTE *v34; // x1
  __int64 v35; // x21
  unsigned int v36; // w22
  _QWORD *v37; // x0
  _BYTE *v38; // x1
  _BYTE *v39; // x24
  _BYTE *v40; // x22
  char v41; // [xsp+0h] [xbp+0h]
  _BYTE v42[8]; // [xsp+70h] [xbp+70h] BYREF
  _QWORD *v43; // [xsp+78h] [xbp+78h]

  sub_53FC7C((__int64)v42, a1);
  if ( v42[0] )
  {
    v11 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    v12 = *((_QWORD *)v11 + 2);
    if ( v12 <= a3 )
    {
      v20 = a3 == (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v11 + 29) + 96LL))(
                    *((_QWORD *)v11 + 29),
                    a2,
                    a3);
      v21 = *a1;
      if ( !v20 )
        goto LABEL_13;
      goto LABEL_15;
    }
    v13 = *((unsigned int *)v11 + 6);
    v14 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    v15 = (unsigned __int8)v13 & 0xB0;
    v16 = v15 == 32;
    if ( (_DWORD)v15 != 32 )
    {
      v30 = v12 - a3;
      if ( v11[225] )
      {
        v31 = (unsigned __int8)v11[224];
        v14 = (char *)a1 + *(_QWORD *)(*a1 - 24);
      }
      else
      {
        v39 = (_BYTE *)*((_QWORD *)v11 + 30);
        if ( !v39 )
          sub_5652C8((unsigned __int8)v11[225]);
        if ( v39[56] )
        {
          v31 = (unsigned __int8)v39[89];
        }
        else
        {
          sub_51FEA0(*((_BYTE **)v11 + 30), v15, v13, v6, v7, v8, v9, v10, v41);
          v31 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v39 + 48LL))(v39, 32);
        }
        v11[224] = v31;
        v11[225] = 1;
        v11 = (char *)a1 + *(_QWORD *)(*a1 - 24);
        v14 = v11;
      }
      if ( v30 > 0 )
      {
        while ( 1 )
        {
          v33 = (_QWORD *)*((_QWORD *)v11 + 29);
          v34 = (_BYTE *)v33[5];
          if ( (unsigned __int64)v34 < v33[6] )
          {
            *v34 = v31;
            ++v33[5];
          }
          else if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*v33 + 104LL))(v33, v31) == -1 )
          {
            sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
            v14 = (char *)a1 + *(_QWORD *)(*a1 - 24);
            goto LABEL_4;
          }
          --v30;
          v32 = *a1;
          if ( !v30 )
            break;
          v11 = (char *)a1 + *(_QWORD *)(v32 - 24);
        }
        v14 = (char *)a1 + *(_QWORD *)(v32 - 24);
      }
    }
LABEL_4:
    if ( *((_DWORD *)v14 + 8) )
      goto LABEL_5;
    if ( a3 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v14 + 29) + 96LL))(
                 *((_QWORD *)v14 + 29),
                 a2,
                 a3) )
      sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
    if ( !v16 )
      goto LABEL_14;
    v29 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    if ( *((_DWORD *)v29 + 8) )
    {
      v14 = (char *)a1 + *(_QWORD *)(*a1 - 24);
      goto LABEL_5;
    }
    v35 = v12 - a3;
    if ( v29[225] )
    {
      v36 = (unsigned __int8)v29[224];
      v14 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    }
    else
    {
      v40 = (_BYTE *)*((_QWORD *)v29 + 30);
      if ( !v40 )
        sub_5652C8((unsigned __int8)v29[225]);
      if ( v40[56] )
      {
        v36 = (unsigned __int8)v40[89];
      }
      else
      {
        sub_51FEA0(*((_BYTE **)v29 + 30), v22, v23, v24, v25, v26, v27, v28, v41);
        v36 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v40 + 48LL))(v40, 32);
      }
      v29[224] = v36;
      v29[225] = 1;
      v29 = (char *)a1 + *(_QWORD *)(*a1 - 24);
      v14 = v29;
    }
    if ( v35 > 0 )
    {
      while ( 1 )
      {
        v37 = (_QWORD *)*((_QWORD *)v29 + 29);
        v38 = (_BYTE *)v37[5];
        if ( (unsigned __int64)v38 < v37[6] )
        {
          *v38 = v36;
          ++v37[5];
        }
        else if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*v37 + 104LL))(v37, v36) == -1 )
        {
          v21 = *a1;
LABEL_13:
          sub_520C14((__int64)a1 + *(_QWORD *)(v21 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(v21 - 24) + 32) | 1);
LABEL_14:
          v21 = *a1;
LABEL_15:
          v14 = (char *)a1 + *(_QWORD *)(v21 - 24);
          break;
        }
        --v35;
        v21 = *a1;
        if ( !v35 )
          goto LABEL_15;
        v29 = (char *)a1 + *(_QWORD *)(v21 - 24);
      }
    }
LABEL_5:
    *((_QWORD *)v14 + 2) = 0;
  }
  v17 = (char *)v43 + *(_QWORD *)(*v43 - 24LL);
  if ( (*((_DWORD *)v17 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v18 = *((_QWORD *)v17 + 29);
  if ( !v18 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18) != -1 )
    return a1;
  sub_520C14((__int64)v43 + *(_QWORD *)(*v43 - 24LL), *(_DWORD *)((char *)v43 + *(_QWORD *)(*v43 - 24LL) + 32) | 1);
  return a1;
}

