/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239868
 * Mangled: _ZN5Caver20SoundEffectComponentD2Ev
 * Demangled: Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callers: 1
 *   0x00000000001F5AD0  Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FEDA0  Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x0000000000239878 string=0x000000000023987C "h%"
 *   insn=0x000000000023987C string=0x0000000000239880 "U"
 *   insn=0x0000000000239880 string=0x0000000000239884 "iB"
 *   insn=0x0000000000239890 string=0x0000000000239894 "\n"
 *   insn=0x0000000000239894 string=0x0000000000239898 "@"
 *   insn=0x0000000000239898 string=0x000000000023989C "\n"
 *   insn=0x000000000023989C string=0x00000000002398A0 "@"
 *   insn=0x00000000002398A4 string=0x00000000002398A8 "\tA"
 *   insn=0x00000000002398A8 string=0x00000000002398AC "A"
 *   insn=0x00000000002398AC string=0x00000000002398B0 "i"
 *   insn=0x00000000002398B0 string=0x00000000002398B4 "`"
 *   insn=0x00000000002398B4 string=0x00000000002398B8 "h:"
 *   insn=0x00000000002398BC string=0x00000000002398C0 "h"
 *   insn=0x00000000002398C0 string=0x00000000002398EC "`F@"
 *   insn=0x00000000002398C4 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000002398C8 string=0x00000000002398CC "5"
 *   insn=0x00000000002398D8 string=0x00000000002398DC "@"
 *   insn=0x00000000002398DC string=0x00000000002398E0 ""
 *   insn=0x00000000002398E0 string=0x00000000002398E4 ""
 *   insn=0x00000000002398E4 string=0x00000000002398E8 "`"
 *   insn=0x00000000002398E8 string=0x0000000000239954 ""
 *   insn=0x00000000002398F0 string=0x00000000002398F4 "@"
 *   insn=0x00000000002398F0 string=0x0000000000239910 "h>@"
 *   insn=0x00000000002398F4 string=0x00000000002398F8 ""
 *   insn=0x00000000002398F8 string=0x00000000002398FC ""
 *   insn=0x0000000000239900 string=0x0000000000239904 ""
 *   insn=0x0000000000239904 string=0x0000000000239908 ""
 *   insn=0x0000000000239910 string=0x0000000000239914 "i%"
 *   insn=0x0000000000239914 string=0x0000000000239918 ")"
 *   insn=0x0000000000239920 string=0x0000000000239924 "!"
 *   insn=0x0000000000239924 string=0x0000000000239988 "I%"
 *   insn=0x000000000023992C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023993C string=0x00000000002399CC "A"
 *   insn=0x0000000000239954 string=0x0000000000239958 ""
 *   insn=0x0000000000239960 string=0x0000000000239964 "@"
 *   insn=0x0000000000239964 string=0x0000000000239968 "@"
 *   insn=0x0000000000239968 string=0x000000000023996C ""
 *   insn=0x000000000023996C string=0x0000000000239970 ""
 *   insn=0x0000000000239974 string=0x0000000000239978 ""
 *   insn=0x0000000000239978 string=0x000000000023997C ""
 *   insn=0x0000000000239988 string=0x000000000023998C ")=G"
 *   insn=0x000000000023998C string=0x0000000000239990 "!"
 *   insn=0x0000000000239994 string=0x0000000000239998 "\t"
 *   insn=0x0000000000239994 string=0x00000000002399AC "\t"
 *   insn=0x0000000000239998 string=0x000000000023999C "*"
 *   insn=0x000000000023999C string=0x00000000002399A0 "\n"
 *   insn=0x00000000002399A8 string=0x00000000002399B8 "?"
 *   insn=0x00000000002399AC string=0x00000000002399B0 "*"
 *   insn=0x00000000002399B0 string=0x00000000002399B4 "\n"
 *   insn=0x00000000002399B8 string=0x00000000002399BC "l"
 *   insn=0x00000000002399C0 string=0x00000000002399C4 "x"
 *   insn=0x00000000002399CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002399D0 string=0x00000000002399D4 "`F@"
 *   insn=0x00000000002399D4 string=0x00000000002399D8 " "
 *   insn=0x00000000002399D8 string=0x0000000000239A1C "@"
 *   insn=0x00000000002399DC string=0x0000000000239A38 "h>@"
 *   insn=0x00000000002399EC string=0x00000000002399F0 "("
 *   insn=0x00000000002399F0 string=0x00000000002399F4 "\t\t@"
 *   insn=0x00000000002399F0 string=0x0000000000239A14 "`F@"
 *   insn=0x00000000002399F4 string=0x00000000002399F8 ")"
 *   insn=0x00000000002399F8 string=0x00000000002399FC "\t\t"
 *   insn=0x0000000000239A00 string=0x0000000000239A04 "\t"
 *   insn=0x0000000000239A04 string=0x0000000000239A08 ")"
 *   insn=0x0000000000239A0C string=0x0000000000239A10 " "
 *   insn=0x0000000000239A1C string=0x0000000000239A20 ""
 *   insn=0x0000000000239A20 string=0x0000000000239A24 ""
 *   insn=0x0000000000239A28 string=0x0000000000239A2C ""
 *   insn=0x0000000000239A2C string=0x0000000000239A30 ""
 *   insn=0x0000000000239A38 string=0x0000000000239A3C "i%"
 *   insn=0x0000000000239A3C string=0x0000000000239A40 ")"
 *   insn=0x0000000000239A4C string=0x0000000000239A50 "I%"
 *   insn=0x0000000000239A50 string=0x0000000000239A54 ")=G"
 *   insn=0x0000000000239A54 string=0x0000000000239A58 "!"
 *   insn=0x0000000000239A5C string=0x0000000000239A60 "\t"
 *   insn=0x0000000000239A5C string=0x0000000000239A90 "\t"
 *   insn=0x0000000000239A60 string=0x0000000000239A64 "*"
 *   insn=0x0000000000239A64 string=0x0000000000239A68 "\n"
 *   insn=0x0000000000239A6C string=0x0000000000239A70 "?"
 *   insn=0x0000000000239A70 string=0x0000000000239A74 "l"
 *   insn=0x0000000000239A78 string=0x0000000000239A7C "J"
 *   insn=0x0000000000239A90 string=0x0000000000239A94 "*"
 *   insn=0x0000000000239A94 string=0x0000000000239A98 "\n"
 *   insn=0x0000000000239A98 string=0x0000000000239A9C "?"
 *   insn=0x0000000000239AB8 string=0x0000000000239ABC "h"
 *   insn=0x0000000000239ABC string=0x0000000000239AC0 "h"
 *   insn=0x0000000000239AC0 string=0x0000000000239AC4 ""
 *   insn=0x0000000000239ACC string=0x0000000000239AD0 "`"
 *   insn=0x0000000000239AD8 string=0x0000000000239ADC "@"
 *   insn=0x0000000000239ADC string=0x0000000000239AE0 ""
 *   insn=0x0000000000239AE0 string=0x0000000000239AE4 ""
 *   insn=0x0000000000239AE8 string=0x0000000000239AF8 ""
 *   insn=0x0000000000239B04 string=0x0000000000239B08 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectComponent::~SoundEffectComponent(Caver::SoundEffectComponent *this)
{
  __int128 v2; // q0
  _DWORD **v3; // x20
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x8
  void *v9; // x0
  _DWORD *v10; // x0
  int v11; // w8
  unsigned int *v12; // x8
  int v13; // w9

  *(_QWORD *)&v2 = &off_6BB8E0;
  *((_QWORD *)&v2 + 1) = &off_6BB920;
  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6BB7C0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 14) = &off_6BB940;
  v3 = (_DWORD **)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
  {
    Caver::AudioSystem::sharedSystem(this);
    Caver::AudioSystem::CancelDelayedSoundEffectSource();
    v4 = *v3;
    *v3 = 0;
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
        v10 = *v3;
        if ( *v3 )
        {
          v11 = v10[2] - 1;
          v10[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
    }
  }
  v6 = (_DWORD *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = *((_QWORD *)this + 15);
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
  Caver::Component::~Component(this);
}

