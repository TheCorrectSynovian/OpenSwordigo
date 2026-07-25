/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DFBF0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS2_ESA_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>)
 *
 * Callers: 1
 *   0x00000000001FBD00  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC1B0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 27
 *   insn=0x00000000003DFC08 string=0x00000000003DFC0C "X"
 *   insn=0x00000000003DFC0C string=0x00000000003DFC10 ""
 *   insn=0x00000000003DFC28 string=0x00000000003DFC2C "A"
 *   insn=0x00000000003DFC40 string=0x00000000003DFC44 "[q"
 *   insn=0x00000000003DFC44 string=0x00000000001FC1B0 "0'"
 *   insn=0x00000000003DFC4C string=0x00000000003DFC50 "*"
 *   insn=0x00000000003DFC50 string=0x00000000003DFCF8 ""
 *   insn=0x00000000003DFC58 string=0x00000000003DFC5C "9"
 *   insn=0x00000000003DFC5C string=0x00000000003DFC60 ":"
 *   insn=0x00000000003DFC60 string=0x00000000003DFC64 "9"
 *   insn=0x00000000003DFC64 string=0x00000000003DFC68 "Z?G"
 *   insn=0x00000000003DFC74 string=0x00000000003DFC78 "\t"
 *   insn=0x00000000003DFC74 string=0x00000000003DFC8C "\t"
 *   insn=0x00000000003DFC78 string=0x00000000003DFC7C "*"
 *   insn=0x00000000003DFC7C string=0x00000000003DFC80 "\n"
 *   insn=0x00000000003DFC88 string=0x00000000003DFC98 "?"
 *   insn=0x00000000003DFC8C string=0x00000000003DFC90 "*"
 *   insn=0x00000000003DFC90 string=0x00000000003DFC94 "\n"
 *   insn=0x00000000003DFCA4 string=0x00000000003DFCA8 ""
 *   insn=0x00000000003DFCB0 string=0x00000000003DFCB4 "{"
 *   insn=0x00000000003DFCC0 string=0x00000000003DFCC4 "g"
 *   insn=0x00000000003DFCD8 string=0x00000000003DFC70 "!"
 *   insn=0x00000000003DFCDC string=0x00000000003DFCE0 "t]"
 *   insn=0x00000000003DFCE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DFCE8 string=0x00000000003DFCEC ""
 *   insn=0x00000000003DFD04 string=0x00000000003DFD24 "kY"
 *   insn=0x00000000003DFD24 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase_aux(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x22
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v9; // x23
  _QWORD *v10; // x23
  __int64 v11; // x8
  void *v12; // x0

  v5 = a1 + 1;
  v6 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 + 1 == a3 && a1[3] == a2 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase();
    a1[2] = 0;
    a1[3] = a3;
    a1[4] = a3;
    a1[5] = 0;
  }
  else if ( (_QWORD *)a2 != a3 )
  {
    do
    {
      v9 = v6;
      v6 = sub_54C6A0(v6);
      v10 = (_QWORD *)sub_54CA60(v9, v5);
      v11 = v10[4];
      v12 = (void *)(v11 - 24);
      if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
      {
        v7 = (unsigned int *)(v11 - 8);
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
          operator delete(v12);
      }
      operator delete(v10);
      --a1[5];
    }
    while ( (_QWORD *)v6 != a3 );
  }
}

