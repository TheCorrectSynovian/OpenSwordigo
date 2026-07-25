/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F9D8
 * Mangled: _ZN5Caver26KeyframeAnimationComponentC2Ev
 * Demangled: Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Callers: 2
 *   0x00000000001FB1F0  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x0000000000201170  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FF940  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x0000000000201790  Caver::AnimKeysNode::AnimKeysNode(void)
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x000000000021F9EC string=0x000000000021F9F0 "6&"
 *   insn=0x000000000021F9F0 string=0x000000000021F9F4 ")&"
 *   insn=0x000000000021F9F4 string=0x000000000021F9F8 "W"
 *   insn=0x000000000021F9FC string=0x000000000021FA00 ")U@"
 *   insn=0x000000000021FA04 string=0x000000000021FA08 "5&"
 *   insn=0x000000000021FA0C string=0x000000000021FA10 "*"
 *   insn=0x000000000021FA14 string=0x000000000021FA18 "@"
 *   insn=0x000000000021FA18 string=0x000000000021FA1C "*"
 *   insn=0x000000000021FA20 string=0x000000000021FA24 "@"
 *   insn=0x000000000021FA38 string=0x000000000021FA3C "j"
 *   insn=0x000000000021FA40 string=0x000000000021FA44 ")A"
 *   insn=0x000000000021FA48 string=0x000000000021FA4C "h"
 *   insn=0x000000000021FA50 string=0x000000000021FA54 "i"
 *   insn=0x000000000021FA5C string=0x000000000021FA60 "`"
 *   insn=0x000000000021FA70 string=0x000000000021FA74 "!"
 *   insn=0x000000000021FA74 string=0x0000000000583C3C "model"
 *   insn=0x000000000021FA80 string=0x000000000021FA84 "M"
 *   insn=0x000000000021FA9C string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000021FAAC string=0x000000000021FB20 ")&"
 *   insn=0x000000000021FAB4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021FABC string=0x000000000021FAC0 "4"
 *   insn=0x000000000021FAC4 string=0x000000000021FAC8 ""
 *   insn=0x000000000021FACC string=0x000000000021FAD0 "`J@"
 *   insn=0x000000000021FAD0 string=0x000000000021FAD4 "tJ"
 *   insn=0x000000000021FAD8 string=0x000000000021FADC "@"
 *   insn=0x000000000021FADC string=0x000000000021FAE0 ""
 *   insn=0x000000000021FAE0 string=0x000000000021FAE4 ""
 *   insn=0x000000000021FAE8 string=0x000000000021FAEC ""
 *   insn=0x000000000021FAEC string=0x000000000021FAF0 ""
 *   insn=0x000000000021FB20 string=0x000000000021FB24 ")=G"
 *   insn=0x000000000021FB24 string=0x000000000021FB28 "!"
 *   insn=0x000000000021FB2C string=0x000000000021FB30 "\t"
 *   insn=0x000000000021FB2C string=0x000000000021FB44 "\t"
 *   insn=0x000000000021FB30 string=0x000000000021FB34 "*"
 *   insn=0x000000000021FB34 string=0x000000000021FB38 "\n"
 *   insn=0x000000000021FB40 string=0x000000000021FB50 "?"
 *   insn=0x000000000021FB44 string=0x000000000021FB48 "*"
 *   insn=0x000000000021FB48 string=0x000000000021FB4C "\n"
 *   insn=0x000000000021FB64 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021FB74 string=0x000000000021FB78 "`J@"
 *   insn=0x000000000021FB74 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021FB78 string=0x000000000021FB7C "@"
 *   insn=0x000000000021FB7C string=0x000000000021FB80 "("
 *   insn=0x000000000021FB7C string=0x000000000021FC04 "@"
 *   insn=0x000000000021FB80 string=0x000000000021FC20 "hF@"
 *   insn=0x000000000021FB88 string=0x000000000021FB8C "(a"
 *   insn=0x000000000021FB90 string=0x000000000021FB94 "@"
 *   insn=0x000000000021FB94 string=0x000000000021FB98 "*&"
 *   insn=0x000000000021FB94 string=0x000000000021FBFC "`J@"
 *   insn=0x000000000021FB98 string=0x000000000021FB9C "J=G"
 *   insn=0x000000000021FB9C string=0x000000000021FBA0 ")!"
 *   insn=0x000000000021FBA4 string=0x000000000021FBA8 "*"
 *   insn=0x000000000021FBA4 string=0x000000000021FBBC "*"
 *   insn=0x000000000021FBA8 string=0x000000000021FBAC "K"
 *   insn=0x000000000021FBAC string=0x000000000021FBB0 "+"
 *   insn=0x000000000021FBB8 string=0x000000000021FBC8 "_"
 *   insn=0x000000000021FBBC string=0x000000000021FBC0 "K"
 *   insn=0x000000000021FBC0 string=0x000000000021FBC4 "+"
 *   insn=0x000000000021FBD8 string=0x000000000021FBDC "`J@"
 *   insn=0x000000000021FBDC string=0x000000000021FBE0 " "
 *   insn=0x000000000021FBE8 string=0x000000000021FBEC "`J@"
 *   insn=0x000000000021FBF0 string=0x000000000021FBF4 ""
 *   insn=0x000000000021FC04 string=0x000000000021FC08 ""
 *   insn=0x000000000021FC08 string=0x000000000021FC0C ""
 *   insn=0x000000000021FC10 string=0x000000000021FC14 ""
 *   insn=0x000000000021FC14 string=0x000000000021FC18 ""
 *   insn=0x000000000021FC2C string=0x000000000021FC30 ")&"
 *   insn=0x000000000021FC2C string=0x000000000021FC60 "`B@"
 *   insn=0x000000000021FC30 string=0x000000000021FC34 ")=G"
 *   insn=0x000000000021FC34 string=0x000000000021FC38 "!"
 *   insn=0x000000000021FC38 string=0x000000000021FC3C "\t"
 *   insn=0x000000000021FC3C string=0x000000000021FC40 "\t"
 *   insn=0x000000000021FC3C string=0x000000000021FC9C "\t"
 *   insn=0x000000000021FC40 string=0x000000000021FC44 "*"
 *   insn=0x000000000021FC44 string=0x000000000021FC48 "\n"
 *   insn=0x000000000021FC4C string=0x000000000021FC50 "?"
 *   insn=0x000000000021FC50 string=0x000000000021FC54 "l"
 *   insn=0x000000000021FC64 string=0x000000000021FC68 "h:"
 *   insn=0x000000000021FC6C string=0x000000000021FC70 "@"
 *   insn=0x000000000021FC70 string=0x000000000021FC74 ""
 *   insn=0x000000000021FC74 string=0x000000000021FC78 ""
 *   insn=0x000000000021FC7C string=0x000000000021FC80 ""
 *   insn=0x000000000021FC80 string=0x000000000021FC84 ""
 *   insn=0x000000000021FC90 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021FC94 string=0x000000000021FC98 ""
 *   insn=0x000000000021FC9C string=0x000000000021FCA0 "*"
 *   insn=0x000000000021FCA0 string=0x000000000021FCA4 "\n"
 *   insn=0x000000000021FCA4 string=0x000000000021FCA8 "?"
 *   insn=0x000000000021FCA8 string=0x000000000021FCAC "m"
 *   insn=0x000000000021FCC8 string=0x000000000021FCCC "h"@"
 *   insn=0x000000000021FCD0 string=0x000000000021FCD4 "a"
 *   insn=0x000000000021FCDC string=0x000000000021FCE0 "r*"
 *   insn=0x000000000021FCE0 string=0x000000000021FCE4 "hz@"
 *   insn=0x000000000021FCE8 string=0x000000000021FCEC "?"
 *   insn=0x000000000021FD00 string=0x000000000021FD04 "@"
 *   insn=0x000000000021FD04 string=0x000000000021FD08 ""
 *   insn=0x000000000021FD08 string=0x000000000021FD0C ""
 *   insn=0x000000000021FD10 string=0x000000000021FD14 ""
 *   insn=0x000000000021FD14 string=0x000000000021FD18 ""
 *   insn=0x000000000021FD20 string=0x000000000021FD24 "a""
 *   insn=0x000000000021FD28 string=0x000000000021FD2C "_*"
 *   insn=0x000000000021FD2C string=0x000000000021FD30 "uJ@"
 *   insn=0x000000000021FD3C string=0x000000000021FD40 "Z*"
 *   insn=0x000000000021FD50 string=0x000000000021FD54 "3"
 *   insn=0x000000000021FD58 string=0x000000000021FD6C "hJ@"
 *   insn=0x000000000021FD60 string=0x000000000021FD64 "!@"
 *   insn=0x000000000021FD70 string=0x000000000021FD74 "\n"
 *   insn=0x000000000021FD74 string=0x000000000021FD78 "*"
 *   insn=0x000000000021FD78 string=0x000000000021FD7C "\n"
 *   insn=0x000000000021FD7C string=0x000000000021FD80 "*"
 *   insn=0x000000000021FD80 string=0x000000000021FD84 "1@"
 *   insn=0x000000000021FD84 string=0x000000000021FD88 "(1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(
        Caver::KeyframeAnimationComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  Caver::AnimKeysNode *v4; // x20
  _DWORD *result; // x0
  int v6; // w8
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+38h] [xbp-48h] BYREF

  *(_QWORD *)&v2 = &off_6B9F70;
  *((_QWORD *)&v2 + 1) = &off_6B9FB0;
  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6B9E50;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 14) = off_6B9438;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = &byte_6FD2F8;
  *((_QWORD *)this + 18) = 0;
  sub_566BB8((int)v9, "model");
  Caver::Component::BindOutlet();
  v3 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v9[0] - 8LL);
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
    if ( v8 <= 0 )
      operator delete(v3);
  }
  v4 = (Caver::AnimKeysNode *)operator new(0x50u);
  Caver::AnimKeysNode::AnimKeysNode(v4);
  ++*((_DWORD *)v4 + 2);
  result = (_DWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v4;
  if ( result )
  {
    v6 = result[2] - 1;
    result[2] = v6;
    if ( !v6 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

