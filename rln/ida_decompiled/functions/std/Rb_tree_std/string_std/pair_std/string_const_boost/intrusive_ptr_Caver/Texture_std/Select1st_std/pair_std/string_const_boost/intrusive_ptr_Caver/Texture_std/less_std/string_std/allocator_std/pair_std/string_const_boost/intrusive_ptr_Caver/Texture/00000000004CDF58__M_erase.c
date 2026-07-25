/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CDF58
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver7TextureEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>> *)
 *
 * Callers: 1
 *   0x00000000001F3530  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>> *)
 *
 * Callees: 6
 *   0x00000000001F3530  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x00000000004CDF6C string=0x00000000004CDF70 "W"
 *   insn=0x00000000004CDF80 string=0x00000000004CDF84 "T"
 *   insn=0x00000000004CDFA0 string=0x00000000004CDFA4 "\t"
 *   insn=0x00000000004CDFA0 string=0x00000000004CDFB8 "\t"
 *   insn=0x00000000004CDFA4 string=0x00000000004CDFA8 "*"
 *   insn=0x00000000004CDFA8 string=0x00000000004CDFAC "\n"
 *   insn=0x00000000004CDFB4 string=0x00000000004CDFC4 "?"
 *   insn=0x00000000004CDFB8 string=0x00000000004CDFBC "*"
 *   insn=0x00000000004CDFBC string=0x00000000004CDFC0 "\n"
 *   insn=0x00000000004CDFE0 string=0x00000000004CDFE4 "S"
 *   insn=0x00000000004CDFE4 string=0x00000000001F3530 "P'"
 *   insn=0x00000000004CDFF0 string=0x00000000004CDFF4 "@"
 *   insn=0x00000000004CDFF4 string=0x00000000004CDFF8 ""
 *   insn=0x00000000004CDFF8 string=0x00000000004CDFFC ""
 *   insn=0x00000000004CE000 string=0x00000000004CE004 ""
 *   insn=0x00000000004CE004 string=0x00000000004CE008 ""
 *   insn=0x00000000004CE01C string=0x00000000004CDF9C "!"
 *   insn=0x00000000004CE024 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CE054 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CE05C string=0x00000000004CE060 "(a"
 *   insn=0x00000000004CE068 string=0x00000000004CE06C ")!"
 *   insn=0x00000000004CE070 string=0x00000000004CE074 "*"
 *   insn=0x00000000004CE070 string=0x00000000004CE0A0 "*"
 *   insn=0x00000000004CE074 string=0x00000000004CE078 "K"
 *   insn=0x00000000004CE078 string=0x00000000004CE07C "+"
 *   insn=0x00000000004CE080 string=0x00000000004CE084 "_"
 *   insn=0x00000000004CE098 string=0x00000000004CE09C "\n"
 *   insn=0x00000000004CE0A0 string=0x00000000004CE0A4 "K"
 *   insn=0x00000000004CE0A4 string=0x00000000004CE0A8 "+"
 *   insn=0x00000000004CE0A8 string=0x00000000004CE0AC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD *v5; // x21
  _DWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x8
  void *v9; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase();
      v6 = (_DWORD *)v2[5];
      v2 = (_QWORD *)v2[2];
      if ( v6 )
      {
        v7 = v6[2] - 1;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v8 = v5[4];
      v9 = (void *)(v8 - 24);
      if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v8 - 8);
        if ( &pthread_create )
        {
          do
            v4 = __ldaxr(v3);
          while ( __stlxr(v4 - 1, v3) );
        }
        else
        {
          v4 = (*v3)--;
        }
        if ( v4 <= 0 )
          operator delete(v9);
      }
      operator delete(v5);
    }
    while ( v2 );
  }
}

