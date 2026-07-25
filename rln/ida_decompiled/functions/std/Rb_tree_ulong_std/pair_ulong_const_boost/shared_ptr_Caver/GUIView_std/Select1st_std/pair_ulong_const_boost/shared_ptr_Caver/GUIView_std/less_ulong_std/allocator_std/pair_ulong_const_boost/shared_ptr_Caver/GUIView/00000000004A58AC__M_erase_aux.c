/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A58AC
 * Mangled: _ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS7_ESF_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Callers: 1
 *   0x0000000000203BF0  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Callees: 4
 *   0x00000000001F6A10  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *
 * Referenced strings: 21
 *   insn=0x00000000004A58D0 string=0x00000000004A58D4 "A"
 *   insn=0x00000000004A58E8 string=0x00000000004A58EC "ID"
 *   insn=0x00000000004A58EC string=0x00000000001F6A10 "0'"
 *   insn=0x00000000004A58F4 string=0x00000000004A58F8 "$"
 *   insn=0x00000000004A58FC string=0x00000000004A5900 "@"
 *   insn=0x00000000004A5908 string=0x00000000004A590C "e"
 *   insn=0x00000000004A5918 string=0x00000000004A591C "Q"
 *   insn=0x00000000004A5924 string=0x00000000004A5928 "8"
 *   insn=0x00000000004A5928 string=0x00000000004A592C "@"
 *   insn=0x00000000004A592C string=0x00000000004A5930 ""
 *   insn=0x00000000004A5930 string=0x00000000004A5934 ""
 *   insn=0x00000000004A5938 string=0x00000000004A593C ""
 *   insn=0x00000000004A5940 string=0x00000000004A5944 "\t@"
 *   insn=0x00000000004A5948 string=0x00000000004A594C "@"
 *   insn=0x00000000004A594C string=0x00000000004A5950 ""
 *   insn=0x00000000004A5950 string=0x00000000004A5954 ""
 *   insn=0x00000000004A5958 string=0x00000000004A595C ""
 *   insn=0x00000000004A5960 string=0x00000000004A5964 "@"
 *   insn=0x00000000004A596C string=0x00000000004A5970 "PF"
 *   insn=0x00000000004A5970 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A5978 string=0x00000000004A597C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  _QWORD *v8; // x23
  _QWORD *v9; // x24
  __int64 v10; // x8
  __int64 v11; // x8

  v5 = a1 + 1;
  v6 = a2;
  if ( a1 + 1 == a3 && a1[3] == a2 )
  {
    std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase();
    a1[2] = 0;
    a1[3] = a3;
    a1[4] = a3;
    a1[5] = 0;
  }
  else if ( (_QWORD *)a2 != a3 )
  {
    do
    {
      v7 = v6;
      v6 = sub_54C6A0(v6);
      v8 = (_QWORD *)sub_54CA60(v7, v5);
      v9 = (_QWORD *)v8[6];
      if ( v9 )
      {
        v10 = v9[1] - 1LL;
        v9[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      operator delete(v8);
      --a1[5];
    }
    while ( (_QWORD *)v6 != a3 );
  }
}

