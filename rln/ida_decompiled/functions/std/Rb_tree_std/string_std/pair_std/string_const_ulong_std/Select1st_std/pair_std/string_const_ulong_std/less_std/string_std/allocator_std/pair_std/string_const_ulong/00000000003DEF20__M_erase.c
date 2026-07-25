/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DEF20
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *
 * Callers: 2
 *   0x00000000001FC1B0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x00000000003DEEE8  Caver::ItemOverlay::~ItemOverlay()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC1B0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x00000000003DEF34 string=0x00000000003DEF38 "V"
 *   insn=0x00000000003DEF48 string=0x00000000003DEF4C "4"
 *   insn=0x00000000003DEF4C string=0x00000000003DEF50 "7"
 *   insn=0x00000000003DEF50 string=0x00000000003DEF54 "8"
 *   insn=0x00000000003DEF68 string=0x00000000003DEF6C "\t"
 *   insn=0x00000000003DEF68 string=0x00000000003DEF80 "\t"
 *   insn=0x00000000003DEF6C string=0x00000000003DEF70 "*"
 *   insn=0x00000000003DEF70 string=0x00000000003DEF74 "\n"
 *   insn=0x00000000003DEF7C string=0x00000000003DEF8C "?"
 *   insn=0x00000000003DEF80 string=0x00000000003DEF84 "*"
 *   insn=0x00000000003DEF84 string=0x00000000003DEF88 "\n"
 *   insn=0x00000000003DEF98 string=0x00000000003DEF9C "\n"
 *   insn=0x00000000003DEFAC string=0x00000000001FC1B0 "0'"
 *   insn=0x00000000003DEFBC string=0x00000000003DEFC0 "!"
 *   insn=0x00000000003DEFC0 string=0x00000000003DEF64 "!"
 *   insn=0x00000000003DEFC8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DEFF8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  void *v5; // x21
  __int64 v6; // x8
  void *v7; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase();
      v6 = v2[4];
      v2 = (_QWORD *)v2[2];
      v7 = (void *)(v6 - 24);
      if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v6 - 8);
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
          operator delete(v7);
      }
      operator delete(v5);
    }
    while ( v2 );
  }
}

