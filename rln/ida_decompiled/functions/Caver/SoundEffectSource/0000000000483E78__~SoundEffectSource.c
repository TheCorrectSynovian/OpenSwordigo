/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000483E78
 * Mangled: _ZN5Caver17SoundEffectSourceD2Ev
 * Demangled: Caver::SoundEffectSource::~SoundEffectSource()
 *
 * Callers: 1
 *   0x00000000001F52D0  Caver::SoundEffectSource::~SoundEffectSource()
 *
 * Callees: 11
 *   0x00000000001F4330  .alGetError
 *   0x00000000001F52D0  Caver::SoundEffectSource::~SoundEffectSource()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEF20  .alDeleteSources
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x0000000000483E84 string=0x0000000000483E88 "T"
 *   insn=0x0000000000483E88 string=0x0000000000483E8C ")"
 *   insn=0x0000000000483E90 string=0x0000000000483E94 ")IG"
 *   insn=0x0000000000483EA0 string=0x0000000000483EA4 ")A"
 *   insn=0x0000000000483EA4 string=0x0000000000483EA8 ")"
 *   insn=0x0000000000483EA8 string=0x0000000000483EAC "("
 *   insn=0x0000000000483EB0 string=0x0000000000483EEC "`"
 *   insn=0x0000000000483EBC string=0x00000000005967D0 "alDeleteSources"
 *   insn=0x0000000000483EC8 string=0x0000000000483ECC ";"
 *   insn=0x0000000000483ED0 string=0x00000000001F4330 "P'"
 *   insn=0x0000000000483ED4 string=0x0000000000483ED8 "\t"
 *   insn=0x0000000000483ED8 string=0x0000000000483EDC ")"
 *   insn=0x0000000000483EE4 string=0x0000000000483EE8 "A"
 *   insn=0x0000000000483EE8 string=0x0000000000483F30 "\t"
 *   insn=0x0000000000483EF0 string=0x0000000000483EF4 "@"
 *   insn=0x0000000000483EF4 string=0x0000000000483EF8 ""
 *   insn=0x0000000000483EF8 string=0x0000000000483EFC ""
 *   insn=0x0000000000483F00 string=0x0000000000483F04 ""
 *   insn=0x0000000000483F04 string=0x0000000000483F08 ""
 *   insn=0x0000000000483F30 string=0x0000000000483F34 ")=G"
 *   insn=0x0000000000483F34 string=0x0000000000483F38 "!"
 *   insn=0x0000000000483F3C string=0x0000000000483F40 "\t"
 *   insn=0x0000000000483F3C string=0x0000000000483F54 "\t"
 *   insn=0x0000000000483F40 string=0x0000000000483F44 "*"
 *   insn=0x0000000000483F44 string=0x0000000000483F48 "\n"
 *   insn=0x0000000000483F50 string=0x0000000000483F60 "?"
 *   insn=0x0000000000483F54 string=0x0000000000483F58 "*"
 *   insn=0x0000000000483F58 string=0x0000000000483F5C "\n"
 *   insn=0x0000000000483F60 string=0x0000000000483F64 "L"
 *   insn=0x0000000000483F6C string=0x0000000000483F70 "`"
 *   insn=0x0000000000483F7C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000483F84 string=0x0000000000483F88 "\n"
 *   insn=0x0000000000483F88 string=0x0000000000483F8C "J"
 *   insn=0x0000000000483F90 string=0x0000000000483F94 "(a"
 *   insn=0x0000000000483F98 string=0x0000000000483F9C " "
 *   insn=0x0000000000483F9C string=0x0000000000483FA0 "\n"
 *   insn=0x0000000000483F9C string=0x0000000000484000 "`"
 *   insn=0x0000000000483FA0 string=0x0000000000483FA4 "J=G"
 *   insn=0x0000000000483FA4 string=0x0000000000483FA8 ")!"
 *   insn=0x0000000000483FAC string=0x0000000000483FB0 "*"
 *   insn=0x0000000000483FAC string=0x0000000000483FE0 "*"
 *   insn=0x0000000000483FB0 string=0x0000000000483FB4 "K"
 *   insn=0x0000000000483FB4 string=0x0000000000483FB8 "+"
 *   insn=0x0000000000483FBC string=0x0000000000483FC0 "_"
 *   insn=0x0000000000483FD0 string=0x0000000000483FD4 "`"
 *   insn=0x0000000000483FD8 string=0x0000000000484008 "@"
 *   insn=0x0000000000483FE0 string=0x0000000000483FE4 "K"
 *   insn=0x0000000000483FE4 string=0x0000000000483FE8 "+"
 *   insn=0x0000000000483FE8 string=0x0000000000483FEC "_"
 *   insn=0x0000000000484008 string=0x000000000048400C ""
 *   insn=0x000000000048400C string=0x0000000000484010 ""
 *   insn=0x0000000000484014 string=0x0000000000484018 ""
 *   insn=0x0000000000484018 string=0x000000000048401C ""
 *   insn=0x0000000000484024 string=0x0000000000484028 "'"
 *   insn=0x0000000000484040 string=0x00000000001F52D0 "P'"
 *   insn=0x0000000000484050 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectSource::~SoundEffectSource(Caver::SoundEffectSource *this)
{
  void *v2; // x0
  _DWORD *v3; // x0
  int v4; // w8
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+28h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = off_6D53D0;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_3;
  alDeleteSources();
  sub_566BB8((int)v7, "alDeleteSources");
  alGetError();
  v2 = (void *)(v7[0] - 24LL);
  if ( (__int64 *)(v7[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v5 = (unsigned int *)(v7[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v6 = __ldaxr(v5);
    while ( __stlxr(v6 - 1, v5) );
  }
  else
  {
    v6 = (*v5)--;
  }
  if ( v6 > 0 )
  {
LABEL_3:
    v3 = (_DWORD *)*((_QWORD *)this + 5);
    if ( !v3 )
      return;
  }
  else
  {
    operator delete(v2);
    v3 = (_DWORD *)*((_QWORD *)this + 5);
    if ( !v3 )
      return;
  }
  v4 = v3[2] - 1;
  v3[2] = v4;
  if ( !v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
}

