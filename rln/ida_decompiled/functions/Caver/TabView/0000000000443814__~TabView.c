/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443814
 * Mangled: _ZN5Caver7TabViewD2Ev
 * Demangled: Caver::TabView::~TabView()
 *
 * Callers: 1
 *   0x0000000000200000  Caver::TabView::~TabView()
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000443B68  Caver::TabView::~TabView()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 114
 *   insn=0x000000000044382C string=0x0000000000443830 "U"
 *   insn=0x000000000044383C string=0x0000000000443840 "("
 *   insn=0x0000000000443840 string=0x0000000000443844 "v"
 *   insn=0x0000000000443844 string=0x0000000000443848 "u@"
 *   insn=0x0000000000443848 string=0x000000000044384C "A"
 *   insn=0x000000000044384C string=0x0000000000443850 "h"
 *   insn=0x0000000000443850 string=0x0000000000443854 "V"
 *   insn=0x0000000000443854 string=0x00000000004438DC "`"
 *   insn=0x000000000044386C string=0x0000000000443870 "9?G"
 *   insn=0x0000000000443884 string=0x0000000000443894 "!"
 *   insn=0x0000000000443888 string=0x000000000044388C "a"
 *   insn=0x0000000000443898 string=0x000000000044389C "\t"
 *   insn=0x0000000000443898 string=0x00000000004438B0 "\t"
 *   insn=0x000000000044389C string=0x00000000004438A0 "*"
 *   insn=0x00000000004438A0 string=0x00000000004438A4 "\n"
 *   insn=0x00000000004438AC string=0x00000000004438BC "?"
 *   insn=0x00000000004438B0 string=0x00000000004438B4 "*"
 *   insn=0x00000000004438B4 string=0x00000000004438B8 "\n"
 *   insn=0x00000000004438BC string=0x00000000004438C0 "L"
 *   insn=0x00000000004438CC string=0x00000000004438D0 "A"
 *   insn=0x00000000004438D8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004438DC string=0x00000000004438E0 "@"
 *   insn=0x00000000004438E0 string=0x00000000004438E8 "`"
 *   insn=0x00000000004438E8 string=0x00000000004438EC "@"
 *   insn=0x00000000004438EC string=0x00000000004438F4 "`"
 *   insn=0x00000000004438F8 string=0x00000000004438FC "@"
 *   insn=0x00000000004438F8 string=0x0000000000443918 "`"
 *   insn=0x00000000004438FC string=0x0000000000443900 ""
 *   insn=0x0000000000443900 string=0x0000000000443904 ""
 *   insn=0x0000000000443908 string=0x000000000044390C ""
 *   insn=0x000000000044390C string=0x0000000000443910 ""
 *   insn=0x0000000000443918 string=0x000000000044391C "@"
 *   insn=0x000000000044391C string=0x0000000000443924 "`"
 *   insn=0x0000000000443924 string=0x0000000000443928 "@"
 *   insn=0x0000000000443928 string=0x0000000000443930 "`"
 *   insn=0x0000000000443934 string=0x0000000000443938 "@"
 *   insn=0x0000000000443934 string=0x0000000000443954 "`"
 *   insn=0x0000000000443938 string=0x000000000044393C ""
 *   insn=0x000000000044393C string=0x0000000000443940 ""
 *   insn=0x0000000000443944 string=0x0000000000443948 ""
 *   insn=0x0000000000443948 string=0x000000000044394C ""
 *   insn=0x0000000000443958 string=0x000000000044395C "@"
 *   insn=0x0000000000443958 string=0x0000000000443978 "`"
 *   insn=0x000000000044395C string=0x0000000000443960 ""
 *   insn=0x0000000000443960 string=0x0000000000443964 ""
 *   insn=0x0000000000443968 string=0x000000000044396C ""
 *   insn=0x000000000044396C string=0x0000000000443970 ""
 *   insn=0x000000000044397C string=0x0000000000443980 "@"
 *   insn=0x000000000044397C string=0x000000000044399C "`~@"
 *   insn=0x0000000000443980 string=0x0000000000443984 ""
 *   insn=0x0000000000443984 string=0x0000000000443988 ""
 *   insn=0x000000000044398C string=0x0000000000443990 ""
 *   insn=0x0000000000443990 string=0x0000000000443994 ""
 *   insn=0x00000000004439A0 string=0x00000000004439A4 "@"
 *   insn=0x00000000004439A4 string=0x00000000004439A8 ""
 *   insn=0x00000000004439A8 string=0x00000000004439AC ""
 *   insn=0x00000000004439B0 string=0x00000000004439B4 ""
 *   insn=0x00000000004439B4 string=0x00000000004439B8 ""
 *   insn=0x00000000004439C0 string=0x00000000004439C4 ""
 *   insn=0x00000000004439D4 string=0x00000000004439F4 "7"
 *   insn=0x00000000004439F4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004439F8 string=0x00000000004439FC "G"
 *   insn=0x0000000000443A00 string=0x0000000000443A04 "`~@"
 *   insn=0x0000000000443A08 string=0x0000000000443A0C "C"
 *   insn=0x0000000000443A08 string=0x0000000000443AFC "@"
 *   insn=0x0000000000443A10 string=0x0000000000443A14 "`"
 *   insn=0x0000000000443A18 string=0x0000000000443A1C "6"
 *   insn=0x0000000000443A18 string=0x0000000000443AD8 "@"
 *   insn=0x0000000000443A1C string=0x0000000000443AF4 "`~@"
 *   insn=0x0000000000443A24 string=0x0000000000443A28 "H"
 *   insn=0x0000000000443A28 string=0x0000000000443A2C "\t\t@"
 *   insn=0x0000000000443A28 string=0x0000000000443AD0 "`"
 *   insn=0x0000000000443A2C string=0x0000000000443A30 ")"
 *   insn=0x0000000000443A30 string=0x0000000000443A34 "\t\t"
 *   insn=0x0000000000443A38 string=0x0000000000443A3C "\t"
 *   insn=0x0000000000443A3C string=0x0000000000443A40 ")"
 *   insn=0x0000000000443A44 string=0x0000000000443A48 " "
 *   insn=0x0000000000443A48 string=0x0000000000443A4C "!"
 *   insn=0x0000000000443A50 string=0x0000000000443A54 "h"
 *   insn=0x0000000000443A5C string=0x0000000000443A60 "`"
 *   insn=0x0000000000443A64 string=0x0000000000443A68 "`"
 *   insn=0x0000000000443A64 string=0x0000000000443A84 "7"
 *   insn=0x0000000000443A68 string=0x0000000000443A6C " "
 *   insn=0x0000000000443A6C string=0x0000000000443A90 "@"
 *   insn=0x0000000000443A70 string=0x0000000000443AAC "`"
 *   insn=0x0000000000443A74 string=0x0000000000443A78 ":"
 *   insn=0x0000000000443A78 string=0x0000000000443A7C "`"
 *   insn=0x0000000000443A7C string=0x0000000000443A80 "@"
 *   insn=0x0000000000443A84 string=0x0000000000443A88 "`"
 *   insn=0x0000000000443A90 string=0x0000000000443A94 ""
 *   insn=0x0000000000443A94 string=0x0000000000443A98 ""
 *   insn=0x0000000000443A9C string=0x0000000000443AA0 ""
 *   insn=0x0000000000443AA0 string=0x0000000000443AA4 ""
 *   insn=0x0000000000443AB0 string=0x0000000000443AB4 "@"
 *   insn=0x0000000000443AB4 string=0x0000000000443AB8 ""
 *   insn=0x0000000000443AB8 string=0x0000000000443ABC ""
 *   insn=0x0000000000443AC0 string=0x0000000000443AC4 ""
 *   insn=0x0000000000443AC4 string=0x0000000000443AC8 ""
 *   insn=0x0000000000443AD8 string=0x0000000000443ADC ""
 *   insn=0x0000000000443ADC string=0x0000000000443AE0 ""
 *   insn=0x0000000000443AE4 string=0x0000000000443AE8 ""
 *   insn=0x0000000000443AE8 string=0x0000000000443AEC ""
 *   insn=0x0000000000443AFC string=0x0000000000443B00 ""
 *   insn=0x0000000000443B00 string=0x0000000000443B04 ""
 *   insn=0x0000000000443B08 string=0x0000000000443B0C ""
 *   insn=0x0000000000443B0C string=0x0000000000443B10 ""
 *   insn=0x0000000000443B20 string=0x0000000000443B24 "h"
 *   insn=0x0000000000443B24 string=0x0000000000443B28 "h"
 *   insn=0x0000000000443B30 string=0x0000000000443B34 "\t\t@"
 *   insn=0x0000000000443B34 string=0x0000000000443B38 ")"
 *   insn=0x0000000000443B38 string=0x0000000000443B3C "\t\t"
 *   insn=0x0000000000443B40 string=0x0000000000443B44 "\t"
 *   insn=0x0000000000443B44 string=0x0000000000443B48 ")"
 *   insn=0x0000000000443B4C string=0x0000000000443B50 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabView::~TabView(Caver::TabView *this)
{
  __int64 v2; // x22
  __int64 v3; // x8
  __int64 v4; // x23
  __int64 v5; // x8
  __int64 v6; // t1
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  void *v10; // x0
  void *v11; // x0
  _DWORD *v12; // x0
  int v13; // w8
  void *v14; // x0
  void *v15; // x0
  _DWORD *v16; // x0
  int v17; // w8
  _DWORD *v18; // x0
  int v19; // w8
  _DWORD *v20; // x0
  int v21; // w8
  _DWORD *v22; // x0
  int v23; // w8

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 67);
  *(_QWORD *)this = off_6D3F70;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 - 8);
    if ( v3 )
    {
      v4 = v2 + 8 * v3;
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 - 8);
          v4 -= 8;
          v5 = v6;
          v7 = (void *)(v6 - 24);
          if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
          {
            v8 = (unsigned int *)(v5 - 8);
            if ( &pthread_create )
            {
              do
                v9 = __ldaxr(v8);
              while ( __stlxr(v9 - 1, v8) );
            }
            else
            {
              v9 = (*v8)--;
            }
            if ( v9 <= 0 )
              break;
          }
          if ( v4 == v2 )
            goto LABEL_13;
        }
        operator delete(v7);
      }
      while ( v4 != v2 );
    }
