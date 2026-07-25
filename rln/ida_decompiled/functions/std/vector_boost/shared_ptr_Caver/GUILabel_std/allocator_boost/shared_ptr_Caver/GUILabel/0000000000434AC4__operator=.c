/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000434AC4
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EEaSERKS6_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=(std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> const&)
 *
 * Callers: 1
 *   0x00000000001FB8D0  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=(std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 69
 *   insn=0x0000000000434AE4 string=0x0000000000434AE8 "@"
 *   insn=0x0000000000434AEC string=0x0000000000434AF0 "h\n@"
 *   insn=0x0000000000434AF0 string=0x0000000000434AF4 "x"
 *   insn=0x0000000000434AF4 string=0x0000000000434AF8 " "
 *   insn=0x0000000000434AFC string=0x0000000000434B00 ""
 *   insn=0x0000000000434B08 string=0x0000000000434BD8 "u"
 *   insn=0x0000000000434B10 string=0x0000000000434DCC "2"
 *   insn=0x0000000000434B14 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000434B20 string=0x0000000000434B58 "ub@"
 *   insn=0x0000000000434B28 string=0x0000000000434B2C "\t"
 *   insn=0x0000000000434B30 string=0x0000000000434B34 "\t"
 *   insn=0x0000000000434B38 string=0x0000000000434B3C "*"
 *   insn=0x0000000000434B3C string=0x0000000000434B40 "J"
 *   insn=0x0000000000434B40 string=0x0000000000434B44 "*"
 *   insn=0x0000000000434B4C string=0x0000000000434B50 "A"
 *   insn=0x0000000000434B60 string=0x0000000000434BBC "u"
 *   insn=0x0000000000434B64 string=0x0000000000434B68 "6"
 *   insn=0x0000000000434B6C string=0x0000000000434B70 ""
 *   insn=0x0000000000434B80 string=0x0000000000434B84 "\t@"
 *   insn=0x0000000000434B8C string=0x0000000000434B90 ""
 *   insn=0x0000000000434BA0 string=0x0000000000434BA4 "@"
 *   insn=0x0000000000434BB4 string=0x0000000000434BB8 "u"
 *   insn=0x0000000000434BC4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000434BC8 string=0x0000000000434BCC "t"
 *   insn=0x0000000000434BCC string=0x0000000000434BD0 "h\n"
 *   insn=0x0000000000434BD0 string=0x0000000000434BD4 "t"
 *   insn=0x0000000000434BD4 string=0x0000000000434DA4 "h"
 *   insn=0x0000000000434BDC string=0x0000000000434BE0 "("
 *   insn=0x0000000000434BE8 string=0x0000000000434BEC "?"
 *   insn=0x0000000000434BF0 string=0x0000000000434BF4 "("
 *   insn=0x0000000000434C00 string=0x0000000000434C04 "\n"
 *   insn=0x0000000000434C04 string=0x0000000000434C08 "J"
 *   insn=0x0000000000434C08 string=0x0000000000434C0C "\n"
 *   insn=0x0000000000434C10 string=0x0000000000434C14 "\t#"
 *   insn=0x0000000000434C14 string=0x0000000000434C18 "5"
 *   insn=0x0000000000434C18 string=0x0000000000434C5C "9"
 *   insn=0x0000000000434C1C string=0x0000000000434C20 ""
 *   insn=0x0000000000434C30 string=0x0000000000434C34 "\t@"
 *   insn=0x0000000000434C3C string=0x0000000000434C40 ""
 *   insn=0x0000000000434C50 string=0x0000000000434C54 "@"
 *   insn=0x0000000000434C60 string=0x0000000000434C64 "?"
 *   insn=0x0000000000434C6C string=0x0000000000434C70 "hV@"
 *   insn=0x0000000000434C78 string=0x0000000000434C7C ""
 *   insn=0x0000000000434C88 string=0x0000000000434C8C "\t"
 *   insn=0x0000000000434C90 string=0x0000000000434C94 "\t"
 *   insn=0x0000000000434C9C string=0x0000000000434CA0 "*"
 *   insn=0x0000000000434C9C string=0x0000000000434CAC "A"
 *   insn=0x0000000000434CA0 string=0x0000000000434CA4 "J"
 *   insn=0x0000000000434CA4 string=0x0000000000434CA8 "*"
 *   insn=0x0000000000434CB8 string=0x0000000000434CBC ":"
 *   insn=0x0000000000434CC0 string=0x0000000000434CC4 "+"
 *   insn=0x0000000000434CC4 string=0x0000000000434CC8 ""
 *   insn=0x0000000000434CD4 string=0x0000000000434CD8 "\n"
 *   insn=0x0000000000434CD8 string=0x0000000000434CDC "J"
 *   insn=0x0000000000434CDC string=0x0000000000434CE0 "\n"
 *   insn=0x0000000000434CE4 string=0x0000000000434CE8 "\t#"
 *   insn=0x0000000000434CE8 string=0x0000000000434CEC "4"
 *   insn=0x0000000000434CF0 string=0x0000000000434CF4 ""
 *   insn=0x0000000000434D04 string=0x0000000000434D08 "\t@"
 *   insn=0x0000000000434D10 string=0x0000000000434D14 ""
 *   insn=0x0000000000434D24 string=0x0000000000434D28 "@"
 *   insn=0x0000000000434D40 string=0x0000000000434D44 "u"
 *   insn=0x0000000000434D50 string=0x0000000000434D54 "4"
 *   insn=0x0000000000434D58 string=0x0000000000434D5C ""
 *   insn=0x0000000000434D6C string=0x0000000000434D70 "\t@"
 *   insn=0x0000000000434D78 string=0x0000000000434D7C ""
 *   insn=0x0000000000434D8C string=0x0000000000434D90 "@"
 *   insn=0x0000000000434DA4 string=0x0000000000434DA8 ""
 *   insn=0x0000000000434DA8 string=0x0000000000434DAC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::vector<boost::shared_ptr<Caver::GUILabel>>::operator=(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // x22
  __int64 *v6; // x25
  char *v7; // x24
  signed __int64 v8; // x0
  unsigned __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x20
  _QWORD *v12; // x8
  __int64 v13; // x9
  char *v14; // x21
  char *v15; // x24
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x8
  char *v19; // x21
  __int64 v20; // x9
  unsigned __int64 v21; // x8
  __int64 v22; // x25
  __int64 v23; // x8
  __int64 v24; // x9
  _QWORD *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 *i; // x8
  __int64 v29; // x9
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8

  if ( a2 != (__int64 **)a1 )
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = *(char **)a1;
    v8 = (char *)v6 - (char *)*a2;
    v9 = v8 >> 4;
    if ( v8 >> 4 <= (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4) )
    {
      v19 = *(char **)(a1 + 8);
      v20 = v19 - v7;
      v21 = (v19 - v7) >> 4;
      if ( v21 >= v9 )
      {
        if ( v8 >= 1 )
        {
          v30 = ((unsigned __int64)v8 >> 4) + 1;
          do
          {
            v32 = *v5;
            v31 = v5[1];
            if ( v31 )
              ++*(_QWORD *)(v31 + 8);
            v33 = (_QWORD *)*((_QWORD *)v7 + 1);
            *(_QWORD *)v7 = v32;
            *((_QWORD *)v7 + 1) = v31;
            if ( v33 )
            {
              v34 = v33[1] - 1LL;
              v33[1] = v34;
              if ( !v34 )
              {
                (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
                v35 = v33[2] - 1LL;
                v33[2] = v35;
                if ( !v35 )
                  (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
              }
            }
            --v30;
            v7 += 16;
            v5 += 2;
          }
          while ( v30 > 1 );
          v19 = *(char **)(a1 + 8);
        }
        for ( ; v19 != v7; v7 += 16 )
        {
          v36 = (_QWORD *)*((_QWORD *)v7 + 1);
          if ( v36 )
          {
            v37 = v36[1] - 1LL;
            v36[1] = v37;
            if ( !v37 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
              v38 = v36[2] - 1LL;
              v36[2] = v38;
              if ( !v38 )
                (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
            }
          }
        }
      }
      else
      {
        if ( v20 >= 1 )
        {
          v22 = ((unsigned __int64)v20 >> 4) + 1;
          do
          {
            v24 = *v5;
            v23 = v5[1];
            if ( v23 )
              ++*(_QWORD *)(v23 + 8);
            v25 = (_QWORD *)*((_QWORD *)v7 + 1);
            *(_QWORD *)v7 = v24;
            *((_QWORD *)v7 + 1) = v23;
            if ( v25 )
            {
              v26 = v25[1] - 1LL;
              v25[1] = v26;
              if ( !v26 )
              {
                (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
                v27 = v25[2] - 1LL;
                v25[2] = v27;
                if ( !v27 )
                  (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
              }
            }
            --v22;
            v5 += 2;
            v7 += 16;
          }
          while ( v22 > 1 );
          v19 = *(char **)(a1 + 8);
          v5 = *a2;
          v6 = a2[1];
          v21 = (__int64)&v19[-*(_QWORD *)a1] >> 4;
        }
        for ( i = &v5[2 * v21]; i != v6; v19 += 16 )
        {
          *(_QWORD *)v19 = *i;
          v29 = i[1];
          *((_QWORD *)v19 + 1) = v29;
          if ( v29 )
            ++*(_QWORD *)(v29 + 8);
          i += 2;
        }
      }
    }
    else
    {
      if ( v9 >> 60 )
        sub_565294(v8, a2, a3);
      v10 = operator new(v8);
      v11 = v10;
      if ( v5 != v6 )
      {
        v12 = (_QWORD *)v10;
        do
        {
          *v12 = *v5;
          v13 = v5[1];
          v12[1] = v13;
          if ( v13 )
            ++*(_QWORD *)(v13 + 8);
          v5 += 2;
          v12 += 2;
        }
        while ( v5 != v6 );
      }
      v14 = *(char **)a1;
      v15 = *(char **)(a1 + 8);
      if ( *(char **)a1 != v15 )
      {
        do
        {
          v16 = (_QWORD *)*((_QWORD *)v14 + 1);
          if ( v16 )
          {
            v17 = v16[1] - 1LL;
            v16[1] = v17;
            if ( !v17 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
              v18 = v16[2] - 1LL;
              v16[2] = v18;
              if ( !v18 )
                (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
            }
          }
          v14 += 16;
        }
        while ( v15 != v14 );
        v14 = *(char **)a1;
      }
      if ( v14 )
        operator delete(v14);
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v11 + 16 * v9;
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 16 * v9;
  }
  return a1;
}

