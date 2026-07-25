/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2614
 * Mangled: sub_4F2614
 * Demangled: sub_4F2614
 *
 * Callers: 3
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F2614  sub_4F2614
 *
 * Callees: 4
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000005007A0  sub_5007A0
 *
 * Referenced strings: 56
 *   insn=0x00000000004F2644 string=0x00000000004F2648 ")"
 *   insn=0x00000000004F264C string=0x00000000004F2650 "J"
 *   insn=0x00000000004F2650 string=0x00000000004F2654 ""
 *   insn=0x00000000004F2654 string=0x00000000004F2658 "J"
 *   insn=0x00000000004F2658 string=0x00000000004F265C "*ij"
 *   insn=0x00000000004F265C string=0x00000000004F2660 "_"
 *   insn=0x00000000004F2664 string=0x00000000004F2668 "\n"
 *   insn=0x00000000004F2664 string=0x00000000004F2694 ""
 *   insn=0x00000000004F2668 string=0x00000000004F266C "_\t"
 *   insn=0x00000000004F2680 string=0x00000000004F2684 "`\n"
 *   insn=0x00000000004F2684 string=0x00000000004F2688 "`"
 *   insn=0x00000000004F2688 string=0x00000000004F268C "h\n"
 *   insn=0x00000000004F268C string=0x00000000004F2690 "{"
 *   insn=0x00000000004F269C string=0x00000000004F26A0 "`\n"
 *   insn=0x00000000004F26A0 string=0x00000000004F26A4 "`"
 *   insn=0x00000000004F26A4 string=0x00000000004F26A8 "h\n"
 *   insn=0x00000000004F26B0 string=0x00000000004F26B4 "\t"
 *   insn=0x00000000004F26B8 string=0x00000000004F26BC "*1@9_"
 *   insn=0x00000000004F26BC string=0x00000000004F26C0 "_"
 *   insn=0x00000000004F26C4 string=0x00000000004F26C8 ")"
 *   insn=0x00000000004F26CC string=0x00000000004F26D0 "k"
 *   insn=0x00000000004F2704 string=0x00000000004F2708 "K"
 *   insn=0x00000000004F271C string=0x00000000004F2730 ""
 *   insn=0x00000000004F2720 string=0x00000000004F2724 "N"
 *   insn=0x00000000004F2728 string=0x00000000004F272C " \n"
 *   insn=0x00000000004F273C string=0x00000000004F2740 "?"
 *   insn=0x00000000004F2754 string=0x00000000004F2758 "A"
 *   insn=0x00000000004F2754 string=0x00000000004F2794 "A"
 *   insn=0x00000000004F2758 string=0x00000000004F275C "D"
 *   insn=0x00000000004F2758 string=0x000000000059A08F "function at line %d has more than %d %s"
 *   insn=0x00000000004F275C string=0x00000000004F2760 "!<"
 *   insn=0x00000000004F275C string=0x000000000059A11C "upvalues"
 *   insn=0x00000000004F2780 string=0x00000000004F2784 " "
 *   insn=0x00000000004F278C string=0x00000000004F2790 "$"
 *   insn=0x00000000004F278C string=0x00000000004F2804 "\t"
 *   insn=0x00000000004F2794 string=0x00000000004F2798 "C"
 *   insn=0x00000000004F2794 string=0x000000000059A06D "main function has more than %d %s"
 *   insn=0x00000000004F2798 string=0x00000000004F279C "!"
 *   insn=0x00000000004F279C string=0x00000000004F27A0 "cp"
 *   insn=0x00000000004F27A4 string=0x00000000004F27A8 ""
 *   insn=0x00000000004F27D0 string=0x00000000004F27D4 "!"
 *   insn=0x00000000004F27EC string=0x00000000004F27F0 " "
 *   insn=0x00000000004F27F0 string=0x00000000004F27F4 "("
 *   insn=0x00000000004F27F4 string=0x00000000004F27F8 " "
 *   insn=0x00000000004F27FC string=0x00000000004F2800 "\n"
 *   insn=0x00000000004F2804 string=0x00000000004F2808 "}@"
 *   insn=0x00000000004F280C string=0x00000000004F2810 " "
 *   insn=0x00000000004F2810 string=0x00000000004F2814 ")"
 *   insn=0x00000000004F2828 string=0x00000000004F282C "?"
 *   insn=0x00000000004F2830 string=0x00000000004F2850 "i"
 *   insn=0x00000000004F285C string=0x00000000004F2860 "i-"
 *   insn=0x00000000004F2860 string=0x00000000004F2864 "I"
 *   insn=0x00000000004F2864 string=0x00000000004F2868 "i1"
 *   insn=0x00000000004F2870 string=0x00000000004F2874 "H"
 *   insn=0x00000000004F2874 string=0x00000000004F2878 "`"
 *   insn=0x00000000004F289C string=0x00000000004F28A0 "(5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2614(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // x8
  __int64 v8; // x10
  __int64 result; // x0
  __int64 *v10; // x9
  __int64 v11; // x22
  int v12; // w24
  unsigned __int64 v13; // x9
  _DWORD *v14; // x10
  unsigned __int64 v15; // x8
  unsigned __int8 *v16; // x12
  int v17; // w8
  int v18; // w2
  _QWORD *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 *v22; // x25
  __int64 v23; // x9
  __int64 v24; // x11

  if ( !a1 )
  {
    result = 8;
    *(_QWORD *)(a3 + 16) = -1;
    *(_DWORD *)a3 = 8;
    *(_DWORD *)(a3 + 8) = 255;
    return result;
  }
  v7 = *(unsigned __int8 *)(a1 + 74);
  if ( !*(_BYTE *)(a1 + 74) )
    goto LABEL_14;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a1 + 2 * v7-- + 194);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 16 * v8) == a2 )
      break;
    if ( v7 + 1 < 2 )
      goto LABEL_14;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
