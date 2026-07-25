/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C8748
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002036C0  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FAC20  Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *   0x00000000002016B0  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 76
 *   insn=0x00000000002C8758 string=0x00000000002C875C "U"
 *   insn=0x00000000002C8768 string=0x00000000002C876C "?"
 *   insn=0x00000000002C8770 string=0x00000000002C8774 "@"
 *   insn=0x00000000002C8774 string=0x00000000002C8778 "?"
 *   insn=0x00000000002C877C string=0x00000000002C8780 "A"
 *   insn=0x00000000002C8790 string=0x00000000002C8794 "("
 *   insn=0x00000000002C8790 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002C879C string=0x00000000002C87A0 "b"
 *   insn=0x00000000002C87AC string=0x00000000001FAC20 "0'"
 *   insn=0x00000000002C87B8 string=0x00000000002C87BC "(a"
 *   insn=0x00000000002C87C4 string=0x00000000002C87C8 "`"
 *   insn=0x00000000002C87D0 string=0x00000000002C87D4 "U"
 *   insn=0x00000000002C87D4 string=0x00000000002C87D8 "`""
 *   insn=0x00000000002C8800 string=0x00000000002C8804 "I"
 *   insn=0x00000000002C8804 string=0x00000000002C8808 "`B"
 *   insn=0x00000000002C8818 string=0x00000000002C881C ")"
 *   insn=0x00000000002C8840 string=0x00000000002C8934 "g"
 *   insn=0x00000000002C8858 string=0x00000000002C885C "J=G"
 *   insn=0x00000000002C885C string=0x00000000002C8860 ")!"
 *   insn=0x00000000002C8860 string=0x00000000002C8864 "\n"
 *   insn=0x00000000002C8864 string=0x00000000002C8868 "*"
 *   insn=0x00000000002C8864 string=0x00000000002C88C4 "*"
 *   insn=0x00000000002C8868 string=0x00000000002C886C "K"
 *   insn=0x00000000002C886C string=0x00000000002C8870 "+"
 *   insn=0x00000000002C8878 string=0x00000000002C88D0 "_"
 *   insn=0x00000000002C887C string=0x00000000002C8880 ")=G"
 *   insn=0x00000000002C8880 string=0x00000000002C8884 "!"
 *   insn=0x00000000002C8884 string=0x00000000002C8888 "i"
 *   insn=0x00000000002C8888 string=0x00000000002C888C "\t"
 *   insn=0x00000000002C8888 string=0x00000000002C88F4 "\t"
 *   insn=0x00000000002C888C string=0x00000000002C8890 "*"
 *   insn=0x00000000002C8890 string=0x00000000002C8894 "\n"
 *   insn=0x00000000002C889C string=0x00000000002C8900 "?"
 *   insn=0x00000000002C88A0 string=0x00000000002C88A4 ")=G"
 *   insn=0x00000000002C88A4 string=0x00000000002C88A8 "!"
 *   insn=0x00000000002C88A8 string=0x00000000002C88AC "I"
 *   insn=0x00000000002C88AC string=0x00000000002C88B0 "\t"
 *   insn=0x00000000002C88AC string=0x00000000002C8914 "\t"
 *   insn=0x00000000002C88B0 string=0x00000000002C88B4 "*"
 *   insn=0x00000000002C88B4 string=0x00000000002C88B8 "\n"
 *   insn=0x00000000002C88C0 string=0x00000000002C8920 "?"
 *   insn=0x00000000002C88C4 string=0x00000000002C88C8 "K"
 *   insn=0x00000000002C88C8 string=0x00000000002C88CC "+"
 *   insn=0x00000000002C88F4 string=0x00000000002C88F8 "*"
 *   insn=0x00000000002C88F8 string=0x00000000002C88FC "\n"
 *   insn=0x00000000002C8900 string=0x00000000002C8904 "L"
 *   insn=0x00000000002C8914 string=0x00000000002C8918 "*"
 *   insn=0x00000000002C8918 string=0x00000000002C891C "\n"
 *   insn=0x00000000002C8934 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C893C string=0x00000000002C8940 "(a"
 *   insn=0x00000000002C894C string=0x00000000002C8950 "J=G"
 *   insn=0x00000000002C8950 string=0x00000000002C8954 ")!"
 *   insn=0x00000000002C8958 string=0x00000000002C895C "*"
 *   insn=0x00000000002C8958 string=0x00000000002C8A08 "*"
 *   insn=0x00000000002C895C string=0x00000000002C8960 "K"
 *   insn=0x00000000002C8960 string=0x00000000002C8964 "+"
 *   insn=0x00000000002C8968 string=0x00000000002C896C " "
 *   insn=0x00000000002C896C string=0x00000000002C89EC "_"
 *   insn=0x00000000002C8974 string=0x00000000002C8978 "J"
 *   insn=0x00000000002C897C string=0x00000000002C8980 "(a"
 *   insn=0x00000000002C898C string=0x00000000002C8990 "J=G"
 *   insn=0x00000000002C8990 string=0x00000000002C8994 ")!"
 *   insn=0x00000000002C8998 string=0x00000000002C899C "*"
 *   insn=0x00000000002C899C string=0x00000000002C89A0 "K"
 *   insn=0x00000000002C89A0 string=0x00000000002C89A4 "+"
 *   insn=0x00000000002C89B4 string=0x00000000002C89B8 "J"
 *   insn=0x00000000002C89BC string=0x00000000002C89C0 "(a"
 *   insn=0x00000000002C89CC string=0x00000000002C89D0 "J=G"
 *   insn=0x00000000002C89D0 string=0x00000000002C89D4 ")!"
 *   insn=0x00000000002C89D8 string=0x00000000002C89DC "*"
 *   insn=0x00000000002C89DC string=0x00000000002C89E0 "K"
 *   insn=0x00000000002C89E0 string=0x00000000002C89E4 "+"
 *   insn=0x00000000002C89F8 string=0x00000000002C89FC "j"
 *   insn=0x00000000002C8A08 string=0x00000000002C8A0C "K"
 *   insn=0x00000000002C8A0C string=0x00000000002C8A10 "+"
 *   insn=0x00000000002C8A10 string=0x00000000002C8A14 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(
        Caver::SwingableWeaponControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v5; // x0
  void *v6; // x8
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x9
  int v10; // w10
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+0h] [xbp-40h]
  _QWORD v16[3]; // [xsp+8h] [xbp-38h] BYREF

  v16[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    sub_56A528(v16, *((_QWORD *)a3 + 1));
    sub_56A6A8((char *)this + 144);
    v8 = (void *)(v16[0] - 24LL);
    if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
    {
      v11 = (unsigned int *)(v16[0] - 8LL);
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
        operator delete(v8);
    }
    Caver::SwingableWeaponControllerComponent::CreateWeapon(this);
  }
  else if ( a2 == 1 )
  {
    sub_56A528(v16, *((_QWORD *)a3 + 1));
    v5 = Caver::SwingableWeaponControllerComponent::BoneForName(this);
    v6 = (void *)(v16[0] - 24LL);
    if ( (__int64 *)(v16[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_7;
    v9 = (unsigned int *)(v16[0] - 8LL);
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
LABEL_7:
      if ( !v5 )
        return;
    }
    else
    {
      v15 = v5;
      operator delete(v6);
      if ( !v15 )
        return;
    }
    sub_56A528(v16, *((_QWORD *)a3 + 1));
    sub_56A6A8((char *)this + 136);
    v7 = (void *)(v16[0] - 24LL);
    if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v16[0] - 8LL);
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
        operator delete(v7);
    }
    *((_QWORD *)this + 20) = 0;
  }
  else
  {
    if ( !a2 )
      *((_QWORD *)this + 20) = 0;
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
}

