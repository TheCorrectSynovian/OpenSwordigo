/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046A140
 * Mangled: _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE8_M_eraseEPSt13_Rb_tree_nodeIS4_E
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *
 * Callers: 1
 *   0x00000000001FD640  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD640  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *   0x00000000001FE2C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000046A154 string=0x000000000046A158 "t"
 *   insn=0x000000000046A164 string=0x000000000046A168 "6M"
 *   insn=0x000000000046A168 string=0x00000000001FD640 "0'"
 *   insn=0x000000000046A174 string=0x000000000046A178 "@"
 *   insn=0x000000000046A178 string=0x000000000046A17C ""
 *   insn=0x000000000046A17C string=0x000000000046A180 ""
 *   insn=0x000000000046A184 string=0x000000000046A188 ""
 *   insn=0x000000000046A188 string=0x000000000046A18C ""
 *   insn=0x000000000046A198 string=0x000000000046A19C "@"
 *   insn=0x000000000046A19C string=0x000000000046A1A0 ""
 *   insn=0x000000000046A1A0 string=0x000000000046A1A4 ""
 *   insn=0x000000000046A1A8 string=0x000000000046A1AC ""
 *   insn=0x000000000046A1AC string=0x000000000046A1B0 ""
 *   insn=0x000000000046A1B8 string=0x000000000046A1BC "=4"
 *   insn=0x000000000046A1BC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046A1D8 string=0x000000000046A1DC "("
 *   insn=0x000000000046A1DC string=0x000000000046A1E0 "\t\t@"
 *   insn=0x000000000046A1E0 string=0x000000000046A1E4 ")"
 *   insn=0x000000000046A1E4 string=0x000000000046A1E8 "\t\t"
 *   insn=0x000000000046A1EC string=0x000000000046A1F0 "\t"
 *   insn=0x000000000046A1F0 string=0x000000000046A1F4 ")"
 *   insn=0x000000000046A1F8 string=0x000000000046A1FC " "
 *   insn=0x000000000046A204 string=0x000000000046A208 "Q"
 *   insn=0x000000000046A220 string=0x000000000046A224 "W"
 *   insn=0x000000000046A234 string=0x000000000046A238 "T"
 *   insn=0x000000000046A254 string=0x000000000046A258 "\t"
 *   insn=0x000000000046A254 string=0x000000000046A26C "\t"
 *   insn=0x000000000046A258 string=0x000000000046A25C "*"
 *   insn=0x000000000046A25C string=0x000000000046A260 "\n"
 *   insn=0x000000000046A268 string=0x000000000046A278 "?"
 *   insn=0x000000000046A26C string=0x000000000046A270 "*"
 *   insn=0x000000000046A270 string=0x000000000046A274 "\n"
 *   insn=0x000000000046A280 string=0x000000000046A284 "H"
 *   insn=0x000000000046A294 string=0x000000000046A298 "\nP"
 *   insn=0x000000000046A2A4 string=0x000000000046A2A8 "@"
 *   insn=0x000000000046A2A8 string=0x000000000046A2AC ""
 *   insn=0x000000000046A2AC string=0x000000000046A2B0 ""
 *   insn=0x000000000046A2B4 string=0x000000000046A2B8 ""
 *   insn=0x000000000046A2B8 string=0x000000000046A2BC ""
 *   insn=0x000000000046A2D0 string=0x000000000046A250 "!"
 *   insn=0x000000000046A308 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046A310 string=0x000000000046A314 "(a"
 *   insn=0x000000000046A31C string=0x000000000046A320 ")!"
 *   insn=0x000000000046A324 string=0x000000000046A328 "*"
 *   insn=0x000000000046A324 string=0x000000000046A354 "*"
 *   insn=0x000000000046A328 string=0x000000000046A32C "K"
 *   insn=0x000000000046A32C string=0x000000000046A330 "+"
 *   insn=0x000000000046A334 string=0x000000000046A338 "_"
 *   insn=0x000000000046A34C string=0x000000000046A350 "]]"
 *   insn=0x000000000046A354 string=0x000000000046A358 "K"
 *   insn=0x000000000046A358 string=0x000000000046A35C "+"
 *   insn=0x000000000046A35C string=0x000000000046A360 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  v2 = a2;
  while ( v2 )
  {
    v3 = v2;
    std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase();
    v4 = (_DWORD *)v2[5];
    v2 = (_QWORD *)v2[2];
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v6 = (_DWORD *)v3[4];
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    operator delete(v3);
  }
}

