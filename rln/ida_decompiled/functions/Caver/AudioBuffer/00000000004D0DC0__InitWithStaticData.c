/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0DC0
 * Mangled: _ZN5Caver11AudioBuffer18InitWithStaticDataENS0_12BufferFormatEiiPh
 * Demangled: Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Callers: 1
 *   0x00000000001F4B20  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Callees: 9
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202A30  .alGenBuffers
 *   0x00000000002033D0  goodAlBufferData(int,int,void *,int,int)
 *   0x00000000004D1020  Caver::AudioBuffer::ALFormatForBufferFormat(Caver::AudioBuffer::BufferFormat)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x00000000004D0DD8 string=0x00000000004D0DDC "Y"
 *   insn=0x00000000004D0DDC string=0x00000000004D0DE0 "("
 *   insn=0x00000000004D0E0C string=0x00000000004D0E10 ""
 *   insn=0x00000000004D0E10 string=0x00000000004D0E14 "A"
 *   insn=0x00000000004D0E14 string=0x0000000000598036 "alGenBuffers"
 *   insn=0x00000000004D0E20 string=0x00000000004D0E24 "eW"
 *   insn=0x00000000004D0E24 string=0x00000000004D0E28 "B"
 *   insn=0x00000000004D0E28 string=0x00000000001F4330 "P'"
 *   insn=0x00000000004D0E34 string=0x00000000004D0E38 "Z"
 *   insn=0x00000000004D0E4C string=0x00000000004D0E50 "("
 *   insn=0x00000000004D0E50 string=0x00000000004D0EF0 "("
 *   insn=0x00000000004D0E54 string=0x00000000004D0E58 ")=G"
 *   insn=0x00000000004D0E58 string=0x00000000004D0E5C "!"
 *   insn=0x00000000004D0E60 string=0x00000000004D0E64 "\t"
 *   insn=0x00000000004D0E60 string=0x00000000004D0E78 "\t"
 *   insn=0x00000000004D0E64 string=0x00000000004D0E68 "*"
 *   insn=0x00000000004D0E68 string=0x00000000004D0E6C "\n"
 *   insn=0x00000000004D0E74 string=0x00000000004D0E84 "?"
 *   insn=0x00000000004D0E78 string=0x00000000004D0E7C "*"
 *   insn=0x00000000004D0E7C string=0x00000000004D0E80 "\n"
 *   insn=0x00000000004D0E8C string=0x00000000004D0E90 "Ee"
 *   insn=0x00000000004D0EA8 string=0x00000000004D0EAC "!1"
 *   insn=0x00000000004D0EB8 string=0x00000000004D0EBC "E"
 *   insn=0x00000000004D0EBC string=0x00000000004D0EC0 "A"
 *   insn=0x00000000004D0EC0 string=0x0000000000598043 "alBufferDataStaticProc"
 *   insn=0x00000000004D0ECC string=0x00000000004D0ED0 ":W"
 *   insn=0x00000000004D0EF8 string=0x00000000004D0EFC "A"
 *   insn=0x00000000004D0F20 string=0x00000000004D0F24 ")=G"
 *   insn=0x00000000004D0F24 string=0x00000000004D0F28 "!"
 *   insn=0x00000000004D0F2C string=0x00000000004D0F30 "\t"
 *   insn=0x00000000004D0F2C string=0x00000000004D0F44 "\t"
 *   insn=0x00000000004D0F30 string=0x00000000004D0F34 "*"
 *   insn=0x00000000004D0F34 string=0x00000000004D0F38 "\n"
 *   insn=0x00000000004D0F40 string=0x00000000004D0F50 "?"
 *   insn=0x00000000004D0F44 string=0x00000000004D0F48 "*"
 *   insn=0x00000000004D0F48 string=0x00000000004D0F4C "\n"
 *   insn=0x00000000004D0F64 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D0F6C string=0x00000000004D0F70 "(a"
 *   insn=0x00000000004D0F7C string=0x00000000004D0F80 "J=G"
 *   insn=0x00000000004D0F80 string=0x00000000004D0F84 ")!"
 *   insn=0x00000000004D0F88 string=0x00000000004D0F8C "*"
 *   insn=0x00000000004D0F88 string=0x00000000004D0FFC "*"
 *   insn=0x00000000004D0F8C string=0x00000000004D0F90 "K"
 *   insn=0x00000000004D0F90 string=0x00000000004D0F94 "+"
 *   insn=0x00000000004D0F9C string=0x00000000004D0FE0 "_"
 *   insn=0x00000000004D0FA8 string=0x00000000004D0FAC "J"
 *   insn=0x00000000004D0FB0 string=0x00000000004D0FB4 "(a"
 *   insn=0x00000000004D0FC0 string=0x00000000004D0FC4 "J=G"
 *   insn=0x00000000004D0FC4 string=0x00000000004D0FC8 ")!"
 *   insn=0x00000000004D0FCC string=0x00000000004D0FD0 "*"
 *   insn=0x00000000004D0FD0 string=0x00000000004D0FD4 "K"
 *   insn=0x00000000004D0FD4 string=0x00000000004D0FD8 "+"
 *   insn=0x00000000004D0FF4 string=0x00000000004D0FF8 "3"
 *   insn=0x00000000004D0FFC string=0x00000000004D1000 "K"
 *   insn=0x00000000004D1000 string=0x00000000004D1004 "+"
 *   insn=0x00000000004D1004 string=0x00000000004D1008 "_"
 *   insn=0x00000000004D1018 string=0x00000000004D101C "*"
 *   insn=0x00000000004D101C string=0x00000000004D1020 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AudioBuffer::InitWithStaticData(__int64 a1, int a2, int a3, int a4, void *a5)
{
  int Error; // w24
  void *v11; // x0
  _BOOL4 v12; // w19
  unsigned int *v13; // x8
  int v14; // w9
  int v15; // w1
  void *v16; // x0
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD v20[3]; // [xsp+8h] [xbp-58h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  alGenBuffers();
  sub_566BB8((int)v20, "alGenBuffers");
  Error = alGetError();
  v11 = (void *)(v20[0] - 24LL);
  if ( (__int64 *)(v20[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_2;
  v13 = (unsigned int *)(v20[0] - 8LL);
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
  if ( v14 > 0 )
  {
LABEL_2:
    if ( !Error )
      goto LABEL_10;
    return 0;
  }
  operator delete(v11);
  if ( Error )
    return 0;
LABEL_10:
  if ( (unsigned int)(a2 - 1) >= 4 )
    v15 = 0;
  else
    v15 = a2 + 4351;
  goodAlBufferData(*(_DWORD *)a1, v15, a5, a4, a3);
  sub_566BB8((int)v20, "alBufferDataStaticProc");
  v12 = alGetError() == 0;
  v16 = (void *)(v20[0] - 24LL);
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
      operator delete(v16);
  }
  return v12;
}

