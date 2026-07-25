/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD0FC
 * Mangled: _ZN5Caver14CharacterState9ItemCountERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDA10  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 37
 *   insn=0x00000000003AD108 string=0x00000000003AD10C "T"
 *   insn=0x00000000003AD118 string=0x00000000003AD11C "("
 *   insn=0x00000000003AD12C string=0x00000000003AD130 "`B"
 *   insn=0x00000000003AD134 string=0x00000000003AD138 "6B"
 *   insn=0x00000000003AD138 string=0x00000000003AD13C "hb"
 *   insn=0x00000000003AD138 string=0x00000000001FDA10 "0'"
 *   insn=0x00000000003AD150 string=0x00000000003AD154 ""
 *   insn=0x00000000003AD160 string=0x00000000003AD164 "J"
 *   insn=0x00000000003AD164 string=0x00000000003AD168 "(a"
 *   insn=0x00000000003AD16C string=0x00000000003AD170 "!"
 *   insn=0x00000000003AD17C string=0x00000000003AD180 "!"
 *   insn=0x00000000003AD180 string=0x00000000003AD1E4 ";$"
 *   insn=0x00000000003AD194 string=0x00000000003AD198 "J=G"
 *   insn=0x00000000003AD198 string=0x00000000003AD19C ")!"
 *   insn=0x00000000003AD1A0 string=0x00000000003AD1A4 "*"
 *   insn=0x00000000003AD1A0 string=0x00000000003AD1B8 "*"
 *   insn=0x00000000003AD1A4 string=0x00000000003AD1A8 "K"
 *   insn=0x00000000003AD1A8 string=0x00000000003AD1AC "+"
 *   insn=0x00000000003AD1B4 string=0x00000000003AD1C4 "_"
 *   insn=0x00000000003AD1B8 string=0x00000000003AD1BC "K"
 *   insn=0x00000000003AD1BC string=0x00000000003AD1C0 "+"
 *   insn=0x00000000003AD1C4 string=0x00000000003AD1C8 "l"
 *   insn=0x00000000003AD1D4 string=0x00000000003AD1D8 "s"
 *   insn=0x00000000003AD1E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AD1EC string=0x00000000003AD1F0 "J"
 *   insn=0x00000000003AD1F4 string=0x00000000003AD1F8 "(a"
 *   insn=0x00000000003AD204 string=0x00000000003AD208 "J=G"
 *   insn=0x00000000003AD208 string=0x00000000003AD20C ")!"
 *   insn=0x00000000003AD210 string=0x00000000003AD214 "*"
 *   insn=0x00000000003AD210 string=0x00000000003AD240 "*"
 *   insn=0x00000000003AD214 string=0x00000000003AD218 "K"
 *   insn=0x00000000003AD218 string=0x00000000003AD21C "+"
 *   insn=0x00000000003AD220 string=0x00000000003AD224 "_"
 *   insn=0x00000000003AD230 string=0x00000000003AD234 "\"
 *   insn=0x00000000003AD240 string=0x00000000003AD244 "K"
 *   insn=0x00000000003AD244 string=0x00000000003AD248 "+"
 *   insn=0x00000000003AD248 string=0x00000000003AD24C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::ItemCount(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  void *v5; // x8
  unsigned int *v6; // x9
  int v7; // w10
  unsigned int v8; // w19
  _QWORD v9[3]; // [xsp+8h] [xbp-28h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*a2 )
    return 0;
  sub_56A528(v9, *a2 + 8LL);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find();
  if ( a1 + 24 == v3 )
    result = 0;
  else
    result = *(unsigned int *)(v3 + 56);
  v5 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
    {
      v8 = result;
      operator delete(v5);
      return v8;
    }
  }
  return result;
}

