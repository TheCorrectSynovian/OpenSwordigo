/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002313A8
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *
 * Callers: 1
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x00000000002313BC string=0x00000000002313C0 "V"
 *   insn=0x00000000002313F0 string=0x00000000002313F4 "\t"
 *   insn=0x00000000002313F0 string=0x0000000000231424 "\t"
 *   insn=0x00000000002313F4 string=0x00000000002313F8 "*"
 *   insn=0x00000000002313F8 string=0x00000000002313FC "\n"
 *   insn=0x0000000000231400 string=0x0000000000231404 ""
 *   insn=0x0000000000231404 string=0x0000000000231430 "?"
 *   insn=0x000000000023140C string=0x0000000000231410 "\t"
 *   insn=0x000000000023140C string=0x0000000000231444 "\t"
 *   insn=0x0000000000231410 string=0x0000000000231414 "*"
 *   insn=0x0000000000231414 string=0x0000000000231418 "\n"
 *   insn=0x0000000000231420 string=0x0000000000231450 "?"
 *   insn=0x0000000000231424 string=0x0000000000231428 "*"
 *   insn=0x0000000000231428 string=0x000000000023142C "\n"
 *   insn=0x0000000000231444 string=0x0000000000231448 "*"
 *   insn=0x0000000000231448 string=0x000000000023144C "\n"
 *   insn=0x0000000000231450 string=0x0000000000231454 ","
 *   insn=0x0000000000231480 string=0x0000000000231484 "A"
 *   insn=0x0000000000231484 string=0x00000000002313EC "!"
 *   insn=0x0000000000231494 string=0x0000000000231408 "!"
 *   insn=0x000000000023149C string=0x00000000002314A0 "4"
 *   insn=0x000000000023149C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002314CC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  unsigned int *v3; // x8
  int v4; // w9
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD *v7; // x21
  __int64 v8; // x8
  void *v9; // x0
  __int64 v10; // x8
  void *v11; // x0

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      v7 = v2;
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase();
      v8 = v2[5];
      v2 = (_QWORD *)v2[2];
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
      v10 = v7[4];
      v11 = (void *)(v10 - 24);
      if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v10 - 8);
        if ( &pthread_create )
        {
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
        }
        else
        {
          v6 = (*v5)--;
        }
        if ( v6 <= 0 )
          operator delete(v11);
      }
      operator delete(v7);
    }
    while ( v2 );
  }
}

