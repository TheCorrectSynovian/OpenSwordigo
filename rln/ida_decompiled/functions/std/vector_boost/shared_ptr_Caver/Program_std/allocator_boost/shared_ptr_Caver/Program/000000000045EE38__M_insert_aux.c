/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045EE38
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver7ProgramEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Callers: 1
 *   0x00000000001F4690  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 114
 *   insn=0x000000000045EE5C string=0x000000000045EE60 "?"
 *   insn=0x000000000045EE68 string=0x000000000045EE6C "_"
 *   insn=0x000000000045EE6C string=0x000000000045EE70 "*"
 *   insn=0x000000000045EE70 string=0x000000000045EE74 "+)"
 *   insn=0x000000000045EE78 string=0x000000000045EE7C "K"
 *   insn=0x000000000045EE78 string=0x000000000045EE88 ")A"
 *   insn=0x000000000045EE7C string=0x000000000045EE80 "k"
 *   insn=0x000000000045EE80 string=0x000000000045EE84 "K"
 *   insn=0x000000000045EE94 string=0x000000000045EEA4 "\t"
 *   insn=0x000000000045EE98 string=0x000000000045EE9C ")"
 *   insn=0x000000000045EEA4 string=0x000000000045EEA8 "?"
 *   insn=0x000000000045EEA8 string=0x000000000045EEAC "+"
 *   insn=0x000000000045EEAC string=0x000000000045EEB0 ")"
 *   insn=0x000000000045EEB0 string=0x000000000045EEB4 "7"
 *   insn=0x000000000045EEB8 string=0x000000000045EEBC "\t"
 *   insn=0x000000000045EEBC string=0x000000000045EEC0 "\n@"
 *   insn=0x000000000045EEC4 string=0x000000000045EEC8 "K"
 *   insn=0x000000000045EEC8 string=0x000000000045EECC "k"
 *   insn=0x000000000045EECC string=0x000000000045EED0 "K"
 *   insn=0x000000000045EED4 string=0x000000000045EED8 "\t)"
 *   insn=0x000000000045EED8 string=0x000000000045EEDC "5"
 *   insn=0x000000000045EEE0 string=0x000000000045EEE4 ""
 *   insn=0x000000000045EEF0 string=0x000000000045EEF4 "\t@"
 *   insn=0x000000000045EF00 string=0x000000000045EF04 ""
 *   insn=0x000000000045EF10 string=0x000000000045EF14 "@"
 *   insn=0x000000000045EF30 string=0x000000000045EF40 "u"
 *   insn=0x000000000045EF34 string=0x000000000045EF38 ""
 *   insn=0x000000000045EF40 string=0x000000000045EF44 "vR"
 *   insn=0x000000000045EF44 string=0x000000000045EF48 "5"
 *   insn=0x000000000045EF48 string=0x000000000045EF8C "t"
 *   insn=0x000000000045EF4C string=0x000000000045EF50 ""
 *   insn=0x000000000045EF5C string=0x000000000045EF60 "\t@"
 *   insn=0x000000000045EF6C string=0x000000000045EF70 ""
 *   insn=0x000000000045EF7C string=0x000000000045EF80 "@"
 *   insn=0x000000000045EF90 string=0x000000000045EF94 ""
 *   insn=0x000000000045EFA4 string=0x000000000045EFA8 "\t@"
 *   insn=0x000000000045EFB0 string=0x000000000045EFB4 ""
 *   insn=0x000000000045EFDC string=0x000000000045EFE0 " "
 *   insn=0x000000000045EFE4 string=0x000000000045EFE8 "("
 *   insn=0x000000000045EFE8 string=0x000000000045EFEC ""
 *   insn=0x000000000045EFEC string=0x000000000045EFF0 "\t"
 *   insn=0x000000000045EFF0 string=0x000000000045EFF4 "("
 *   insn=0x000000000045EFF4 string=0x000000000045EFF8 "\n"
 *   insn=0x000000000045EFFC string=0x000000000045F000 "_"
 *   insn=0x000000000045F004 string=0x000000000045F008 ")"
 *   insn=0x000000000045F008 string=0x000000000045F00C "?"
 *   insn=0x000000000045F010 string=0x000000000045F014 "7"
 *   insn=0x000000000045F020 string=0x000000000045F1B0 "9"
 *   insn=0x000000000045F024 string=0x000000000045F028 "nY"
 *   insn=0x000000000045F028 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045F038 string=0x000000000045F03C "i"
 *   insn=0x000000000045F03C string=0x000000000045F040 ")"
 *   insn=0x000000000045F044 string=0x000000000045F048 "("
 *   insn=0x000000000045F04C string=0x000000000045F050 "("
 *   insn=0x000000000045F054 string=0x000000000045F058 "\t"
 *   insn=0x000000000045F058 string=0x000000000045F05C ")"
 *   insn=0x000000000045F05C string=0x000000000045F060 "\t"
 *   insn=0x000000000045F074 string=0x000000000045F078 "hB"
 *   insn=0x000000000045F07C string=0x000000000045F080 "K"
 *   insn=0x000000000045F088 string=0x000000000045F08C "K"
 *   insn=0x000000000045F094 string=0x000000000045F098 "l"
 *   insn=0x000000000045F094 string=0x000000000045F0A4 "JA"
 *   insn=0x000000000045F09C string=0x000000000045F0A0 "l"
 *   insn=0x000000000045F0A4 string=0x000000000045F0A8 "_"
 *   insn=0x000000000045F0A8 string=0x000000000045F0AC ")A"
 *   insn=0x000000000045F0AC string=0x000000000045F0B0 "a"
 *   insn=0x000000000045F0B0 string=0x000000000045F0B4 ""
 *   insn=0x000000000045F0B4 string=0x000000000045F0B8 ""
 *   insn=0x000000000045F0BC string=0x000000000045F0C0 "A"
 *   insn=0x000000000045F0C8 string=0x000000000045F0CC "?"
 *   insn=0x000000000045F0D0 string=0x000000000045F0D4 "(C"
 *   insn=0x000000000045F0DC string=0x000000000045F0E0 "K"
 *   insn=0x000000000045F0E0 string=0x000000000045F0E4 "+"
 *   insn=0x000000000045F0E4 string=0x000000000045F0E8 "K"
 *   insn=0x000000000045F0E8 string=0x000000000045F0EC "+"
 *   insn=0x000000000045F0F0 string=0x000000000045F0F4 "l"
 *   insn=0x000000000045F0F0 string=0x000000000045F100 "JA"
 *   insn=0x000000000045F0F8 string=0x000000000045F0FC "l"
 *   insn=0x000000000045F100 string=0x000000000045F104 "_"
 *   insn=0x000000000045F104 string=0x000000000045F108 ")A"
 *   insn=0x000000000045F10C string=0x000000000045F110 ""
 *   insn=0x000000000045F110 string=0x000000000045F114 ""
 *   insn=0x000000000045F114 string=0x000000000045F118 ""
 *   insn=0x000000000045F124 string=0x000000000045F180 "v"
 *   insn=0x000000000045F128 string=0x000000000045F12C "3"
 *   insn=0x000000000045F12C string=0x000000000045F130 "h"
 *   insn=0x000000000045F130 string=0x000000000045F134 ""
 *   insn=0x000000000045F134 string=0x000000000045F138 "h"
 *   insn=0x000000000045F13C string=0x000000000045F140 "h"
 *   insn=0x000000000045F144 string=0x000000000045F148 "\t@"
 *   insn=0x000000000045F14C string=0x000000000045F150 "h\n@"
 *   insn=0x000000000045F150 string=0x000000000045F154 ""
 *   insn=0x000000000045F154 string=0x000000000045F158 "h\n"
 *   insn=0x000000000045F15C string=0x000000000045F160 "h"
 *   insn=0x000000000045F164 string=0x000000000045F168 "@"
 *   insn=0x000000000045F170 string=0x000000000045F174 "?"
 *   insn=0x000000000045F184 string=0x000000000045F188 "J`"
 *   insn=0x000000000045F188 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045F1C0 string=0x000000000045F1C4 "4"
 *   insn=0x000000000045F1C8 string=0x000000000045F1CC ""
 *   insn=0x000000000045F1D8 string=0x000000000045F1DC "\t@"
 *   insn=0x000000000045F1E8 string=0x000000000045F1EC ""
 *   insn=0x000000000045F1F8 string=0x000000000045F1FC "@"
 *   insn=0x000000000045F20C string=0x000000000045F210 "O"
 *   insn=0x000000000045F230 string=0x000000000045F234 ")"
 *   insn=0x000000000045F234 string=0x000000000045F238 ")"
 *   insn=0x000000000045F244 string=0x000000000045F248 "(A"
 *   insn=0x000000000045F24C string=0x000000000045F250 ""
 *   insn=0x000000000045F270 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000045F274 string=0x000000000045F278 "h"
 *   insn=0x000000000045F274 string=0x000000000045F288 ":"
 *   insn=0x000000000045F278 string=0x000000000045F27C ""
 *   insn=0x000000000045F290 string=0x00000000001FD590 "0'"
 *   insn=0x000000000045F298 string=0x000000000045F29C ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::Program>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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
        sub_565294(a1, a2, a3);
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

