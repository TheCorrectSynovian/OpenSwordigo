/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B770
 * Mangled: sub_20B770
 * Demangled: sub_20B770
 *
 * Callers: 1
 *   0x00000000004560A4  Caver::TrailParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 85
 *   insn=0x000000000020B780 string=0x000000000020B784 "S"
 *   insn=0x000000000020B784 string=0x000000000020B788 "h"
 *   insn=0x000000000020B7A8 string=0x000000000020B7AC "A"
 *   insn=0x000000000020B7D8 string=0x000000000020B7DC "!"
 *   insn=0x000000000020B7F8 string=0x000000000020B7FC "a"
 *   insn=0x000000000020B80C string=0x000000000020B810 "h"
 *   insn=0x000000000020B81C string=0x000000000020BA10 "0"
 *   insn=0x000000000020B834 string=0x000000000020B838 ")=G"
 *   insn=0x000000000020B838 string=0x000000000020B83C "!"
 *   insn=0x000000000020B840 string=0x000000000020B844 "\t"
 *   insn=0x000000000020B840 string=0x000000000020B930 "\t"
 *   insn=0x000000000020B844 string=0x000000000020B848 "*"
 *   insn=0x000000000020B848 string=0x000000000020B84C "\n"
 *   insn=0x000000000020B850 string=0x000000000020B854 ":"
 *   insn=0x000000000020B854 string=0x000000000020B93C "?"
 *   insn=0x000000000020B858 string=0x000000000020B85C ")=G"
 *   insn=0x000000000020B85C string=0x000000000020B860 "!"
 *   insn=0x000000000020B860 string=0x000000000020B864 "i"
 *   insn=0x000000000020B864 string=0x000000000020B868 "\t"
 *   insn=0x000000000020B864 string=0x000000000020B950 "\t"
 *   insn=0x000000000020B868 string=0x000000000020B86C "*"
 *   insn=0x000000000020B86C string=0x000000000020B870 "\n"
 *   insn=0x000000000020B874 string=0x000000000020B878 "9"
 *   insn=0x000000000020B878 string=0x000000000020B95C "?"
 *   insn=0x000000000020B87C string=0x000000000020B880 ")=G"
 *   insn=0x000000000020B880 string=0x000000000020B884 "!"
 *   insn=0x000000000020B884 string=0x000000000020B888 "I"
 *   insn=0x000000000020B888 string=0x000000000020B88C "\t"
 *   insn=0x000000000020B888 string=0x000000000020B970 "\t"
 *   insn=0x000000000020B88C string=0x000000000020B890 "*"
 *   insn=0x000000000020B890 string=0x000000000020B894 "\n"
 *   insn=0x000000000020B898 string=0x000000000020B89C "8"
 *   insn=0x000000000020B89C string=0x000000000020B97C "?"
 *   insn=0x000000000020B8A0 string=0x000000000020B8A4 ")=G"
 *   insn=0x000000000020B8A4 string=0x000000000020B8A8 "!"
 *   insn=0x000000000020B8A8 string=0x000000000020B8AC ")"
 *   insn=0x000000000020B8AC string=0x000000000020B8B0 "\t"
 *   insn=0x000000000020B8AC string=0x000000000020B990 "\t"
 *   insn=0x000000000020B8B0 string=0x000000000020B8B4 "*"
 *   insn=0x000000000020B8B4 string=0x000000000020B8B8 "\n"
 *   insn=0x000000000020B8BC string=0x000000000020B8C0 "7"
 *   insn=0x000000000020B8C0 string=0x000000000020B99C "?"
 *   insn=0x000000000020B8C4 string=0x000000000020B8C8 ")=G"
 *   insn=0x000000000020B8C8 string=0x000000000020B8CC "!"
 *   insn=0x000000000020B8CC string=0x000000000020B8D0 "\t"
 *   insn=0x000000000020B8D0 string=0x000000000020B8D4 "\t"
 *   insn=0x000000000020B8D0 string=0x000000000020B9B0 "\t"
 *   insn=0x000000000020B8D4 string=0x000000000020B8D8 "*"
 *   insn=0x000000000020B8D8 string=0x000000000020B8DC "\n"
 *   insn=0x000000000020B8E0 string=0x000000000020B8E4 "6"
 *   insn=0x000000000020B8E4 string=0x000000000020B9BC "?"
 *   insn=0x000000000020B8E8 string=0x000000000020B8EC ")=G"
 *   insn=0x000000000020B8EC string=0x000000000020B8F0 "!"
 *   insn=0x000000000020B8F4 string=0x000000000020B8F8 "\t"
 *   insn=0x000000000020B8F4 string=0x000000000020B9D0 "\t"
 *   insn=0x000000000020B8F8 string=0x000000000020B8FC "*"
 *   insn=0x000000000020B8FC string=0x000000000020B900 "\n"
 *   insn=0x000000000020B904 string=0x000000000020B908 "5"
 *   insn=0x000000000020B908 string=0x000000000020B9DC "?"
 *   insn=0x000000000020B90C string=0x000000000020B910 ")=G"
 *   insn=0x000000000020B910 string=0x000000000020B914 "!"
 *   insn=0x000000000020B918 string=0x000000000020B91C "\t"
 *   insn=0x000000000020B918 string=0x000000000020B9F0 "\t"
 *   insn=0x000000000020B91C string=0x000000000020B920 "*"
 *   insn=0x000000000020B920 string=0x000000000020B924 "\n"
 *   insn=0x000000000020B928 string=0x000000000020B92C "4"
 *   insn=0x000000000020B92C string=0x000000000020B9FC "?"
 *   insn=0x000000000020B930 string=0x000000000020B934 "*"
 *   insn=0x000000000020B934 string=0x000000000020B938 "\n"
 *   insn=0x000000000020B950 string=0x000000000020B954 "*"
 *   insn=0x000000000020B954 string=0x000000000020B958 "\n"
 *   insn=0x000000000020B970 string=0x000000000020B974 "*"
 *   insn=0x000000000020B974 string=0x000000000020B978 "\n"
 *   insn=0x000000000020B990 string=0x000000000020B994 "*"
 *   insn=0x000000000020B994 string=0x000000000020B998 "\n"
 *   insn=0x000000000020B9B0 string=0x000000000020B9B4 "*"
 *   insn=0x000000000020B9B4 string=0x000000000020B9B8 "\n"
 *   insn=0x000000000020B9C4 string=0x000000000020B9C8 "wz"
 *   insn=0x000000000020B9D0 string=0x000000000020B9D4 "*"
 *   insn=0x000000000020B9D4 string=0x000000000020B9D8 "\n"
 *   insn=0x000000000020B9E4 string=0x000000000020B9E8 "oz"
 *   insn=0x000000000020B9F0 string=0x000000000020B9F4 "*"
 *   insn=0x000000000020B9F4 string=0x000000000020B9F8 "\n"
 *   insn=0x000000000020BA04 string=0x000000000020BA08 "gz"
 *   insn=0x000000000020BA10 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20B770()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E9B60 - 24);
  if ( (__int64 *)(qword_6E9B60 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(qword_6E9B60 - 8);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(qword_6E9B58 - 24);
  if ( (__int64 *)(qword_6E9B58 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(qword_6E9B58 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v1);
  }
  v2 = (void *)(qword_6E9B50 - 24);
  if ( (__int64 *)(qword_6E9B50 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(qword_6E9B50 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v2);
  }
  v3 = (void *)(qword_6E9B48 - 24);
  if ( (__int64 *)(qword_6E9B48 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(qword_6E9B48 - 8);
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
  v4 = (void *)(qword_6E9B40 - 24);
  if ( (__int64 *)(qword_6E9B40 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(qword_6E9B40 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(qword_6E9B38 - 24);
  if ( (__int64 *)(qword_6E9B38 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(qword_6E9B38 - 8);
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
      operator delete(v5);
  }
  v6 = (void *)(Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles - 24);
  if ( (__int64 *)(Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(Caver::TrailParticleEmitter::TitleForParameter(unsigned int)::titles - 8);
    if ( &pthread_create )
    {
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
    }
    else
    {
      v20 = (*v19)--;
    }
    if ( v20 <= 0 )
      operator delete(v6);
  }
}

