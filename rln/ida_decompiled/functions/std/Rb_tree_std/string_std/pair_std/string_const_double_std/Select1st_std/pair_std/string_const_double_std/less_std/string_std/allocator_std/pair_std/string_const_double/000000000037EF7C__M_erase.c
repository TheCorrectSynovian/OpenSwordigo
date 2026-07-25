/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037EF7C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *
 * Callers: 2
 *   0x00000000001F93A0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F93A0  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000037EF90 string=0x000000000037EF94 "V"
 *   insn=0x000000000037EFA4 string=0x000000000037EFA8 "4"
 *   insn=0x000000000037EFA8 string=0x000000000037EFAC "7"
 *   insn=0x000000000037EFAC string=0x000000000037EFB0 "8"
 *   insn=0x000000000037EFC4 string=0x000000000037EFC8 "\t"
 *   insn=0x000000000037EFC4 string=0x000000000037EFDC "\t"
 *   insn=0x000000000037EFC8 string=0x000000000037EFCC "*"
 *   insn=0x000000000037EFCC string=0x000000000037EFD0 "\n"
 *   insn=0x000000000037EFD8 string=0x000000000037EFE8 "?"
 *   insn=0x000000000037EFDC string=0x000000000037EFE0 "*"
 *   insn=0x000000000037EFE0 string=0x000000000037EFE4 "\n"
 *   insn=0x000000000037EFF4 string=0x000000000037EFF8 "\n"
 *   insn=0x000000000037F008 string=0x00000000001F93A0 "0'"
 *   insn=0x000000000037F018 string=0x000000000037F01C "!"
 *   insn=0x000000000037F01C string=0x000000000037EFC0 "!"
 *   insn=0x000000000037F024 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037F054 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase();
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

