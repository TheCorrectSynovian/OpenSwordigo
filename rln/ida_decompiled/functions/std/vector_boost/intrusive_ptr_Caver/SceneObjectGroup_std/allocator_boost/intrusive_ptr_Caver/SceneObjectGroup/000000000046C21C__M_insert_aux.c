/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046C21C
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver16SceneObjectGroupEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObjectGroup>*,std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>>,boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callers: 1
 *   0x00000000001F97B0  std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObjectGroup>*,std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>>,boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62B0  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x000000000046C248 string=0x000000000046C24C "\t"
 *   insn=0x000000000046C24C string=0x000000000046C250 "\t"
 *   insn=0x000000000046C254 string=0x000000000046C258 "*\t@"
 *   insn=0x000000000046C254 string=0x000000000046C264 "\t!"
 *   insn=0x000000000046C258 string=0x000000000046C25C "J"
 *   insn=0x000000000046C25C string=0x000000000046C260 "*\t"
 *   insn=0x000000000046C270 string=0x000000000046C280 "!"
 *   insn=0x000000000046C274 string=0x000000000046C278 ")"
 *   insn=0x000000000046C280 string=0x000000000046C284 "\t"
 *   insn=0x000000000046C284 string=0x000000000046C288 "?"
 *   insn=0x000000000046C28C string=0x000000000046C290 ")"
 *   insn=0x000000000046C290 string=0x000000000046C294 "5"
 *   insn=0x000000000046C2A0 string=0x000000000046C2A4 "*\t@"
 *   insn=0x000000000046C2A4 string=0x000000000046C2A8 "J"
 *   insn=0x000000000046C2A8 string=0x000000000046C2AC "*\t"
 *   insn=0x000000000046C2B0 string=0x000000000046C2B4 "\t"
 *   insn=0x000000000046C2B8 string=0x000000000046C2BC "@"
 *   insn=0x000000000046C2BC string=0x000000000046C2C0 ""
 *   insn=0x000000000046C2C0 string=0x000000000046C2C4 ""
 *   insn=0x000000000046C2C8 string=0x000000000046C2CC ""
 *   insn=0x000000000046C2CC string=0x000000000046C2D0 ""
 *   insn=0x000000000046C2E8 string=0x000000000046C2F8 "`"
 *   insn=0x000000000046C2EC string=0x000000000046C2F0 ""
 *   insn=0x000000000046C2F8 string=0x000000000046C2FC "t"
 *   insn=0x000000000046C300 string=0x000000000046C304 "@"
 *   insn=0x000000000046C304 string=0x000000000046C308 ""
 *   insn=0x000000000046C308 string=0x000000000046C30C ""
 *   insn=0x000000000046C310 string=0x000000000046C314 ""
 *   insn=0x000000000046C314 string=0x000000000046C318 ""
 *   insn=0x000000000046C324 string=0x000000000046C328 ""
 *   insn=0x000000000046C32C string=0x000000000046C330 "A"
 *   insn=0x000000000046C350 string=0x000000000046C354 " "
 *   insn=0x000000000046C358 string=0x000000000046C35C ""
 *   insn=0x000000000046C35C string=0x000000000046C360 ""
 *   insn=0x000000000046C360 string=0x000000000046C364 "\n"
 *   insn=0x000000000046C364 string=0x000000000046C368 "H"
 *   insn=0x000000000046C368 string=0x000000000046C36C ""
 *   insn=0x000000000046C378 string=0x000000000046C37C "J"
 *   insn=0x000000000046C37C string=0x000000000046C380 "_"
 *   insn=0x000000000046C384 string=0x000000000046C388 "W"
 *   insn=0x000000000046C38C string=0x000000000046C390 "\n"
 *   insn=0x000000000046C390 string=0x000000000046C4D0 "q"
 *   insn=0x000000000046C394 string=0x000000000046C398 "v"
 *   insn=0x000000000046C39C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046C3AC string=0x000000000046C3B0 "\t\t@"
 *   insn=0x000000000046C3B0 string=0x000000000046C3B4 ")"
 *   insn=0x000000000046C3B4 string=0x000000000046C3B8 "\t\t"
 *   insn=0x000000000046C3C0 string=0x000000000046C3C4 "@"
 *   insn=0x000000000046C3C8 string=0x000000000046C3CC "h""
 *   insn=0x000000000046C3CC string=0x000000000046C3D0 "j"
 *   insn=0x000000000046C3DC string=0x000000000046C3E0 "l\t@"
 *   insn=0x000000000046C3DC string=0x000000000046C3EC ")!"
 *   insn=0x000000000046C3E4 string=0x000000000046C3E8 "l\t"
 *   insn=0x000000000046C3EC string=0x000000000046C3F0 "_"
 *   insn=0x000000000046C3F4 string=0x000000000046C3F8 ""
 *   insn=0x000000000046C3F8 string=0x000000000046C3FC ""
 *   insn=0x000000000046C400 string=0x000000000046C404 "!"
 *   insn=0x000000000046C414 string=0x000000000046C418 "?"
 *   insn=0x000000000046C418 string=0x000000000046C41C "@"
 *   insn=0x000000000046C41C string=0x000000000046C420 "(#"
 *   insn=0x000000000046C428 string=0x000000000046C42C "K"
 *   insn=0x000000000046C42C string=0x000000000046C430 "+"
 *   insn=0x000000000046C434 string=0x000000000046C438 "l\t@"
 *   insn=0x000000000046C434 string=0x000000000046C444 "J!"
 *   insn=0x000000000046C43C string=0x000000000046C440 "l\t"
 *   insn=0x000000000046C444 string=0x000000000046C448 "?"
 *   insn=0x000000000046C448 string=0x000000000046C44C ")!"
 *   insn=0x000000000046C450 string=0x000000000046C454 ""
 *   insn=0x000000000046C454 string=0x000000000046C458 ""
 *   insn=0x000000000046C458 string=0x000000000046C45C ""
 *   insn=0x000000000046C468 string=0x000000000046C4A0 "v"
 *   insn=0x000000000046C470 string=0x000000000046C474 "@"
 *   insn=0x000000000046C474 string=0x000000000046C478 ""
 *   insn=0x000000000046C478 string=0x000000000046C47C ""
 *   insn=0x000000000046C480 string=0x000000000046C484 ""
 *   insn=0x000000000046C484 string=0x000000000046C488 ""
 *   insn=0x000000000046C490 string=0x000000000046C494 "?"
 *   insn=0x000000000046C4A8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046C4D8 string=0x000000000046C4DC ""
 *   insn=0x000000000046C4E0 string=0x000000000046C4E4 "4"
 *   insn=0x000000000046C4E8 string=0x000000000046C4EC ""
 *   insn=0x000000000046C4F8 string=0x000000000046C4FC ""
 *   insn=0x000000000046C520 string=0x000000000046C524 "`"
 *   insn=0x000000000046C524 string=0x000000000046C528 "@"
 *   insn=0x000000000046C528 string=0x000000000046C530 "`"
 *   insn=0x000000000046C52C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046C530 string=0x000000000046C534 "@"
 *   insn=0x000000000046C544 string=0x000000000046C548 "Z'"
 *   insn=0x000000000046C548 string=0x00000000001F62B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>>::_M_insert_aux(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // x8
  __int64 v7; // x9
  _DWORD *v8; // x20
  char *v9; // x8
  __int64 v10; // x21
  char *v11; // x22
  _DWORD *v12; // x9
  _DWORD *v13; // t1
  _DWORD *v14; // x0
  int v15; // w8
  _DWORD *v16; // x0
  int v17; // w8
  int v18; // w8
  bool v19; // zf
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x10
  bool v23; // cf
  unsigned __int64 v24; // x8
  int v25; // w10
  unsigned __int64 v26; // x23
  char *v27; // x22
  __int64 v28; // x0
  _DWORD *v29; // x8
  __int64 v30; // x21
  char *v31; // x22
  __int64 v32; // x9
  __int64 v33; // x11
  unsigned __int64 v34; // x8
  char *v35; // x25
  unsigned __int64 v36; // x24
  _QWORD *v37; // x9
  char *v38; // x10
  __int64 v39; // x11
  _DWORD *v40; // x0
  int v41; // w8

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v20 = v4 - *a1;
    v19 = v20 == 0;
    v21 = v20 >> 3;
    if ( v19 )
      v22 = 1;
    else
      v22 = v21;
    v23 = __CFADD__(v22, v21);
    v24 = v22 + v21;
    v25 = v23;
    if ( v25 | (v24 >> 61 != 0) )
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v26 = v24;
    if ( v26 >> 61 )
      sub_565294(a1, a2, a3);
    v27 = (char *)(a2 - *a1);
    v28 = operator new(8 * v26);
    v29 = (_DWORD *)*a3;
    v30 = v28;
    *(_QWORD *)&v27[v28] = v29;
    if ( v29 )
      ++v29[2];
    v31 = *a1;
    if ( *a1 == a2 )
    {
      v34 = v28;
    }
    else
    {
      v32 = 0;
      do
      {
        v33 = *(_QWORD *)&v31[v32];
        *(_QWORD *)(v28 + v32) = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v32 += 8;
      }
      while ( a2 - v31 != v32 );
      v34 = v28 + ((a2 - 8 - v31) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    v35 = a1[1];
    v36 = v34 + 8;
    if ( v35 != a2 )
    {
      v37 = (_QWORD *)(v34 + 8);
      v38 = a2;
      do
      {
        v39 = *(_QWORD *)v38;
        *v37 = *(_QWORD *)v38;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v38 += 8;
        ++v37;
      }
      while ( v35 != v38 );
      v36 += ((v35 - 8 - a2) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    if ( v31 != v35 )
    {
      do
      {
        v40 = *(_DWORD **)v31;
        if ( *(_QWORD *)v31 )
        {
          v41 = v40[2] - 1;
          v40[2] = v41;
          if ( !v41 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
        }
        v31 += 8;
      }
      while ( v35 != v31 );
      v31 = *a1;
    }
    if ( v31 )
      operator delete(v31);
    *a1 = (char *)v30;
    a1[1] = (char *)v36;
    a1[2] = (char *)(v30 + 8 * v26);
  }
  else
  {
    v7 = *((_QWORD *)v4 - 1);
    *(_QWORD *)v4 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    a1[1] = v4 + 8;
    v8 = (_DWORD *)*a3;
    if ( *a3 )
      ++v8[2];
    v9 = v4 - 8;
    if ( v9 - a2 >= 1 )
    {
      v10 = ((unsigned __int64)(v9 - a2) >> 3) + 1;
      v11 = v9;
      do
      {
        v13 = (_DWORD *)*((_QWORD *)v11 - 1);
        v11 -= 8;
        v12 = v13;
        if ( v13 )
          ++v12[2];
        v14 = *(_DWORD **)v9;
        *(_QWORD *)v9 = v12;
        if ( v14 )
        {
          v15 = v14[2] - 1;
          v14[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        --v10;
        v9 = v11;
      }
      while ( v10 > 1 );
    }
    if ( v8 )
      ++v8[2];
    v16 = *(_DWORD **)a2;
    *(_QWORD *)a2 = v8;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    if ( v8 )
    {
      v18 = v8[2] - 1;
      v8[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
}

