/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A560
 * Mangled: _ZN5Caver12MenuItemSlot10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::MenuItemSlot::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FE270  Caver::GUIResponder::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 55
 *   insn=0x000000000042A56C string=0x000000000042A570 "T"
 *   insn=0x000000000042A57C string=0x000000000042A580 "\t"
 *   insn=0x000000000042A580 string=0x000000000042A584 "I"
 *   insn=0x000000000042A584 string=0x000000000042A58C "\t"
 *   insn=0x000000000042A590 string=0x000000000042A594 "\t"
 *   insn=0x000000000042A598 string=0x000000000042A59C "\t"
 *   insn=0x000000000042A5AC string=0x000000000042A5B0 "\t"
 *   insn=0x000000000042A5B4 string=0x000000000042A5B8 ")"
 *   insn=0x000000000042A5B8 string=0x000000000042A5BC " "
 *   insn=0x000000000042A5BC string=0x000000000042A5C0 "'"
 *   insn=0x000000000042A5C4 string=0x000000000042A5C8 "*O"
 *   insn=0x000000000042A5C8 string=0x000000000042A5CC "$"
 *   insn=0x000000000042A5D4 string=0x000000000042A5D8 "\t"
 *   insn=0x000000000042A5DC string=0x000000000042A5E0 "\t"
 *   insn=0x000000000042A5DC string=0x000000000042A5F0 "PN"
 *   insn=0x000000000042A5E4 string=0x000000000042A5E8 ")"
 *   insn=0x000000000042A5E8 string=0x000000000042A5EC " "
 *   insn=0x000000000042A5F0 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000042A5F8 string=0x0000000000584965 "click"
 *   insn=0x000000000042A604 string=0x000000000042A608 "l"
 *   insn=0x000000000042A618 string=0x000000000042A61C "I+"
 *   insn=0x000000000042A61C string=0x00000000001F5340 "P'"
 *   insn=0x000000000042A624 string=0x000000000042A628 "@"
 *   insn=0x000000000042A628 string=0x000000000042A62C ""
 *   insn=0x000000000042A62C string=0x000000000042A630 ""
 *   insn=0x000000000042A634 string=0x000000000042A638 ""
 *   insn=0x000000000042A638 string=0x000000000042A63C ""
 *   insn=0x000000000042A648 string=0x000000000042A64C ")"
 *   insn=0x000000000042A654 string=0x000000000042A658 "!"
 *   insn=0x000000000042A67C string=0x000000000042A680 ")=G"
 *   insn=0x000000000042A680 string=0x000000000042A684 "!"
 *   insn=0x000000000042A688 string=0x000000000042A68C "\t"
 *   insn=0x000000000042A688 string=0x000000000042A6A0 "\t"
 *   insn=0x000000000042A68C string=0x000000000042A690 "*"
 *   insn=0x000000000042A690 string=0x000000000042A694 "\n"
 *   insn=0x000000000042A69C string=0x000000000042A6AC "?"
 *   insn=0x000000000042A6A0 string=0x000000000042A6A4 "*"
 *   insn=0x000000000042A6A4 string=0x000000000042A6A8 "\n"
 *   insn=0x000000000042A6AC string=0x000000000042A6B0 "l"
 *   insn=0x000000000042A6B4 string=0x000000000042A6B8 ";"
 *   insn=0x000000000042A6C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042A6CC string=0x000000000042A6D0 "J"
 *   insn=0x000000000042A6D4 string=0x000000000042A6D8 "(a"
 *   insn=0x000000000042A6E4 string=0x000000000042A6E8 "J=G"
 *   insn=0x000000000042A6E8 string=0x000000000042A6EC ")!"
 *   insn=0x000000000042A6F0 string=0x000000000042A6F4 "*"
 *   insn=0x000000000042A6F0 string=0x000000000042A720 "*"
 *   insn=0x000000000042A6F4 string=0x000000000042A6F8 "K"
 *   insn=0x000000000042A6F8 string=0x000000000042A6FC "+"
 *   insn=0x000000000042A700 string=0x000000000042A704 "_"
 *   insn=0x000000000042A710 string=0x000000000042A714 "$"
 *   insn=0x000000000042A718 string=0x000000000042A71C "j\"
 *   insn=0x000000000042A720 string=0x000000000042A724 "K"
 *   insn=0x000000000042A724 string=0x000000000042A728 "+"
 *   insn=0x000000000042A728 string=0x000000000042A72C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MenuItemSlot::TouchBegan(Caver::MenuItemSlot *this, const Caver::FWTouch *a2)
{
  __int64 v3; // x0
  Caver::AudioSystem *v4; // x0
  __int64 v5; // x0
  int v6; // w8
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // [xsp+10h] [xbp-30h] BYREF
  __int64 v11; // [xsp+18h] [xbp-28h]
  __int64 v12; // [xsp+28h] [xbp-18h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 632) )
    *((_BYTE *)this + 632) = 0;
  if ( *((_BYTE *)this + 288) )
  {
    if ( *((_BYTE *)this + 289) )
    {
      if ( *((_BYTE *)this + 290) )
      {
        v3 = *((_QWORD *)this + 30);
        *((_BYTE *)this + 289) = 0;
        if ( v3 )
          (*(void (__fastcall **)(__int64, Caver::MenuItemSlot *))(*(_QWORD *)v3 + 8LL))(v3, this);
      }
    }
    else
    {
      v4 = (Caver::AudioSystem *)*((_QWORD *)this + 30);
      *((_BYTE *)this + 289) = 1;
      if ( v4 )
        v4 = (Caver::AudioSystem *)(**(__int64 (__fastcall ***)(Caver::AudioSystem *, Caver::MenuItemSlot *))v4)(
                                     v4,
                                     this);
      Caver::AudioSystem::sharedSystem(v4);
      sub_566BB8((int)&v10, "click");
      Caver::AudioSystem::PlaySoundEffectWithName();
      v5 = v11;
      if ( v11 )
      {
        v6 = *(_DWORD *)(v11 + 8) - 1;
        *(_DWORD *)(v11 + 8) = v6;
        if ( !v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v7 = (void *)(v10 - 24);
      if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
      {
        v8 = (unsigned int *)(v10 - 8);
        if ( &pthread_create )
        {
          do
            v9 = __ldaxr(v8);
          while ( __stlxr(v9 - 1, v8) );
        }
        else
        {
          v9 = (*v8)--;
        }
        if ( v9 <= 0 )
          operator delete(v7);
      }
    }
  }
  else
  {
    Caver::GUIResponder::TouchBegan();
  }
}

