/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A1234
 * Mangled: _ZN5Caver4ItemD2Ev
 * Demangled: Caver::Item::~Item()
 *
 * Callers: 1
 *   0x00000000001F8950  Caver::Item::~Item()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x00000000003A1244 string=0x00000000003A1248 "T"
 *   insn=0x00000000003A1250 string=0x00000000003A1254 "5"
 *   insn=0x00000000003A1258 string=0x00000000003A125C "h"
 *   insn=0x00000000003A126C string=0x00000000003A1270 "h"
 *   insn=0x00000000003A126C string=0x00000000003A12C4 "\t"
 *   insn=0x00000000003A1278 string=0x00000000003A127C "a"
 *   insn=0x00000000003A127C string=0x00000000003A1280 "h\n@"
 *   insn=0x00000000003A127C string=0x00000000003A12E8 "\t"
 *   insn=0x00000000003A128C string=0x00000000003A1290 "h"
 *   insn=0x00000000003A128C string=0x00000000003A130C "\t"
 *   insn=0x00000000003A129C string=0x00000000003A1330 "\t"
 *   insn=0x00000000003A12A8 string=0x00000000003A12AC "A\t"
 *   insn=0x00000000003A12C4 string=0x00000000003A12C8 ")=G"
 *   insn=0x00000000003A12C8 string=0x00000000003A12CC "!"
 *   insn=0x00000000003A12CC string=0x00000000003A12D0 ")"
 *   insn=0x00000000003A12D0 string=0x00000000003A12D4 "\t"
 *   insn=0x00000000003A12D0 string=0x00000000003A1354 "\t"
 *   insn=0x00000000003A12D4 string=0x00000000003A12D8 "*"
 *   insn=0x00000000003A12D8 string=0x00000000003A12DC "\n"
 *   insn=0x00000000003A12E4 string=0x00000000003A1360 "?"
 *   insn=0x00000000003A12E8 string=0x00000000003A12EC ")=G"
 *   insn=0x00000000003A12EC string=0x00000000003A12F0 "!"
 *   insn=0x00000000003A12F0 string=0x00000000003A12F4 "\t"
 *   insn=0x00000000003A12F4 string=0x00000000003A12F8 "\t"
 *   insn=0x00000000003A12F4 string=0x00000000003A1374 "\t"
 *   insn=0x00000000003A12F8 string=0x00000000003A12FC "*"
 *   insn=0x00000000003A12FC string=0x00000000003A1300 "\n"
 *   insn=0x00000000003A1308 string=0x00000000003A1380 "?"
 *   insn=0x00000000003A130C string=0x00000000003A1310 ")=G"
 *   insn=0x00000000003A1310 string=0x00000000003A1314 "!"
 *   insn=0x00000000003A1318 string=0x00000000003A131C "\t"
 *   insn=0x00000000003A1318 string=0x00000000003A1394 "\t"
 *   insn=0x00000000003A131C string=0x00000000003A1320 "*"
 *   insn=0x00000000003A1320 string=0x00000000003A1324 "\n"
 *   insn=0x00000000003A132C string=0x00000000003A13A0 "?"
 *   insn=0x00000000003A1330 string=0x00000000003A1334 ")=G"
 *   insn=0x00000000003A1334 string=0x00000000003A1338 "!"
 *   insn=0x00000000003A133C string=0x00000000003A1340 "\t"
 *   insn=0x00000000003A133C string=0x00000000003A13B4 "\t"
 *   insn=0x00000000003A1340 string=0x00000000003A1344 "*"
 *   insn=0x00000000003A1344 string=0x00000000003A1348 "\n"
 *   insn=0x00000000003A1350 string=0x00000000003A13C0 "?"
 *   insn=0x00000000003A1354 string=0x00000000003A1358 "*"
 *   insn=0x00000000003A1358 string=0x00000000003A135C "\n"
 *   insn=0x00000000003A1360 string=0x00000000003A1364 "l"
 *   insn=0x00000000003A1374 string=0x00000000003A1378 "*"
 *   insn=0x00000000003A1378 string=0x00000000003A137C "\n"
 *   insn=0x00000000003A1394 string=0x00000000003A1398 "*"
 *   insn=0x00000000003A1398 string=0x00000000003A139C "\n"
 *   insn=0x00000000003A13A0 string=0x00000000003A13A4 "l"
 *   insn=0x00000000003A13B4 string=0x00000000003A13B8 "*"
 *   insn=0x00000000003A13B8 string=0x00000000003A13BC "\n"
 *   insn=0x00000000003A13D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Item::~Item(Caver::Item *this)
{
  __int64 v2; // x8
  void *v3; // x0
  __int64 v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  void *v7; // x0
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 4);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v2 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v3);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v4 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v5);
  }
  v6 = *((_QWORD *)this + 2);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v7);
  }
  v8 = *((_QWORD *)this + 1);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v9);
  }
}

