/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF3C4
 * Mangled: sub_4FF3C4
 * Demangled: sub_4FF3C4
 *
 * Callers: 1
 *   0x00000000004F1154  sub_4F1154
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FF794  sub_4FF794
 *   0x00000000005001E8  sub_5001E8
 *   0x0000000000500404  sub_500404
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 82
 *   insn=0x00000000004FF3D4 string=0x00000000004FF3D8 "U"
 *   insn=0x00000000004FF3EC string=0x00000000004FF3F0 "?"
 *   insn=0x00000000004FF404 string=0x00000000004FF408 "?"
 *   insn=0x00000000004FF430 string=0x00000000004FF434 " "
 *   insn=0x00000000004FF434 string=0x00000000004FF478 "A"
 *   insn=0x00000000004FF45C string=0x00000000004FF460 "h*A9_"
 *   insn=0x00000000004FF460 string=0x00000000004FF464 "_"
 *   insn=0x00000000004FF464 string=0x00000000004FF468 "\n"
 *   insn=0x00000000004FF470 string=0x00000000004FF474 "S"
 *   insn=0x00000000004FF478 string=0x00000000004FF47C " "
 *   insn=0x00000000004FF48C string=0x00000000004FF490 ""
 *   insn=0x00000000004FF49C string=0x00000000004FF4A4 "(y"
 *   insn=0x00000000004FF4A4 string=0x00000000004FF4A8 ""
 *   insn=0x00000000004FF4AC string=0x00000000004FF53C "h"
 *   insn=0x00000000004FF4AC string=0x00000000004FF578 "h"
 *   insn=0x00000000004FF4B0 string=0x00000000004FF4B4 "]"
 *   insn=0x00000000004FF4DC string=0x00000000004FF4E0 "h*A9_"
 *   insn=0x00000000004FF4E0 string=0x00000000004FF4E4 "_"
 *   insn=0x00000000004FF4F0 string=0x00000000004FF4F4 "3"
 *   insn=0x00000000004FF510 string=0x00000000004FF514 "E"
 *   insn=0x00000000004FF51C string=0x00000000004FF520 "U"
 *   insn=0x00000000004FF52C string=0x00000000004FF530 "Q"
 *   insn=0x00000000004FF530 string=0x00000000004FF534 "A"
 *   insn=0x00000000004FF540 string=0x00000000004FF544 "@"
 *   insn=0x00000000004FF544 string=0x00000000004FF548 "?"
 *   insn=0x00000000004FF548 string=0x00000000004FF54C "\t\t"
 *   insn=0x00000000004FF54C string=0x00000000004FF550 ""
 *   insn=0x00000000004FF550 string=0x00000000004FF570 "\t"
 *   insn=0x00000000004FF554 string=0x00000000004FF558 "I"
 *   insn=0x00000000004FF55C string=0x00000000004FF564 "+"
 *   insn=0x00000000004FF55C string=0x0000000000599DD1 "`qT`Pql1"
 *   insn=0x00000000004FF568 string=0x00000000004FF56C "K"
 *   insn=0x00000000004FF574 string=0x00000000004FF778 "?"
 *   insn=0x00000000004FF578 string=0x00000000004FF57C "i>@"
 *   insn=0x00000000004FF57C string=0x00000000004FF580 "\n=G86"
 *   insn=0x00000000004FF580 string=0x00000000004FF584 "6"
 *   insn=0x00000000004FF584 string=0x00000000004FF588 "?"
 *   insn=0x00000000004FF58C string=0x00000000004FF590 "?"
 *   insn=0x00000000004FF594 string=0x00000000004FF598 "+"
 *   insn=0x00000000004FF598 string=0x00000000004FF59C "`"
 *   insn=0x00000000004FF5A0 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FF5AC string=0x00000000004FF5B0 "i>@"
 *   insn=0x00000000004FF5B0 string=0x00000000004FF5B4 ""
 *   insn=0x00000000004FF5B4 string=0x00000000004FF5B8 ")"
 *   insn=0x00000000004FF5CC string=0x00000000004FF5D0 "v>"
 *   insn=0x00000000004FF5DC string=0x00000000004FF5E0 "!"
 *   insn=0x00000000004FF5E0 string=0x00000000004FF604 "h"
 *   insn=0x00000000004FF5E8 string=0x00000000004FF5EC "i*A9"
 *   insn=0x00000000004FF5F4 string=0x00000000004FF5F8 "h>@"
 *   insn=0x00000000004FF5F8 string=0x00000000004FF5FC ""
 *   insn=0x00000000004FF5FC string=0x00000000004FF600 "h>"
 *   insn=0x00000000004FF608 string=0x00000000004FF60C "a"
 *   insn=0x00000000004FF614 string=0x00000000004FF618 "!!\t3"
 *   insn=0x00000000004FF61C string=0x00000000004FF620 "h"
 *   insn=0x00000000004FF62C string=0x00000000004FF630 "?"
 *   insn=0x00000000004FF634 string=0x00000000004FF638 "`"
 *   insn=0x00000000004FF638 string=0x00000000004FF63C "h"
 *   insn=0x00000000004FF640 string=0x00000000004FF648 "K"
 *   insn=0x00000000004FF648 string=0x00000000004FF64C "@"
 *   insn=0x00000000004FF650 string=0x00000000004FF654 ""
 *   insn=0x00000000004FF654 string=0x00000000004FF658 "?"
 *   insn=0x00000000004FF66C string=0x00000000004FF670 "Qi"
 *   insn=0x00000000004FF670 string=0x00000000004FF674 "q"
 *   insn=0x00000000004FF680 string=0x00000000004FF684 "?n"
 *   insn=0x00000000004FF68C string=0x00000000004FF690 "1""
 *   insn=0x00000000004FF6A8 string=0x00000000004FF6AC ")"
 *   insn=0x00000000004FF6B4 string=0x00000000004FF6B8 "?"
 *   insn=0x00000000004FF6C4 string=0x00000000004FF6C8 "@"
 *   insn=0x00000000004FF6C8 string=0x00000000004FF6CC "i"
 *   insn=0x00000000004FF6D0 string=0x00000000004FF6D8 "K"
 *   insn=0x00000000004FF6D8 string=0x00000000004FF6DC ")@"
 *   insn=0x00000000004FF6E0 string=0x00000000004FF6E4 ""
 *   insn=0x00000000004FF6E8 string=0x00000000004FF6EC "."
 *   insn=0x00000000004FF6FC string=0x00000000004FF700 "Qi"
 *   insn=0x00000000004FF700 string=0x00000000004FF704 "q"
 *   insn=0x00000000004FF710 string=0x00000000004FF714 "?n"
 *   insn=0x00000000004FF71C string=0x00000000004FF720 "1""
 *   insn=0x00000000004FF738 string=0x00000000004FF73C ""
 *   insn=0x00000000004FF778 string=0x00000000004FF77C "*]"
 *   insn=0x00000000004FF780 string=0x00000000004FF784 "*"
 *   insn=0x00000000004FF784 string=0x00000000004FF788 "\n"
 *   insn=0x00000000004FF790 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FF3C4(__int64 result, int a2, int *a3)
{
  __int64 v4; // x19
  signed int v5; // w2
  __int64 v6; // x1
  int v7; // w8
  signed int v8; // w2
  __int64 v9; // x9
  unsigned int *v10; // x8
  unsigned int v11; // w9
  int v12; // w9
  int v13; // w22
  int v14; // w8
  int v15; // w8
  int v16; // w9
  __int64 v17; // x8
  unsigned int *v18; // x14
  int *v19; // x15
  unsigned int v20; // w16
  int v21; // w14
  int v22; // w9
  __int64 v23; // x9
  unsigned int *v24; // x14
  int *v25; // x15
  unsigned int v26; // w16
  int v27; // w14
  int v28; // w8
  int v29; // [xsp+0h] [xbp-40h] BYREF
  __int64 v30; // [xsp+8h] [xbp-38h]
  __int64 v31; // [xsp+10h] [xbp-30h]
  __int64 v32; // [xsp+18h] [xbp-28h]

  v4 = result;
  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v31 = -1;
  v29 = 5;
  v30 = 0;
  switch ( a2 )
  {
    case 2:
      sub_4FE488(result, a3);
      if ( *a3 == 12 )
      {
        if ( a3[4] == a3[5] )
        {
LABEL_18:
          v6 = 20;
          return sub_4FF794(v4, v6, a3, &v29);
        }
        v8 = a3[2];
        if ( v8 >= *(unsigned __int8 *)(v4 + 74) )
        {
          sub_4FE674(v4, a3, v8);
          goto LABEL_18;
        }
      }
      sub_4FE5C0(v4, a3);
      goto LABEL_18;
    case 1:
      result = sub_4FE488(result, a3);
      switch ( *a3 )
      {
        case 1:
        case 3:
          v7 = 2;
          goto LABEL_35;
        case 2:
        case 4:
        case 5:
          v7 = 3;
          goto LABEL_35;
        case 10:
          v9 = a3[2];
          v10 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)v4 + 24LL) + 4 * v9);
          if ( (int)v9 >= 1 && (v11 = *(v10 - 1), (char)byte_599DD1[v11 & 0x3F] < 0) )
            --v10;
          else
            v11 = *v10;
          *v10 = v11 & 0xFFFFC03F | (((v11 & 0x3FC0) == 0) << 6);
          break;
        case 11:
          v12 = *(_DWORD *)(v4 + 60);
          v13 = v12 + 1;
          if ( v12 >= *(unsigned __int8 *)(*(_QWORD *)v4 + 115LL) )
          {
            if ( v12 >= 249 )
              sub_500968(*(_QWORD *)(v4 + 24), "function or expression too complex");
            *(_BYTE *)(*(_QWORD *)v4 + 115LL) = v13;
          }
          *(_DWORD *)(v4 + 60) = v13;
          sub_500404(v4, a3, (unsigned int)v12);
          if ( *a3 == 12 )
            goto LABEL_31;
          goto LABEL_34;
        case 12:
