/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C4C84
 * Mangled: _ZN5Caver7CoinBar6UpdateEf
 * Demangled: Caver::CoinBar::Update(float)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7120  Caver::CoinBar::UpdateText(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000003C4C98 string=0x00000000003C4C9C "U"
 *   insn=0x00000000003C4CA4 string=0x00000000003C4CA8 ""
 *   insn=0x00000000003C4CAC string=0x00000000003C4CB0 "a"
 *   insn=0x00000000003C4CB0 string=0x00000000003C4CB4 "h"
 *   insn=0x00000000003C4CB8 string=0x00000000003C4CBC "i"
 *   insn=0x00000000003C4CBC string=0x00000000003C4CC0 "!(("
 *   insn=0x00000000003C4CC0 string=0x00000000003C4CC4 "a"
 *   insn=0x00000000003C4CC4 string=0x00000000003C4CC8 "   "
 *   insn=0x00000000003C4CC8 string=0x00000000003C4CCC "m"
 *   insn=0x00000000003C4CD4 string=0x00000000003C4CE8 ""
 *   insn=0x00000000003C4CDC string=0x00000000003C4CE0 "   "
 *   insn=0x00000000003C4CE0 string=0x00000000003C4CE4 "m"
 *   insn=0x00000000003C4CE8 string=0x00000000003C4CEC "\t"
 *   insn=0x00000000003C4CE8 string=0x00000000003C4DA8 "i"
 *   insn=0x00000000003C4CEC string=0x00000000003C4CF0 " "
 *   insn=0x00000000003C4CF4 string=0x00000000003C4CF8 "!"
 *   insn=0x00000000003C4D08 string=0x00000000003C4D0C ")"
 *   insn=0x00000000003C4D0C string=0x00000000003C4D10 "("
 *   insn=0x00000000003C4D10 string=0x00000000003C4D14 "h"
 *   insn=0x00000000003C4D18 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000003C4D1C string=0x00000000003C4D20 "a"
 *   insn=0x00000000003C4D20 string=0x0000000000592088 "coin_get"
 *   insn=0x00000000003C4D44 string=0x00000000001F5340 "P'"
 *   insn=0x00000000003C4D4C string=0x00000000003C4D50 "@"
 *   insn=0x00000000003C4D50 string=0x00000000003C4D54 ""
 *   insn=0x00000000003C4D54 string=0x00000000003C4D58 ""
 *   insn=0x00000000003C4D5C string=0x00000000003C4D60 ""
 *   insn=0x00000000003C4D60 string=0x00000000003C4D64 ""
 *   insn=0x00000000003C4D6C string=0x00000000003C4D70 "\t"
 *   insn=0x00000000003C4D70 string=0x00000000003C4D74 ")"
 *   insn=0x00000000003C4D80 string=0x00000000003C4D84 "\t"
 *   insn=0x00000000003C4D84 string=0x00000000003C4D88 ")=G"
 *   insn=0x00000000003C4D88 string=0x00000000003C4D8C "!"
 *   insn=0x00000000003C4D90 string=0x00000000003C4D94 "\t"
 *   insn=0x00000000003C4D90 string=0x00000000003C4EA8 "\t"
 *   insn=0x00000000003C4D94 string=0x00000000003C4D98 "*"
 *   insn=0x00000000003C4D98 string=0x00000000003C4D9C "\n"
 *   insn=0x00000000003C4DA0 string=0x00000000003C4DA4 "D"
 *   insn=0x00000000003C4DA4 string=0x00000000003C4EB4 "?"
 *   insn=0x00000000003C4DA8 string=0x00000000003C4DAC "!"
 *   insn=0x00000000003C4DB4 string=0x00000000003C4DB8 ")"
 *   insn=0x00000000003C4DB8 string=0x00000000003C4DBC "("
 *   insn=0x00000000003C4DBC string=0x00000000003C4DC0 "h"
 *   insn=0x00000000003C4DC0 string=0x00000000003C4DC4 "["
 *   insn=0x00000000003C4DC8 string=0x00000000003C4DCC "a"
 *   insn=0x00000000003C4DD8 string=0x00000000003C4DDC "w"
 *   insn=0x00000000003C4DEC string=0x00000000003C4DF0 "T"
 *   insn=0x00000000003C4DF8 string=0x00000000003C4DFC "@"
 *   insn=0x00000000003C4DFC string=0x00000000003C4E00 ""
 *   insn=0x00000000003C4E00 string=0x00000000003C4E04 ""
 *   insn=0x00000000003C4E08 string=0x00000000003C4E0C ""
 *   insn=0x00000000003C4E0C string=0x00000000003C4E10 ""
 *   insn=0x00000000003C4E18 string=0x00000000003C4E1C "\t"
 *   insn=0x00000000003C4E1C string=0x00000000003C4E20 ")"
 *   insn=0x00000000003C4E2C string=0x00000000003C4E84 "\t"
 *   insn=0x00000000003C4E38 string=0x00000000003C4E3C "h"
 *   insn=0x00000000003C4E38 string=0x00000000001F7120 "0'"
 *   insn=0x00000000003C4E40 string=0x00000000003C4E48 "\ta"
 *   insn=0x00000000003C4E84 string=0x00000000003C4E88 ")=G"
 *   insn=0x00000000003C4E88 string=0x00000000003C4E8C "!"
 *   insn=0x00000000003C4E90 string=0x00000000003C4E94 "\t"
 *   insn=0x00000000003C4E94 string=0x00000000003C4E98 "*"
 *   insn=0x00000000003C4E98 string=0x00000000003C4E9C "\n"
 *   insn=0x00000000003C4EA8 string=0x00000000003C4EAC "*"
 *   insn=0x00000000003C4EAC string=0x00000000003C4EB0 "\n"
 *   insn=0x00000000003C4EBC string=0x00000000003C4EC0 "9"
 *   insn=0x00000000003C4EC8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C4ED4 string=0x00000000003C4ED8 "{"
 *   insn=0x00000000003C4EDC string=0x00000000003C4EE0 "\n"
 *   insn=0x00000000003C4EE0 string=0x00000000003C4EE4 "J"
 *   insn=0x00000000003C4EE8 string=0x00000000003C4EEC "(a"
 *   insn=0x00000000003C4EF4 string=0x00000000003C4EF8 "\n"
 *   insn=0x00000000003C4EF8 string=0x00000000003C4EFC "J=G"
 *   insn=0x00000000003C4EFC string=0x00000000003C4F00 ")!"
 *   insn=0x00000000003C4F04 string=0x00000000003C4F08 "*"
 *   insn=0x00000000003C4F04 string=0x00000000003C4F74 "*"
 *   insn=0x00000000003C4F08 string=0x00000000003C4F0C "K"
 *   insn=0x00000000003C4F0C string=0x00000000003C4F10 "+"
 *   insn=0x00000000003C4F18 string=0x00000000003C4F58 "_"
 *   insn=0x00000000003C4F1C string=0x00000000003C4F20 "\n"
 *   insn=0x00000000003C4F20 string=0x00000000003C4F24 "J"
 *   insn=0x00000000003C4F28 string=0x00000000003C4F2C "(a"
 *   insn=0x00000000003C4F34 string=0x00000000003C4F38 "\n"
 *   insn=0x00000000003C4F38 string=0x00000000003C4F3C "J=G"
 *   insn=0x00000000003C4F3C string=0x00000000003C4F40 ")!"
 *   insn=0x00000000003C4F44 string=0x00000000003C4F48 "*"
 *   insn=0x00000000003C4F48 string=0x00000000003C4F4C "K"
 *   insn=0x00000000003C4F4C string=0x00000000003C4F50 "+"
 *   insn=0x00000000003C4F58 string=0x00000000003C4F5C "l"
 *   insn=0x00000000003C4F6C string=0x00000000003C4F70 "U"
 *   insn=0x00000000003C4F74 string=0x00000000003C4F78 "K"
 *   insn=0x00000000003C4F78 string=0x00000000003C4F7C "+"
 *   insn=0x00000000003C4F7C string=0x00000000003C4F80 "_"
 *   insn=0x00000000003C4F88 string=0x00000000003C4F8C "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CoinBar::Update(Caver::CoinBar *this, float a2)
{
  int v4; // w8
  int v5; // w9
  float v6; // s1
  bool v7; // vf
  int v8; // w9
  float v9; // s0
  int v10; // w9
  __int64 v11; // x0
  int v12; // w8
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  int v16; // w9
  int v17; // w8
  __int64 v18; // x8
  _DWORD *v20; // [xsp+0h] [xbp-50h]
  __int64 v21; // [xsp+10h] [xbp-40h] BYREF
  __int64 v22; // [xsp+18h] [xbp-38h]
  __int64 v23; // [xsp+28h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_DWORD *)this + 59);
  v4 = *((_DWORD *)this + 60);
  v6 = *((float *)this + 61) + a2;
  *((float *)this + 61) = v6;
  if ( v6 > 0.06 && v4 < v5 || v4 > v5 && v6 > 0.06 )
  {
    if ( v4 < 0 )
    {
      *((_DWORD *)this + 60) = v5;
LABEL_25:
      *((_DWORD *)this + 61) = 0;
      Caver::CoinBar::UpdateText(this);
      v18 = *((_QWORD *)this + 45);
      *(_DWORD *)(v18 + 96) = 1020054733;
      *(_BYTE *)(v18 + 84) = 0;
      return Caver::GUIView::Update(this, a2);
    }
    v7 = __OFSUB__(v4, v5);
    v8 = v4 - v5;
    v9 = fabsf((float)v8);
    if ( (v8 < 0) ^ v7 | (v8 == 0) )
    {
      if ( v9 < 50.0 )
        v16 = 1;
      else
        v16 = 5;
      *((_DWORD *)this + 60) = v16 + v4;
      Caver::AudioSystem::sharedSystem(this);
      sub_566BB8((int)&v21, "coin_get");
      Caver::AudioSystem::PlaySoundEffectWithName();
      if ( v20 )
      {
        v17 = v20[2] - 1;
        v20[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)())(*(_QWORD *)v20 + 8LL))();
      }
      v13 = (void *)(v21 - 24);
      if ( (__int64 *)(v21 - 24) == &qword_6FD2E0 )
        goto LABEL_25;
      v14 = (unsigned int *)(v21 - 8);
      if ( &pthread_create )
      {
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
LABEL_31:
        if ( v15 <= 0 )
          operator delete(v13);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v9 < 50.0 )
        v10 = -1;
      else
        v10 = -5;
      *((_DWORD *)this + 60) = v10 + v4;
      Caver::AudioSystem::sharedSystem(this);
      sub_566BB8((int)&v21, "coin_get");
      Caver::AudioSystem::PlaySoundEffectWithName();
      v11 = v22;
      if ( v22 )
      {
        v12 = *(_DWORD *)(v22 + 8) - 1;
        *(_DWORD *)(v22 + 8) = v12;
        if ( !v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v13 = (void *)(v21 - 24);
      if ( (__int64 *)(v21 - 24) == &qword_6FD2E0 )
        goto LABEL_25;
      v14 = (unsigned int *)(v21 - 8);
      if ( &pthread_create )
      {
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
        goto LABEL_31;
      }
    }
    v15 = (*v14)--;
    goto LABEL_31;
  }
  return Caver::GUIView::Update(this, a2);
}

