/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C06D4
 * Mangled: _ZN5Caver7Program14InitWithStringERKSsPSs
 * Demangled: Caver::Program::InitWithString(std::string const&,std::string *)
 *
 * Callers: 2
 *   0x0000000000201100  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004C0068  Caver::Program::~Program()
 *
 * Callees: 18
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63C0  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x00000000001FB9D0  luaL_loadstring(lua_State *,char const*)
 *   0x0000000000201AB0  lua_close(lua_State *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B10  luaL_newstate(void)
 *   0x00000000004C0B40  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000004C0C50  sub_4C0C50
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 103
 *   insn=0x00000000004C06E8 string=0x00000000004C06EC "W"
 *   insn=0x00000000004C0708 string=0x00000000004C070C "6"
 *   insn=0x00000000004C0710 string=0x00000000004C0714 ""
 *   insn=0x00000000004C0724 string=0x00000000004C0728 "\t@"
 *   insn=0x00000000004C0730 string=0x00000000004C0734 ""
 *   insn=0x00000000004C0744 string=0x00000000004C0748 "@"
 *   insn=0x00000000004C0754 string=0x00000000004C0758 "6"
 *   insn=0x00000000004C0758 string=0x00000000004C079C "h"
 *   insn=0x00000000004C075C string=0x00000000004C0760 ""
 *   insn=0x00000000004C0770 string=0x00000000004C0774 "\t@"
 *   insn=0x00000000004C077C string=0x00000000004C0780 ""
 *   insn=0x00000000004C0790 string=0x00000000004C0794 "@"
 *   insn=0x00000000004C079C string=0x00000000004C07A0 ""
 *   insn=0x00000000004C07AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C07B4 string=0x00000000004C07B8 "\"
 *   insn=0x00000000004C07CC string=0x00000000001F7F10 "0'"
 *   insn=0x00000000004C07D8 string=0x00000000004C07DC "]"
 *   insn=0x00000000004C07F4 string=0x00000000004C07F8 "6"
 *   insn=0x00000000004C07FC string=0x00000000004C0800 ""
 *   insn=0x00000000004C0810 string=0x00000000004C0814 "\t@"
 *   insn=0x00000000004C081C string=0x00000000004C0820 ""
 *   insn=0x00000000004C0830 string=0x00000000004C0834 "@"
 *   insn=0x00000000004C083C string=0x00000000004C0840 "a"
 *   insn=0x00000000004C0844 string=0x00000000004C0848 "b"
 *   insn=0x00000000004C0848 string=0x00000000001FB9D0 "0'"
 *   insn=0x00000000004C084C string=0x00000000004C08A8 "6"
 *   insn=0x00000000004C085C string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004C0880 string=0x00000000004C0884 ")"
 *   insn=0x00000000004C0884 string=0x00000000004C0888 ")"
 *   insn=0x00000000004C0890 string=0x00000000004C0894 "!\t"
 *   insn=0x00000000004C0894 string=0x00000000004C09B8 ")"
 *   insn=0x00000000004C0898 string=0x00000000004C089C ":"
 *   insn=0x00000000004C08A0 string=0x00000000004C08A4 ":"
 *   insn=0x00000000004C08C8 string=0x00000000004C08CC "`"
 *   insn=0x00000000004C08C8 string=0x00000000001F63C0 "0'"
 *   insn=0x00000000004C08D0 string=0x00000000004C08D4 "("
 *   insn=0x00000000004C08D8 string=0x00000000004C08DC "A"
 *   insn=0x00000000004C0928 string=0x00000000004C092C "5"
 *   insn=0x00000000004C0930 string=0x00000000004C0934 ""
 *   insn=0x00000000004C0940 string=0x00000000004C0944 "\t@"
 *   insn=0x00000000004C0950 string=0x00000000004C0954 ""
 *   insn=0x00000000004C0960 string=0x00000000004C0964 "@"
 *   insn=0x00000000004C0980 string=0x00000000004C09DC ")"
 *   insn=0x00000000004C0984 string=0x00000000004C0988 "J"
 *   insn=0x00000000004C0994 string=0x00000000004C0998 "A"
 *   insn=0x00000000004C0998 string=0x00000000004C0A40 "$"
 *   insn=0x00000000004C09B8 string=0x00000000004C09BC ")=G"
 *   insn=0x00000000004C09BC string=0x00000000004C09C0 "!"
 *   insn=0x00000000004C09C4 string=0x00000000004C09C8 "\t"
 *   insn=0x00000000004C09C4 string=0x00000000004C0A00 "\t"
 *   insn=0x00000000004C09C8 string=0x00000000004C09CC "*"
 *   insn=0x00000000004C09CC string=0x00000000004C09D0 "\n"
 *   insn=0x00000000004C09D4 string=0x00000000004C09D8 ""
 *   insn=0x00000000004C09D8 string=0x00000000004C0A0C "?"
 *   insn=0x00000000004C09DC string=0x00000000004C09E0 ")=G"
 *   insn=0x00000000004C09E0 string=0x00000000004C09E4 "!"
 *   insn=0x00000000004C09E8 string=0x00000000004C09EC "\t"
 *   insn=0x00000000004C09E8 string=0x00000000004C0A20 "\t"
 *   insn=0x00000000004C09EC string=0x00000000004C09F0 "*"
 *   insn=0x00000000004C09F0 string=0x00000000004C09F4 "\n"
 *   insn=0x00000000004C09FC string=0x00000000004C0A2C "?"
 *   insn=0x00000000004C0A00 string=0x00000000004C0A04 "*"
 *   insn=0x00000000004C0A04 string=0x00000000004C0A08 "\n"
 *   insn=0x00000000004C0A0C string=0x00000000004C0A10 "L"
 *   insn=0x00000000004C0A14 string=0x00000000004C0A18 "c"
 *   insn=0x00000000004C0A20 string=0x00000000004C0A24 "*"
 *   insn=0x00000000004C0A24 string=0x00000000004C0A28 "\n"
 *   insn=0x00000000004C0A34 string=0x00000000004C0A38 "["
 *   insn=0x00000000004C0A40 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C0A4C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C0A54 string=0x00000000004C0A58 "*"
 *   insn=0x00000000004C0A58 string=0x00000000004C0A5C "J"
 *   insn=0x00000000004C0A60 string=0x00000000004C0A64 "(a"
 *   insn=0x00000000004C0A68 string=0x00000000004C0A6C "`"
 *   insn=0x00000000004C0A6C string=0x00000000004C0A70 "*"
 *   insn=0x00000000004C0A70 string=0x00000000004C0A74 "J=G"
 *   insn=0x00000000004C0A74 string=0x00000000004C0A78 ")!"
 *   insn=0x00000000004C0A7C string=0x00000000004C0A80 "*"
 *   insn=0x00000000004C0A7C string=0x00000000004C0AAC "*"
 *   insn=0x00000000004C0A80 string=0x00000000004C0A84 "K"
 *   insn=0x00000000004C0A84 string=0x00000000004C0A88 "+"
 *   insn=0x00000000004C0A8C string=0x00000000004C0A90 "_"
 *   insn=0x00000000004C0A90 string=0x00000000004C0A94 ","
 *   insn=0x00000000004C0A9C string=0x00000000004C0AA0 "A"
 *   insn=0x00000000004C0AAC string=0x00000000004C0AB0 "K"
 *   insn=0x00000000004C0AB0 string=0x00000000004C0AB4 "+"
 *   insn=0x00000000004C0AB4 string=0x00000000004C0AB8 "_"
 *   insn=0x00000000004C0AD8 string=0x00000000004C0ADC ")"
 *   insn=0x00000000004C0ADC string=0x00000000004C0AE0 ")=G"
 *   insn=0x00000000004C0AE0 string=0x00000000004C0AE4 "!"
 *   insn=0x00000000004C0AE4 string=0x00000000004C0AE8 "i"
 *   insn=0x00000000004C0AE8 string=0x00000000004C0AEC "\t"
 *   insn=0x00000000004C0AE8 string=0x00000000004C0B14 "\t"
 *   insn=0x00000000004C0AEC string=0x00000000004C0AF0 "*"
 *   insn=0x00000000004C0AF0 string=0x00000000004C0AF4 "\n"
 *   insn=0x00000000004C0AF8 string=0x00000000004C0AFC "?"
 *   insn=0x00000000004C0B04 string=0x00000000004C0B08 "'"
 *   insn=0x00000000004C0B0C string=0x00000000004C0B10 "m"
 *   insn=0x00000000004C0B14 string=0x00000000004C0B18 "*"
 *   insn=0x00000000004C0B18 string=0x00000000004C0B1C "\n"
 *   insn=0x00000000004C0B1C string=0x00000000004C0B20 "?"
 *   insn=0x00000000004C0B20 string=0x00000000004C0B24 ""
 *   insn=0x00000000004C0B38 string=0x00000000004C0B3C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Program::InitWithString(_QWORD *a1, char **a2, __int64 a3)
{
  _QWORD *v6; // x22
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x22
  _QWORD *v13; // x22
  __int64 v14; // x9
  _QWORD *v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w0
  char *v19; // x0
  void *v20; // x0
  unsigned int v21; // w20
  __int64 v22; // x21
  _QWORD *v23; // x21
  __int64 v24; // x9
  _QWORD *v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  char *v28; // x0
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  char *v34; // [xsp+8h] [xbp-58h] BYREF
  __int64 v35; // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v36; // [xsp+18h] [xbp-48h]
  __int64 v37; // [xsp+28h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (_QWORD *)a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (_QWORD *)a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  if ( *((_QWORD *)*a2 - 3) )
  {
    v12 = operator new(8u);
    sub_56A528(v12, a2);
    v35 = v12;
    boost::detail::shared_count::shared_count<std::string>();
    boost::detail::sp_enable_shared_from_this();
    v13 = (_QWORD *)a1[2];
    v14 = v35;
    v35 = a1[1];
    v15 = v36;
    a1[1] = v14;
    a1[2] = v15;
    v36 = v13;
    if ( v13 )
    {
      v16 = v13[1] - 1LL;
      v13[1] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        v17 = v13[2] - 1LL;
        v13[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
      }
    }
    v18 = luaL_newstate();
    if ( (unsigned int)luaL_loadstring(v18, *a2) )
    {
      v19 = (char *)lua_tolstring();
      sub_566BB8((int)&v35, v19);
      if ( a3 )
        sub_56A6A8(a3);
      v20 = (void *)(v35 - 24);
      if ( (__int64 *)(v35 - 24) != &qword_6FD2E0 )
      {
        v30 = (unsigned int *)(v35 - 8);
        if ( &pthread_create )
        {
          do
            v31 = __ldaxr(v30);
          while ( __stlxr(v31 - 1, v30) );
        }
        else
        {
          v31 = (*v30)--;
        }
        if ( v31 <= 0 )
          operator delete(v20);
      }
      v21 = 0;
    }
    else
    {
      v34 = &byte_6FD2F8;
      if ( (unsigned int)lua_dump() )
      {
        v21 = 0;
      }
      else
      {
        v22 = operator new(8u);
        sub_56A528(v22, &v34);
        v35 = v22;
        boost::detail::shared_count::shared_count<std::string>();
        boost::detail::sp_enable_shared_from_this();
        v23 = (_QWORD *)a1[4];
        v24 = v35;
        v35 = a1[3];
        v25 = v36;
        a1[3] = v24;
        a1[4] = v25;
        v36 = v23;
        if ( v23 )
        {
          v26 = v23[1] - 1LL;
          v23[1] = v26;
          if ( !v26 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
            v27 = v23[2] - 1LL;
            v23[2] = v27;
            if ( !v27 )
              (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
          }
        }
        v21 = 1;
      }
      v28 = v34 - 24;
      if ( v34 - 24 != (char *)&qword_6FD2E0 )
      {
        v32 = (unsigned int *)(v34 - 8);
        if ( &pthread_create )
        {
          do
            v33 = __ldaxr(v32);
          while ( __stlxr(v33 - 1, v32) );
        }
        else
        {
          v33 = (*v32)--;
        }
        if ( v33 <= 0 )
          operator delete(v28);
      }
    }
    lua_close();
  }
  else
  {
    return 1;
  }
  return v21;
}

