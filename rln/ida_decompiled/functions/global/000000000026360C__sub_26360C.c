/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026360C
 * Mangled: sub_26360C
 * Demangled: sub_26360C
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001F7730  Caver::GameData::ItemForName(std::string const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x000000000026361C string=0x0000000000263620 "U"
 *   insn=0x0000000000263628 string=0x000000000026362C "m_"
 *   insn=0x000000000026362C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000263634 string=0x0000000000263638 "Vd"
 *   insn=0x0000000000263638 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000263648 string=0x000000000026364C "!"
 *   insn=0x0000000000263654 string=0x0000000000263658 ""
 *   insn=0x0000000000263660 string=0x0000000000263664 ""
 *   insn=0x0000000000263664 string=0x0000000000263668 "\t@"
 *   insn=0x000000000026367C string=0x0000000000263680 ",P"
 *   insn=0x0000000000263680 string=0x00000000001F7730 "0'"
 *   insn=0x0000000000263694 string=0x0000000000263698 "!"
 *   insn=0x0000000000263698 string=0x000000000026371C "\t$"
 *   insn=0x000000000026369C string=0x00000000002636A0 "H"
 *   insn=0x00000000002636B8 string=0x00000000001FBB30 "0'"
 *   insn=0x00000000002636C8 string=0x0000000000263740 "\t$"
 *   insn=0x00000000002636CC string=0x00000000002636D0 "3"
 *   insn=0x00000000002636D0 string=0x00000000002636D4 "h"
 *   insn=0x00000000002636D4 string=0x00000000002636D8 ""
 *   insn=0x00000000002636D8 string=0x00000000002636DC "h"
 *   insn=0x00000000002636E0 string=0x00000000002636E4 "h"
 *   insn=0x00000000002636E8 string=0x00000000002636EC "\t@"
 *   insn=0x00000000002636F0 string=0x00000000002636F4 "h\n@"
 *   insn=0x00000000002636F4 string=0x00000000002636F8 ""
 *   insn=0x00000000002636F8 string=0x00000000002636FC "h\n"
 *   insn=0x0000000000263700 string=0x0000000000263704 "h"
 *   insn=0x0000000000263708 string=0x000000000026370C "@"
 *   insn=0x0000000000263714 string=0x0000000000263718 "/"
 *   insn=0x000000000026371C string=0x0000000000263720 ")=G"
 *   insn=0x0000000000263720 string=0x0000000000263724 "!"
 *   insn=0x0000000000263728 string=0x000000000026372C "\t"
 *   insn=0x0000000000263728 string=0x0000000000263764 "\t"
 *   insn=0x000000000026372C string=0x0000000000263730 "*"
 *   insn=0x0000000000263730 string=0x0000000000263734 "\n"
 *   insn=0x0000000000263738 string=0x000000000026373C ""
 *   insn=0x000000000026373C string=0x0000000000263770 "?"
 *   insn=0x0000000000263740 string=0x0000000000263744 ")=G"
 *   insn=0x0000000000263744 string=0x0000000000263748 "!"
 *   insn=0x0000000000263748 string=0x000000000026374C "i"
 *   insn=0x000000000026374C string=0x0000000000263750 "\t"
 *   insn=0x000000000026374C string=0x00000000002637F8 "\t"
 *   insn=0x0000000000263750 string=0x0000000000263754 "*"
 *   insn=0x0000000000263754 string=0x0000000000263758 "\n"
 *   insn=0x000000000026375C string=0x0000000000263760 ")"
 *   insn=0x0000000000263760 string=0x0000000000263804 "?"
 *   insn=0x0000000000263764 string=0x0000000000263768 "*"
 *   insn=0x0000000000263768 string=0x000000000026376C "\n"
 *   insn=0x0000000000263770 string=0x0000000000263774 "L"
 *   insn=0x0000000000263778 string=0x000000000026377C "\n"
 *   insn=0x0000000000263780 string=0x0000000000263784 ""
 *   insn=0x0000000000263788 string=0x000000000026378C "3"
 *   insn=0x000000000026378C string=0x0000000000263790 "h"
 *   insn=0x0000000000263790 string=0x0000000000263794 ""
 *   insn=0x0000000000263794 string=0x0000000000263798 "h"
 *   insn=0x000000000026379C string=0x00000000002637A0 "h"
 *   insn=0x00000000002637A4 string=0x00000000002637A8 "\t@"
 *   insn=0x00000000002637AC string=0x00000000002637B0 "h\n@"
 *   insn=0x00000000002637B0 string=0x00000000002637B4 ""
 *   insn=0x00000000002637B4 string=0x00000000002637B8 "h\n"
 *   insn=0x00000000002637BC string=0x00000000002637C0 "h"
 *   insn=0x00000000002637C4 string=0x00000000002637C8 "@"
 *   insn=0x00000000002637F8 string=0x00000000002637FC "*"
 *   insn=0x00000000002637FC string=0x0000000000263800 "\n"
 *   insn=0x0000000000263804 string=0x0000000000263808 ","
 *   insn=0x0000000000263820 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000263828 string=0x000000000026382C "(a"
 *   insn=0x0000000000263834 string=0x0000000000263838 "\n$"
 *   insn=0x0000000000263838 string=0x000000000026383C "J=G"
 *   insn=0x000000000026383C string=0x0000000000263840 ")!"
 *   insn=0x0000000000263844 string=0x0000000000263848 "*"
 *   insn=0x0000000000263844 string=0x0000000000263878 "*"
 *   insn=0x0000000000263848 string=0x000000000026384C "K"
 *   insn=0x000000000026384C string=0x0000000000263850 "+"
 *   insn=0x0000000000263854 string=0x0000000000263858 "_"
 *   insn=0x000000000026386C string=0x0000000000263870 "t"
 *   insn=0x0000000000263870 string=0x0000000000263874 "7"
 *   insn=0x0000000000263878 string=0x000000000026387C "K"
 *   insn=0x000000000026387C string=0x0000000000263880 "+"
 *   insn=0x0000000000263880 string=0x0000000000263884 "_"
 *   insn=0x000000000026389C string=0x00000000002638A0 ""
 *   insn=0x00000000002638A4 string=0x00000000002638A8 "A"
 *   insn=0x00000000002638AC string=0x00000000002638B0 "\t@"
 *   insn=0x00000000002638BC string=0x00000000002638C0 ""
 *   insn=0x00000000002638C4 string=0x00000000002638C8 "A"
 *   insn=0x00000000002638CC string=0x00000000002638D0 "@"
 *   insn=0x00000000002638E4 string=0x00000000002638E8 "\n$"
 *   insn=0x00000000002638E8 string=0x00000000002638EC "J"
 *   insn=0x00000000002638F0 string=0x00000000002638F4 "(a"
 *   insn=0x00000000002638FC string=0x0000000000263900 "\n$"
 *   insn=0x0000000000263900 string=0x0000000000263904 "J=G"
 *   insn=0x0000000000263904 string=0x0000000000263908 ")!"
 *   insn=0x000000000026390C string=0x0000000000263910 "*"
 *   insn=0x000000000026390C string=0x000000000026393C "*"
 *   insn=0x0000000000263910 string=0x0000000000263914 "K"
 *   insn=0x0000000000263914 string=0x0000000000263918 "+"
 *   insn=0x000000000026391C string=0x0000000000263920 "_"
 *   insn=0x0000000000263920 string=0x0000000000263924 "l"
 *   insn=0x000000000026393C string=0x0000000000263940 "K"
 *   insn=0x0000000000263940 string=0x0000000000263944 "+"
 *   insn=0x0000000000263944 string=0x0000000000263948 "_"
 *   insn=0x0000000000263970 string=0x0000000000263974 "@"
 *   insn=0x0000000000263980 string=0x0000000000263984 "!"
 *   insn=0x0000000000263994 string=0x0000000000263998 ""
 *   insn=0x0000000000263998 string=0x000000000026399C "h"
 *   insn=0x000000000026399C string=0x00000000002639A0 ""
 *   insn=0x00000000002639A0 string=0x00000000002639A4 ""
 *   insn=0x00000000002639B4 string=0x00000000001F7560 "0'"
 *   insn=0x00000000002639C0 string=0x00000000001F7180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_26360C(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // x8
  void *v7; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // [xsp+28h] [xbp-48h] BYREF
  __int64 v19; // [xsp+30h] [xbp-40h]
  _QWORD *v20; // [xsp+38h] [xbp-38h]
  __int64 v21; // [xsp+48h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( !v2 )
    return;
  v3 = *v2;
  if ( !v3 )
    return;
  v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CollectableItemComponent::Interface);
  if ( !v4 )
    return;
  sub_56A528(&v18, v4 + 120);
  Caver::GameData::ItemForName();
  v5 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) == &qword_6FD2E0 )
    goto LABEL_5;
  v11 = (unsigned int *)(v18 - 8);
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
  if ( v12 > 0 )
  {
LABEL_5:
    v6 = v19;
    if ( !v19 )
    {
LABEL_21:
      v15 = v20;
      if ( v20 )
      {
        v16 = v20[1] - 1LL;
        v20[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
      return;
    }
  }
  else
  {
    operator delete(v5);
    v6 = v19;
    if ( !v19 )
      goto LABEL_21;
  }
  sub_56A528(&v18, v6 + 16);
  Caver::ProgramState::PushString();
  v7 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) == &qword_6FD2E0 )
    goto LABEL_7;
  v13 = (unsigned int *)(v18 - 8);
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
LABEL_7:
    v8 = v20;
    if ( !v20 )
      return;
  }
  else
  {
    operator delete(v7);
    v8 = v20;
    if ( !v20 )
      return;
  }
  v9 = v8[1] - 1LL;
  v8[1] = v9;
  if ( !v9 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v10 = v8[2] - 1LL;
    v8[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
  }
}

