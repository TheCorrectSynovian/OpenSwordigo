/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E774
 * Mangled: _ZN5Caver11AudioSystem8ShutdownEv
 * Demangled: Caver::AudioSystem::Shutdown(void)
 *
 * Callers: 2
 *   0x0000000000201F60  Caver::AudioSystem::Shutdown(void)
 *   0x000000000047E504  Caver::AudioSystem::~AudioSystem()
 *
 * Callees: 14
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F5BA0  .alcCloseDevice
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9BC0  .alcMakeContextCurrent
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FE540  Caver::SoundLibrary::Clear(void)
 *   0x0000000000201210  Caver::SoundEffectSource::ClearSourceCache(void)
 *   0x00000000002022B0  .alcGetCurrentContext
 *   0x0000000000203080  .alcDestroyContext
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x000000000047E788 string=0x000000000047E78C "U"
 *   insn=0x000000000047E798 string=0x000000000047E79C "t:@"
 *   insn=0x000000000047E7A0 string=0x000000000047E7A4 "4"
 *   insn=0x000000000047E7A8 string=0x000000000047E7AC ""
 *   insn=0x000000000047E7BC string=0x000000000047E7C0 "\t@"
 *   insn=0x000000000047E7C8 string=0x000000000047E7CC ""
 *   insn=0x000000000047E7DC string=0x000000000047E7E0 "@"
 *   insn=0x000000000047E7E8 string=0x000000000047E7EC "t"
 *   insn=0x000000000047E7F4 string=0x000000000047E82C "t"
 *   insn=0x000000000047E800 string=0x000000000047E804 "@"
 *   insn=0x000000000047E804 string=0x000000000047E808 ""
 *   insn=0x000000000047E808 string=0x000000000047E80C ""
 *   insn=0x000000000047E810 string=0x000000000047E814 ""
 *   insn=0x000000000047E814 string=0x000000000047E818 ""
 *   insn=0x000000000047E82C string=0x000000000047E830 "$"
 *   insn=0x000000000047E830 string=0x000000000047E834 "C"
 *   insn=0x000000000047E830 string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000047E834 string=0x000000000047E838 "h"
 *   insn=0x000000000047E838 string=0x000000000047E83C "h"
 *   insn=0x000000000047E83C string=0x000000000047E8C8 "`"
 *   insn=0x000000000047E840 string=0x000000000047E844 "h"
 *   insn=0x000000000047E854 string=0x00000000001F9BC0 "0'"
 *   insn=0x000000000047E858 string=0x0000000000596664 "alcMakeContextCurrent"
 *   insn=0x000000000047E86C string=0x00000000001F4330 "P'"
 *   insn=0x000000000047E870 string=0x000000000047E874 ")"
 *   insn=0x000000000047E874 string=0x000000000047E878 ")"
 *   insn=0x000000000047E884 string=0x000000000047E888 "h"
 *   insn=0x000000000047E884 string=0x000000000047E9B8 ")"
 *   insn=0x000000000047E894 string=0x000000000059668A "alcDestroyContext"
 *   insn=0x000000000047E8AC string=0x000000000047E8B0 ")"
 *   insn=0x000000000047E8B0 string=0x000000000047E8B4 ")"
 *   insn=0x000000000047E8C0 string=0x000000000047E930 ")"
 *   insn=0x000000000047E8D0 string=0x00000000001F5BA0 "P'"
 *   insn=0x000000000047E8D4 string=0x000000000059669C "alcCloseDevice"
 *   insn=0x000000000047E8EC string=0x000000000047E8F0 ")"
 *   insn=0x000000000047E8F0 string=0x000000000047E8F4 ")"
 *   insn=0x000000000047E900 string=0x000000000047E954 ")"
 *   insn=0x000000000047E910 string=0x000000000047E914 "A"
 *   insn=0x000000000047E914 string=0x000000000047E9FC "5"
 *   insn=0x000000000047E930 string=0x000000000047E934 ")=G"
 *   insn=0x000000000047E934 string=0x000000000047E938 "!"
 *   insn=0x000000000047E93C string=0x000000000047E940 "\t"
 *   insn=0x000000000047E93C string=0x000000000047E978 "\t"
 *   insn=0x000000000047E940 string=0x000000000047E944 "*"
 *   insn=0x000000000047E944 string=0x000000000047E948 "\n"
 *   insn=0x000000000047E94C string=0x000000000047E950 ""
 *   insn=0x000000000047E950 string=0x000000000047E984 "?"
 *   insn=0x000000000047E954 string=0x000000000047E958 ")=G"
 *   insn=0x000000000047E958 string=0x000000000047E95C "!"
 *   insn=0x000000000047E960 string=0x000000000047E964 "\t"
 *   insn=0x000000000047E960 string=0x000000000047E998 "\t"
 *   insn=0x000000000047E964 string=0x000000000047E968 "*"
 *   insn=0x000000000047E968 string=0x000000000047E96C "\n"
 *   insn=0x000000000047E974 string=0x000000000047E9A4 "?"
 *   insn=0x000000000047E978 string=0x000000000047E97C "*"
 *   insn=0x000000000047E97C string=0x000000000047E980 "\n"
 *   insn=0x000000000047E998 string=0x000000000047E99C "*"
 *   insn=0x000000000047E99C string=0x000000000047E9A0 "\n"
 *   insn=0x000000000047E9AC string=0x000000000047E9B0 "}"
 *   insn=0x000000000047E9B8 string=0x000000000047E9BC ")=G"
 *   insn=0x000000000047E9BC string=0x000000000047E9C0 "!"
 *   insn=0x000000000047E9C4 string=0x000000000047E9C8 "\t"
 *   insn=0x000000000047E9C4 string=0x000000000047E9DC "\t"
 *   insn=0x000000000047E9C8 string=0x000000000047E9CC "*"
 *   insn=0x000000000047E9CC string=0x000000000047E9D0 "\n"
 *   insn=0x000000000047E9D8 string=0x000000000047E9E8 "?"
 *   insn=0x000000000047E9DC string=0x000000000047E9E0 "*"
 *   insn=0x000000000047E9E0 string=0x000000000047E9E4 "\n"
 *   insn=0x000000000047E9F0 string=0x000000000047E9F4 "l"
 *   insn=0x000000000047E9FC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047EA00 string=0x000000000047EA04 "*"
 *   insn=0x000000000047EA04 string=0x000000000047EA08 "J"
 *   insn=0x000000000047EA0C string=0x000000000047EA10 "(a"
 *   insn=0x000000000047EA14 string=0x000000000047EA18 " "
 *   insn=0x000000000047EA18 string=0x000000000047EA1C "*"
 *   insn=0x000000000047EA1C string=0x000000000047EA20 "J=G"
 *   insn=0x000000000047EA20 string=0x000000000047EA24 ")!"
 *   insn=0x000000000047EA28 string=0x000000000047EA2C "*"
 *   insn=0x000000000047EA28 string=0x000000000047EADC "*"
 *   insn=0x000000000047EA2C string=0x000000000047EA30 "K"
 *   insn=0x000000000047EA30 string=0x000000000047EA34 "+"
 *   insn=0x000000000047EA38 string=0x000000000047EA3C "!"
 *   insn=0x000000000047EA3C string=0x000000000047EAC0 "_"
 *   insn=0x000000000047EA44 string=0x000000000047EA48 "*"
 *   insn=0x000000000047EA48 string=0x000000000047EA4C "J"
 *   insn=0x000000000047EA50 string=0x000000000047EA54 "(a"
 *   insn=0x000000000047EA5C string=0x000000000047EA60 "*"
 *   insn=0x000000000047EA60 string=0x000000000047EA64 "J=G"
 *   insn=0x000000000047EA64 string=0x000000000047EA68 ")!"
 *   insn=0x000000000047EA6C string=0x000000000047EA70 "*"
 *   insn=0x000000000047EA70 string=0x000000000047EA74 "K"
 *   insn=0x000000000047EA74 string=0x000000000047EA78 "+"
 *   insn=0x000000000047EA84 string=0x000000000047EA88 "*"
 *   insn=0x000000000047EA88 string=0x000000000047EA8C "J"
 *   insn=0x000000000047EA90 string=0x000000000047EA94 "(a"
 *   insn=0x000000000047EA9C string=0x000000000047EAA0 "*"
 *   insn=0x000000000047EAA0 string=0x000000000047EAA4 "J=G"
 *   insn=0x000000000047EAA4 string=0x000000000047EAA8 ")!"
 *   insn=0x000000000047EAAC string=0x000000000047EAB0 "*"
 *   insn=0x000000000047EAB0 string=0x000000000047EAB4 "K"
 *   insn=0x000000000047EAB4 string=0x000000000047EAB8 "+"
 *   insn=0x000000000047EACC string=0x000000000047EAD0 "5"
 *   insn=0x000000000047EAD4 string=0x000000000047EAD8 "{"
 *   insn=0x000000000047EADC string=0x000000000047EAE0 "K"
 *   insn=0x000000000047EAE0 string=0x000000000047EAE4 "+"
 *   insn=0x000000000047EAE4 string=0x000000000047EAE8 "_"
 *   insn=0x000000000047EAFC string=0x000000000047EB00 "q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioSystem::Shutdown(Caver::AudioSystem *this)
{
  Caver::AudioSystem *v1; // x19
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  Caver::SoundLibrary *v5; // x0
  Caver::SoundLibrary **v6; // x20
  Caver::SoundLibrary **v7; // x22
  Caver::SoundLibrary **v8; // x23
  int v9; // w8
  Caver::SoundLibrary *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD v20[3]; // [xsp+8h] [xbp-48h] BYREF

  v1 = this;
  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      this = (Caver::AudioSystem *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        this = (Caver::AudioSystem *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::SoundEffectSource::ClearSourceCache(this);
  v6 = (Caver::SoundLibrary **)*((_QWORD *)v1 + 5);
  v7 = (Caver::SoundLibrary **)*((_QWORD *)v1 + 6);
  if ( v7 != v6 )
  {
    v8 = (Caver::SoundLibrary **)*((_QWORD *)v1 + 5);
    do
    {
      v5 = *v8;
      if ( *v8 )
      {
        v9 = *((_DWORD *)v5 + 2) - 1;
        *((_DWORD *)v5 + 2) = v9;
        if ( !v9 )
          v5 = (Caver::SoundLibrary *)(*(__int64 (__fastcall **)(Caver::SoundLibrary *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      ++v8;
    }
    while ( v7 != v8 );
  }
  *((_QWORD *)v1 + 6) = v6;
  Caver::SoundLibrary::sharedLibrary(v5);
  Caver::SoundLibrary::Clear(v10);
  if ( *((_QWORD *)v1 + 1) )
  {
    if ( alcGetCurrentContext() == *((_QWORD *)v1 + 1) )
    {
      alcMakeContextCurrent();
      sub_566BB8((int)v20, "alcMakeContextCurrent");
      alGetError();
      v11 = (void *)(v20[0] - 24LL);
      if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
      {
        v18 = (unsigned int *)(v20[0] - 8LL);
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
          operator delete(v11);
      }
    }
    alcDestroyContext();
    sub_566BB8((int)v20, "alcDestroyContext");
    alGetError();
    v12 = (void *)(v20[0] - 24LL);
    if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
    {
      v14 = (unsigned int *)(v20[0] - 8LL);
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
        operator delete(v12);
    }
    *((_QWORD *)v1 + 1) = 0;
  }
  if ( *(_QWORD *)v1 )
  {
    alcCloseDevice();
    sub_566BB8((int)v20, "alcCloseDevice");
    alGetError();
    v13 = (void *)(v20[0] - 24LL);
    if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
    {
      v16 = (unsigned int *)(v20[0] - 8LL);
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
        operator delete(v13);
    }
    *(_QWORD *)v1 = 0;
  }
}

