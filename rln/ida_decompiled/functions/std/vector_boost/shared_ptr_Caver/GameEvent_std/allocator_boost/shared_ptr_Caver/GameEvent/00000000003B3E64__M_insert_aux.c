/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B3E64
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver9GameEventEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GameEvent>*,std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>>,boost::shared_ptr<Caver::GameEvent> const&)
 *
 * Callers: 1
 *   0x0000000000202A80  std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GameEvent>*,std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>>,boost::shared_ptr<Caver::GameEvent> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x00000000003B3E88 string=0x00000000003B3E8C "?"
 *   insn=0x00000000003B3E94 string=0x00000000003B3E98 "_"
 *   insn=0x00000000003B3E98 string=0x00000000003B3E9C "*"
 *   insn=0x00000000003B3E9C string=0x00000000003B3EA0 "+)"
 *   insn=0x00000000003B3EA4 string=0x00000000003B3EA8 "K"
 *   insn=0x00000000003B3EA4 string=0x00000000003B3EB4 ")A"
 *   insn=0x00000000003B3EA8 string=0x00000000003B3EAC "k"
 *   insn=0x00000000003B3EAC string=0x00000000003B3EB0 "K"
 *   insn=0x00000000003B3EC0 string=0x00000000003B3ED0 "\t"
 *   insn=0x00000000003B3EC4 string=0x00000000003B3EC8 ")"
 *   insn=0x00000000003B3ED0 string=0x00000000003B3ED4 "?"
 *   insn=0x00000000003B3ED4 string=0x00000000003B3ED8 "+"
 *   insn=0x00000000003B3ED8 string=0x00000000003B3EDC ")"
 *   insn=0x00000000003B3EDC string=0x00000000003B3EE0 "7"
 *   insn=0x00000000003B3EE4 string=0x00000000003B3EE8 "\t"
 *   insn=0x00000000003B3EE8 string=0x00000000003B3EEC "\n@"
 *   insn=0x00000000003B3EF0 string=0x00000000003B3EF4 "K"
 *   insn=0x00000000003B3EF4 string=0x00000000003B3EF8 "k"
 *   insn=0x00000000003B3EF8 string=0x00000000003B3EFC "K"
 *   insn=0x00000000003B3F00 string=0x00000000003B3F04 "\t)"
 *   insn=0x00000000003B3F04 string=0x00000000003B3F08 "5"
 *   insn=0x00000000003B3F0C string=0x00000000003B3F10 ""
 *   insn=0x00000000003B3F1C string=0x00000000003B3F20 "\t@"
 *   insn=0x00000000003B3F2C string=0x00000000003B3F30 ""
 *   insn=0x00000000003B3F3C string=0x00000000003B3F40 "@"
 *   insn=0x00000000003B3F5C string=0x00000000003B3F6C "u"
 *   insn=0x00000000003B3F60 string=0x00000000003B3F64 ""
 *   insn=0x00000000003B3F6C string=0x00000000003B3F70 "vR"
 *   insn=0x00000000003B3F70 string=0x00000000003B3F74 "5"
 *   insn=0x00000000003B3F74 string=0x00000000003B3FB8 "t"
 *   insn=0x00000000003B3F78 string=0x00000000003B3F7C ""
 *   insn=0x00000000003B3F88 string=0x00000000003B3F8C "\t@"
 *   insn=0x00000000003B3F98 string=0x00000000003B3F9C ""
 *   insn=0x00000000003B3FA8 string=0x00000000003B3FAC "@"
 *   insn=0x00000000003B3FBC string=0x00000000003B3FC0 ""
 *   insn=0x00000000003B3FD0 string=0x00000000003B3FD4 "\t@"
 *   insn=0x00000000003B3FDC string=0x00000000003B3FE0 ""
 *   insn=0x00000000003B4008 string=0x00000000003B400C " "
 *   insn=0x00000000003B4010 string=0x00000000003B4014 "("
 *   insn=0x00000000003B4014 string=0x00000000003B4018 ""
 *   insn=0x00000000003B4018 string=0x00000000003B401C "\t"
 *   insn=0x00000000003B401C string=0x00000000003B4020 "("
 *   insn=0x00000000003B4020 string=0x00000000003B4024 "\n"
 *   insn=0x00000000003B4028 string=0x00000000003B402C "_"
 *   insn=0x00000000003B4030 string=0x00000000003B4034 ")"
 *   insn=0x00000000003B4034 string=0x00000000003B4038 "?"
 *   insn=0x00000000003B403C string=0x00000000003B4040 "7"
 *   insn=0x00000000003B404C string=0x00000000003B41DC "."
 *   insn=0x00000000003B4050 string=0x00000000003B4054 "c"
 *   insn=0x00000000003B4054 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B4064 string=0x00000000003B4068 "i"
 *   insn=0x00000000003B4068 string=0x00000000003B406C ")"
 *   insn=0x00000000003B4070 string=0x00000000003B4074 "("
 *   insn=0x00000000003B4078 string=0x00000000003B407C "("
 *   insn=0x00000000003B4080 string=0x00000000003B4084 "\t"
 *   insn=0x00000000003B4084 string=0x00000000003B4088 ")"
 *   insn=0x00000000003B4088 string=0x00000000003B408C "\t"
 *   insn=0x00000000003B40A0 string=0x00000000003B40A4 "hB"
 *   insn=0x00000000003B40A8 string=0x00000000003B40AC "K"
 *   insn=0x00000000003B40B4 string=0x00000000003B40B8 "K"
 *   insn=0x00000000003B40C0 string=0x00000000003B40C4 "l"
 *   insn=0x00000000003B40C0 string=0x00000000003B40D0 "JA"
 *   insn=0x00000000003B40C8 string=0x00000000003B40CC "l"
 *   insn=0x00000000003B40D0 string=0x00000000003B40D4 "_"
 *   insn=0x00000000003B40D4 string=0x00000000003B40D8 ")A"
 *   insn=0x00000000003B40D8 string=0x00000000003B40DC "a"
 *   insn=0x00000000003B40DC string=0x00000000003B40E0 ""
 *   insn=0x00000000003B40E0 string=0x00000000003B40E4 ""
 *   insn=0x00000000003B40E8 string=0x00000000003B40EC "A"
 *   insn=0x00000000003B40F4 string=0x00000000003B40F8 "?"
 *   insn=0x00000000003B40FC string=0x00000000003B4100 "(C"
 *   insn=0x00000000003B4108 string=0x00000000003B410C "K"
 *   insn=0x00000000003B410C string=0x00000000003B4110 "+"
 *   insn=0x00000000003B4110 string=0x00000000003B4114 "K"
 *   insn=0x00000000003B4114 string=0x00000000003B4118 "+"
 *   insn=0x00000000003B411C string=0x00000000003B4120 "l"
 *   insn=0x00000000003B411C string=0x00000000003B412C "JA"
 *   insn=0x00000000003B4124 string=0x00000000003B4128 "l"
 *   insn=0x00000000003B412C string=0x00000000003B4130 "_"
 *   insn=0x00000000003B4130 string=0x00000000003B4134 ")A"
 *   insn=0x00000000003B4138 string=0x00000000003B413C ""
 *   insn=0x00000000003B413C string=0x00000000003B4140 ""
 *   insn=0x00000000003B4140 string=0x00000000003B4144 ""
 *   insn=0x00000000003B4150 string=0x00000000003B41AC "v"
 *   insn=0x00000000003B4154 string=0x00000000003B4158 "3"
 *   insn=0x00000000003B4158 string=0x00000000003B415C "h"
 *   insn=0x00000000003B415C string=0x00000000003B4160 ""
 *   insn=0x00000000003B4160 string=0x00000000003B4164 "h"
 *   insn=0x00000000003B4168 string=0x00000000003B416C "h"
 *   insn=0x00000000003B4170 string=0x00000000003B4174 "\t@"
 *   insn=0x00000000003B4178 string=0x00000000003B417C "h\n@"
 *   insn=0x00000000003B417C string=0x00000000003B4180 ""
 *   insn=0x00000000003B4180 string=0x00000000003B4184 "h\n"
 *   insn=0x00000000003B4188 string=0x00000000003B418C "h"
 *   insn=0x00000000003B4190 string=0x00000000003B4194 "@"
 *   insn=0x00000000003B419C string=0x00000000003B41A0 "?"
 *   insn=0x00000000003B41B0 string=0x00000000003B41B4 "?"
 *   insn=0x00000000003B41B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B41EC string=0x00000000003B41F0 "4"
 *   insn=0x00000000003B41F4 string=0x00000000003B41F8 ""
 *   insn=0x00000000003B4204 string=0x00000000003B4208 "\t@"
 *   insn=0x00000000003B4214 string=0x00000000003B4218 ""
 *   insn=0x00000000003B4224 string=0x00000000003B4228 "@"
 *   insn=0x00000000003B4238 string=0x00000000003B423C "Dh"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GameEvent>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
{
  _QWORD *v4; // x9
  char *v7; // x8
  __int64 v8; // x10
  _QWORD *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // t1
  __int64 v15; // x10
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  char *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  bool v27; // cf
  unsigned __int64 v28; // x8
  int v29; // w9
  unsigned __int64 v30; // x23
  __int64 v31; // x21
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x22
  unsigned __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x12
  __int64 v38; // x11
  __int64 v39; // x10
  char *v40; // x25
  unsigned __int64 v41; // x24
  _QWORD *v42; // x9
  char *v43; // x10
  __int64 v44; // x11
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x8

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    v24 = (char *)*a1;
    v25 = ((__int64)v4 - *a1) >> 4;
    if ( v4 == (_QWORD *)*a1 )
      v26 = 1;
    else
      v26 = ((__int64)v4 - *a1) >> 4;
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 >> 60 != 0) )
      v30 = 0xFFFFFFFFFFFFFFFLL;
    else
      v30 = v28;
    if ( v30 )
    {
      if ( v30 >> 60 )
        sub_565294();
      v31 = operator new(16 * v30);
    }
    else
    {
      v31 = 0;
    }
    v32 = (_QWORD *)(v31 + 16 * ((a2 - v24) >> 4));
    *v32 = *a3;
    v33 = a3[1];
    v32[1] = v33;
    if ( v33 )
      ++*(_QWORD *)(v33 + 8);
    v34 = (char *)*a1;
    v35 = v31;
    if ( (char *)*a1 != a2 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v31 + v36);
        *v37 = *(_QWORD *)&v34[v36];
        v38 = *(_QWORD *)&v34[v36 + 8];
        v37[1] = v38;
        if ( v38 )
          ++*(_QWORD *)(v38 + 8);
        v39 = (__int64)&v34[v36 + 16];
        v36 += 16;
      }
      while ( (char *)v39 != a2 );
      v35 = v31 + ((a2 - 16 - v34) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v40 = (char *)a1[1];
    v41 = v35 + 16;
    if ( v40 != a2 )
    {
      v42 = (_QWORD *)(v35 + 16);
      v43 = a2;
      do
      {
        *v42 = *(_QWORD *)v43;
        v44 = *((_QWORD *)v43 + 1);
        v42[1] = v44;
        if ( v44 )
          ++*(_QWORD *)(v44 + 8);
        v43 += 16;
        v42 += 2;
      }
      while ( v43 != v40 );
      v41 += ((v40 - 16 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    if ( v34 != v40 )
    {
      do
      {
        v45 = (_QWORD *)*((_QWORD *)v34 + 1);
        if ( v45 )
        {
          v46 = v45[1] - 1LL;
          v45[1] = v46;
          if ( !v46 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
            v47 = v45[2] - 1LL;
            v45[2] = v47;
            if ( !v47 )
              (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
          }
        }
        v34 += 16;
      }
      while ( v40 != v34 );
      v34 = (char *)*a1;
    }
    if ( v34 )
      operator delete(v34);
    *a1 = v31;
    a1[1] = v41;
    a1[2] = v31 + 16 * v30;
  }
  else
  {
    v7 = (char *)(v4 - 2);
    v8 = *(v4 - 1);
    *v4 = *(v4 - 2);
    v4[1] = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    a1[1] = (__int64)(v4 + 2);
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    if ( v7 - a2 >= 1 )
    {
      v11 = ((unsigned __int64)(v7 - a2) >> 4) + 1;
      v12 = (char *)(v4 - 2);
      do
      {
        v14 = *((_QWORD *)v12 - 2);
        v12 -= 16;
        v13 = v14;
        v15 = *((_QWORD *)v12 + 1);
        if ( v15 )
          ++*(_QWORD *)(v15 + 8);
        v16 = (_QWORD *)*((_QWORD *)v7 + 1);
        *(_QWORD *)v7 = v13;
        *((_QWORD *)v7 + 1) = v15;
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
        --v11;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v19 = (_QWORD *)*((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = v10;
    *((_QWORD *)a2 + 1) = v9;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    if ( v9 )
    {
      v22 = v9[1] - 1LL;
      v9[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v23 = v9[2] - 1LL;
        v9[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

