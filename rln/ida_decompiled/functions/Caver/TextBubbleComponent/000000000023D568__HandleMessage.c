/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D568
 * Mangled: _ZN5Caver19TextBubbleComponent13HandleMessageEiPv
 * Demangled: Caver::TextBubbleComponent::HandleMessage(int,void *)
 *
 * Callers: 1
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Callees: 16
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FF780  Caver::GUITextBubble::FinishShowingText(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200690  Caver::ProgramState::IsFloatAtStackIndex(int)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x0000000000202AB0  Caver::TextBubbleComponent::ShowText(std::string const&,float)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 128
 *   insn=0x000000000023D574 string=0x000000000023D578 "T"
 *   insn=0x000000000023D57C string=0x000000000023D580 "?X"
 *   insn=0x000000000023D584 string=0x000000000023D588 "A\t"
 *   insn=0x000000000023D588 string=0x000000000023D58C "<@"
 *   insn=0x000000000023D58C string=0x000000000023D590 "\t"
 *   insn=0x000000000023D590 string=0x000000000023D594 "\nA@"
 *   insn=0x000000000023D594 string=0x000000000023D598 ")"
 *   insn=0x000000000023D598 string=0x000000000023D59C ")"
 *   insn=0x000000000023D59C string=0x000000000023D5A0 "_"
 *   insn=0x000000000023D5A8 string=0x000000000023D5AC "u"
 *   insn=0x000000000023D5AC string=0x000000000023D5B0 "`"
 *   insn=0x000000000023D5B0 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000023D5B4 string=0x000000000023D5B8 "!"
 *   insn=0x000000000023D5B8 string=0x0000000000584965 "click"
 *   insn=0x000000000023D5C4 string=0x000000000023D5C8 "|"
 *   insn=0x000000000023D5D8 string=0x000000000023D5DC "Y"
 *   insn=0x000000000023D5DC string=0x00000000001F5340 "P'"
 *   insn=0x000000000023D5E4 string=0x000000000023D5E8 "@"
 *   insn=0x000000000023D5E8 string=0x000000000023D5EC ""
 *   insn=0x000000000023D5EC string=0x000000000023D5F0 ""
 *   insn=0x000000000023D5F4 string=0x000000000023D5F8 ""
 *   insn=0x000000000023D5F8 string=0x000000000023D5FC ""
 *   insn=0x000000000023D604 string=0x000000000023D608 "I%"
 *   insn=0x000000000023D608 string=0x000000000023D60C ")"
 *   insn=0x000000000023D618 string=0x000000000023D61C ")%"
 *   insn=0x000000000023D61C string=0x000000000023D620 ")=G"
 *   insn=0x000000000023D620 string=0x000000000023D624 "!"
 *   insn=0x000000000023D628 string=0x000000000023D62C "\t"
 *   insn=0x000000000023D628 string=0x000000000023D6F8 "\t"
 *   insn=0x000000000023D62C string=0x000000000023D630 "*"
 *   insn=0x000000000023D630 string=0x000000000023D634 "\n"
 *   insn=0x000000000023D638 string=0x000000000023D63C "2"
 *   insn=0x000000000023D63C string=0x000000000023D704 "?"
 *   insn=0x000000000023D640 string=0x000000000023D644 ";"
 *   insn=0x000000000023D648 string=0x000000000023D64C "!"
 *   insn=0x000000000023D658 string=0x000000000023D65C "W"
 *   insn=0x000000000023D66C string=0x000000000023D670 "4"
 *   insn=0x000000000023D678 string=0x000000000023D67C "@"
 *   insn=0x000000000023D67C string=0x000000000023D680 ""
 *   insn=0x000000000023D680 string=0x000000000023D684 ""
 *   insn=0x000000000023D688 string=0x000000000023D68C ""
 *   insn=0x000000000023D68C string=0x000000000023D690 ""
 *   insn=0x000000000023D698 string=0x000000000023D69C "I%"
 *   insn=0x000000000023D69C string=0x000000000023D6A0 ")"
 *   insn=0x000000000023D6A8 string=0x000000000023D6AC "A"
 *   insn=0x000000000023D6AC string=0x000000000023D6D4 ")%"
 *   insn=0x000000000023D6D4 string=0x000000000023D6D8 ")=G"
 *   insn=0x000000000023D6D8 string=0x000000000023D6DC "!"
 *   insn=0x000000000023D6E0 string=0x000000000023D6E4 "\t"
 *   insn=0x000000000023D6E4 string=0x000000000023D6E8 "*"
 *   insn=0x000000000023D6E8 string=0x000000000023D6EC "\n"
 *   insn=0x000000000023D6F8 string=0x000000000023D6FC "*"
 *   insn=0x000000000023D6FC string=0x000000000023D700 "\n"
 *   insn=0x000000000023D704 string=0x000000000023D708 "L"
 *   insn=0x000000000023D70C string=0x000000000023D710 "%"
 *   insn=0x000000000023D718 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023D724 string=0x000000000023D728 "g"
 *   insn=0x000000000023D72C string=0x000000000023D730 "J%"
 *   insn=0x000000000023D730 string=0x000000000023D734 "J"
 *   insn=0x000000000023D738 string=0x000000000023D73C "(a"
 *   insn=0x000000000023D744 string=0x000000000023D748 "*%"
 *   insn=0x000000000023D748 string=0x000000000023D74C "J=G"
 *   insn=0x000000000023D74C string=0x000000000023D750 ")!"
 *   insn=0x000000000023D754 string=0x000000000023D758 "*"
 *   insn=0x000000000023D754 string=0x000000000023D7C4 "*"
 *   insn=0x000000000023D758 string=0x000000000023D75C "K"
 *   insn=0x000000000023D75C string=0x000000000023D760 "+"
 *   insn=0x000000000023D768 string=0x000000000023D7A8 "_"
 *   insn=0x000000000023D76C string=0x000000000023D770 "J%"
 *   insn=0x000000000023D770 string=0x000000000023D774 "J"
 *   insn=0x000000000023D778 string=0x000000000023D77C "(a"
 *   insn=0x000000000023D784 string=0x000000000023D788 "*%"
 *   insn=0x000000000023D788 string=0x000000000023D78C "J=G"
 *   insn=0x000000000023D78C string=0x000000000023D790 ")!"
 *   insn=0x000000000023D794 string=0x000000000023D798 "*"
 *   insn=0x000000000023D798 string=0x000000000023D79C "K"
 *   insn=0x000000000023D79C string=0x000000000023D7A0 "+"
 *   insn=0x000000000023D7A8 string=0x000000000023D7AC "l"
 *   insn=0x000000000023D7BC string=0x000000000023D7C0 "A"
 *   insn=0x000000000023D7C4 string=0x000000000023D7C8 "K"
 *   insn=0x000000000023D7C8 string=0x000000000023D7CC "+"
 *   insn=0x000000000023D7CC string=0x000000000023D7D0 "_"
 *   insn=0x000000000023D7D8 string=0x000000000023D7DC ":"
 *   insn=0x000000000023D7F4 string=0x000000000023D7F8 "U"
 *   insn=0x000000000023D804 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000023D810 string=0x000000000023D814 "`"
 *   insn=0x000000000023D810 string=0x00000000001FC790 "0'"
 *   insn=0x000000000023D82C string=0x000000000023D830 "D"
 *   insn=0x000000000023D840 string=0x000000000023D85C "("
 *   insn=0x000000000023D84C string=0x000000000023D850 ""
 *   insn=0x000000000023D84C string=0x00000000001FABE0 "0'"
 *   insn=0x000000000023D85C string=0x000000000023D860 "AI"
 *   insn=0x000000000023D868 string=0x000000000023D86C ""
 *   insn=0x000000000023D86C string=0x000000000023D870 "("
 *   insn=0x000000000023D870 string=0x000000000023D874 "!%"
 *   insn=0x000000000023D874 string=0x000000000023D878 "!"
 *   insn=0x000000000023D878 string=0x000000000023DD48 " %"
 *   insn=0x000000000023D87C string=0x000000000023D880 "X"
 *   insn=0x000000000023D894 string=0x000000000023D898 "I%"
 *   insn=0x000000000023D898 string=0x000000000023D89C ")"
 *   insn=0x000000000023D8A8 string=0x000000000023D8D8 ")%"
 *   insn=0x000000000023D8B4 string=0x000000000023D8B8 "!"
 *   insn=0x000000000023D8B8 string=0x000000000023D91C "m"
 *   insn=0x000000000023D8D8 string=0x000000000023D8DC ")=G"
 *   insn=0x000000000023D8DC string=0x000000000023D8E0 "!"
 *   insn=0x000000000023D8E4 string=0x000000000023D8E8 "\t"
 *   insn=0x000000000023D8E4 string=0x000000000023D8FC "\t"
 *   insn=0x000000000023D8E8 string=0x000000000023D8EC "*"
 *   insn=0x000000000023D8EC string=0x000000000023D8F0 "\n"
 *   insn=0x000000000023D8F8 string=0x000000000023D908 "?"
 *   insn=0x000000000023D8FC string=0x000000000023D900 "*"
 *   insn=0x000000000023D900 string=0x000000000023D904 "\n"
 *   insn=0x000000000023D924 string=0x000000000023D928 "I%"
 *   insn=0x000000000023D928 string=0x000000000023D92C ")"
 *   insn=0x000000000023D93C string=0x000000000023D940 ")%"
 *   insn=0x000000000023D940 string=0x000000000023D944 ")=G"
 *   insn=0x000000000023D944 string=0x000000000023D948 "!"
 *   insn=0x000000000023D948 string=0x000000000023D94C "i"
 *   insn=0x000000000023D94C string=0x000000000023D950 "\t"
 *   insn=0x000000000023D94C string=0x000000000023D978 "\t"
 *   insn=0x000000000023D950 string=0x000000000023D954 "*"
 *   insn=0x000000000023D954 string=0x000000000023D958 "\n"
 *   insn=0x000000000023D95C string=0x000000000023D960 "?"
 *   insn=0x000000000023D960 string=0x000000000023D964 "l"
 *   insn=0x000000000023D978 string=0x000000000023D97C "*"
 *   insn=0x000000000023D97C string=0x000000000023D980 "\n"
 *   insn=0x000000000023D980 string=0x000000000023D984 "?"
 *   insn=0x000000000023D984 string=0x000000000023D988 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::HandleMessage(Caver::TextBubbleComponent *this, int a2, void *a3)
{
  Caver::AudioSystem *v3; // x0
  int v4; // w8
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // x0
  int v9; // w8
  _DWORD *v11; // [xsp+48h] [xbp-40h]
  __int64 v12; // [xsp+58h] [xbp-30h] BYREF
  __int64 v13; // [xsp+60h] [xbp-28h]
  __int64 v14; // [xsp+70h] [xbp-18h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 22 )
    return 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 15) + 128LL) >= (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15)
                                                                                               + 40LL)
                                                                                   - 24LL)
                                                                       - 1LL) )
  {
    *((_BYTE *)this + 117) = 0;
    Caver::AudioSystem::sharedSystem(this);
    sub_566BB8((int)&v12, "click");
    Caver::AudioSystem::PlaySoundEffectWithName();
    v8 = v13;
    if ( v13 )
    {
      v9 = *(_DWORD *)(v13 + 8) - 1;
      *(_DWORD *)(v13 + 8) = v9;
      if ( !v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    v5 = (void *)(v12 - 24);
    if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v12 - 8);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
LABEL_19:
        if ( v7 <= 0 )
          operator delete(v5);
        return 0;
      }
LABEL_18:
      v7 = (*v6)--;
      goto LABEL_19;
    }
  }
  else
  {
    Caver::GUITextBubble::FinishShowingText(*((Caver::GUITextBubble **)this + 15));
    Caver::AudioSystem::sharedSystem(v3);
    sub_566BB8((int)&v12, "click");
    Caver::AudioSystem::PlaySoundEffectWithName();
    if ( v11 )
    {
      v4 = v11[2] - 1;
      v11[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)())(*(_QWORD *)v11 + 8LL))();
    }
    v5 = (void *)(v12 - 24);
    if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v12 - 8);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
        goto LABEL_19;
      }
      goto LABEL_18;
    }
  }
  return 0;
}

