/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C6EC
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent7PrepareEv
 * Demangled: Caver::ShootingMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCB00  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *   0x00000000001FF140  Caver::MonsterControllerComponent::Prepare(void)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 127
 *   insn=0x000000000029C6FC string=0x000000000029C700 "V"
 *   insn=0x000000000029C710 string=0x000000000029C714 "ur@"
 *   insn=0x000000000029C718 string=0x000000000029C71C "`B"
 *   insn=0x000000000029C718 string=0x000000000029C730 "h~@"
 *   insn=0x000000000029C724 string=0x000000000029C728 "ur@"
 *   insn=0x000000000029C724 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029C728 string=0x000000000029C72C "u\n"
 *   insn=0x000000000029C72C string=0x000000000029C878 "h"
 *   insn=0x000000000029C734 string=0x000000000029C738 "`"
 *   insn=0x000000000029C740 string=0x000000000029C744 "h~@"
 *   insn=0x000000000029C748 string=0x000000000029C74C "ur@"
 *   insn=0x000000000029C754 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029C75C string=0x000000000029C760 "`B"
 *   insn=0x000000000029C768 string=0x000000000029C76C "ur@"
 *   insn=0x000000000029C770 string=0x000000000029C774 ""
 *   insn=0x000000000029C784 string=0x000000000029C788 "@"
 *   insn=0x000000000029C784 string=0x000000000029C794 "`~@"
 *   insn=0x000000000029C788 string=0x000000000029C78C ""
 *   insn=0x000000000029C78C string=0x000000000029C790 ""
 *   insn=0x000000000029C798 string=0x000000000029C79C "`"
 *   insn=0x000000000029C798 string=0x000000000029C7B0 ""
 *   insn=0x000000000029C7A8 string=0x000000000029C7AC "`~@"
 *   insn=0x000000000029C7B4 string=0x000000000029C7B8 ""
 *   insn=0x000000000029C7C4 string=0x000000000029C7C8 "@"
 *   insn=0x000000000029C7C8 string=0x000000000029C7CC ""
 *   insn=0x000000000029C7CC string=0x000000000029C7D0 ""
 *   insn=0x000000000029C7D4 string=0x000000000029C7D8 "H"
 *   insn=0x000000000029C7F0 string=0x00000000001FCB00 "0'"
 *   insn=0x000000000029C7F4 string=0x000000000029C7F8 ""
 *   insn=0x000000000029C7FC string=0x000000000029C800 "`"
 *   insn=0x000000000029C800 string=0x000000000029C804 "t"
 *   insn=0x000000000029C804 string=0x000000000029C808 " "
 *   insn=0x000000000029C808 string=0x000000000029C80C "@"
 *   insn=0x000000000029C80C string=0x000000000029C810 ""
 *   insn=0x000000000029C810 string=0x000000000029C814 ""
 *   insn=0x000000000029C818 string=0x000000000029C81C ""
 *   insn=0x000000000029C81C string=0x000000000029C820 ""
 *   insn=0x000000000029C82C string=0x000000000029C830 " "
 *   insn=0x000000000029C830 string=0x000000000029C834 "@"
 *   insn=0x000000000029C834 string=0x000000000029C838 ""
 *   insn=0x000000000029C838 string=0x000000000029C83C ""
 *   insn=0x000000000029C840 string=0x000000000029C844 ""
 *   insn=0x000000000029C844 string=0x000000000029C848 ""
 *   insn=0x000000000029C858 string=0x000000000029C85C "@"
 *   insn=0x000000000029C85C string=0x000000000029C860 ""
 *   insn=0x000000000029C860 string=0x000000000029C864 ""
 *   insn=0x000000000029C868 string=0x000000000029C86C ""
 *   insn=0x000000000029C86C string=0x000000000029C870 ""
 *   insn=0x000000000029C878 string=0x000000000029C87C ""
 *   insn=0x000000000029C880 string=0x000000000029C884 "a"
 *   insn=0x000000000029C884 string=0x000000000058932F "snart_projectile"
 *   insn=0x000000000029C8B0 string=0x000000000029C8B4 "@"
 *   insn=0x000000000029C8B0 string=0x000000000029C8C0 "h"
 *   insn=0x000000000029C8B4 string=0x000000000029C8B8 ""
 *   insn=0x000000000029C8B8 string=0x000000000029C8BC ""
 *   insn=0x000000000029C8C0 string=0x000000000029C8C4 "`"
 *   insn=0x000000000029C8C8 string=0x000000000029C8CC "\t\t@"
 *   insn=0x000000000029C8CC string=0x000000000029C8D0 ")"
 *   insn=0x000000000029C8D0 string=0x000000000029C8D4 "\t\t"
 *   insn=0x000000000029C8D4 string=0x000000000029C8D8 "@"
 *   insn=0x000000000029C8D8 string=0x000000000029C900 "\t"
 *   insn=0x000000000029C8DC string=0x000000000029C8E0 "@"
 *   insn=0x000000000029C8E0 string=0x000000000029C8E4 ""
 *   insn=0x000000000029C8E4 string=0x000000000029C8E8 ""
 *   insn=0x000000000029C8E8 string=0x000000000029C8EC "a"
 *   insn=0x000000000029C8EC string=0x000000000029C8F0 ""
 *   insn=0x000000000029C8F0 string=0x000000000029C8F4 ""
 *   insn=0x000000000029C8F8 string=0x000000000029C8FC ""
 *   insn=0x000000000029C900 string=0x000000000029C904 ")"
 *   insn=0x000000000029C908 string=0x000000000029C90C " "
 *   insn=0x000000000029C910 string=0x000000000029C914 "`"
 *   insn=0x000000000029C918 string=0x000000000029C91C "I""
 *   insn=0x000000000029C91C string=0x000000000029C920 ")"
 *   insn=0x000000000029C928 string=0x000000000029C92C "A"
 *   insn=0x000000000029C92C string=0x000000000029C954 "I""
 *   insn=0x000000000029C93C string=0x000000000029C998 "Nf"
 *   insn=0x000000000029C954 string=0x000000000029C958 ")=G"
 *   insn=0x000000000029C958 string=0x000000000029C95C "!"
 *   insn=0x000000000029C960 string=0x000000000029C964 "\t"
 *   insn=0x000000000029C960 string=0x000000000029C978 "\t"
 *   insn=0x000000000029C964 string=0x000000000029C968 "*"
 *   insn=0x000000000029C968 string=0x000000000029C96C "\n"
 *   insn=0x000000000029C974 string=0x000000000029C984 "?"
 *   insn=0x000000000029C978 string=0x000000000029C97C "*"
 *   insn=0x000000000029C97C string=0x000000000029C980 "\n"
 *   insn=0x000000000029C984 string=0x000000000029C988 "L"
 *   insn=0x000000000029C998 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029C9A4 string=0x000000000029C9A8 "H"
 *   insn=0x000000000029C9A8 string=0x000000000029C9AC "\t\t@"
 *   insn=0x000000000029C9AC string=0x000000000029C9B0 ")"
 *   insn=0x000000000029C9B0 string=0x000000000029C9B4 "\t\t"
 *   insn=0x000000000029C9B8 string=0x000000000029C9BC "\t"
 *   insn=0x000000000029C9BC string=0x000000000029C9C0 ")"
 *   insn=0x000000000029C9C4 string=0x000000000029C9C8 " "
 *   insn=0x000000000029C9C8 string=0x000000000029C9CC "!"
 *   insn=0x000000000029C9D8 string=0x000000000029C9DC "\t\t@"
 *   insn=0x000000000029C9DC string=0x000000000029C9E0 ")"
 *   insn=0x000000000029C9E0 string=0x000000000029C9E4 "\t\t"
 *   insn=0x000000000029C9E4 string=0x000000000029C9E8 "A"
 *   insn=0x000000000029C9E8 string=0x000000000029C9EC "\t"
 *   insn=0x000000000029C9EC string=0x000000000029C9F0 ")"
 *   insn=0x000000000029C9F4 string=0x000000000029C9F8 " "
 *   insn=0x000000000029CA14 string=0x000000000029CA18 "@"
 *   insn=0x000000000029CA14 string=0x000000000029CA34 "5"
 *   insn=0x000000000029CA18 string=0x000000000029CA1C ""
 *   insn=0x000000000029CA1C string=0x000000000029CA20 ""
 *   insn=0x000000000029CA24 string=0x000000000029CA28 ""
 *   insn=0x000000000029CA28 string=0x000000000029CA2C ""
 *   insn=0x000000000029CA3C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029CA44 string=0x000000000029CA48 "A"
 *   insn=0x000000000029CA50 string=0x000000000029CA54 "I""
 *   insn=0x000000000029CA54 string=0x000000000029CA58 ")"
 *   insn=0x000000000029CA64 string=0x000000000029CA68 "I""
 *   insn=0x000000000029CA68 string=0x000000000029CA6C ")=G"
 *   insn=0x000000000029CA6C string=0x000000000029CA70 "!"
 *   insn=0x000000000029CA70 string=0x000000000029CA74 "i"
 *   insn=0x000000000029CA74 string=0x000000000029CA78 "\t"
 *   insn=0x000000000029CA74 string=0x000000000029CAA0 "\t"
 *   insn=0x000000000029CA78 string=0x000000000029CA7C "*"
 *   insn=0x000000000029CA7C string=0x000000000029CA80 "\n"
 *   insn=0x000000000029CA84 string=0x000000000029CA88 "?"
 *   insn=0x000000000029CA88 string=0x000000000029CA8C "l"
 *   insn=0x000000000029CA90 string=0x000000000029CA94 "D6"
 *   insn=0x000000000029CAA0 string=0x000000000029CAA4 "*"
 *   insn=0x000000000029CAA4 string=0x000000000029CAA8 "\n"
 *   insn=0x000000000029CAA8 string=0x000000000029CAAC "?"
 *   insn=0x000000000029CAAC string=0x000000000029CAB0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShootingMonsterControllerComponent::Prepare(Caver::ShootingMonsterControllerComponent *this)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  _DWORD *v7; // x0
  int v8; // w8
  __int64 v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  _DWORD *v13; // x0
  _DWORD *v14; // x8
  int v15; // w9
  int v16; // w8
  void *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  __int64 v20; // [xsp+10h] [xbp-40h] BYREF
  _DWORD *v21; // [xsp+18h] [xbp-38h]
  __int64 v22; // [xsp+28h] [xbp-28h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::Prepare(this);
  v2 = *((_QWORD *)this + 28);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 208), this),
        (v2 = *((_QWORD *)this + 28)) != 0) )
  {
    if ( !*((_QWORD *)this + 31) )
    {
      Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 232), this);
      if ( !*((_QWORD *)this + 31) )
        goto LABEL_23;
      v2 = *((_QWORD *)this + 28);
    }
    v3 = operator new(0x30u);
    if ( !v2 )
    {
      Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 208), this);
      v2 = *((_QWORD *)this + 28);
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
    v21 = (_DWORD *)v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v5 = *((_QWORD *)this + 31);
    if ( !v5 )
    {
      Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 232), this);
      v5 = *((_QWORD *)this + 31);
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5);
    v20 = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    Caver::AnimBlendNode::AnimBlendNode();
    ++*(_DWORD *)(v3 + 8);
    v7 = (_DWORD *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = v3;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    v9 = v20;
    if ( v20 )
    {
      v10 = *(_DWORD *)(v20 + 8) - 1;
      *(_DWORD *)(v20 + 8) = v10;
      if ( !v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    v11 = v21;
    if ( v21 )
    {
      v12 = v21[2] - 1;
      v21[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
LABEL_23:
  sub_566BB8((int)&v20, "snart_projectile");
  Caver::ObjectLibrary::TemplateForName();
  v13 = v21;
  if ( v21 )
    ++v21[2];
  v14 = (_DWORD *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = v13;
  if ( v14 && (v15 = v14[2] - 1, (v14[2] = v15) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
    v13 = v21;
    if ( !v21 )
      goto LABEL_31;
  }
  else if ( !v13 )
  {
    goto LABEL_31;
  }
  v16 = v13[2] - 1;
  v13[2] = v16;
  if ( !v16 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
LABEL_31:
  v17 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v20 - 8);
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
      operator delete(v17);
  }
}

