/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503998
 * Mangled: _ZN13CPVRTModelPOD7DestroyEv
 * Demangled: CPVRTModelPOD::Destroy(void)
 *
 * Callers: 1
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F89E0  .free
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 124
 *   insn=0x00000000005039AC string=0x00000000005039B0 "hB@"
 *   insn=0x00000000005039B4 string=0x00000000005039B8 ""
 *   insn=0x00000000005039BC string=0x00000000005039C0 "i"
 *   insn=0x00000000005039BC string=0x0000000000503EB4 "`B@"
 *   insn=0x00000000005039C0 string=0x00000000005039C4 "`"
 *   insn=0x00000000005039C8 string=0x0000000000503A00 "`"
 *   insn=0x00000000005039D0 string=0x00000000005039D4 "hu"
 *   insn=0x00000000005039E0 string=0x00000000005039E4 "`"
 *   insn=0x00000000005039E0 string=0x00000000001F89E0 "0'"
 *   insn=0x00000000005039E8 string=0x00000000005039EC "i"
 *   insn=0x0000000000503A00 string=0x0000000000503A0C "`"
 *   insn=0x0000000000503A0C string=0x0000000000503A10 "`"
 *   insn=0x0000000000503A10 string=0x0000000000503A1C "hj@"
 *   insn=0x0000000000503A1C string=0x0000000000503A20 "`:@"
 *   insn=0x0000000000503A24 string=0x0000000000503A9C "`"
 *   insn=0x0000000000503A2C string=0x0000000000503A30 "ht"
 *   insn=0x0000000000503A34 string=0x0000000000503A48 ""
 *   insn=0x0000000000503A3C string=0x0000000000503A40 "`:@"
 *   insn=0x0000000000503A48 string=0x0000000000503A4C "1@"
 *   insn=0x0000000000503A50 string=0x0000000000503A68 ""
 *   insn=0x0000000000503A58 string=0x0000000000503A5C "`:@"
 *   insn=0x0000000000503A5C string=0x0000000000503A60 ""
 *   insn=0x0000000000503A68 string=0x0000000000503A6C "5@"
 *   insn=0x0000000000503A70 string=0x0000000000503A88 "hj@"
 *   insn=0x0000000000503A78 string=0x0000000000503A7C "`:@"
 *   insn=0x0000000000503A7C string=0x0000000000503A80 ""
 *   insn=0x0000000000503A9C string=0x0000000000503AA8 "h:@"
 *   insn=0x0000000000503AA8 string=0x0000000000503AAC "t"@"
 *   insn=0x0000000000503AC8 string=0x0000000000503ACC "t"@"
 *   insn=0x0000000000503AEC string=0x0000000000503AF0 "t"@"
 *   insn=0x0000000000503B10 string=0x0000000000503B14 "h"@"
 *   insn=0x0000000000503B1C string=0x0000000000503B20 ""
 *   insn=0x0000000000503B20 string=0x0000000000503B24 "U"
 *   insn=0x0000000000503B34 string=0x0000000000503B38 "t"@"
 *   insn=0x0000000000503B58 string=0x0000000000503B5C "t"@"
 *   insn=0x0000000000503B7C string=0x0000000000503B80 "t"@"
 *   insn=0x0000000000503BA0 string=0x0000000000503BA4 "t"@"
 *   insn=0x0000000000503BB8 string=0x0000000000503BBC "\t@"
 *   insn=0x0000000000503BCC string=0x0000000000503BD0 "M@"
 *   insn=0x0000000000503BDC string=0x0000000000503BE0 "t"@"
 *   insn=0x0000000000503BE8 string=0x0000000000503BEC "M@"
 *   insn=0x0000000000503BF8 string=0x0000000000503BFC "\t@"
 *   insn=0x0000000000503C18 string=0x0000000000503C1C "q"
 *   insn=0x0000000000503C1C string=0x0000000000503C20 "t"@"
 *   insn=0x0000000000503C3C string=0x0000000000503C40 "h"
 *   insn=0x0000000000503C40 string=0x0000000000503C44 "t"@"
 *   insn=0x0000000000503C5C string=0x0000000000503C60 " "
 *   insn=0x0000000000503C60 string=0x0000000000503C64 "_"
 *   insn=0x0000000000503C64 string=0x0000000000503C68 "h"@"
 *   insn=0x0000000000503C70 string=0x0000000000503C74 ""
 *   insn=0x0000000000503C78 string=0x0000000000503C7C "t"@"
 *   insn=0x0000000000503C8C string=0x0000000000503C90 "T"
 *   insn=0x0000000000503C90 string=0x0000000000503C94 "t"@"
 *   insn=0x0000000000503CAC string=0x0000000000503CB0 "@"
 *   insn=0x0000000000503CB4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000503CC4 string=0x0000000000503CC8 "@"
 *   insn=0x0000000000503CC8 string=0x0000000000503CCC "y"
 *   insn=0x0000000000503CE0 string=0x0000000000503CE4 "@"
 *   insn=0x0000000000503CE4 string=0x0000000000503CE8 "r"
 *   insn=0x0000000000503CF4 string=0x0000000000503CF8 "h:@"
 *   insn=0x0000000000503CF8 string=0x0000000000503CFC "t"@"
 *   insn=0x0000000000503D0C string=0x0000000000503D1C "hJ@"
 *   insn=0x0000000000503D10 string=0x0000000000503D14 "3"
 *   insn=0x0000000000503D1C string=0x0000000000503D20 "`*@"
 *   insn=0x0000000000503D20 string=0x0000000000503D24 "\n"
 *   insn=0x0000000000503D24 string=0x0000000000503E64 "`"
 *   insn=0x0000000000503D2C string=0x0000000000503D30 ""
 *   insn=0x0000000000503D30 string=0x0000000000503D34 ""
 *   insn=0x0000000000503D38 string=0x0000000000503D50 ""
 *   insn=0x0000000000503D3C string=0x0000000000503D40 "("
 *   insn=0x0000000000503D40 string=0x0000000000503D44 "`*@"
 *   insn=0x0000000000503D44 string=0x0000000000503D48 ""
 *   insn=0x0000000000503D50 string=0x0000000000503D54 ""
 *   insn=0x0000000000503D58 string=0x0000000000503D70 ""
 *   insn=0x0000000000503D5C string=0x0000000000503D60 " "
 *   insn=0x0000000000503D60 string=0x0000000000503D64 "`*@"
 *   insn=0x0000000000503D64 string=0x0000000000503D68 ""
 *   insn=0x0000000000503D70 string=0x0000000000503D74 ""
 *   insn=0x0000000000503D78 string=0x0000000000503D90 ""
 *   insn=0x0000000000503D80 string=0x0000000000503D84 "`*@"
 *   insn=0x0000000000503D84 string=0x0000000000503D88 ""
 *   insn=0x0000000000503D90 string=0x0000000000503D94 ""
 *   insn=0x0000000000503D98 string=0x0000000000503DB0 "hu"
 *   insn=0x0000000000503DA0 string=0x0000000000503DA4 "`*@"
 *   insn=0x0000000000503DA4 string=0x0000000000503DA8 ""
 *   insn=0x0000000000503DB4 string=0x0000000000503DC8 ""
 *   insn=0x0000000000503DB8 string=0x0000000000503DBC "\t"
 *   insn=0x0000000000503DBC string=0x0000000000503DC0 "`*@"
 *   insn=0x0000000000503DC8 string=0x0000000000503DCC "@"
 *   insn=0x0000000000503DD0 string=0x0000000000503DE8 ""
 *   insn=0x0000000000503DD8 string=0x0000000000503DDC "`*@"
 *   insn=0x0000000000503DDC string=0x0000000000503DE0 ""
 *   insn=0x0000000000503DE8 string=0x0000000000503DEC "\t@"
 *   insn=0x0000000000503DF0 string=0x0000000000503E08 ""
 *   insn=0x0000000000503DF8 string=0x0000000000503DFC "`*@"
 *   insn=0x0000000000503DFC string=0x0000000000503E00 ""
 *   insn=0x0000000000503E08 string=0x0000000000503E0C ""
 *   insn=0x0000000000503E10 string=0x0000000000503E28 ""
 *   insn=0x0000000000503E18 string=0x0000000000503E1C "`*@"
 *   insn=0x0000000000503E1C string=0x0000000000503E20 ""
 *   insn=0x0000000000503E28 string=0x0000000000503E2C ""
 *   insn=0x0000000000503E30 string=0x0000000000503E48 ""
 *   insn=0x0000000000503E38 string=0x0000000000503E3C "`*@"
 *   insn=0x0000000000503E3C string=0x0000000000503E40 ""
 *   insn=0x0000000000503E4C string=0x0000000000503E50 "hJ@"
 *   insn=0x0000000000503E64 string=0x0000000000503E70 "iZ@"
 *   insn=0x0000000000503E70 string=0x0000000000503E74 "`2@"
 *   insn=0x0000000000503E78 string=0x0000000000503EA8 "`"
 *   insn=0x0000000000503E7C string=0x0000000000503E80 "xt"
 *   insn=0x0000000000503E8C string=0x0000000000503E90 "`2@"
 *   insn=0x0000000000503E94 string=0x0000000000503E98 "iZ@"
 *   insn=0x0000000000503EB4 string=0x0000000000503EB8 "`"
 *   insn=0x0000000000503EB8 string=0x0000000000503EBC "@"
 *   insn=0x0000000000503EC0 string=0x0000000000503ED0 ""
 *   insn=0x0000000000503EC4 string=0x0000000000503EC8 "&"
 *   insn=0x0000000000503EC8 string=0x0000000000503ECC "`B@"
 *   insn=0x0000000000503EC8 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000503ED4 string=0x0000000000503EE4 ""
 *   insn=0x0000000000503ED8 string=0x0000000000503EDC "!"
 *   insn=0x0000000000503EDC string=0x0000000000503EE0 "`B@"
 *   insn=0x0000000000503EE8 string=0x0000000000503EF8 "@"
 *   insn=0x0000000000503EF0 string=0x0000000000503EF4 "`B@"
 *   insn=0x0000000000503F1C string=0x0000000000503F20 "H"
 *   insn=0x0000000000503F20 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall CPVRTModelPOD::Destroy(CPVRTModelPOD *this)
{
  __int64 v2; // x8
  unsigned int v3; // w9
  char *v4; // x0
  unsigned __int64 v5; // x20
  __int64 v6; // x21
  void *v7; // x0
  char *v8; // x0
  __int64 v9; // x20
  unsigned __int64 v10; // x21
  _QWORD *v11; // x20
  unsigned __int64 i; // x21
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  _QWORD *v16; // x8
  void *v17; // x0
  void *v18; // x0
  void *v19; // x0
  void *v20; // x0
  unsigned __int64 v21; // x23
  __int64 v22; // x24
  void *v23; // x0
  void *v24; // x0
  void *v25; // x0
  void *v26; // x0
  void *v27; // x0
  char *v28; // x23
  void *v29; // x0
  _QWORD *v30; // x23
  void *v31; // t1
  char *v32; // x23
  void *v33; // x0
  _QWORD *v34; // x23
  void *v35; // t1
  char *v36; // x8
  void *v37; // x0
  _QWORD *v38; // x23
  char *v39; // x0
  unsigned __int64 v40; // x20
  __int64 v41; // x21
  unsigned int v42; // w9
  void **v43; // x0
  unsigned __int64 j; // x20
  void **v45; // x0

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    if ( !*(_BYTE *)(v2 + 40) )
    {
      v3 = *((_DWORD *)this + 6);
      v4 = (char *)*((_QWORD *)this + 4);
      if ( v3 )
      {
        v5 = 0;
        v6 = 16;
        do
        {
          if ( *(_QWORD *)&v4[v6] )
          {
            free(*(void **)&v4[v6]);
            v4 = (char *)*((_QWORD *)this + 4);
            *(_QWORD *)&v4[v6] = 0;
            v3 = *((_DWORD *)this + 6);
          }
          ++v5;
          v6 += 24;
        }
        while ( v5 < v3 );
      }
      if ( v4 )
      {
        free(v4);
        *((_QWORD *)this + 4) = 0;
      }
      v7 = (void *)*((_QWORD *)this + 6);
      if ( v7 )
      {
        free(v7);
        *((_QWORD *)this + 6) = 0;
      }
      v8 = (char *)*((_QWORD *)this + 14);
      if ( *((_DWORD *)this + 26) )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          if ( *(_QWORD *)&v8[v9] )
          {
            free(*(void **)&v8[v9]);
            v8 = (char *)*((_QWORD *)this + 14);
            *(_QWORD *)&v8[v9] = 0;
          }
          if ( *(_QWORD *)&v8[v9 + 96] )
          {
            free(*(void **)&v8[v9 + 96]);
            v8 = (char *)*((_QWORD *)this + 14);
            *(_QWORD *)&v8[v9 + 96] = 0;
          }
          if ( *(_QWORD *)&v8[v9 + 104] )
          {
            free(*(void **)&v8[v9 + 104]);
            v8 = (char *)*((_QWORD *)this + 14);
            *(_QWORD *)&v8[v9 + 104] = 0;
          }
          ++v10;
          v9 += 176;
        }
        while ( v10 < *((unsigned int *)this + 26) );
      }
      if ( v8 )
      {
        free(v8);
        *((_QWORD *)this + 14) = 0;
      }
      v11 = (_QWORD *)*((_QWORD *)this + 8);
      if ( *((_DWORD *)this + 14) )
      {
        for ( i = 0; i < *((unsigned int *)this + 14); ++i )
        {
          v13 = (void *)v11[43 * i + 4];
          if ( v13 )
          {
            free(v13);
            v11 = (_QWORD *)*((_QWORD *)this + 8);
            v11[43 * i + 4] = 0;
          }
          v14 = (void *)v11[43 * i + 5];
          if ( v14 )
          {
            free(v14);
            v11 = (_QWORD *)*((_QWORD *)this + 8);
            v11[43 * i + 5] = 0;
          }
          v15 = (void *)v11[43 * i + 29];
          if ( v15 )
          {
            free(v15);
            v16 = (_QWORD *)(*((_QWORD *)this + 8) + 344 * i + 232);
          }
          else
          {
            v17 = (void *)v11[43 * i + 9];
            if ( v17 )
            {
              free(v17);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 9] = 0;
            }
            v18 = (void *)v11[43 * i + 12];
            if ( v18 )
            {
              free(v18);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 12] = 0;
            }
            v19 = (void *)v11[43 * i + 15];
            if ( v19 )
            {
              free(v19);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 15] = 0;
            }
            v20 = (void *)v11[43 * i + 18];
            if ( v20 )
            {
              free(v20);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 18] = 0;
            }
            if ( LODWORD(v11[43 * i + 1]) )
            {
              v21 = 0;
              v22 = 16;
              do
              {
                v23 = *(void **)(v11[43 * i + 19] + v22);
                if ( v23 )
                {
                  free(v23);
                  v11 = (_QWORD *)*((_QWORD *)this + 8);
                  *(_QWORD *)(v11[43 * i + 19] + v22) = 0;
                }
                ++v21;
                v22 += 24;
              }
              while ( v21 < LODWORD(v11[43 * i + 1]) );
            }
            v24 = (void *)v11[43 * i + 22];
            if ( v24 )
            {
              free(v24);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 22] = 0;
            }
            v25 = (void *)v11[43 * i + 25];
            if ( v25 )
            {
              free(v25);
              v11 = (_QWORD *)*((_QWORD *)this + 8);
              v11[43 * i + 25] = 0;
            }
            v26 = (void *)v11[43 * i + 28];
            if ( !v26 )
              goto LABEL_51;
            free(v26);
            v16 = (_QWORD *)(*((_QWORD *)this + 8) + 344 * i + 224);
          }
          *v16 = 0;
          v11 = (_QWORD *)*((_QWORD *)this + 8);