LABEL_14:
    result = sub_4F2614(*(_QWORD *)(a1 + 16), a2, a3, 0);
    if ( (_DWORD)result == 8 )
      return result;
    v11 = *(_QWORD *)a1;
    v12 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
    v13 = *(unsigned __int8 *)(*(_QWORD *)a1 + 112LL);
    if ( *(_BYTE *)(*(_QWORD *)a1 + 112LL) )
    {
      v14 = (_DWORD *)(a3 + 8);
      v15 = 0;
      v16 = (unsigned __int8 *)(a1 + 76);
      while ( *(_DWORD *)a3 != *(v16 - 1) || *v14 != *v16 )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= v13 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
          if ( (unsigned int)v13 >= 0x3C )
          {
            v18 = *(_DWORD *)(v11 + 96);
            v19 = *(_QWORD **)(a1 + 32);
            if ( v18 )
              v20 = sub_4EF3D4(v19, "function at line %d has more than %d %s", v18, 60, "upvalues");
            else
              v20 = sub_4EF3D4(v19, "main function has more than %d %s", 60, "upvalues");
            sub_5007A0(*(_QWORD *)(a1 + 24), v20, 0);
          }
          goto LABEL_24;
        }
      }
      goto LABEL_36;
    }
    v17 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
LABEL_24:
    if ( v17 <= (int)v13 )
    {
      v22 = (__int64 *)(v11 + 56);
      v21 = sub_4EEC70(*(_QWORD *)(a1 + 32), *(_QWORD *)(v11 + 56), (int *)(*(_QWORD *)a1 + 72LL), 8u, 2147483645, "");
      v17 = *(_DWORD *)(v11 + 72);
      *(_QWORD *)(v11 + 56) = v21;
      if ( v12 >= v17 )
        goto LABEL_32;
    }
    else
    {
      v22 = (__int64 *)(v11 + 56);
      v21 = *(_QWORD *)(v11 + 56);
      if ( v12 >= v17 )
      {
LABEL_32:
        v15 = *(unsigned __int8 *)(v11 + 112);
        *(_QWORD *)(v21 + 8 * v15) = a2;
        if ( (*(_BYTE *)(a2 + 9) & 3) != 0 && (*(_BYTE *)(v11 + 9) & 4) != 0 )
        {
          sub_4EE334(*(_QWORD *)(a1 + 32), v11);
          v15 = *(unsigned __int8 *)(v11 + 112);
        }
        v24 = a1 + 2 * v15;
        *(_BYTE *)(v24 + 75) = *(_DWORD *)a3;
        v14 = (_DWORD *)(a3 + 8);
        *(_BYTE *)(v24 + 76) = *(_DWORD *)(a3 + 8);
        *(_BYTE *)(v11 + 112) = v15 + 1;
LABEL_36:
        result = 7;
        *v14 = v15;
        *(_DWORD *)a3 = 7;
        return result;
      }
    }
    v23 = v12;
    do
    {
      *(_QWORD *)(v21 + 8 * v23) = 0;
      v21 = *v22;
      ++v23;
    }
    while ( v17 != v23 );
    goto LABEL_32;
  }
  result = 6;
  *(_QWORD *)(a3 + 16) = -1;
  *(_DWORD *)a3 = 6;
  *(_DWORD *)(a3 + 8) = v7;
  if ( !a4 )
  {
    v10 = *(__int64 **)(a1 + 40);
    if ( v10 )
    {
      result = 6;
      while ( *((unsigned __int8 *)v10 + 12) > (int)v7 )
      {
        v10 = (__int64 *)*v10;
        if ( !v10 )
          return result;
      }
      *((_BYTE *)v10 + 13) = 1;
      return 6;
    }
    else
    {
      return 6;
    }
  }
  return result;
}

