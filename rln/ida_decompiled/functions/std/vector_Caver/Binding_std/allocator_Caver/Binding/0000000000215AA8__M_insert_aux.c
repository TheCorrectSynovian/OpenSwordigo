/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215AA8
 * Mangled: _ZNSt6vectorIN5Caver7BindingESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *
 * Callers: 1
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *
 * Callees: 14
 *   0x00000000001F3690  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 128
 *   insn=0x0000000000215AC4 string=0x0000000000215AC8 "X"
 *   insn=0x0000000000215AC8 string=0x0000000000215ACC ""
 *   insn=0x0000000000215AE8 string=0x0000000000215AEC "h"
 *   insn=0x0000000000215AEC string=0x0000000000215AF0 "`""
 *   insn=0x0000000000215AF0 string=0x0000000000215AF4 "ab"
 *   insn=0x0000000000215AF4 string=0x0000000000215AF8 "h"
 *   insn=0x0000000000215AFC string=0x0000000000215B00 "h"
 *   insn=0x0000000000215B00 string=0x0000000000215B04 "i"
 *   insn=0x0000000000215B0C string=0x0000000000215B10 "h"
 *   insn=0x0000000000215B10 string=0x0000000000215B14 "i\n"
 *   insn=0x0000000000215B20 string=0x0000000000215B24 ""
 *   insn=0x0000000000215B30 string=0x0000000000215B34 "}R"
 *   insn=0x0000000000215B48 string=0x0000000000215B4C "\t"
 *   insn=0x0000000000215B4C string=0x0000000000215B50 ")"
 *   insn=0x0000000000215B50 string=0x0000000000215B54 "?"
 *   insn=0x0000000000215B54 string=0x0000000000215B58 "K"
 *   insn=0x0000000000215B58 string=0x0000000000215B5C ")"
 *   insn=0x0000000000215B5C string=0x0000000000215B60 "4"
 *   insn=0x0000000000215B8C string=0x0000000000215B90 "\t^"
 *   insn=0x0000000000215B98 string=0x0000000000215B9C "l"
 *   insn=0x0000000000215BA4 string=0x0000000000215BA8 ""
 *   insn=0x0000000000215BB4 string=0x0000000000215BB8 "\t\t@"
 *   insn=0x0000000000215BBC string=0x0000000000215BC0 ""
 *   insn=0x0000000000215BCC string=0x0000000000215BD0 ")"
 *   insn=0x0000000000215BD8 string=0x0000000000215BDC " "
 *   insn=0x0000000000215BDC string=0x0000000000215BE0 "i&"
 *   insn=0x0000000000215BDC string=0x0000000000215D40 ""
 *   insn=0x0000000000215BE0 string=0x0000000000215BE4 ")=G"
 *   insn=0x0000000000215BE4 string=0x0000000000215BE8 "!"
 *   insn=0x0000000000215BE8 string=0x0000000000215BEC ")"
 *   insn=0x0000000000215BEC string=0x0000000000215BF0 "\t"
 *   insn=0x0000000000215BEC string=0x0000000000215D70 "\t"
 *   insn=0x0000000000215BF0 string=0x0000000000215BF4 "*"
 *   insn=0x0000000000215BF4 string=0x0000000000215BF8 "\n"
 *   insn=0x0000000000215BFC string=0x0000000000215C00 "_"
 *   insn=0x0000000000215C00 string=0x0000000000215D7C "?"
 *   insn=0x0000000000215C04 string=0x0000000000215C08 "i"
 *   insn=0x0000000000215C08 string=0x0000000000215C0C ")"
 *   insn=0x0000000000215C0C string=0x0000000000215C10 "*"
 *   insn=0x0000000000215C10 string=0x0000000000215C14 "I"
 *   insn=0x0000000000215C14 string=0x0000000000215C18 "+"
 *   insn=0x0000000000215C24 string=0x0000000000215C28 "J"
 *   insn=0x0000000000215C28 string=0x0000000000215C2C "_"
 *   insn=0x0000000000215C30 string=0x0000000000215C34 "Y"
 *   insn=0x0000000000215C34 string=0x0000000000215C38 ")"
 *   insn=0x0000000000215C3C string=0x0000000000215D94 "@="
 *   insn=0x0000000000215C40 string=0x0000000000215C44 " "
 *   insn=0x0000000000215C48 string=0x0000000000215C4C "e~"
 *   insn=0x0000000000215C4C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000215C50 string=0x0000000000215C54 "("
 *   insn=0x0000000000215C58 string=0x0000000000215C5C "{"
 *   insn=0x0000000000215C64 string=0x0000000000215C68 ""
 *   insn=0x0000000000215C68 string=0x0000000000215C6C "/R"
 *   insn=0x0000000000215C70 string=0x0000000000215C74 "h"
 *   insn=0x0000000000215C78 string=0x0000000000215C7C "h"
 *   insn=0x0000000000215C90 string=0x00000000001F3690 "P'"
 *   insn=0x0000000000215CA0 string=0x0000000000215CA4 "{v"
 *   insn=0x0000000000215CB4 string=0x0000000000215D28 "v"
 *   insn=0x0000000000215CB8 string=0x0000000000215CBC "{&"
 *   insn=0x0000000000215CBC string=0x0000000000215CC0 "Z"
 *   insn=0x0000000000215CC0 string=0x0000000000215CC4 "{?G"
 *   insn=0x0000000000215CD0 string=0x0000000000215CD4 "\t"
 *   insn=0x0000000000215CD0 string=0x0000000000215CE8 "\t"
 *   insn=0x0000000000215CD4 string=0x0000000000215CD8 "*"
 *   insn=0x0000000000215CD8 string=0x0000000000215CDC "\n"
 *   insn=0x0000000000215CE4 string=0x0000000000215CF4 "?"
 *   insn=0x0000000000215CE8 string=0x0000000000215CEC "*"
 *   insn=0x0000000000215CEC string=0x0000000000215CF0 "\n"
 *   insn=0x0000000000215D14 string=0x0000000000215CCC "!"
 *   insn=0x0000000000215D1C string=0x0000000000215D20 "A"
 *   insn=0x0000000000215D28 string=0x0000000000215D34 "h"
 *   insn=0x0000000000215D2C string=0x0000000000215D30 "`"
 *   insn=0x0000000000215D30 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000215D48 string=0x0000000000215D4C "!"
 *   insn=0x0000000000215D4C string=0x0000000000215D90 "P"
 *   insn=0x0000000000215D70 string=0x0000000000215D74 "*"
 *   insn=0x0000000000215D74 string=0x0000000000215D78 "\n"
 *   insn=0x0000000000215D90 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000215D9C string=0x0000000000215DA0 "V"
 *   insn=0x0000000000215D9C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000215DA0 string=0x0000000000215E28 "h"
 *   insn=0x0000000000215DA4 string=0x0000000000215DA8 "`"
 *   insn=0x0000000000215DAC string=0x0000000000215DB0 "u&"
 *   insn=0x0000000000215DC8 string=0x0000000000215DCC "\t"
 *   insn=0x0000000000215DC8 string=0x0000000000215DE8 "\t"
 *   insn=0x0000000000215DCC string=0x0000000000215DD0 "*"
 *   insn=0x0000000000215DD0 string=0x0000000000215DD4 "\n"
 *   insn=0x0000000000215DD8 string=0x0000000000215DDC "?"
 *   insn=0x0000000000215DE8 string=0x0000000000215DEC "*"
 *   insn=0x0000000000215DEC string=0x0000000000215DF0 "\n"
 *   insn=0x0000000000215DF0 string=0x0000000000215DF4 "?"
 *   insn=0x0000000000215DFC string=0x0000000000215E00 "iQ"
 *   insn=0x0000000000215E14 string=0x0000000000215DC4 "!"
 *   insn=0x0000000000215E1C string=0x0000000000215E20 "A"
 *   insn=0x0000000000215E28 string=0x0000000000215E2C ""
 *   insn=0x0000000000215E30 string=0x0000000000215E34 ")"
 *   insn=0x0000000000215E40 string=0x0000000000215E44 "i&"
 *   insn=0x0000000000215E44 string=0x0000000000215E48 ")=G"
 *   insn=0x0000000000215E48 string=0x0000000000215E4C "!"
 *   insn=0x0000000000215E50 string=0x0000000000215E54 "\t"
 *   insn=0x0000000000215E50 string=0x0000000000215E80 "\t"
 *   insn=0x0000000000215E54 string=0x0000000000215E58 "*"
 *   insn=0x0000000000215E58 string=0x0000000000215E5C "\n"
 *   insn=0x0000000000215E60 string=0x0000000000215E64 "?"
 *   insn=0x0000000000215E64 string=0x0000000000215E68 "l"
 *   insn=0x0000000000215E6C string=0x0000000000215E70 "MQ"
 *   insn=0x0000000000215E78 string=0x0000000000215E7C "="
 *   insn=0x0000000000215E80 string=0x0000000000215E84 "*"
 *   insn=0x0000000000215E84 string=0x0000000000215E88 "\n"
 *   insn=0x0000000000215E88 string=0x0000000000215E8C "?"
 *   insn=0x0000000000215E9C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000215EAC string=0x0000000000215EB0 ")"
 *   insn=0x0000000000215EC0 string=0x0000000000215EC4 "i&"
 *   insn=0x0000000000215EC4 string=0x0000000000215EC8 ")=G"
 *   insn=0x0000000000215EC8 string=0x0000000000215ECC "!"
 *   insn=0x0000000000215ECC string=0x0000000000215ED0 "i"
 *   insn=0x0000000000215ED0 string=0x0000000000215ED4 "\t"
 *   insn=0x0000000000215ED0 string=0x0000000000215EFC "\t"
 *   insn=0x0000000000215ED4 string=0x0000000000215ED8 "*"
 *   insn=0x0000000000215ED8 string=0x0000000000215EDC "\n"
 *   insn=0x0000000000215EE0 string=0x0000000000215EE4 "?"
 *   insn=0x0000000000215EE4 string=0x0000000000215EE8 "l"
 *   insn=0x0000000000215EEC string=0x0000000000215EF0 "-Q"
 *   insn=0x0000000000215EF4 string=0x0000000000215EF8 "s"
 *   insn=0x0000000000215EFC string=0x0000000000215F00 "*"
 *   insn=0x0000000000215F00 string=0x0000000000215F04 "\n"
 *   insn=0x0000000000215F04 string=0x0000000000215F08 "?"
 *   insn=0x0000000000215F08 string=0x0000000000215F0C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Binding>::_M_insert_aux(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // x19
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x20
  __int64 v11; // x23
  void *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // x9
  __int64 v16; // x10
  bool v17; // cf
  unsigned __int64 v18; // x9
  int v19; // w10
  unsigned __int64 v20; // x25
  __int64 v21; // x26
  __int64 v22; // x19
  __int64 v23; // x27
  __int64 v24; // x21
  _QWORD *v25; // x22
  _QWORD *v26; // x23
  unsigned int *v27; // x8
  int v28; // w9
  __int64 v29; // x8
  void *v30; // x0
  int v31; // [xsp+8h] [xbp-78h]
  __int64 v32; // [xsp+10h] [xbp-70h] BYREF
  __int64 v33; // [xsp+18h] [xbp-68h]
  int v34; // [xsp+20h] [xbp-60h]
  __int64 v35; // [xsp+28h] [xbp-58h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a1[1];
  if ( v6 == a1[2] )
  {
    v15 = (v6 - *a1) >> 5;
    if ( v6 == *a1 )
      v16 = 1;
    else
      v16 = (v6 - *a1) >> 5;
    v17 = __CFADD__(v16, v15);
    v18 = v16 + v15;
    v19 = v17;
    if ( v19 | (v18 >> 59 != 0) )
      v20 = 0x7FFFFFFFFFFFFFFLL;
    else
      v20 = v18;
    if ( v20 >> 59 )
      sub_565294();
    v21 = (a2 - *a1) >> 5;
    v22 = operator new(32 * v20);
    v23 = v22 + 32 * v21;
    *(_DWORD *)v23 = *a3;
    sub_56A528(v23 + 8, a3 + 2);
    *(_DWORD *)(v23 + 24) = a3[6];
    *(_QWORD *)(v23 + 16) = *((_QWORD *)a3 + 2);
    std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>();
    v24 = std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>();
    v25 = (_QWORD *)*a1;
    v26 = (_QWORD *)a1[1];
    if ( (_QWORD *)*a1 != v26 )
    {
      do
      {
        v29 = v25[1];
        v30 = (void *)(v29 - 24);
        if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
        {
          v27 = (unsigned int *)(v29 - 8);
          if ( &pthread_create )
          {
            do
              v28 = __ldaxr(v27);
            while ( __stlxr(v28 - 1, v27) );
          }
          else
          {
            v28 = (*v27)--;
          }
          if ( v28 <= 0 )
            operator delete(v30);
        }
        v25 += 4;
      }
      while ( v25 != v26 );
      v25 = (_QWORD *)*a1;
    }
    if ( v25 )
      operator delete(v25);
    *a1 = v22;
    a1[1] = v24;
    a1[2] = v22 + 32 * v20;
  }
  else
  {
    *(_DWORD *)v6 = *(_DWORD *)(v6 - 32);
    sub_56A528(v6 + 8, v6 - 24);
    v7 = *(_QWORD *)(v6 - 16);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 - 8);
    *(_QWORD *)(v6 + 16) = v7;
    a1[1] += 32;
    v31 = *a3;
    sub_56A528(&v32, a3 + 2);
    v34 = a3[6];
    v33 = *((_QWORD *)a3 + 2);
    v8 = a1[1];
    v9 = v8 - 64 - a2;
    if ( v9 >= 1 )
    {
      v10 = ((unsigned __int64)v9 >> 5) + 1;
      v11 = v8 - 48;
      do
      {
        *(_DWORD *)(v11 - 16) = *(_DWORD *)(v11 - 48);
        sub_56A6A8(v11 - 8, v11 - 40);
        --v10;
        *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 - 24);
        *(_QWORD *)v11 = *(_QWORD *)(v11 - 32);
        v11 -= 32;
      }
      while ( v10 > 1 );
    }
    *(_DWORD *)a2 = v31;
    sub_56A6A8(a2 + 8, &v32);
    *(_DWORD *)(a2 + 24) = v34;
    *(_QWORD *)(a2 + 16) = v33;
    v12 = (void *)(v32 - 24);
    if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v32 - 8);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 <= 0 )
        operator delete(v12);
    }
  }
}

