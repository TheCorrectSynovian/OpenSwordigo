/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F28AC
 * Mangled: sub_4F28AC
 * Demangled: sub_4F28AC
 *
 * Callers: 1
 *   0x00000000004EFACC  sub_4EFACC
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FDBA0  sub_4FDBA0
 *   0x00000000004FDC7C  sub_4FDC7C
 *   0x00000000004FDD68  sub_4FDD68
 *   0x00000000004FDE2C  sub_4FDE2C
 *   0x00000000004FE088  sub_4FE088
 *   0x00000000005001D0  sub_5001D0
 *   0x000000000050072C  sub_50072C
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 98
 *   insn=0x00000000004F28C4 string=0x00000000004F28C8 "Z"
 *   insn=0x00000000004F28C8 string=0x00000000004F28CC "H"
 *   insn=0x00000000004F28DC string=0x00000000004F28E0 "3@"
 *   insn=0x00000000004F28E8 string=0x00000000004F28EC "h*A9i"
 *   insn=0x00000000004F28EC string=0x00000000004F28F0 "i"
 *   insn=0x00000000004F28F0 string=0x00000000004F28F4 "k2@"
 *   insn=0x00000000004F28F4 string=0x00000000004F28F8 ""
 *   insn=0x00000000004F28F8 string=0x00000000004F28FC "h*"
 *   insn=0x00000000004F28FC string=0x00000000004F2900 "h"
 *   insn=0x00000000004F2900 string=0x00000000004F2904 ")"
 *   insn=0x00000000004F2904 string=0x00000000004F2908 "\n}Ay*"
 *   insn=0x00000000004F2908 string=0x00000000004F290C "*"
 *   insn=0x00000000004F290C string=0x00000000004F2910 "K\t"
 *   insn=0x00000000004F2910 string=0x00000000004F2914 "\n"
 *   insn=0x00000000004F2914 string=0x00000000004F2918 "*"
 *   insn=0x00000000004F2918 string=0x00000000004F291C "K\t"
 *   insn=0x00000000004F291C string=0x00000000004F2920 ""
 *   insn=0x00000000004F2920 string=0x00000000004F2924 "("
 *   insn=0x00000000004F2924 string=0x00000000004F2928 "\t"
 *   insn=0x00000000004F2928 string=0x00000000004F292C "("
 *   insn=0x00000000004F2934 string=0x00000000004F2938 "8"
 *   insn=0x00000000004F2938 string=0x00000000004F293C "a "
 *   insn=0x00000000004F2940 string=0x00000000004F2944 "z7"
 *   insn=0x00000000004F2944 string=0x00000000004F2948 "!"
 *   insn=0x00000000004F2948 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F294C string=0x00000000004F2950 "!"
 *   insn=0x00000000004F2968 string=0x00000000004F296C "B8"
 *   insn=0x00000000004F2984 string=0x00000000004FDC7C ""
 *   insn=0x00000000004F2988 string=0x00000000004F2994 ""
 *   insn=0x00000000004F299C string=0x00000000004F29A0 "h*A9"
 *   insn=0x00000000004F29B0 string=0x00000000004F29B4 "h"
 *   insn=0x00000000004F29B8 string=0x00000000004F29BC "i"
 *   insn=0x00000000004F29BC string=0x00000000004F29C0 "*@"
 *   insn=0x00000000004F29C0 string=0x00000000004F29C4 "H)A9"
 *   insn=0x00000000004F29C4 string=0x00000000004F29C8 ""
 *   insn=0x00000000004F29C8 string=0x00000000004F29CC "K)"
 *   insn=0x00000000004F29D0 string=0x00000000004F29D4 "I"
 *   insn=0x00000000004F29D4 string=0x00000000004F29D8 "H1@"
 *   insn=0x00000000004F29E0 string=0x00000000004F29E4 ")"
 *   insn=0x00000000004F29EC string=0x00000000004F29F0 "k"
 *   insn=0x00000000004F29F4 string=0x00000000004F29F8 "C"
 *   insn=0x00000000004F29F8 string=0x00000000004F2A40 "k"
 *   insn=0x00000000004F29FC string=0x00000000004F2A00 "p"
 *   insn=0x00000000004F2A14 string=0x00000000004F2A18 "O"
 *   insn=0x00000000004F2A24 string=0x00000000004F2A28 "0"
 *   insn=0x00000000004F2A28 string=0x00000000004F2A2C "1"
 *   insn=0x00000000004F2A2C string=0x00000000004F2A30 "\n"
 *   insn=0x00000000004F2A30 string=0x00000000004F2A34 "(\n"
 *   insn=0x00000000004F2A34 string=0x00000000004F2A38 "!"
 *   insn=0x00000000004F2A38 string=0x00000000004F2A3C "m"
 *   insn=0x00000000004F2A40 string=0x00000000004F2A44 "k"
 *   insn=0x00000000004F2A44 string=0x00000000004F2A48 "k"
 *   insn=0x00000000004F2A4C string=0x00000000004F2A50 "J"
 *   insn=0x00000000004F2A50 string=0x00000000004F2A54 "K%@x"
 *   insn=0x00000000004F2A58 string=0x00000000004F2A5C "+"
 *   insn=0x00000000004F2A5C string=0x00000000004F2A60 "h\t"
 *   insn=0x00000000004F2A78 string=0x00000000004F2A7C "y"
 *   insn=0x00000000004F2A7C string=0x00000000004F2A80 "i"
 *   insn=0x00000000004F2A80 string=0x00000000004F2A84 "("
 *   insn=0x00000000004F2A84 string=0x00000000004F2A88 "h"
 *   insn=0x00000000004F2A88 string=0x00000000004F2A8C "("
 *   insn=0x00000000004F2A8C string=0x00000000004F2A90 ""3@9"
 *   insn=0x00000000004F2A98 string=0x00000000004F2A9C ")"
 *   insn=0x00000000004F2A9C string=0x00000000004F2AA0 "\n"
 *   insn=0x00000000004F2A9C string=0x00000000004F2B40 "(7@9"
 *   insn=0x00000000004F2AA4 string=0x00000000004F2AA8 "\t1@"
 *   insn=0x00000000004F2AA8 string=0x00000000004F2AAC "l"
 *   insn=0x00000000004F2AAC string=0x00000000004F2AB0 "J"
 *   insn=0x00000000004F2AB4 string=0x00000000004F2AB8 "k"
 *   insn=0x00000000004F2ABC string=0x00000000004F2AC0 "b"
 *   insn=0x00000000004F2AC8 string=0x00000000004F2B18 "l"
 *   insn=0x00000000004F2AD0 string=0x00000000004F2AD4 "m"
 *   insn=0x00000000004F2AEC string=0x00000000004F2AF0 "0zpx/zox"
 *   insn=0x00000000004F2AF0 string=0x00000000004F2AF4 "/zox"
 *   insn=0x00000000004F2AFC string=0x00000000004F2B00 "P"
 *   insn=0x00000000004F2B00 string=0x00000000004F2B04 "O"
 *   insn=0x00000000004F2B08 string=0x00000000004F2B0C "\t"
 *   insn=0x00000000004F2B10 string=0x00000000004F2B14 "L"
 *   insn=0x00000000004F2B18 string=0x00000000004F2B1C ""
 *   insn=0x00000000004F2B28 string=0x00000000004F2B2C "k"
 *   insn=0x00000000004F2B2C string=0x00000000004F2B30 "L"
 *   insn=0x00000000004F2B34 string=0x00000000004F2B38 ""
 *   insn=0x00000000004F2B44 string=0x00000000004F2B48 "a"
 *   insn=0x00000000004F2B44 string=0x00000000004F2B5C "h*A9"
 *   insn=0x00000000004F2B54 string=0x00000000004F2B58 ","
 *   insn=0x00000000004F2B58 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F2B60 string=0x00000000004F2B64 "h>"
 *   insn=0x00000000004F2B64 string=0x00000000004F2B68 "!@"
 *   insn=0x00000000004F2B6C string=0x00000000004FDE2C "0@"
 *   insn=0x00000000004F2B78 string=0x00000000004F2B7C "v"
 *   insn=0x00000000004F2B7C string=0x00000000004F2BA8 "!"
 *   insn=0x00000000004F2B8C string=0x00000000004F2B90 ";,"
 *   insn=0x00000000004F2BA0 string=0x00000000004F2BA4 ""
 *   insn=0x00000000004F2BA0 string=0x00000000005001D0 ""
 *   insn=0x00000000004F2BE0 string=0x00000000004F2BE4 "a,"
 *   insn=0x00000000004F2BE4 string=0x00000000004F2BE8 "H"
 *   insn=0x00000000004F2BE4 string=0x00000000004FDD68 "0@"
 *   insn=0x00000000004F2C14 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F28AC(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 *v8; // x19
  __int64 v11; // x9
  int v12; // w11
  unsigned __int8 v13; // w8
  unsigned __int16 *v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x24
  const char *v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w0
  char v20; // w8
  unsigned int v21; // w24
  __int64 v22; // x10
  unsigned __int8 v23; // w11
  int v24; // w8
  __int64 v25; // x9
  unsigned __int64 v26; // x14
  unsigned __int64 v27; // x12
  unsigned __int64 v28; // x14
  unsigned __int16 *v29; // x15
  __int64 v30; // x16
  unsigned int v31; // t1
  int v32; // w13
  unsigned __int16 *v33; // x10
  unsigned int v34; // t1
  __int64 v35; // x25
  __int64 v36; // x9
  __int64 v37; // x8
  unsigned int v38; // w2
  __int64 v39; // x14
  int v40; // w9
  __int64 v41; // x10
  unsigned __int64 v42; // x11
  __int64 v43; // x11
  _BOOL8 v44; // x12
  unsigned __int64 v45; // x13
  __int64 v46; // x14
  __int64 v47; // x16
  __int64 v48; // x15
  __int64 v49; // x13
  unsigned int v50; // w21
  __int64 v52; // [xsp+8h] [xbp-58h] BYREF
  int v53; // [xsp+10h] [xbp-50h]
  char v54; // [xsp+14h] [xbp-4Ch]
  char v55; // [xsp+15h] [xbp-4Bh]
  char v56; // [xsp+16h] [xbp-4Ah]
  __int64 v57; // [xsp+18h] [xbp-48h]

  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(__int64 **)(a1 + 48);
  v11 = *v8;
  v12 = *((_DWORD *)v8 + 12);
  v13 = *((_BYTE *)v8 + 74) + 3;
  *((_BYTE *)v8 + 74) = v13;
  v14 = (unsigned __int16 *)v8 + v13;
  v15 = *(_QWORD *)(v11 + 48);
  *(_DWORD *)(v15 + 16LL * v14[95] + 8) = v12;
  *(_DWORD *)(v15 + 16LL * v14[96] + 8) = v12;
  *(_DWORD *)(v15 + 16LL * v14[97] + 8) = v12;
  if ( *(_DWORD *)(a1 + 16) != 259 )
  {
    v16 = *(_QWORD **)(a1 + 56);
    v17 = (const char *)sub_50072C(a1, 259);
    v18 = sub_4EF3D4(v16, "'%s' expected", v17);
    sub_500968(a1, v18);
  }
  sub_500A74(a1);
  if ( a5 )
    v19 = sub_4FDC7C(v8, 32, a2, 131070);
  else
    v19 = sub_4FDBA0(v8);
  v53 = -1;
  v56 = 0;
  v20 = *((_BYTE *)v8 + 74);
  v55 = 0;
  v21 = v19;
  v54 = v20;
  v52 = v8[5];
  v8[5] = (__int64)&v52;
  v22 = *(_QWORD *)(a1 + 48);
  v23 = *(_BYTE *)(v22 + 74) + a4;
  *(_BYTE *)(v22 + 74) = v23;
  if ( a4 )
  {
    v24 = *(_DWORD *)(v22 + 48);
    v25 = *(_QWORD *)(*(_QWORD *)v22 + 48LL);
    v26 = a4 - 1 + 1LL;
    v27 = (int)a4;
    if ( v26 < 2 )
      goto LABEL_11;
    v28 = v26 - ((((_BYTE)a4 - 1) & 1) == 0);
    v27 = (int)a4 - v28;
    v29 = (unsigned __int16 *)(v22 + 2LL * v23 + 198 - 2LL * (int)a4);
    do
    {
      v30 = *(v29 - 1);
      v31 = *v29;
      v29 += 2;
      v28 -= 2LL;
      *(_DWORD *)(v25 + 16 * v30 + 8) = v24;
      *(_DWORD *)(v25 + 16LL * v31 + 8) = v24;
    }
    while ( v28 );
    if ( (((_BYTE)a4 - 1) & 1) == 0 )
    {
LABEL_11:
      v32 = -(int)v27;
      v33 = (unsigned __int16 *)(v22 + 2LL * v23 + 196 - 2 * v27);
      do
      {
        v34 = *v33++;
        ++v32;
        *(_DWORD *)(v25 + 16LL * v34 + 8) = v24;
      }
      while ( v32 );
    }
  }
  sub_4FE088(v8, a4);
  sub_4F0E8C(a1);
  v35 = v8[5];
  v36 = v8[3];
  v8[5] = *(_QWORD *)v35;
  v37 = *(_QWORD *)(v36 + 48);
  v38 = *(unsigned __int8 *)(v35 + 12);
  v39 = *(unsigned __int8 *)(v37 + 74);
  if ( (unsigned int)v39 > v38 )
  {
    v40 = *(_DWORD *)(v37 + 48);
    v41 = *(_QWORD *)(*(_QWORD *)v37 + 48LL);
    v42 = (unsigned __int8)(v39 - 1 - v38) + 1LL;
    if ( v42 >= 2 )
    {
      v44 = (((_BYTE)v39 - 1 - (_BYTE)v38) & 1) == 0;
      v45 = v42 - v44;
      v43 = v39 - (v42 - v44);
      v46 = v39 + 254;
      do
      {
        v47 = *(unsigned __int16 *)(v37 + 196 + 2LL * (unsigned __int8)v46);
        v48 = *(unsigned __int16 *)(v37 + 196 + 2LL * (unsigned __int8)(v46 + 1));
        v45 -= 2LL;
        v46 -= 2;
        *(_DWORD *)(v41 + 16 * v48 + 12) = v40;
        *(_DWORD *)(v41 + 16 * v47 + 12) = v40;
      }
      while ( v45 );
      if ( !v44 )
        goto LABEL_20;
    }
    else
    {
      v43 = *(unsigned __int8 *)(v37 + 74);
    }
    do
    {
      v49 = *(unsigned __int16 *)(v37 + 2LL * (unsigned __int8)--v43 + 196);
      *(_DWORD *)(v41 + 16 * v49 + 12) = v40;
    }
    while ( (unsigned __int8)v43 > v38 );
LABEL_20:
    *(_BYTE *)(v37 + 74) = v38;
  }
  if ( *(_BYTE *)(v35 + 13) )
    sub_4FDB84(v8, 35);
  *((_DWORD *)v8 + 15) = *((unsigned __int8 *)v8 + 74);
  sub_4FDE2C(v8, *(unsigned int *)(v35 + 8));
  sub_4FDE2C(v8, v21);
  if ( a5 )
  {
    v50 = sub_4FDC7C(v8, 31, a2, 131070);
    sub_5001D0(v8, a3);
  }
  else
  {
    sub_4FDB84(v8, 33);
    sub_5001D0(v8, a3);
    v50 = sub_4FDBA0(v8);
  }
  return sub_4FDD68(v8, v50, v21 + 1);
}