LABEL_13:
    operator delete[]((void *)(v2 - 8));
  }
  v10 = (void *)*((_QWORD *)this + 61);
  if ( v10 )
    operator delete[](v10);
  v11 = (void *)*((_QWORD *)this + 58);
  if ( v11 )
    operator delete[](v11);
  v12 = (_DWORD *)*((_QWORD *)this + 54);
  if ( v12 )
  {
    v13 = v12[2] - 1;
    v12[2] = v13;
    if ( !v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  v14 = (void *)*((_QWORD *)this + 50);
  if ( v14 )
    operator delete[](v14);
  v15 = (void *)*((_QWORD *)this + 47);
  if ( v15 )
    operator delete[](v15);
  v16 = (_DWORD *)*((_QWORD *)this + 43);
  if ( v16 )
  {
    v17 = v16[2] - 1;
    v16[2] = v17;
    if ( !v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v18 = (_DWORD *)*((_QWORD *)this + 33);
  if ( v18 )
  {
    v19 = v18[2] - 1;
    v18[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  v20 = (_DWORD *)*((_QWORD *)this + 32);
  if ( v20 )
  {
    v21 = v20[2] - 1;
    v20[2] = v21;
    if ( !v21 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 8LL))(v20);
  }
  v22 = (_DWORD *)*((_QWORD *)this + 31);
  if ( v22 )
  {
    v23 = v22[2] - 1;
    v22[2] = v23;
    if ( !v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  Caver::GUIView::~GUIView(this);
}