LABEL_31:
          v14 = a3[2];
          if ( (v14 & 0x100) == 0 && v14 >= *(unsigned __int8 *)(v4 + 74) )
            --*(_DWORD *)(v4 + 60);
LABEL_34:
          result = sub_5001E8(
                     v4,
                     ((unsigned __int16)a3[2] << 23) | 0x13u,
                     *(unsigned int *)(*(_QWORD *)(v4 + 24) + 8LL));
          v7 = 11;
          a3[2] = result;
LABEL_35:
          *a3 = v7;
          break;
        default:
          break;
      }
      v16 = a3[4];
      v15 = a3[5];
      a3[4] = v15;
      a3[5] = v16;
      if ( v16 != -1 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
        do
        {
          v18 = (unsigned int *)(v17 + 4LL * v16);
          if ( v16 < 1 || (v19 = (int *)(v18 - 1), v20 = *(v18 - 1), ((char)byte_599DD1[v20 & 0x3F] & 0x80000000) == 0) )
          {
            v20 = *v18;
            v19 = (int *)(v17 + 4LL * v16);
          }
          if ( (v20 & 0x3F) == 0x1B )
            *v19 = v20 & 0x7FC000 | (v20 >> 17) & 0x7FC0 | 0x1A;
          v21 = (*v18 >> 14) - 0x1FFFF;
          v22 = v16 + v21;
          if ( v21 == -1 )
            v16 = -1;
          else
            v16 = v22 + 1;
        }
        while ( v16 != -1 );
        v15 = a3[4];
      }
      if ( v15 != -1 )
      {
        v23 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
        do
        {
          v24 = (unsigned int *)(v23 + 4LL * v15);
          if ( v15 < 1 || (v25 = (int *)(v24 - 1), v26 = *(v24 - 1), ((char)byte_599DD1[v26 & 0x3F] & 0x80000000) == 0) )
          {
            v26 = *v24;
            v25 = (int *)(v23 + 4LL * v15);
          }
          if ( (v26 & 0x3F) == 0x1B )
            *v25 = v26 & 0x7FC000 | (v26 >> 17) & 0x7FC0 | 0x1A;
          v27 = (*v24 >> 14) - 0x1FFFF;
          v28 = v15 + v27;
          if ( v27 == -1 )
            v15 = -1;
          else
            v15 = v28 + 1;
        }
        while ( v15 != -1 );
      }
      break;
    case 0:
      if ( *a3 == 5 && a3[4] == -1 && a3[5] == -1 )
        goto LABEL_11;
      sub_4FE488(result, a3);
      if ( *a3 == 12 )
      {
        if ( a3[4] == a3[5] )
        {
LABEL_11:
          v6 = 18;
          return sub_4FF794(v4, v6, a3, &v29);
        }
        v5 = a3[2];
        if ( v5 >= *(unsigned __int8 *)(v4 + 74) )
        {
          sub_4FE674(v4, a3, v5);
          v6 = 18;
          return sub_4FF794(v4, v6, a3, &v29);
        }
      }
      sub_4FE5C0(v4, a3);
      goto LABEL_11;
  }
  return result;
}

