/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F63C
 * Mangled: sub_52F63C
 * Demangled: sub_52F63C
 *
 * Callers: 8
 *   0x000000000052FE5C  sub_52FE5C
 *   0x000000000052FF0C  sub_52FF0C
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *
 * Callees: 0
 *
 * Referenced strings: 135
 *   insn=0x000000000052F63C string=0x000000000052F640 "!"
 *   insn=0x000000000052F640 string=0x000000000052F644 "\n"
 *   insn=0x000000000052F644 string=0x000000000052F648 ""
 *   insn=0x000000000052F648 string=0x000000000052F64C "c"
 *   insn=0x000000000052F654 string=0x000000000052F658 "\t"
 *   insn=0x000000000052F660 string=0x000000000052F664 "?"
 *   insn=0x000000000052F664 string=0x000000000052F668 "m"
 *   insn=0x000000000052F674 string=0x000000000052F678 "k"
 *   insn=0x000000000052F674 string=0x000000000052FDCC "J"
 *   insn=0x000000000052F67C string=0x000000000052F680 "Hhk8"
 *   insn=0x000000000052F684 string=0x000000000052F688 "\t"
 *   insn=0x000000000052F698 string=0x000000000052F69C " "
 *   insn=0x000000000052F69C string=0x000000000052F940 "J"
 *   insn=0x000000000052F6A4 string=0x000000000052F6A8 "m"
 *   insn=0x000000000052F6D0 string=0x000000000052F6D4 "c<"
 *   insn=0x000000000052F6D8 string=0x000000000052F6DC "c"
 *   insn=0x000000000052F6E0 string=0x000000000052F6E4 "c"
 *   insn=0x000000000052F6E8 string=0x000000000052F6EC "g"
 *   insn=0x000000000052F70C string=0x000000000052F710 " \t"
 *   insn=0x000000000052F714 string=0x000000000052F718 "d"
 *   insn=0x000000000052F724 string=0x000000000052F728 "g"
 *   insn=0x000000000052F728 string=0x000000000052F72C "d"
 *   insn=0x000000000052F738 string=0x000000000052F73C "g@9d"
 *   insn=0x000000000052F73C string=0x000000000052F740 "d"
 *   insn=0x000000000052F748 string=0x000000000052F74C "@"
 *   insn=0x000000000052F74C string=0x000000000052F750 "g"
 *   insn=0x000000000052F750 string=0x000000000052F754 "d"
 *   insn=0x000000000052F760 string=0x000000000052F764 "g"
 *   insn=0x000000000052F764 string=0x000000000052F768 "d"
 *   insn=0x000000000052F774 string=0x000000000052F778 "g"
 *   insn=0x000000000052F778 string=0x000000000052F77C "d"
 *   insn=0x000000000052F784 string=0x000000000052F788 "`"
 *   insn=0x000000000052F788 string=0x000000000052F78C "g"
 *   insn=0x000000000052F78C string=0x000000000052F790 "d"
 *   insn=0x000000000052F79C string=0x000000000052F7A0 "g"
 *   insn=0x000000000052F7A0 string=0x000000000052F7A4 "d "
 *   insn=0x000000000052F7AC string=0x000000000052F7B0 " "
 *   insn=0x000000000052F7B0 string=0x000000000052F7B4 "g @9d$"
 *   insn=0x000000000052F7B4 string=0x000000000052F7B8 "d$"
 *   insn=0x000000000052F7C4 string=0x000000000052F7C8 "g$@9d("
 *   insn=0x000000000052F7C8 string=0x000000000052F7CC "d("
 *   insn=0x000000000052F7D8 string=0x000000000052F7DC "g(@9d,"
 *   insn=0x000000000052F7DC string=0x000000000052F7E0 "d,"
 *   insn=0x000000000052F7E8 string=0x000000000052F7EC "@"
 *   insn=0x000000000052F7EC string=0x000000000052F7F0 "g,@9d0"
 *   insn=0x000000000052F7F0 string=0x000000000052F7F4 "d0"
 *   insn=0x000000000052F800 string=0x000000000052F804 "g0@9d4"
 *   insn=0x000000000052F804 string=0x000000000052F808 "d4"
 *   insn=0x000000000052F814 string=0x000000000052F818 "g4@9d8"
 *   insn=0x000000000052F818 string=0x000000000052F81C "d8"
 *   insn=0x000000000052F824 string=0x000000000052F828 "`"
 *   insn=0x000000000052F828 string=0x000000000052F82C "c8@9"
 *   insn=0x000000000052F834 string=0x000000000052F838 ")"
 *   insn=0x000000000052F83C string=0x000000000052F840 "@"
 *   insn=0x000000000052F848 string=0x000000000052F84C ",i'8"
 *   insn=0x000000000052F850 string=0x000000000052FB00 "c"
 *   insn=0x000000000052F924 string=0x000000000052F928 "c"
 *   insn=0x000000000052F92C string=0x000000000052F930 "d"
 *   insn=0x000000000052F934 string=0x000000000052F938 " "
 *   insn=0x000000000052F940 string=0x000000000052F944 "_"
 *   insn=0x000000000052F948 string=0x000000000052FC04 ""
 *   insn=0x000000000052F94C string=0x000000000052F950 "\t"
 *   insn=0x000000000052F950 string=0x000000000052F954 "Chk8"
 *   insn=0x000000000052F960 string=0x000000000052F964 "?"
 *   insn=0x000000000052F974 string=0x000000000052F978 "D$"
 *   insn=0x000000000052F978 string=0x000000000052FE00 "c"
 *   insn=0x000000000052F97C string=0x000000000052F980 "\t$"
 *   insn=0x000000000052F984 string=0x000000000052F988 "d@"
 *   insn=0x000000000052F99C string=0x000000000052F9A0 " "
 *   insn=0x000000000052F9A0 string=0x000000000052F9A4 " \n"
 *   insn=0x000000000052F9A4 string=0x000000000052FAE8 "`"
 *   insn=0x000000000052F9E0 string=0x000000000052F9E4 " "
 *   insn=0x000000000052F9F8 string=0x000000000052F9FC "`"
 *   insn=0x000000000052FA40 string=0x000000000052FA44 " "
 *   insn=0x000000000052FA58 string=0x000000000052FA5C "`"
 *   insn=0x000000000052FAA0 string=0x000000000052FAA4 " "
 *   insn=0x000000000052FAB8 string=0x000000000052FABC "`"
 *   insn=0x000000000052FAEC string=0x000000000052FAF0 "$"
 *   insn=0x000000000052FAF8 string=0x000000000052FAFC "A"
 *   insn=0x000000000052FB0C string=0x000000000052FB10 "*i'8"
 *   insn=0x000000000052FB14 string=0x000000000052FDC4 "c"
 *   insn=0x000000000052FBE8 string=0x000000000052FBEC "c"
 *   insn=0x000000000052FBF0 string=0x000000000052FBF4 "d"
 *   insn=0x000000000052FBF8 string=0x000000000052FBFC " "
 *   insn=0x000000000052FC10 string=0x000000000052FC14 "\t"
 *   insn=0x000000000052FC14 string=0x000000000052FC18 "Chh8"
 *   insn=0x000000000052FC24 string=0x000000000052FC28 "?"
 *   insn=0x000000000052FC3C string=0x000000000052FDD4 "c"
 *   insn=0x000000000052FC48 string=0x000000000052FC4C "d@"
 *   insn=0x000000000052FC60 string=0x000000000052FC64 " "
 *   insn=0x000000000052FC64 string=0x000000000052FC68 " \n"
 *   insn=0x000000000052FC68 string=0x000000000052FC6C "@"
 *   insn=0x000000000052FC68 string=0x000000000052FDAC "`"
 *   insn=0x000000000052FC7C string=0x000000000052FC80 "\n"
 *   insn=0x000000000052FC88 string=0x000000000052FC8C "@"
 *   insn=0x000000000052FC94 string=0x000000000052FC98 "\n"
 *   insn=0x000000000052FCA0 string=0x000000000052FCA4 "@"
 *   insn=0x000000000052FCA4 string=0x000000000052FCA8 " "
 *   insn=0x000000000052FCAC string=0x000000000052FCB0 "\n"
 *   insn=0x000000000052FCB8 string=0x000000000052FCBC "@"
 *   insn=0x000000000052FCBC string=0x000000000052FCC0 "`"
 *   insn=0x000000000052FCC4 string=0x000000000052FCC8 "\nD"
 *   insn=0x000000000052FCD0 string=0x000000000052FCD4 "@"
 *   insn=0x000000000052FCDC string=0x000000000052FCE0 "\n"
 *   insn=0x000000000052FCE8 string=0x000000000052FCEC "@"
 *   insn=0x000000000052FCF4 string=0x000000000052FCF8 "\n"
 *   insn=0x000000000052FD00 string=0x000000000052FD04 "@"
 *   insn=0x000000000052FD04 string=0x000000000052FD08 " "
 *   insn=0x000000000052FD0C string=0x000000000052FD10 "\n"
 *   insn=0x000000000052FD18 string=0x000000000052FD1C "@"
 *   insn=0x000000000052FD1C string=0x000000000052FD20 "`"
 *   insn=0x000000000052FD24 string=0x000000000052FD28 "\nD"
 *   insn=0x000000000052FD30 string=0x000000000052FD34 "@"
 *   insn=0x000000000052FD3C string=0x000000000052FD40 "\n"
 *   insn=0x000000000052FD48 string=0x000000000052FD4C "@"
 *   insn=0x000000000052FD54 string=0x000000000052FD58 "\n"
 *   insn=0x000000000052FD60 string=0x000000000052FD64 "@"
 *   insn=0x000000000052FD64 string=0x000000000052FD68 " "
 *   insn=0x000000000052FD6C string=0x000000000052FD70 "\n"
 *   insn=0x000000000052FD78 string=0x000000000052FD7C "@"
 *   insn=0x000000000052FD7C string=0x000000000052FD80 "`"
 *   insn=0x000000000052FD84 string=0x000000000052FD88 "\nD"
 *   insn=0x000000000052FD90 string=0x000000000052FD94 "@"
 *   insn=0x000000000052FDB0 string=0x000000000052FDB4 "$"
 *   insn=0x000000000052FDBC string=0x000000000052FDC0 "A"
 *   insn=0x000000000052FDCC string=0x000000000052FDD0 "!"
 *   insn=0x000000000052FDD8 string=0x000000000052FDDC "j"
 *   insn=0x000000000052FDDC string=0x000000000052FDE0 "J"
 *   insn=0x000000000052FDF4 string=0x000000000052FDF8 "a"
 *   insn=0x000000000052FDF8 string=0x000000000052FDFC "~"
 *   insn=0x000000000052FE04 string=0x000000000052FE08 "l"
 *   insn=0x000000000052FE20 string=0x000000000052FE24 "a"
 *   insn=0x000000000052FE38 string=0x000000000052FE3C "r"
 *   insn=0x000000000052FE48 string=0x000000000052FE4C "c"
 *   insn=0x000000000052FE54 string=0x000000000052FE58 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_52F63C(
        unsigned __int64 result,
        char a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _OWORD *a6)
{
  unsigned __int8 v6; // w8
  __int64 v7; // x10
  unsigned __int64 v8; // x11
  unsigned __int64 v9; // x3
  __int64 v10; // x6
  char *v11; // x7
  int v12; // w9
  unsigned __int64 v13; // x8
  __int128 *v14; // x14
  _OWORD *v15; // x12
  unsigned __int64 v16; // x3
  unsigned __int64 v17; // x6
  __int64 v18; // x7
  __int128 v19; // t1
  _BYTE *v20; // x6
  _BYTE *v21; // x3
  unsigned __int8 v22; // w3
  __int64 v23; // x3
  _OWORD *v24; // x9
  unsigned int v25; // w3
  char v26; // w4
  int v27; // w13
  __int64 v28; // x7
  _BYTE *v29; // x4
  _BYTE *v30; // x6
  int v31; // w0
  unsigned __int8 v32; // w3
  __int64 v33; // x3
  _OWORD *v34; // x9
  unsigned int v35; // w3
  char v36; // w4
  int v37; // w11
  __int64 v38; // x7
  _BYTE *v39; // x4
  _BYTE *v40; // x6
  int v41; // w0
  __int64 v42; // x4
  __int64 v43; // x6
  char v44; // w7
  __int64 v45; // x4
  __int64 v46; // x6
  char v47; // w7
  char *v48; // x3

  v6 = *a3;
  v7 = 0;
  v8 = 0;
  v9 = a4 - 1;
  v10 = *a3;
LABEL_2:
  v11 = (char *)a6 - a5;
  v12 = (char)v6;
  if ( (__int64)((__int64)a6 - a5) > v10 )
  {
    while ( v12 > 0 )
    {
      a6 = (_OWORD *)((char *)a6 - v10);
      if ( v8 >= v9 )
      {
        ++v7;
        goto LABEL_2;
      }
      ++v8;
      v11 = (char *)a6 - a5;
      v6 = a3[v8];
      v10 = v6;
      v12 = (char)v6;
      if ( (__int64)((__int64)a6 - a5) <= v6 )
        break;
    }
  }
  v13 = v8;
  if ( (_OWORD *)a5 != a6 )
  {
    if ( (unsigned __int64)a6 - a5 > 0xF && (result >= a5 + 16 || a5 >= result + 16) )
    {
      v14 = (__int128 *)a5;
      v15 = (_OWORD *)result;
      v16 = (((unsigned __int64)a6 - a5 - 16) >> 4) + 1;
      v17 = 0;
      v18 = 16 * v16;
      do
      {
        v19 = *v14++;
        ++v17;
        *v15++ = v19;
      }
      while ( v17 < v16 );
      v20 = (_BYTE *)(result + v18);
      v21 = (_BYTE *)(a5 + v18);
      if ( (_OWORD *)((char *)a6 - a5) != (_OWORD *)v18 )
      {
        *(_BYTE *)(result + v18) = *(_BYTE *)(a5 + v18);
        if ( a6 != (_OWORD *)(v21 + 1) )
        {
          v20[1] = v21[1];
          if ( a6 != (_OWORD *)(v21 + 2) )
          {
            v20[2] = v21[2];
            if ( a6 != (_OWORD *)(v21 + 3) )
            {
              v20[3] = v21[3];
              if ( a6 != (_OWORD *)(v21 + 4) )
              {
                v20[4] = v21[4];
                if ( a6 != (_OWORD *)(v21 + 5) )
                {
                  v20[5] = v21[5];
                  if ( a6 != (_OWORD *)(v21 + 6) )
                  {
                    v20[6] = v21[6];
                    if ( a6 != (_OWORD *)(v21 + 7) )
                    {
                      v20[7] = v21[7];
                      if ( a6 != (_OWORD *)(v21 + 8) )
                      {
                        v20[8] = v21[8];
                        if ( a6 != (_OWORD *)(v21 + 9) )
                        {
                          v20[9] = v21[9];
                          if ( a6 != (_OWORD *)(v21 + 10) )
                          {
                            v20[10] = v21[10];
                            if ( a6 != (_OWORD *)(v21 + 11) )
                            {
                              v20[11] = v21[11];
                              if ( a6 != (_OWORD *)(v21 + 12) )
                              {
                                v20[12] = v21[12];
                                if ( a6 != (_OWORD *)(v21 + 13) )
                                {
                                  v20[13] = v21[13];
                                  if ( a6 != (_OWORD *)(v21 + 14) )
                                    v20[14] = v21[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v48 = 0;
      do
      {
        v48[result] = v48[a5];
        ++v48;
      }
      while ( v48 != v11 );
    }
    result += (unsigned __int64)a6 - a5;
  }
  while ( --v7 != -1 )
  {
    *(_BYTE *)result = a2;
    v24 = (_OWORD *)(result + 1);
    v25 = a3[v8];
    if ( a3[v8] )
    {
      if ( (v24 >= a6 + 1 || (unsigned __int64)a6 >= result + 17) && v25 > 0xF )
      {
        v26 = ((unsigned __int8)(v25 - 16) >> 4) + 1;
        v27 = 16 * (v26 & 0xF);
        v28 = v26 & 0xF;
        *v24 = *a6;
        if ( (unsigned __int8)(v25 - 16) >> 4 )
        {
          *(_OWORD *)(result + 17) = a6[1];
          if ( (unsigned __int8)(v25 - 16) >> 4 != 1 )
          {
            *(_OWORD *)(result + 33) = a6[2];
            if ( (unsigned __int8)(v25 - 16) >> 4 != 2 )
            {
              *(_OWORD *)(result + 49) = a6[3];
              if ( (unsigned __int8)(v25 - 16) >> 4 != 3 )
              {
                *(_OWORD *)(result + 65) = a6[4];
                if ( (unsigned __int8)(v25 - 16) >> 4 != 4 )
                {
                  *(_OWORD *)(result + 81) = a6[5];
                  if ( (unsigned __int8)(v25 - 16) >> 4 != 5 )
                  {
                    *(_OWORD *)(result + 97) = a6[6];
                    if ( (unsigned __int8)(v25 - 16) >> 4 != 6 )
                    {
                      *(_OWORD *)(result + 113) = a6[7];
                      if ( (unsigned __int8)(v25 - 16) >> 4 != 7 )
                      {
                        *(_OWORD *)(result + 129) = a6[8];
                        if ( (unsigned __int8)(v25 - 16) >> 4 != 8 )
                        {
                          *(_OWORD *)(result + 145) = a6[9];
                          if ( (unsigned __int8)(v25 - 16) >> 4 != 9 )
                          {
                            *(_OWORD *)(result + 161) = a6[10];
                            if ( (unsigned __int8)(v25 - 16) >> 4 != 10 )
                            {
                              *(_OWORD *)(result + 177) = a6[11];
                              if ( (unsigned __int8)(v25 - 16) >> 4 != 11 )
                              {
                                *(_OWORD *)(result + 193) = a6[12];
                                if ( (unsigned __int8)(v25 - 16) >> 4 != 12 )
                                {
                                  *(_OWORD *)(result + 209) = a6[13];
                                  if ( (unsigned __int8)(v25 - 16) >> 4 == 14 )
                                    *(_OWORD *)(result + 225) = a6[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v29 = &v24[v28];
        v30 = &a6[v28];
        v31 = (unsigned __int8)(v25 - v27);
        if ( v25 == v27 )
          goto LABEL_64;
        LOBYTE(v24[v28]) = a6[v28];
        if ( v31 == 1 )
          goto LABEL_64;
        v29[1] = v30[1];
        if ( v31 == 2 )
          goto LABEL_64;
        v29[2] = v30[2];
        if ( v31 == 3 )
          goto LABEL_64;
        v29[3] = v30[3];
        if ( v31 == 4 )
          goto LABEL_64;
        v29[4] = v30[4];
        if ( v31 == 5 )
          goto LABEL_64;
        v29[5] = v30[5];
        if ( v31 == 6 )
          goto LABEL_64;
        v29[6] = v30[6];
        if ( v31 == 7
          || (v29[7] = v30[7], v31 == 8)
          || (v29[8] = v30[8], v31 == 9)
          || (v29[9] = v30[9], v31 == 10)
          || (v29[10] = v30[10], v31 == 11)
          || (v29[11] = v30[11], v31 == 12)
          || (v29[12] = v30[12], v31 == 13)
          || (v29[13] = v30[13], v31 == 14) )
        {
LABEL_64:
          v22 = v25 - 1;
        }
        else
        {
          v22 = v25 - 1;
          v29[14] = v30[14];
        }
      }
      else
      {
        v22 = v25 - 1;
        v45 = 0;
        do
        {
          v46 = result + v45;
          v47 = *((_BYTE *)a6 + v45++);
          *(_BYTE *)(v46 + 1) = v47;
        }
        while ( v45 != v22 + 1LL );
      }
      v23 = v22 + 1LL;
      result = (unsigned __int64)v24 + v23;
      a6 = (_OWORD *)((char *)a6 + v23);
    }
    else
    {
      ++result;
    }
  }
  while ( --v13 != -1 )
  {
    *(_BYTE *)result = a2;
    v34 = (_OWORD *)(result + 1);
    v35 = a3[v13];
    if ( a3[v13] )
    {
      if ( (v34 >= a6 + 1 || (unsigned __int64)a6 >= result + 17) && v35 > 0xF )
      {
        v36 = ((unsigned __int8)(v35 - 16) >> 4) + 1;
        v37 = 16 * (v36 & 0xF);
        v38 = v36 & 0xF;
        *v34 = *a6;
        if ( (unsigned __int8)(v35 - 16) >> 4 )
        {
          *(_OWORD *)(result + 17) = a6[1];
          if ( (unsigned __int8)(v35 - 16) >> 4 != 1 )
          {
            *(_OWORD *)(result + 33) = a6[2];
            if ( (unsigned __int8)(v35 - 16) >> 4 != 2 )
            {
              *(_OWORD *)(result + 49) = a6[3];
              if ( (unsigned __int8)(v35 - 16) >> 4 != 3 )
              {
                *(_OWORD *)(result + 65) = a6[4];
                if ( (unsigned __int8)(v35 - 16) >> 4 != 4 )
                {
                  *(_OWORD *)(result + 81) = a6[5];
                  if ( (unsigned __int8)(v35 - 16) >> 4 != 5 )
                  {
                    *(_OWORD *)(result + 97) = a6[6];
                    if ( (unsigned __int8)(v35 - 16) >> 4 != 6 )
                    {
                      *(_OWORD *)(result + 113) = a6[7];
                      if ( (unsigned __int8)(v35 - 16) >> 4 != 7 )
                      {
                        *(_OWORD *)(result + 129) = a6[8];
                        if ( (unsigned __int8)(v35 - 16) >> 4 != 8 )
                        {
                          *(_OWORD *)(result + 145) = a6[9];
                          if ( (unsigned __int8)(v35 - 16) >> 4 != 9 )
                          {
                            *(_OWORD *)(result + 161) = a6[10];
                            if ( (unsigned __int8)(v35 - 16) >> 4 != 10 )
                            {
                              *(_OWORD *)(result + 177) = a6[11];
                              if ( (unsigned __int8)(v35 - 16) >> 4 != 11 )
                              {
                                *(_OWORD *)(result + 193) = a6[12];
                                if ( (unsigned __int8)(v35 - 16) >> 4 != 12 )
                                {
                                  *(_OWORD *)(result + 209) = a6[13];
                                  if ( (unsigned __int8)(v35 - 16) >> 4 == 14 )
                                    *(_OWORD *)(result + 225) = a6[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v39 = &v34[v38];
        v40 = &a6[v38];
        v41 = (unsigned __int8)(v35 - v37);
        if ( v35 == v37 )
          goto LABEL_101;
        LOBYTE(v34[v38]) = a6[v38];
        if ( v41 == 1 )
          goto LABEL_101;
        v39[1] = v40[1];
        if ( v41 == 2 )
          goto LABEL_101;
        v39[2] = v40[2];
        if ( v41 == 3 )
          goto LABEL_101;
        v39[3] = v40[3];
        if ( v41 == 4 )
          goto LABEL_101;
        v39[4] = v40[4];
        if ( v41 == 5 )
          goto LABEL_101;
        v39[5] = v40[5];
        if ( v41 == 6 )
          goto LABEL_101;
        v39[6] = v40[6];
        if ( v41 == 7
          || (v39[7] = v40[7], v41 == 8)
          || (v39[8] = v40[8], v41 == 9)
          || (v39[9] = v40[9], v41 == 10)
          || (v39[10] = v40[10], v41 == 11)
          || (v39[11] = v40[11], v41 == 12)
          || (v39[12] = v40[12], v41 == 13)
          || (v39[13] = v40[13], v41 == 14) )
        {
LABEL_101:
          v32 = v35 - 1;
        }
        else
        {
          v32 = v35 - 1;
          v39[14] = v40[14];
        }
      }
      else
      {
        v32 = v35 - 1;
        v42 = 0;
        do
        {
          v43 = result + v42;
          v44 = *((_BYTE *)a6 + v42++);
          *(_BYTE *)(v43 + 1) = v44;
        }
        while ( v42 != v32 + 1LL );
      }
      v33 = v32 + 1LL;
      result = (unsigned __int64)v34 + v33;
      a6 = (_OWORD *)((char *)a6 + v33);
    }
    else
    {
      ++result;
    }
  }
  return result;
}

