/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000486B58
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver11AudioBufferEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>> *)
 *
 * Callers: 1
 *   0x00000000001FE070  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>> *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE070  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000486B6C string=0x0000000000486B70 "W"
 *   insn=0x0000000000486B80 string=0x0000000000486B84 "T"
 *   insn=0x0000000000486BA0 string=0x0000000000486BA4 "\t"
 *   insn=0x0000000000486BA0 string=0x0000000000486BB8 "\t"
 *   insn=0x0000000000486BA4 string=0x0000000000486BA8 "*"
 *   insn=0x0000000000486BA8 string=0x0000000000486BAC "\n"
 *   insn=0x0000000000486BB4 string=0x0000000000486BC4 "?"
 *   insn=0x0000000000486BB8 string=0x0000000000486BBC "*"
 *   insn=0x0000000000486BBC string=0x0000000000486BC0 "\n"
 *   insn=0x0000000000486BE0 string=0x0000000000486BE4 "#"
 *   insn=0x0000000000486BF0 string=0x0000000000486BF4 "@"
 *   insn=0x0000000000486BF4 string=0x0000000000486BF8 ""
 *   insn=0x0000000000486BF8 string=0x0000000000486BFC ""
 *   insn=0x0000000000486C00 string=0x0000000000486C04 ""
 *   insn=0x0000000000486C04 string=0x0000000000486C08 "@"
 *   insn=0x0000000000486C1C string=0x0000000000486B9C "!"
 *   insn=0x0000000000486C24 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000486C54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000486C5C string=0x0000000000486C60 "(a"
 *   insn=0x0000000000486C68 string=0x0000000000486C6C ")!"
 *   insn=0x0000000000486C70 string=0x0000000000486C74 "*"
 *   insn=0x0000000000486C70 string=0x0000000000486CA0 "*"
 *   insn=0x0000000000486C74 string=0x0000000000486C78 "K"
 *   insn=0x0000000000486C78 string=0x0000000000486C7C "+"
 *   insn=0x0000000000486C80 string=0x0000000000486C84 "_"
 *   insn=0x0000000000486C98 string=0x0000000000486C9C "\n"
 *   insn=0x0000000000486CA0 string=0x0000000000486CA4 "K"
 *   insn=0x0000000000486CA4 string=0x0000000000486CA8 "+"
 *   insn=0x0000000000486CA8 string=0x0000000000486CAC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase();
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

