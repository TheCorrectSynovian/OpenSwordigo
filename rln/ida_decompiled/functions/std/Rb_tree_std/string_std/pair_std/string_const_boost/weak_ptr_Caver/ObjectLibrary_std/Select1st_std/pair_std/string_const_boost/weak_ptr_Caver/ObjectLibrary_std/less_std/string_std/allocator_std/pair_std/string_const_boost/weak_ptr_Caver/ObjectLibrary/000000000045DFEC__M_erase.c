/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DFEC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver13ObjectLibraryEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>> *)
 *
 * Callers: 1
 *   0x00000000001FD190  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>> *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD190  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x000000000045E000 string=0x000000000045E004 "W"
 *   insn=0x000000000045E014 string=0x000000000045E018 "T"
 *   insn=0x000000000045E018 string=0x000000000045E01C "8"
 *   insn=0x000000000045E01C string=0x000000000045E020 "6"
 *   insn=0x000000000045E034 string=0x000000000045E038 "\t"
 *   insn=0x000000000045E034 string=0x000000000045E04C "\t"
 *   insn=0x000000000045E038 string=0x000000000045E03C "*"
 *   insn=0x000000000045E03C string=0x000000000045E040 "\n"
 *   insn=0x000000000045E048 string=0x000000000045E058 "?"
 *   insn=0x000000000045E04C string=0x000000000045E050 "*"
 *   insn=0x000000000045E050 string=0x000000000045E054 "\n"
 *   insn=0x000000000045E074 string=0x000000000045E078 "F|"
 *   insn=0x000000000045E078 string=0x00000000001FD190 "0'"
 *   insn=0x000000000045E084 string=0x000000000045E088 "@"
 *   insn=0x000000000045E088 string=0x000000000045E08C ""
 *   insn=0x000000000045E08C string=0x000000000045E090 ""
 *   insn=0x000000000045E094 string=0x000000000045E098 ""
 *   insn=0x000000000045E098 string=0x000000000045E09C "@"
 *   insn=0x000000000045E0B0 string=0x000000000045E030 "!"
 *   insn=0x000000000045E0B4 string=0x000000000045E0B8 "~d"
 *   insn=0x000000000045E0B8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045E0CC string=0x000000000045E0E8 "z`"
 *   insn=0x000000000045E0E8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045E0F0 string=0x000000000045E0F4 "(a"
 *   insn=0x000000000045E0FC string=0x000000000045E100 ")!"
 *   insn=0x000000000045E104 string=0x000000000045E108 "*"
 *   insn=0x000000000045E104 string=0x000000000045E134 "*"
 *   insn=0x000000000045E108 string=0x000000000045E10C "K"
 *   insn=0x000000000045E10C string=0x000000000045E110 "+"
 *   insn=0x000000000045E114 string=0x000000000045E118 "_"
 *   insn=0x000000000045E134 string=0x000000000045E138 "K"
 *   insn=0x000000000045E138 string=0x000000000045E13C "+"
 *   insn=0x000000000045E13C string=0x000000000045E140 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD *v5; // x21
  _QWORD *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_erase();
      v6 = (_QWORD *)v2[6];
      v2 = (_QWORD *)v2[2];
      if ( v6 )
      {
        v7 = v6[2] - 1LL;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
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

