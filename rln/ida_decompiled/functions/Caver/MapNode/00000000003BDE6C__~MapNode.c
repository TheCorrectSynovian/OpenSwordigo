/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BDE6C
 * Mangled: _ZN5Caver7MapNodeD2Ev
 * Demangled: Caver::MapNode::~MapNode()
 *
 * Callers: 1
 *   0x00000000001FFA30  Caver::MapNode::~MapNode()
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x00000000003BDE80 string=0x00000000003BDE84 "U"
 *   insn=0x00000000003BDE8C string=0x00000000003BDE90 "V"
 *   insn=0x00000000003BDE94 string=0x00000000003BDE98 "h2@"
 *   insn=0x00000000003BDEA4 string=0x00000000003BDEA8 "a"
 *   insn=0x00000000003BDEA8 string=0x00000000003BDEAC "t^C"
 *   insn=0x00000000003BDEA8 string=0x00000000003BDF74 ")"
 *   insn=0x00000000003BDEB0 string=0x00000000003BDEB4 "`"
 *   insn=0x00000000003BDEB4 string=0x00000000003BDEB8 "8"
 *   insn=0x00000000003BDEB4 string=0x00000000003BDF20 "t"
 *   insn=0x00000000003BDEC8 string=0x00000000003BDECC "\t"
 *   insn=0x00000000003BDEC8 string=0x00000000003BDEE0 "\t"
 *   insn=0x00000000003BDECC string=0x00000000003BDED0 "*"
 *   insn=0x00000000003BDED0 string=0x00000000003BDED4 "\n"
 *   insn=0x00000000003BDEDC string=0x00000000003BDEEC "?"
 *   insn=0x00000000003BDEE0 string=0x00000000003BDEE4 "*"
 *   insn=0x00000000003BDEE4 string=0x00000000003BDEE8 "\n"
 *   insn=0x00000000003BDEF4 string=0x00000000003BDEF8 "+"
 *   insn=0x00000000003BDF0C string=0x00000000003BDEC4 "!"
 *   insn=0x00000000003BDF14 string=0x00000000003BDF18 "A"
 *   insn=0x00000000003BDF18 string=0x00000000003BDF1C "t"
 *   insn=0x00000000003BDF20 string=0x00000000003BDF2C "h"
 *   insn=0x00000000003BDF28 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BDF38 string=0x00000000003BDF3C "h\n@"
 *   insn=0x00000000003BDF38 string=0x00000000003BDF98 ")"
 *   insn=0x00000000003BDF48 string=0x00000000003BDFBC ")"
 *   insn=0x00000000003BDF54 string=0x00000000003BDF58 "A"
 *   insn=0x00000000003BDF74 string=0x00000000003BDF78 ")=G"
 *   insn=0x00000000003BDF78 string=0x00000000003BDF7C "!"
 *   insn=0x00000000003BDF7C string=0x00000000003BDF80 "\t"
 *   insn=0x00000000003BDF80 string=0x00000000003BDF84 "\t"
 *   insn=0x00000000003BDF80 string=0x00000000003BDFE0 "\t"
 *   insn=0x00000000003BDF84 string=0x00000000003BDF88 "*"
 *   insn=0x00000000003BDF88 string=0x00000000003BDF8C "\n"
 *   insn=0x00000000003BDF94 string=0x00000000003BDFEC "?"
 *   insn=0x00000000003BDF98 string=0x00000000003BDF9C ")=G"
 *   insn=0x00000000003BDF9C string=0x00000000003BDFA0 "!"
 *   insn=0x00000000003BDFA4 string=0x00000000003BDFA8 "\t"
 *   insn=0x00000000003BDFA4 string=0x00000000003BE000 "\t"
 *   insn=0x00000000003BDFA8 string=0x00000000003BDFAC "*"
 *   insn=0x00000000003BDFAC string=0x00000000003BDFB0 "\n"
 *   insn=0x00000000003BDFB8 string=0x00000000003BE00C "?"
 *   insn=0x00000000003BDFBC string=0x00000000003BDFC0 ")=G"
 *   insn=0x00000000003BDFC0 string=0x00000000003BDFC4 "!"
 *   insn=0x00000000003BDFC8 string=0x00000000003BDFCC "\t"
 *   insn=0x00000000003BDFC8 string=0x00000000003BE020 "\t"
 *   insn=0x00000000003BDFCC string=0x00000000003BDFD0 "*"
 *   insn=0x00000000003BDFD0 string=0x00000000003BDFD4 "\n"
 *   insn=0x00000000003BDFDC string=0x00000000003BE02C "?"
 *   insn=0x00000000003BDFE0 string=0x00000000003BDFE4 "*"
 *   insn=0x00000000003BDFE4 string=0x00000000003BDFE8 "\n"
 *   insn=0x00000000003BE000 string=0x00000000003BE004 "*"
 *   insn=0x00000000003BE004 string=0x00000000003BE008 "\n"
 *   insn=0x00000000003BE00C string=0x00000000003BE010 "l"
 *   insn=0x00000000003BE020 string=0x00000000003BE024 "*"
 *   insn=0x00000000003BE024 string=0x00000000003BE028 "\n"
 *   insn=0x00000000003BE040 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapNode::~MapNode(Caver::MapNode *this)
{
  __int64 v2; // x8
  void *v3; // x0
  _QWORD *v4; // x20
  _QWORD *v5; // x23
  unsigned int *v6; // x8
  int v7; // w9
  __int64 *v8; // x0
  __int64 v9; // x8
  void *v10; // x0
  __int64 v11; // x8
  void *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 12);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v2 - 8);
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
      operator delete(v3);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v4 != v5 )
  {
    do
    {
      v8 = (__int64 *)(*v4 - 24LL);
      if ( v8 != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(*v4 - 8LL);
        if ( &pthread_create )
        {
          do
            v7 = __ldaxr(v6);
          while ( __stlxr(v7 - 1, v6) );
        }
        else
        {
          v7 = (*v6)--;
        }
        if ( v7 <= 0 )
          operator delete(v8);
      }
      v4 += 3;
    }
    while ( v4 != v5 );
    v4 = (_QWORD *)*((_QWORD *)this + 6);
  }
  if ( v4 )
    operator delete(v4);
  v9 = *((_QWORD *)this + 3);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = (void *)(v11 - 24);
  if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v11 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v12);
  }
}

