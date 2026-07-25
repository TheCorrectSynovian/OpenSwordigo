/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047EFBC
 * Mangled: _ZN5Caver11AudioSystem12CreateDeviceEv
 * Demangled: Caver::AudioSystem::CreateDevice(void)
 *
 * Callers: 1
 *   0x00000000001F4EC0  Caver::AudioSystem::CreateDevice(void)
 *
 * Callees: 11
 *   0x00000000001F42D0  .alcCreateContext
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F5D70  .alcOpenDevice
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7440  .alDistanceModel
 *   0x00000000001F9BC0  .alcMakeContextCurrent
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 115
 *   insn=0x000000000047EFCC string=0x000000000047EFD0 "T"
 *   insn=0x000000000047EFE0 string=0x000000000047EFE4 "c"
 *   insn=0x000000000047EFE4 string=0x000000000047EFE8 "`"
 *   insn=0x000000000047EFE4 string=0x00000000001F5D70 "P'"
 *   insn=0x000000000047EFEC string=0x0000000000596645 "alcOpenDevice"
 *   insn=0x000000000047F000 string=0x00000000001F4330 "P'"
 *   insn=0x000000000047F004 string=0x000000000047F008 "5"
 *   insn=0x000000000047F014 string=0x000000000047F018 "a"
 *   insn=0x000000000047F018 string=0x000000000047F01C "`"
 *   insn=0x000000000047F018 string=0x000000000047F0E4 ")"
 *   insn=0x000000000047F028 string=0x000000000047F02C "`"
 *   insn=0x000000000047F028 string=0x00000000001F42D0 "P'"
 *   insn=0x000000000047F030 string=0x0000000000596653 "alcCreateContext"
 *   insn=0x000000000047F054 string=0x000000000047F058 "`"
 *   insn=0x000000000047F054 string=0x000000000047F108 ")"
 *   insn=0x000000000047F058 string=0x000000000047F05C " "
 *   insn=0x000000000047F060 string=0x00000000001F9BC0 "0'"
 *   insn=0x000000000047F064 string=0x0000000000596664 "alcMakeContextCurrent"
 *   insn=0x000000000047F084 string=0x000000000047F088 "a"
 *   insn=0x000000000047F088 string=0x000000000047F154 ")"
 *   insn=0x000000000047F090 string=0x00000000001F7440 "0'"
 *   insn=0x000000000047F094 string=0x000000000059667A "alDistanceModel"
 *   insn=0x000000000047F0B8 string=0x000000000047F178 ")"
 *   insn=0x000000000047F0CC string=0x000000000047F204 "3"
 *   insn=0x000000000047F0E4 string=0x000000000047F0E8 ")=G"
 *   insn=0x000000000047F0E8 string=0x000000000047F0EC "!"
 *   insn=0x000000000047F0F0 string=0x000000000047F0F4 "\t"
 *   insn=0x000000000047F0F0 string=0x000000000047F12C "\t"
 *   insn=0x000000000047F0F4 string=0x000000000047F0F8 "*"
 *   insn=0x000000000047F0F8 string=0x000000000047F0FC "\n"
 *   insn=0x000000000047F100 string=0x000000000047F104 ""
 *   insn=0x000000000047F104 string=0x000000000047F138 "?"
 *   insn=0x000000000047F108 string=0x000000000047F10C ")=G"
 *   insn=0x000000000047F10C string=0x000000000047F110 "!"
 *   insn=0x000000000047F110 string=0x000000000047F114 "I"
 *   insn=0x000000000047F114 string=0x000000000047F118 "\t"
 *   insn=0x000000000047F114 string=0x000000000047F19C "\t"
 *   insn=0x000000000047F118 string=0x000000000047F11C "*"
 *   insn=0x000000000047F11C string=0x000000000047F120 "\n"
 *   insn=0x000000000047F124 string=0x000000000047F128 " "
 *   insn=0x000000000047F128 string=0x000000000047F1A8 "?"
 *   insn=0x000000000047F12C string=0x000000000047F130 "*"
 *   insn=0x000000000047F130 string=0x000000000047F134 "\n"
 *   insn=0x000000000047F144 string=0x000000000047F148 "`"
 *   insn=0x000000000047F154 string=0x000000000047F158 ")=G"
 *   insn=0x000000000047F158 string=0x000000000047F15C "!"
 *   insn=0x000000000047F15C string=0x000000000047F160 ")"
 *   insn=0x000000000047F160 string=0x000000000047F164 "\t"
 *   insn=0x000000000047F160 string=0x000000000047F1C4 "\t"
 *   insn=0x000000000047F164 string=0x000000000047F168 "*"
 *   insn=0x000000000047F168 string=0x000000000047F16C "\n"
 *   insn=0x000000000047F174 string=0x000000000047F1D0 "?"
 *   insn=0x000000000047F178 string=0x000000000047F17C ")=G"
 *   insn=0x000000000047F17C string=0x000000000047F180 "!"
 *   insn=0x000000000047F180 string=0x000000000047F184 "\t"
 *   insn=0x000000000047F184 string=0x000000000047F188 "\t"
 *   insn=0x000000000047F184 string=0x000000000047F1E4 "\t"
 *   insn=0x000000000047F188 string=0x000000000047F18C "*"
 *   insn=0x000000000047F18C string=0x000000000047F190 "\n"
 *   insn=0x000000000047F198 string=0x000000000047F1F0 "?"
 *   insn=0x000000000047F19C string=0x000000000047F1A0 "*"
 *   insn=0x000000000047F1A0 string=0x000000000047F1A4 "\n"
 *   insn=0x000000000047F1A8 string=0x000000000047F1AC "l"
 *   insn=0x000000000047F1B0 string=0x000000000047F1B4 "|"
 *   insn=0x000000000047F1B4 string=0x000000000047F1B8 "`"
 *   insn=0x000000000047F1B8 string=0x000000000047F1BC " "
 *   insn=0x000000000047F1C4 string=0x000000000047F1C8 "*"
 *   insn=0x000000000047F1C8 string=0x000000000047F1CC "\n"
 *   insn=0x000000000047F1D8 string=0x000000000047F1DC "r"
 *   insn=0x000000000047F1E4 string=0x000000000047F1E8 "*"
 *   insn=0x000000000047F1E8 string=0x000000000047F1EC "\n"
 *   insn=0x000000000047F1F0 string=0x000000000047F1F4 "L"
 *   insn=0x000000000047F1F8 string=0x000000000047F1FC "j"
 *   insn=0x000000000047F204 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047F20C string=0x000000000047F210 "(a"
 *   insn=0x000000000047F218 string=0x000000000047F21C "*"
 *   insn=0x000000000047F21C string=0x000000000047F220 "J=G"
 *   insn=0x000000000047F220 string=0x000000000047F224 ")!"
 *   insn=0x000000000047F224 string=0x000000000047F228 "j"
 *   insn=0x000000000047F228 string=0x000000000047F22C "*"
 *   insn=0x000000000047F228 string=0x000000000047F314 "*"
 *   insn=0x000000000047F22C string=0x000000000047F230 "K"
 *   insn=0x000000000047F230 string=0x000000000047F234 "+"
 *   insn=0x000000000047F238 string=0x000000000047F23C "/"
 *   insn=0x000000000047F23C string=0x000000000047F2F8 "_"
 *   insn=0x000000000047F248 string=0x000000000047F24C "(a"
 *   insn=0x000000000047F254 string=0x000000000047F258 "*"
 *   insn=0x000000000047F258 string=0x000000000047F25C "J=G"
 *   insn=0x000000000047F25C string=0x000000000047F260 ")!"
 *   insn=0x000000000047F264 string=0x000000000047F268 "*"
 *   insn=0x000000000047F268 string=0x000000000047F26C "K"
 *   insn=0x000000000047F26C string=0x000000000047F270 "+"
 *   insn=0x000000000047F274 string=0x000000000047F278 " "
 *   insn=0x000000000047F284 string=0x000000000047F288 "(a"
 *   insn=0x000000000047F290 string=0x000000000047F294 "*"
 *   insn=0x000000000047F294 string=0x000000000047F298 "J=G"
 *   insn=0x000000000047F298 string=0x000000000047F29C ")!"
 *   insn=0x000000000047F2A0 string=0x000000000047F2A4 "*"
 *   insn=0x000000000047F2A4 string=0x000000000047F2A8 "K"
 *   insn=0x000000000047F2A8 string=0x000000000047F2AC "+"
 *   insn=0x000000000047F2BC string=0x000000000047F2C0 "*"
 *   insn=0x000000000047F2C0 string=0x000000000047F2C4 "J"
 *   insn=0x000000000047F2C8 string=0x000000000047F2CC "(a"
 *   insn=0x000000000047F2D4 string=0x000000000047F2D8 "*"
 *   insn=0x000000000047F2D8 string=0x000000000047F2DC "J=G"
 *   insn=0x000000000047F2DC string=0x000000000047F2E0 ")!"
 *   insn=0x000000000047F2E4 string=0x000000000047F2E8 "*"
 *   insn=0x000000000047F2E8 string=0x000000000047F2EC "K"
 *   insn=0x000000000047F2EC string=0x000000000047F2F0 "+"
 *   insn=0x000000000047F304 string=0x000000000047F308 "'"
 *   insn=0x000000000047F30C string=0x000000000047F310 "m\t"
 *   insn=0x000000000047F314 string=0x000000000047F318 "K"
 *   insn=0x000000000047F318 string=0x000000000047F31C "+"
 *   insn=0x000000000047F31C string=0x000000000047F320 "_"
 *   insn=0x000000000047F330 string=0x000000000047F334 "d\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::CreateDevice(Caver::AudioSystem *this)
{
  void *v2; // x0
  __int64 result; // x0
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
  _QWORD v15[3]; // [xsp+8h] [xbp-38h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = alcOpenDevice();
  sub_566BB8((int)v15, "alcOpenDevice");
  alGetError();
  v2 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_2;
  v7 = (unsigned int *)(v15[0] - 8LL);
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
  if ( v8 > 0 )
  {
LABEL_2:
    result = *(_QWORD *)this;
    if ( !*(_QWORD *)this )
      return result;
  }
  else
  {
    operator delete(v2);
    result = *(_QWORD *)this;
    if ( !*(_QWORD *)this )
      return result;
  }
  *((_QWORD *)this + 1) = alcCreateContext();
  sub_566BB8((int)v15, "alcCreateContext");
  alGetError();
  v4 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_4;
  v9 = (unsigned int *)(v15[0] - 8LL);
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
  if ( v10 > 0 )
  {
LABEL_4:
    result = *((_QWORD *)this + 1);
    if ( !result )
      return result;
  }
  else
  {
    operator delete(v4);
    result = *((_QWORD *)this + 1);
    if ( !result )
      return result;
  }
  alcMakeContextCurrent();
  sub_566BB8((int)v15, "alcMakeContextCurrent");
  alGetError();
  v5 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8LL);
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
      operator delete(v5);
  }
  alDistanceModel();
  sub_566BB8((int)v15, "alDistanceModel");
  alGetError();
  v6 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v15[0] - 8LL);
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
      operator delete(v6);
  }
  return 1;
}

