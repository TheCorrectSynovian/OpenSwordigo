/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B4FC0
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver13MusicPlaylistEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 1
 *   0x0000000000201C30  std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6130  Caver::GUIViewLayout::~GUIViewLayout()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 110
 *   insn=0x00000000003B4FE4 string=0x00000000003B4FE8 "?"
 *   insn=0x00000000003B4FF0 string=0x00000000003B4FF4 "_"
 *   insn=0x00000000003B4FF4 string=0x00000000003B4FF8 "*"
 *   insn=0x00000000003B4FF8 string=0x00000000003B4FFC "+)"
 *   insn=0x00000000003B5000 string=0x00000000003B5004 "K"
 *   insn=0x00000000003B5000 string=0x00000000003B5010 ")A"
 *   insn=0x00000000003B5004 string=0x00000000003B5008 "k"
 *   insn=0x00000000003B5008 string=0x00000000003B500C "K"
 *   insn=0x00000000003B501C string=0x00000000003B502C "\t"
 *   insn=0x00000000003B5020 string=0x00000000003B5024 ")"
 *   insn=0x00000000003B502C string=0x00000000003B5030 "?"
 *   insn=0x00000000003B5030 string=0x00000000003B5034 "+"
 *   insn=0x00000000003B5034 string=0x00000000003B5038 ")"
 *   insn=0x00000000003B5038 string=0x00000000003B503C "7"
 *   insn=0x00000000003B5040 string=0x00000000003B5044 "\t"
 *   insn=0x00000000003B5044 string=0x00000000003B5048 "\n@"
 *   insn=0x00000000003B504C string=0x00000000003B5050 "K"
 *   insn=0x00000000003B5050 string=0x00000000003B5054 "k"
 *   insn=0x00000000003B5054 string=0x00000000003B5058 "K"
 *   insn=0x00000000003B505C string=0x00000000003B5060 "\t)"
 *   insn=0x00000000003B5060 string=0x00000000003B5064 "5"
 *   insn=0x00000000003B5068 string=0x00000000003B506C ""
 *   insn=0x00000000003B5078 string=0x00000000003B507C "\t@"
 *   insn=0x00000000003B5088 string=0x00000000003B508C ""
 *   insn=0x00000000003B5098 string=0x00000000003B509C "@"
 *   insn=0x00000000003B50B8 string=0x00000000003B50C8 "u"
 *   insn=0x00000000003B50BC string=0x00000000003B50C0 ""
 *   insn=0x00000000003B50C8 string=0x00000000003B50CC "vR"
 *   insn=0x00000000003B50CC string=0x00000000003B50D0 "5"
 *   insn=0x00000000003B50D0 string=0x00000000003B5114 "t"
 *   insn=0x00000000003B50D4 string=0x00000000003B50D8 ""
 *   insn=0x00000000003B50E4 string=0x00000000003B50E8 "\t@"
 *   insn=0x00000000003B50F4 string=0x00000000003B50F8 ""
 *   insn=0x00000000003B5104 string=0x00000000003B5108 "@"
 *   insn=0x00000000003B5118 string=0x00000000003B511C ""
 *   insn=0x00000000003B512C string=0x00000000003B5130 "\t@"
 *   insn=0x00000000003B5138 string=0x00000000003B513C ""
 *   insn=0x00000000003B5164 string=0x00000000003B5168 " "
 *   insn=0x00000000003B516C string=0x00000000003B5170 "("
 *   insn=0x00000000003B5170 string=0x00000000003B5174 ""
 *   insn=0x00000000003B5174 string=0x00000000003B5178 "\t"
 *   insn=0x00000000003B5178 string=0x00000000003B517C "("
 *   insn=0x00000000003B517C string=0x00000000003B5180 "\n"
 *   insn=0x00000000003B5184 string=0x00000000003B5188 "_"
 *   insn=0x00000000003B518C string=0x00000000003B5190 ")"
 *   insn=0x00000000003B5190 string=0x00000000003B5194 "?"
 *   insn=0x00000000003B5198 string=0x00000000003B519C "7"
 *   insn=0x00000000003B51B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B51C0 string=0x00000000003B51C4 "i"
 *   insn=0x00000000003B51C4 string=0x00000000003B51C8 ")"
 *   insn=0x00000000003B51CC string=0x00000000003B51D0 "("
 *   insn=0x00000000003B51D4 string=0x00000000003B51D8 "("
 *   insn=0x00000000003B51DC string=0x00000000003B51E0 "\t"
 *   insn=0x00000000003B51E0 string=0x00000000003B51E4 ")"
 *   insn=0x00000000003B51E4 string=0x00000000003B51E8 "\t"
 *   insn=0x00000000003B51FC string=0x00000000003B5200 "hB"
 *   insn=0x00000000003B5204 string=0x00000000003B5208 "K"
 *   insn=0x00000000003B5210 string=0x00000000003B5214 "K"
 *   insn=0x00000000003B521C string=0x00000000003B5220 "l"
 *   insn=0x00000000003B521C string=0x00000000003B522C "JA"
 *   insn=0x00000000003B5224 string=0x00000000003B5228 "l"
 *   insn=0x00000000003B522C string=0x00000000003B5230 "_"
 *   insn=0x00000000003B5230 string=0x00000000003B5234 ")A"
 *   insn=0x00000000003B5234 string=0x00000000003B5238 "a"
 *   insn=0x00000000003B5238 string=0x00000000003B523C ""
 *   insn=0x00000000003B523C string=0x00000000003B5240 ""
 *   insn=0x00000000003B5244 string=0x00000000003B5248 "A"
 *   insn=0x00000000003B5250 string=0x00000000003B5254 "?"
 *   insn=0x00000000003B5258 string=0x00000000003B525C "(C"
 *   insn=0x00000000003B5264 string=0x00000000003B5268 "K"
 *   insn=0x00000000003B5268 string=0x00000000003B526C "+"
 *   insn=0x00000000003B526C string=0x00000000003B5270 "K"
 *   insn=0x00000000003B5270 string=0x00000000003B5274 "+"
 *   insn=0x00000000003B5278 string=0x00000000003B527C "l"
 *   insn=0x00000000003B5278 string=0x00000000003B5288 "JA"
 *   insn=0x00000000003B5280 string=0x00000000003B5284 "l"
 *   insn=0x00000000003B5288 string=0x00000000003B528C "_"
 *   insn=0x00000000003B528C string=0x00000000003B5290 ")A"
 *   insn=0x00000000003B5294 string=0x00000000003B5298 ""
 *   insn=0x00000000003B5298 string=0x00000000003B529C ""
 *   insn=0x00000000003B529C string=0x00000000003B52A0 ""
 *   insn=0x00000000003B52AC string=0x00000000003B5308 "v"
 *   insn=0x00000000003B52B0 string=0x00000000003B52B4 "3"
 *   insn=0x00000000003B52B4 string=0x00000000003B52B8 "h"
 *   insn=0x00000000003B52B8 string=0x00000000003B52BC ""
 *   insn=0x00000000003B52BC string=0x00000000003B52C0 "h"
 *   insn=0x00000000003B52C4 string=0x00000000003B52C8 "h"
 *   insn=0x00000000003B52CC string=0x00000000003B52D0 "\t@"
 *   insn=0x00000000003B52D4 string=0x00000000003B52D8 "h\n@"
 *   insn=0x00000000003B52D8 string=0x00000000003B52DC ""
 *   insn=0x00000000003B52DC string=0x00000000003B52E0 "h\n"
 *   insn=0x00000000003B52E4 string=0x00000000003B52E8 "h"
 *   insn=0x00000000003B52EC string=0x00000000003B52F0 "@"
 *   insn=0x00000000003B52F8 string=0x00000000003B52FC "?"
 *   insn=0x00000000003B5310 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B5348 string=0x00000000003B534C "4"
 *   insn=0x00000000003B5350 string=0x00000000003B5354 ""
 *   insn=0x00000000003B5360 string=0x00000000003B5364 "\t@"
 *   insn=0x00000000003B5370 string=0x00000000003B5374 ""
 *   insn=0x00000000003B5380 string=0x00000000003B5384 "@"
 *   insn=0x00000000003B5390 string=0x00000000003B5394 "L1"
 *   insn=0x00000000003B53BC string=0x00000000003B53C0 ")"
 *   insn=0x00000000003B53CC string=0x00000000003B53D0 "(A"
 *   insn=0x00000000003B53D4 string=0x00000000003B53D8 ""
 *   insn=0x00000000003B53EC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B53F4 string=0x00000000003B53F8 "N"
 *   insn=0x00000000003B53F8 string=0x00000000001F6130 "0'"
 *   insn=0x00000000003B5414 string=0x00000000003B541C "] "
 *   insn=0x00000000003B541C string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B5420 string=0x00000000003B5424 "(1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::MusicPlaylist>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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