LABEL_51:
          v27 = (void *)v11[43 * i + 19];
          if ( v27 )
          {
            free(v27);
            v11 = (_QWORD *)*((_QWORD *)this + 8);
            v11[43 * i + 19] = 0;
          }
          v28 = (char *)&v11[43 * i];
          v31 = (void *)*((_QWORD *)v28 + 30);
          v30 = v28 + 240;
          v29 = v31;
          if ( v31 )
            operator delete(v29);
          *v30 = 0;
          v32 = (char *)&v11[43 * i];
          v35 = (void *)*((_QWORD *)v32 + 31);
          v34 = v32 + 248;
          v33 = v35;
          if ( v35 )
            operator delete(v33);
          *v34 = 0;
          v36 = (char *)&v11[43 * i];
          v37 = (void *)*((_QWORD *)v36 + 32);
          v38 = v36 + 256;
          if ( v37 )
            operator delete(v37);
          *v38 = 0;
          HIDWORD(v11[43 * i + 33]) = 0;
          v11 = (_QWORD *)*((_QWORD *)this + 8);
        }
      }
      if ( v11 )
      {
        free(v11);
        *((_QWORD *)this + 8) = 0;
      }
      v39 = (char *)*((_QWORD *)this + 10);
      if ( *((_DWORD *)this + 18) )
      {
        v40 = 0;
        v41 = 48;
        do
        {
          if ( *(_QWORD *)&v39[v41 - 40] )
          {
            free(*(void **)&v39[v41 - 40]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 - 40] = 0;
          }
          if ( *(_QWORD *)&v39[v41 - 8] )
          {
            free(*(void **)&v39[v41 - 8]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 - 8] = 0;
          }
          if ( *(_QWORD *)&v39[v41 - 16] )
          {
            free(*(void **)&v39[v41 - 16]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 - 16] = 0;
          }
          if ( *(_QWORD *)&v39[v41 + 8] )
          {
            free(*(void **)&v39[v41 + 8]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 + 8] = 0;
          }
          if ( *(_QWORD *)&v39[v41] )
          {
            free(*(void **)&v39[v41]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41] = 0;
          }
          if ( *(_QWORD *)&v39[v41 + 24] )
          {
            free(*(void **)&v39[v41 + 24]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 + 24] = 0;
          }
          if ( *(_QWORD *)&v39[v41 + 16] )
          {
            free(*(void **)&v39[v41 + 16]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 + 16] = 0;
          }
          if ( *(_QWORD *)&v39[v41 + 40] )
          {
            free(*(void **)&v39[v41 + 40]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 + 40] = 0;
          }
          if ( *(_QWORD *)&v39[v41 + 32] )
          {
            free(*(void **)&v39[v41 + 32]);
            v39 = (char *)*((_QWORD *)this + 10);
            *(_QWORD *)&v39[v41 + 32] = 0;
          }
          *(_DWORD *)&v39[v41 - 24] = 0;
          ++v40;
          v41 += 96;
        }
        while ( v40 < *((unsigned int *)this + 18) );
      }
      if ( v39 )
      {
        free(v39);
        *((_QWORD *)this + 10) = 0;
      }
      v42 = *((_DWORD *)this + 22);
      v43 = (void **)*((_QWORD *)this + 12);
      if ( v42 )
      {
        for ( j = 0; j < v42; ++j )
        {
          if ( v43[j] )
          {
            free(v43[j]);
            v43 = (void **)*((_QWORD *)this + 12);
            v43[j] = 0;
            v42 = *((_DWORD *)this + 22);
          }
        }
      }
      if ( v43 )
      {
        free(v43);
        *((_QWORD *)this + 12) = 0;
      }
    }
    v45 = (void **)*((_QWORD *)this + 16);
    if ( v45 )
    {
      if ( v45[2] )
      {
        operator delete[](v45[2]);
        v45 = (void **)*((_QWORD *)this + 16);
      }
      if ( v45[3] )
      {
        operator delete[](v45[3]);
        v45 = (void **)*((_QWORD *)this + 16);
      }
      if ( v45[4] )
      {
        operator delete[](v45[4]);
        v45 = (void **)*((_QWORD *)this + 16);
      }
      if ( v45 )
        operator delete(v45);
      *((_QWORD *)this + 16) = 0;
    }
  }
  return memset(this, 0, 0x88u);
}

