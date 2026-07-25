/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000486CB8
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *
 * Callers: 1
 *   0x00000000001F7940  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7940  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x0000000000486CCC string=0x0000000000486CD0 "W"
 *   insn=0x0000000000486CE0 string=0x0000000000486CE4 "T"
 *   insn=0x0000000000486D00 string=0x0000000000486D04 "\t"
 *   insn=0x0000000000486D00 string=0x0000000000486D18 "\t"
 *   insn=0x0000000000486D04 string=0x0000000000486D08 "*"
 *   insn=0x0000000000486D08 string=0x0000000000486D0C "\n"
 *   insn=0x0000000000486D14 string=0x0000000000486D24 "?"
 *   insn=0x0000000000486D18 string=0x0000000000486D1C "*"
 *   insn=0x0000000000486D1C string=0x0000000000486D20 "\n"
 *   insn=0x0000000000486D44 string=0x00000000001F7940 "0'"
 *   insn=0x0000000000486D50 string=0x0000000000486D54 "@"
 *   insn=0x0000000000486D54 string=0x0000000000486D58 ""
 *   insn=0x0000000000486D58 string=0x0000000000486D5C ""
 *   insn=0x0000000000486D60 string=0x0000000000486D64 ""
 *   insn=0x0000000000486D64 string=0x0000000000486D68 ""
 *   insn=0x0000000000486D7C string=0x0000000000486CFC "!"
 *   insn=0x0000000000486D80 string=0x0000000000486D84 "K"
 *   insn=0x0000000000486D84 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000486D98 string=0x0000000000486DB4 "G"
 *   insn=0x0000000000486DB4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000486DBC string=0x0000000000486DC0 "(a"
 *   insn=0x0000000000486DC8 string=0x0000000000486DCC ")!"
 *   insn=0x0000000000486DD0 string=0x0000000000486DD4 "*"
 *   insn=0x0000000000486DD0 string=0x0000000000486E00 "*"
 *   insn=0x0000000000486DD4 string=0x0000000000486DD8 "K"
 *   insn=0x0000000000486DD8 string=0x0000000000486DDC "+"
 *   insn=0x0000000000486DE0 string=0x0000000000486DE4 "_"
 *   insn=0x0000000000486DF0 string=0x0000000000486DF4 "l"
 *   insn=0x0000000000486E00 string=0x0000000000486E04 "K"
 *   insn=0x0000000000486E04 string=0x0000000000486E08 "+"
 *   insn=0x0000000000486E08 string=0x0000000000486E0C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase();
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

