/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205068
 * Mangled: sub_205068
 * Demangled: sub_205068
 *
 * Callers: 1
 *   0x00000000002052B8  sub_2052B8
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 80
 *   insn=0x0000000000205078 string=0x000000000020507C "S"
 *   insn=0x000000000020507C string=0x0000000000205080 "h"
 *   insn=0x00000000002050B0 string=0x00000000002050B4 "a"
 *   insn=0x00000000002050E0 string=0x00000000002050E4 "A"
 *   insn=0x00000000002050F4 string=0x00000000002050F8 "h"
 *   insn=0x0000000000205104 string=0x00000000002052B4 ""
 *   insn=0x000000000020511C string=0x0000000000205120 ")=G"
 *   insn=0x0000000000205120 string=0x0000000000205124 "!"
 *   insn=0x0000000000205124 string=0x0000000000205128 "i"
 *   insn=0x0000000000205128 string=0x000000000020512C "\t"
 *   insn=0x0000000000205128 string=0x00000000002051F4 "\t"
 *   insn=0x000000000020512C string=0x0000000000205130 "*"
 *   insn=0x0000000000205130 string=0x0000000000205134 "\n"
 *   insn=0x0000000000205138 string=0x000000000020513C "1"
 *   insn=0x000000000020513C string=0x0000000000205200 "?"
 *   insn=0x0000000000205140 string=0x0000000000205144 ")=G"
 *   insn=0x0000000000205144 string=0x0000000000205148 "!"
 *   insn=0x0000000000205148 string=0x000000000020514C "I"
 *   insn=0x000000000020514C string=0x0000000000205150 "\t"
 *   insn=0x000000000020514C string=0x0000000000205214 "\t"
 *   insn=0x0000000000205150 string=0x0000000000205154 "*"
 *   insn=0x0000000000205154 string=0x0000000000205158 "\n"
 *   insn=0x000000000020515C string=0x0000000000205160 "0"
 *   insn=0x0000000000205160 string=0x0000000000205220 "?"
 *   insn=0x0000000000205164 string=0x0000000000205168 ")=G"
 *   insn=0x0000000000205168 string=0x000000000020516C "!"
 *   insn=0x000000000020516C string=0x0000000000205170 ")"
 *   insn=0x0000000000205170 string=0x0000000000205174 "\t"
 *   insn=0x0000000000205170 string=0x0000000000205234 "\t"
 *   insn=0x0000000000205174 string=0x0000000000205178 "*"
 *   insn=0x0000000000205178 string=0x000000000020517C "\n"
 *   insn=0x0000000000205180 string=0x0000000000205184 "/"
 *   insn=0x0000000000205184 string=0x0000000000205240 "?"
 *   insn=0x0000000000205188 string=0x000000000020518C ")=G"
 *   insn=0x000000000020518C string=0x0000000000205190 "!"
 *   insn=0x0000000000205190 string=0x0000000000205194 "\t"
 *   insn=0x0000000000205194 string=0x0000000000205198 "\t"
 *   insn=0x0000000000205194 string=0x0000000000205254 "\t"
 *   insn=0x0000000000205198 string=0x000000000020519C "*"
 *   insn=0x000000000020519C string=0x00000000002051A0 "\n"
 *   insn=0x00000000002051A4 string=0x00000000002051A8 "."
 *   insn=0x00000000002051A8 string=0x0000000000205260 "?"
 *   insn=0x00000000002051AC string=0x00000000002051B0 ")=G"
 *   insn=0x00000000002051B0 string=0x00000000002051B4 "!"
 *   insn=0x00000000002051B8 string=0x00000000002051BC "\t"
 *   insn=0x00000000002051B8 string=0x0000000000205274 "\t"
 *   insn=0x00000000002051BC string=0x00000000002051C0 "*"
 *   insn=0x00000000002051C0 string=0x00000000002051C4 "\n"
 *   insn=0x00000000002051C8 string=0x00000000002051CC "-"
 *   insn=0x00000000002051CC string=0x0000000000205280 "?"
 *   insn=0x00000000002051D0 string=0x00000000002051D4 ")=G"
 *   insn=0x00000000002051D4 string=0x00000000002051D8 "!"
 *   insn=0x00000000002051DC string=0x00000000002051E0 "\t"
 *   insn=0x00000000002051DC string=0x0000000000205294 "\t"
 *   insn=0x00000000002051E0 string=0x00000000002051E4 "*"
 *   insn=0x00000000002051E4 string=0x00000000002051E8 "\n"
 *   insn=0x00000000002051EC string=0x00000000002051F0 ","
 *   insn=0x00000000002051F0 string=0x00000000002052A0 "?"
 *   insn=0x00000000002051F4 string=0x00000000002051F8 "*"
 *   insn=0x00000000002051F8 string=0x00000000002051FC "\n"
 *   insn=0x0000000000205200 string=0x0000000000205204 ","
 *   insn=0x0000000000205208 string=0x000000000020520C "f"
 *   insn=0x0000000000205214 string=0x0000000000205218 "*"
 *   insn=0x0000000000205218 string=0x000000000020521C "\n"
 *   insn=0x0000000000205228 string=0x000000000020522C "^"
 *   insn=0x0000000000205234 string=0x0000000000205238 "*"
 *   insn=0x0000000000205238 string=0x000000000020523C "\n"
 *   insn=0x0000000000205240 string=0x0000000000205244 ","
 *   insn=0x0000000000205248 string=0x000000000020524C "V"
 *   insn=0x0000000000205254 string=0x0000000000205258 "*"
 *   insn=0x0000000000205258 string=0x000000000020525C "\n"
 *   insn=0x0000000000205268 string=0x000000000020526C "N"
 *   insn=0x0000000000205274 string=0x0000000000205278 "*"
 *   insn=0x0000000000205278 string=0x000000000020527C "\n"
 *   insn=0x0000000000205280 string=0x0000000000205284 ","
 *   insn=0x0000000000205288 string=0x000000000020528C "F"
 *   insn=0x0000000000205294 string=0x0000000000205298 "*"
 *   insn=0x0000000000205298 string=0x000000000020529C "\n"
 *   insn=0x00000000002052A8 string=0x00000000002052AC ">"
 *   insn=0x00000000002052B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_205068()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8B80 - 24);
  if ( (__int64 *)(qword_6E8B80 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E8B80 - 8);
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
      operator delete(v0);
  }
  v1 = (void *)(qword_6E8B78 - 24);
  if ( (__int64 *)(qword_6E8B78 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E8B78 - 8);
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
      operator delete(v1);
  }
  v2 = (void *)(qword_6E8B70 - 24);
  if ( (__int64 *)(qword_6E8B70 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(qword_6E8B70 - 8);
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
      operator delete(v2);
  }
  v3 = (void *)(qword_6E8B68 - 24);
  if ( (__int64 *)(qword_6E8B68 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(qword_6E8B68 - 8);
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
      operator delete(v3);
  }
  v4 = (void *)(qword_6E8B60 - 24);
  if ( (__int64 *)(qword_6E8B60 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(qword_6E8B60 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(Caver::bindingTypeStrings - 24);
  if ( (__int64 *)(Caver::bindingTypeStrings - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(Caver::bindingTypeStrings - 8);
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
      operator delete(v5);
  }
}

