/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8884
 * Mangled: _ZN5Caver7TextureD2Ev
 * Demangled: Caver::Texture::~Texture()
 *
 * Callers: 1
 *   0x00000000001F8500  Caver::Texture::~Texture()
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBFC0  .glDeleteTextures
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 91
 *   insn=0x00000000004C8894 string=0x00000000004C8898 "U"
 *   insn=0x00000000004C88A8 string=0x00000000004C88AC "%C"
 *   insn=0x00000000004C88AC string=0x00000000004C88B0 "i:@"
 *   insn=0x00000000004C88B0 string=0x00000000004C88B4 "\nA"
 *   insn=0x00000000004C88B4 string=0x00000000004C88B8 ""
 *   insn=0x00000000004C88B8 string=0x00000000004C88BC "j"
 *   insn=0x00000000004C88BC string=0x00000000004C88C0 "h\n"
 *   insn=0x00000000004C88C4 string=0x00000000004C88DC "`J@"
 *   insn=0x00000000004C88C8 string=0x00000000004C88CC "("
 *   insn=0x00000000004C88CC string=0x00000000004C88D0 "h"
 *   insn=0x00000000004C88D8 string=0x00000000001FBFC0 "0'"
 *   insn=0x00000000004C88DC string=0x00000000004C88E0 "@"
 *   insn=0x00000000004C88E0 string=0x00000000004C88E4 "s"
 *   insn=0x00000000004C88E0 string=0x00000000004C88E8 "t"
 *   insn=0x00000000004C88E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C88F0 string=0x00000000004C8928 "t"
 *   insn=0x00000000004C88F8 string=0x00000000004C88FC "@"
 *   insn=0x00000000004C88FC string=0x00000000004C8900 ""
 *   insn=0x00000000004C8900 string=0x00000000004C8904 ""
 *   insn=0x00000000004C8908 string=0x00000000004C890C ""
 *   insn=0x00000000004C890C string=0x00000000004C8910 ""
 *   insn=0x00000000004C8920 string=0x00000000004C8924 "t>@"
 *   insn=0x00000000004C8928 string=0x00000000004C8934 "h"
 *   insn=0x00000000004C892C string=0x00000000004C8930 "`"
 *   insn=0x00000000004C8948 string=0x00000000004C894C "h"
 *   insn=0x00000000004C8954 string=0x00000000004C8958 "a"
 *   insn=0x00000000004C8968 string=0x00000000004C8A08 "2"
 *   insn=0x00000000004C8980 string=0x00000000004C8984 ")=G"
 *   insn=0x00000000004C8984 string=0x00000000004C8988 "!"
 *   insn=0x00000000004C898C string=0x00000000004C8990 "\t"
 *   insn=0x00000000004C898C string=0x00000000004C89C8 "\t"
 *   insn=0x00000000004C8990 string=0x00000000004C8994 "*"
 *   insn=0x00000000004C8994 string=0x00000000004C8998 "\n"
 *   insn=0x00000000004C899C string=0x00000000004C89A0 ""
 *   insn=0x00000000004C89A0 string=0x00000000004C89D4 "?"
 *   insn=0x00000000004C89A4 string=0x00000000004C89A8 ")=G"
 *   insn=0x00000000004C89A8 string=0x00000000004C89AC "!"
 *   insn=0x00000000004C89B0 string=0x00000000004C89B4 "\t"
 *   insn=0x00000000004C89B0 string=0x00000000004C89E8 "\t"
 *   insn=0x00000000004C89B4 string=0x00000000004C89B8 "*"
 *   insn=0x00000000004C89B8 string=0x00000000004C89BC "\n"
 *   insn=0x00000000004C89C4 string=0x00000000004C89F4 "?"
 *   insn=0x00000000004C89C8 string=0x00000000004C89CC "*"
 *   insn=0x00000000004C89CC string=0x00000000004C89D0 "\n"
 *   insn=0x00000000004C89DC string=0x00000000004C89E0 "q"
 *   insn=0x00000000004C89E8 string=0x00000000004C89EC "*"
 *   insn=0x00000000004C89EC string=0x00000000004C89F0 "\n"
 *   insn=0x00000000004C89F4 string=0x00000000004C89F8 ","
 *   insn=0x00000000004C89FC string=0x00000000004C8A00 "i"
 *   insn=0x00000000004C8A08 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C8A10 string=0x00000000004C8A14 "h"
 *   insn=0x00000000004C8A14 string=0x00000000004C8A20 "u"
 *   insn=0x00000000004C8A18 string=0x00000000004C8A1C "%"
 *   insn=0x00000000004C8A30 string=0x00000000004C8A34 "@"
 *   insn=0x00000000004C8A34 string=0x00000000004C8A38 ""
 *   insn=0x00000000004C8A38 string=0x00000000004C8A3C ""
 *   insn=0x00000000004C8A40 string=0x00000000004C8A44 ""
 *   insn=0x00000000004C8A44 string=0x00000000004C8A48 ""
 *   insn=0x00000000004C8A58 string=0x00000000004C8A5C "u>@"
 *   insn=0x00000000004C8A60 string=0x00000000004C8A9C "h"
 *   insn=0x00000000004C8A70 string=0x00000000004C8A74 "h"
 *   insn=0x00000000004C8A78 string=0x00000000004C8A7C ""
 *   insn=0x00000000004C8A80 string=0x00000000004C8A84 "2"
 *   insn=0x00000000004C8A84 string=0x00000000004C8A88 "h>@"
 *   insn=0x00000000004C8A8C string=0x00000000004C8A90 "h"
 *   insn=0x00000000004C8AAC string=0x00000000004C8AB0 "a"
 *   insn=0x00000000004C8AB0 string=0x00000000004C8AB4 "h"
 *   insn=0x00000000004C8AC4 string=0x00000000004C8AC8 ")=G"
 *   insn=0x00000000004C8AC8 string=0x00000000004C8ACC "!"
 *   insn=0x00000000004C8AD0 string=0x00000000004C8AD4 "\t"
 *   insn=0x00000000004C8AD0 string=0x00000000004C8B40 "\t"
 *   insn=0x00000000004C8AD4 string=0x00000000004C8AD8 "*"
 *   insn=0x00000000004C8AD8 string=0x00000000004C8ADC "\n"
 *   insn=0x00000000004C8AE0 string=0x00000000004C8AE4 "?"
 *   insn=0x00000000004C8AE4 string=0x00000000004C8AE8 "l"
 *   insn=0x00000000004C8AEC string=0x00000000004C8AF0 "-"
 *   insn=0x00000000004C8AF4 string=0x00000000004C8AF8 "s"
 *   insn=0x00000000004C8AFC string=0x00000000004C8B00 ")=G"
 *   insn=0x00000000004C8B00 string=0x00000000004C8B04 "!"
 *   insn=0x00000000004C8B08 string=0x00000000004C8B0C "\t"
 *   insn=0x00000000004C8B08 string=0x00000000004C8B20 "\t"
 *   insn=0x00000000004C8B0C string=0x00000000004C8B10 "*"
 *   insn=0x00000000004C8B10 string=0x00000000004C8B14 "\n"
 *   insn=0x00000000004C8B1C string=0x00000000004C8B2C "?"
 *   insn=0x00000000004C8B20 string=0x00000000004C8B24 "*"
 *   insn=0x00000000004C8B24 string=0x00000000004C8B28 "\n"
 *   insn=0x00000000004C8B2C string=0x00000000004C8B30 ","
 *   insn=0x00000000004C8B34 string=0x00000000004C8B38 ""
 *   insn=0x00000000004C8B40 string=0x00000000004C8B44 "*"
 *   insn=0x00000000004C8B44 string=0x00000000004C8B48 "\n"
 *   insn=0x00000000004C8B48 string=0x00000000004C8B4C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::~Texture(Caver::Texture *this)
{
  __int64 v2; // x9
  void *v3; // x0
  _QWORD *v4; // x20
  _QWORD *v5; // x22
  _DWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x8
  void *v9; // x0
  __int64 v10; // x8
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 14);
  *(_QWORD *)this = off_6D7CD0;
  *((_QWORD *)this + 2) = &off_6D7D20;
  if ( !v2 && *((_DWORD *)this + 14) )
    glDeleteTextures();
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
    operator delete(v3);
  v4 = (_QWORD *)*((_QWORD *)this + 15);
  v5 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_DWORD *)*v4;
      if ( *v4 )
      {
        v7 = v6[2] - 1;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      ++v4;
    }
    while ( v5 != v4 );
    v4 = (_QWORD *)*((_QWORD *)this + 15);
  }
  if ( v4 )
    operator delete(v4);
  v8 = *((_QWORD *)this + 6);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v8 - 8);
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
      operator delete(v9);
  }
  v10 = *((_QWORD *)this + 4);
  v11 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v10 - 8);
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
      operator delete(v11);
  }
}

