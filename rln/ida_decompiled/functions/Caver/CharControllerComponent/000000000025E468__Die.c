/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E468
 * Mangled: _ZN5Caver23CharControllerComponent3DieEv
 * Demangled: Caver::CharControllerComponent::Die(void)
 *
 * Callers: 2
 *   0x0000000000202B40  Caver::CharControllerComponent::Die(void)
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *
 * Callees: 13
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCBD0  Caver::CharControllerComponent::DropQuickly(void)
 *   0x00000000001FDAC0  Caver::CharAnimControllerComponent::StopAction(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000002023E0  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000025E888  Caver::CharControllerComponent::StartMovingToDirection(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 148
 *   insn=0x000000000025E478 string=0x000000000025E47C "U"
 *   insn=0x000000000025E488 string=0x000000000025E48C "h"
 *   insn=0x000000000025E48C string=0x000000000025E490 "h"
 *   insn=0x000000000025E490 string=0x000000000025E49C "h"
 *   insn=0x000000000025E498 string=0x00000000001FCBD0 "0'"
 *   insn=0x000000000025E4A0 string=0x000000000025E4A4 "hN@"
 *   insn=0x000000000025E4A0 string=0x000000000025E4FC ""
 *   insn=0x000000000025E4A8 string=0x000000000025E4AC "`""
 *   insn=0x000000000025E4A8 string=0x000000000025E4C0 "\t\t@"
 *   insn=0x000000000025E4B4 string=0x000000000025E4B8 "hN@"
 *   insn=0x000000000025E4B4 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025E4BC string=0x000000000025E4CC "`"
 *   insn=0x000000000025E4C0 string=0x000000000025E4C4 ")"
 *   insn=0x000000000025E4C4 string=0x000000000025E4C8 "\t\t"
 *   insn=0x000000000025E4CC string=0x000000000025E4D0 "h"
 *   insn=0x000000000025E4D0 string=0x000000000025E4D4 " "
 *   insn=0x000000000025E4D4 string=0x000000000025E4D8 "\t@"
 *   insn=0x000000000025E4D4 string=0x000000000025E4F8 ""
 *   insn=0x000000000025E4D8 string=0x000000000025E4DC ")"
 *   insn=0x000000000025E4DC string=0x000000000025E4E0 "\t"
 *   insn=0x000000000025E4E4 string=0x000000000025E4E8 ""
 *   insn=0x000000000025E4E8 string=0x000000000025E4EC ""
 *   insn=0x000000000025E4F0 string=0x000000000025E4F4 "h"
 *   insn=0x000000000025E4F8 string=0x000000000025E578 "hRB"
 *   insn=0x000000000025E500 string=0x000000000025E504 ")"
 *   insn=0x000000000025E504 string=0x000000000058493C "fff?"
 *   insn=0x000000000025E508 string=0x000000000025E50C ""=I"
 *   insn=0x000000000025E514 string=0x000000000025E518 "("
 *   insn=0x000000000025E518 string=0x0000000000583944 "\n"
 *   insn=0x000000000025E524 string=0x000000000025E528 "a$"
 *   insn=0x000000000025E530 string=0x000000000025E534 "-"
 *   insn=0x000000000025E534 string=0x000000000025E538 "`"
 *   insn=0x000000000025E53C string=0x000000000025E540 "`"
 *   insn=0x000000000025E544 string=0x000000000025E548 "fe"
 *   insn=0x000000000025E548 string=0x000000000025E54C "`"
 *   insn=0x000000000025E54C string=0x000000000025E550 "@"
 *   insn=0x000000000025E550 string=0x000000000025E558 "`"
 *   insn=0x000000000025E55C string=0x000000000025E560 "`b"
 *   insn=0x000000000025E564 string=0x000000000025E568 "^e"
 *   insn=0x000000000025E568 string=0x000000000025E56C "`"
 *   insn=0x000000000025E56C string=0x000000000025E570 "@"
 *   insn=0x000000000025E578 string=0x000000000025E57C "H"
 *   insn=0x000000000025E57C string=0x000000000025E584 "k~"
 *   insn=0x000000000025E584 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000025E588 string=0x000000000025E58C "A"
 *   insn=0x000000000025E58C string=0x0000000000587B1B "hiro_die"
 *   insn=0x000000000025E5AC string=0x000000000025E5B0 "d["
 *   insn=0x000000000025E5B0 string=0x00000000001F5340 "P'"
 *   insn=0x000000000025E5B8 string=0x000000000025E5BC "@"
 *   insn=0x000000000025E5BC string=0x000000000025E5C0 ""
 *   insn=0x000000000025E5C0 string=0x000000000025E5C4 ""
 *   insn=0x000000000025E5C8 string=0x000000000025E5CC ""
 *   insn=0x000000000025E5CC string=0x000000000025E5D0 ""
 *   insn=0x000000000025E5D8 string=0x000000000025E5DC ")$"
 *   insn=0x000000000025E5DC string=0x000000000025E5E0 ")"
 *   insn=0x000000000025E5EC string=0x000000000025E5F0 "`"
 *   insn=0x000000000025E5EC string=0x000000000025E784 ")$"
 *   insn=0x000000000025E5F4 string=0x000000000025E5F8 "`"
 *   insn=0x000000000025E5F4 string=0x000000000025E60C ""
 *   insn=0x000000000025E5FC string=0x000000000025E600 "8e"
 *   insn=0x000000000025E600 string=0x000000000025E604 "`"
 *   insn=0x000000000025E604 string=0x000000000025E608 " "
 *   insn=0x000000000025E60C string=0x000000000025E610 ""
 *   insn=0x000000000025E618 string=0x000000000025E61C "`"
 *   insn=0x000000000025E620 string=0x000000000025E624 "'}"
 *   insn=0x000000000025E620 string=0x000000000025E6D0 "`N@"
 *   insn=0x000000000025E624 string=0x000000000025E628 "t"
 *   insn=0x000000000025E624 string=0x00000000001FDAC0 "0'"
 *   insn=0x000000000025E62C string=0x000000000025E72C "tN@"
 *   insn=0x000000000025E630 string=0x000000000025E634 "`"
 *   insn=0x000000000025E63C string=0x000000000025E640 "`"
 *   insn=0x000000000025E63C string=0x000000000025E650 ""
 *   insn=0x000000000025E644 string=0x000000000025E648 "&e"
 *   insn=0x000000000025E648 string=0x000000000025E64C "`"
 *   insn=0x000000000025E650 string=0x000000000025E654 ""
 *   insn=0x000000000025E660 string=0x000000000025E664 "@"
 *   insn=0x000000000025E660 string=0x000000000025E670 "("
 *   insn=0x000000000025E664 string=0x000000000025E668 ""
 *   insn=0x000000000025E668 string=0x000000000025E66C ""
 *   insn=0x000000000025E670 string=0x0000000000583C38 "\n"
 *   insn=0x000000000025E688 string=0x000000000025E68C "@"
 *   insn=0x000000000025E68C string=0x000000000025E690 ""
 *   insn=0x000000000025E690 string=0x000000000025E694 ""
 *   insn=0x000000000025E698 string=0x000000000025E69C ""
 *   insn=0x000000000025E69C string=0x000000000025E6A0 ""
 *   insn=0x000000000025E6D4 string=0x000000000025E6D8 "`""
 *   insn=0x000000000025E6D4 string=0x000000000025E6EC "@"
 *   insn=0x000000000025E6E0 string=0x000000000025E6E4 "`N@"
 *   insn=0x000000000025E6E8 string=0x000000000025E6F8 "h"
 *   insn=0x000000000025E6EC string=0x000000000025E6F0 ""
 *   insn=0x000000000025E6F0 string=0x000000000025E6F4 ""
 *   insn=0x000000000025E6F8 string=0x000000000025E6FC "`"
 *   insn=0x000000000025E6FC string=0x000000000025E700 "("
 *   insn=0x000000000025E700 string=0x000000000025E704 "\t\t@"
 *   insn=0x000000000025E704 string=0x000000000025E708 ")"
 *   insn=0x000000000025E708 string=0x000000000025E70C "\t\t"
 *   insn=0x000000000025E710 string=0x000000000025E714 "\t"
 *   insn=0x000000000025E718 string=0x000000000025E71C ")"
 *   insn=0x000000000025E71C string=0x000000000025E720 " "
 *   insn=0x000000000025E720 string=0x000000000025E724 "`"
 *   insn=0x000000000025E730 string=0x000000000025E734 "`""
 *   insn=0x000000000025E73C string=0x000000000025E740 "tN@"
 *   insn=0x000000000025E744 string=0x000000000025E754 "`"
 *   insn=0x000000000025E748 string=0x000000000025E74C ""
 *   insn=0x000000000025E754 string=0x000000000025E758 "t"
 *   insn=0x000000000025E75C string=0x000000000025E760 "@"
 *   insn=0x000000000025E760 string=0x000000000025E764 ""
 *   insn=0x000000000025E764 string=0x000000000025E768 ""
 *   insn=0x000000000025E768 string=0x000000000025E76C "!"
 *   insn=0x000000000025E76C string=0x000000000025E770 ""
 *   insn=0x000000000025E770 string=0x000000000025E774 ""
 *   insn=0x000000000025E778 string=0x000000000025E77C "t"
 *   insn=0x000000000025E784 string=0x000000000025E788 ")=G"
 *   insn=0x000000000025E788 string=0x000000000025E78C "!"
 *   insn=0x000000000025E790 string=0x000000000025E794 "\t"
 *   insn=0x000000000025E790 string=0x000000000025E7A8 "\t"
 *   insn=0x000000000025E794 string=0x000000000025E798 "*"
 *   insn=0x000000000025E798 string=0x000000000025E79C "\n"
 *   insn=0x000000000025E7A4 string=0x000000000025E7B4 "?"
 *   insn=0x000000000025E7A8 string=0x000000000025E7AC "*"
 *   insn=0x000000000025E7AC string=0x000000000025E7B0 "\n"
 *   insn=0x000000000025E7C0 string=0x000000000025E7C4 "`"
 *   insn=0x000000000025E7C4 string=0x000000000025E7C8 " "
 *   insn=0x000000000025E7D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000025E7D8 string=0x000000000025E7DC "("
 *   insn=0x000000000025E7DC string=0x000000000025E7E0 "\t\t@"
 *   insn=0x000000000025E7E0 string=0x000000000025E7E4 ")"
 *   insn=0x000000000025E7E4 string=0x000000000025E7E8 "\t\t"
 *   insn=0x000000000025E7EC string=0x000000000025E7F0 "\t"
 *   insn=0x000000000025E7F0 string=0x000000000025E7F4 ")"
 *   insn=0x000000000025E7F8 string=0x000000000025E7FC " "
 *   insn=0x000000000025E7FC string=0x000000000025E800 " "
 *   insn=0x000000000025E80C string=0x000000000025E810 "-"
 *   insn=0x000000000025E814 string=0x000000000025E818 "*$"
 *   insn=0x000000000025E818 string=0x000000000025E81C "J"
 *   insn=0x000000000025E820 string=0x000000000025E824 "(a"
 *   insn=0x000000000025E82C string=0x000000000025E830 "*$"
 *   insn=0x000000000025E830 string=0x000000000025E834 "J=G"
 *   insn=0x000000000025E834 string=0x000000000025E838 ")!"
 *   insn=0x000000000025E83C string=0x000000000025E840 "*"
 *   insn=0x000000000025E83C string=0x000000000025E86C "*"
 *   insn=0x000000000025E840 string=0x000000000025E844 "K"
 *   insn=0x000000000025E844 string=0x000000000025E848 "+"
 *   insn=0x000000000025E84C string=0x000000000025E850 "_"
 *   insn=0x000000000025E850 string=0x000000000025E854 "l"
 *   insn=0x000000000025E86C string=0x000000000025E870 "K"
 *   insn=0x000000000025E870 string=0x000000000025E874 "+"
 *   insn=0x000000000025E874 string=0x000000000025E878 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::Die(Caver::CharControllerComponent *this)
{
  Caver::CharControllerComponent *v1; // x19
  __int64 v2; // x8
  int v3; // w9
  float *v4; // x8
  Caver::SwingableWeaponControllerComponent *v5; // x0
  __int64 v6; // x0
  int v7; // w8
  void *v8; // x0
  __int64 result; // x0
  Caver::CharAnimControllerComponent *v10; // x0
  _DWORD *v11; // x20
  __int64 v12; // x0
  void (__fastcall *v13)(_DWORD *, __int64 *, float); // x22
  __int64 v14; // x0
  int v15; // w8
  _DWORD *v16; // x8
  int v17; // w9
  _DWORD *v18; // x0
  int v19; // w8
  unsigned int *v20; // x8
  int v21; // w9
  __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  __int64 v23; // [xsp+18h] [xbp-38h]
  __int64 v24; // [xsp+28h] [xbp-28h]

  v1 = this;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 180) )
    Caver::CharControllerComponent::DropQuickly(this);
  v2 = *((_QWORD *)v1 + 50);
  if ( v2 )
    goto LABEL_11;
  v2 = *((_QWORD *)v1 + 19);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
        (v2 = *((_QWORD *)v1 + 19)) != 0) )
  {
    ++*(_DWORD *)(v2 + 8);
  }
  this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 50);
  *((_QWORD *)v1 + 50) = v2;
  if ( this )
  {
    v3 = *((_DWORD *)this + 2) - 1;
    *((_DWORD *)this + 2) = v3;
    if ( !v3 )
    {
      this = (Caver::CharControllerComponent *)(*(__int64 (__fastcall **)(Caver::CharControllerComponent *))(*(_QWORD *)this + 8LL))(this);
      v2 = *((_QWORD *)v1 + 50);
    }
  }
  if ( v2 )
  {
LABEL_11:
    v4 = *(float **)(v2 + 368);
    if ( v4 && (float)((float)((float)(v4[10] * 0.9) - v4[3]) * (float)(v4[12] * v4[13])) > 0.01 )
    {
      v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)v1 + 56);
      if ( v5
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 432), v1),
            (v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)v1 + 56)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::StopSwing(v5);
      }
      this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 53);
      if ( this
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 408), v1),
            (this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 53)) != 0) )
      {
        this = (Caver::CharControllerComponent *)Caver::SwingableWeaponControllerComponent::StopSwing(this);
      }
    }
  }
  if ( *((_DWORD *)v1 + 148) )
    *((_BYTE *)v1 + 588) = 0;
  Caver::AudioSystem::sharedSystem(this);
  sub_566BB8((int)&v22, "hiro_die");
  Caver::AudioSystem::PlaySoundEffectWithName();
  v6 = v23;
  if ( v23 )
  {
    v7 = *(_DWORD *)(v23 + 8) - 1;
    *(_DWORD *)(v23 + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) == &qword_6FD2E0 )
    goto LABEL_25;
  v20 = (unsigned int *)(v22 - 8);
  if ( &pthread_create )
  {
    do
      v21 = __ldaxr(v20);
    while ( __stlxr(v21 - 1, v20) );
  }
  else
  {
    v21 = (*v20)--;
  }
  if ( v21 > 0 )
  {
LABEL_25:
    result = *((_QWORD *)v1 + 40);
    if ( !result )
      goto LABEL_26;
  }
  else
  {
    operator delete(v8);
    result = *((_QWORD *)v1 + 40);
    if ( !result )
    {
LABEL_26:
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 304), v1);
      result = *((_QWORD *)v1 + 40);
      if ( !result )
        return result;
    }
  }
  *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 264LL))(result) + 12) = 0;
  v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 50);
  if ( !v10 )
  {
    v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 19);
    if ( v10
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
          (v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 19)) != 0) )
    {
      ++*((_DWORD *)v10 + 2);
    }
    v16 = (_DWORD *)*((_QWORD *)v1 + 50);
    *((_QWORD *)v1 + 50) = v10;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v16 + 8LL))(v16, v16);
        v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 50);
      }
    }
  }
  Caver::CharAnimControllerComponent::StopAction(v10);
  v11 = (_DWORD *)*((_QWORD *)v1 + 50);
  if ( !v11 )
  {
    v11 = (_DWORD *)*((_QWORD *)v1 + 19);
    if ( v11
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
          (v11 = (_DWORD *)*((_QWORD *)v1 + 19)) != 0) )
    {
      ++v11[2];
    }
    v18 = (_DWORD *)*((_QWORD *)v1 + 50);
    *((_QWORD *)v1 + 50) = v11;
    if ( v18 )
    {
      v19 = v18[2] - 1;
      v18[2] = v19;
      if ( !v19 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
        v11 = (_DWORD *)*((_QWORD *)v1 + 50);
      }
    }
  }
  v12 = *((_QWORD *)v1 + 40);
  v13 = *(void (__fastcall **)(_DWORD *, __int64 *, float))(*(_QWORD *)v11 + 264LL);
  if ( !v12 )
  {
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 304), v1);
    v12 = *((_QWORD *)v1 + 40);
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 264LL))(v12);
  v22 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v13(v11, &v22, 0.08);
  result = v22;
  if ( v22 )
  {
    v15 = *(_DWORD *)(v22 + 8) - 1;
    *(_DWORD *)(v22 + 8) = v15;
    if ( !v15 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  *((_DWORD *)v1 + 190) = 0;
  return result;
}

