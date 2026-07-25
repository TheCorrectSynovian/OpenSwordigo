/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D19D0
 * Mangled: _ZN5Caver11SoundEffectD2Ev
 * Demangled: Caver::SoundEffect::~SoundEffect()
 *
 * Callers: 1
 *   0x00000000001F5A10  Caver::SoundEffect::~SoundEffect()
 *
 * Callees: 8
 *   0x00000000001F5A10  Caver::SoundEffect::~SoundEffect()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004D1D64  Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000004D19E0 string=0x00000000004D19E4 "U"
 *   insn=0x00000000004D19F4 string=0x00000000004D19F8 ""
 *   insn=0x00000000004D19F8 string=0x00000000004D19FC "t"
 *   insn=0x00000000004D1A00 string=0x00000000004D1A04 "A"
 *   insn=0x00000000004D1A04 string=0x00000000004D1A08 "h"
 *   insn=0x00000000004D1A08 string=0x00000000004D1A0C "4"
 *   insn=0x00000000004D1A0C string=0x00000000004D1A50 "t"
 *   insn=0x00000000004D1A10 string=0x00000000004D1A14 ""
 *   insn=0x00000000004D1A20 string=0x00000000004D1A24 "\t@"
 *   insn=0x00000000004D1A30 string=0x00000000004D1A34 ""
 *   insn=0x00000000004D1A40 string=0x00000000004D1A44 "@"
 *   insn=0x00000000004D1A50 string=0x00000000004D1A54 "4"
 *   insn=0x00000000004D1A54 string=0x00000000004D1A98 "h"
 *   insn=0x00000000004D1A58 string=0x00000000004D1A5C ""
 *   insn=0x00000000004D1A68 string=0x00000000004D1A6C "\t@"
 *   insn=0x00000000004D1A78 string=0x00000000004D1A7C ""
 *   insn=0x00000000004D1A88 string=0x00000000004D1A8C "@"
 *   insn=0x00000000004D1AA8 string=0x00000000004D1AAC "A"
 *   insn=0x00000000004D1AAC string=0x00000000004D1AB0 "h"
 *   insn=0x00000000004D1ABC string=0x00000000004D1AC0 "h\n@"
 *   insn=0x00000000004D1AD8 string=0x00000000004D1ADC "!"
 *   insn=0x00000000004D1AF4 string=0x00000000004D1AF8 ")=G"
 *   insn=0x00000000004D1AF8 string=0x00000000004D1AFC "!"
 *   insn=0x00000000004D1AFC string=0x00000000004D1B00 "\t"
 *   insn=0x00000000004D1B00 string=0x00000000004D1B04 "\t"
 *   insn=0x00000000004D1B00 string=0x00000000004D1B60 "\t"
 *   insn=0x00000000004D1B04 string=0x00000000004D1B08 "*"
 *   insn=0x00000000004D1B08 string=0x00000000004D1B0C "\n"
 *   insn=0x00000000004D1B14 string=0x00000000004D1B6C "?"
 *   insn=0x00000000004D1B18 string=0x00000000004D1B1C ")=G"
 *   insn=0x00000000004D1B1C string=0x00000000004D1B20 "!"
 *   insn=0x00000000004D1B24 string=0x00000000004D1B28 "\t"
 *   insn=0x00000000004D1B24 string=0x00000000004D1B80 "\t"
 *   insn=0x00000000004D1B28 string=0x00000000004D1B2C "*"
 *   insn=0x00000000004D1B2C string=0x00000000004D1B30 "\n"
 *   insn=0x00000000004D1B38 string=0x00000000004D1B8C "?"
 *   insn=0x00000000004D1B3C string=0x00000000004D1B40 ")=G"
 *   insn=0x00000000004D1B40 string=0x00000000004D1B44 "!"
 *   insn=0x00000000004D1B48 string=0x00000000004D1B4C "\t"
 *   insn=0x00000000004D1B48 string=0x00000000004D1BA0 "\t"
 *   insn=0x00000000004D1B4C string=0x00000000004D1B50 "*"
 *   insn=0x00000000004D1B50 string=0x00000000004D1B54 "\n"
 *   insn=0x00000000004D1B5C string=0x00000000004D1BAC "?"
 *   insn=0x00000000004D1B60 string=0x00000000004D1B64 "*"
 *   insn=0x00000000004D1B64 string=0x00000000004D1B68 "\n"
 *   insn=0x00000000004D1B74 string=0x00000000004D1B78 "b"
 *   insn=0x00000000004D1B80 string=0x00000000004D1B84 "*"
 *   insn=0x00000000004D1B84 string=0x00000000004D1B88 "\n"
 *   insn=0x00000000004D1BA0 string=0x00000000004D1BA4 "*"
 *   insn=0x00000000004D1BA4 string=0x00000000004D1BA8 "\n"
 *   insn=0x00000000004D1BC0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D1BC8 string=0x00000000004D1C18 "h"
 *   insn=0x00000000004D1BD0 string=0x00000000004D1BD4 "5"
 *   insn=0x00000000004D1BD8 string=0x00000000004D1BDC ""
 *   insn=0x00000000004D1BE8 string=0x00000000004D1BEC "\t@"
 *   insn=0x00000000004D1BF8 string=0x00000000004D1BFC ""
 *   insn=0x00000000004D1C08 string=0x00000000004D1C0C "@"
 *   insn=0x00000000004D1C2C string=0x00000000004D1C30 "h"
 *   insn=0x00000000004D1C3C string=0x00000000004D1C40 "h\n@"
 *   insn=0x00000000004D1C50 string=0x00000000004D1C54 ")=G"
 *   insn=0x00000000004D1C54 string=0x00000000004D1C58 "!"
 *   insn=0x00000000004D1C5C string=0x00000000004D1C60 "\t"
 *   insn=0x00000000004D1C5C string=0x00000000004D1D10 "\t"
 *   insn=0x00000000004D1C60 string=0x00000000004D1C64 "*"
 *   insn=0x00000000004D1C64 string=0x00000000004D1C68 "\n"
 *   insn=0x00000000004D1C6C string=0x00000000004D1C70 "?"
 *   insn=0x00000000004D1C70 string=0x00000000004D1C74 "l"
 *   insn=0x00000000004D1C88 string=0x00000000004D1C8C ")=G"
 *   insn=0x00000000004D1C8C string=0x00000000004D1C90 "!"
 *   insn=0x00000000004D1C94 string=0x00000000004D1C98 "\t"
 *   insn=0x00000000004D1C94 string=0x00000000004D1CD0 "\t"
 *   insn=0x00000000004D1C98 string=0x00000000004D1C9C "*"
 *   insn=0x00000000004D1C9C string=0x00000000004D1CA0 "\n"
 *   insn=0x00000000004D1CA4 string=0x00000000004D1CA8 ""
 *   insn=0x00000000004D1CA8 string=0x00000000004D1CDC "?"
 *   insn=0x00000000004D1CAC string=0x00000000004D1CB0 ")=G"
 *   insn=0x00000000004D1CB0 string=0x00000000004D1CB4 "!"
 *   insn=0x00000000004D1CB8 string=0x00000000004D1CBC "\t"
 *   insn=0x00000000004D1CB8 string=0x00000000004D1CF0 "\t"
 *   insn=0x00000000004D1CBC string=0x00000000004D1CC0 "*"
 *   insn=0x00000000004D1CC0 string=0x00000000004D1CC4 "\n"
 *   insn=0x00000000004D1CCC string=0x00000000004D1CFC "?"
 *   insn=0x00000000004D1CD0 string=0x00000000004D1CD4 "*"
 *   insn=0x00000000004D1CD4 string=0x00000000004D1CD8 "\n"
 *   insn=0x00000000004D1CF0 string=0x00000000004D1CF4 "*"
 *   insn=0x00000000004D1CF4 string=0x00000000004D1CF8 "\n"
 *   insn=0x00000000004D1D10 string=0x00000000004D1D14 "*"
 *   insn=0x00000000004D1D14 string=0x00000000004D1D18 "\n"
 *   insn=0x00000000004D1D18 string=0x00000000004D1D1C "?"
 *   insn=0x00000000004D1D38 string=0x00000000004D1D3C "5"
 *   insn=0x00000000004D1D3C string=0x00000000001F5A10 "P'"
 *   insn=0x00000000004D1D48 string=0x00000000004D1D4C "Y"
 *   insn=0x00000000004D1D4C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D1D54 string=0x00000000004D1D58 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffect::~SoundEffect(Caver::SoundEffect *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  __int64 v10; // x8
  void *v11; // x0
  __int64 v12; // x8
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6D7EB0;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 4);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v8 - 8);
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
      operator delete(v9);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v10 - 8);
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
      operator delete(v11);
  }
  v12 = *((_QWORD *)this + 2);
  v13 = (void *)(v12 - 24);
  if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v13);
  }
}

