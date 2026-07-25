/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A504C
 * Mangled: _ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callers: 1
 *   0x00000000001F6A10  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callees: 2
 *   0x00000000001F6A10  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 10
 *   insn=0x00000000004A5060 string=0x00000000004A5064 "t"
 *   insn=0x00000000004A5070 string=0x00000000004A5074 "gF"
 *   insn=0x00000000004A5074 string=0x00000000001F6A10 "0'"
 *   insn=0x00000000004A507C string=0x00000000004A5080 "6"
 *   insn=0x00000000004A5084 string=0x00000000004A5088 ""
 *   insn=0x00000000004A5098 string=0x00000000004A509C "\t@"
 *   insn=0x00000000004A50A4 string=0x00000000004A50A8 ""
 *   insn=0x00000000004A50B8 string=0x00000000004A50BC "@"
 *   insn=0x00000000004A50C4 string=0x00000000004A50C8 "zH"
 *   insn=0x00000000004A50C8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  void *v3; // x21
  _QWORD *v4; // x22
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = a2;
  while ( v2 )
  {
    v3 = v2;
    std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase();
    v4 = (_QWORD *)v2[6];
    v2 = (_QWORD *)v2[2];
    if ( v4 )
    {
      v5 = v4[1] - 1LL;
      v4[1] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v6 = v4[2] - 1LL;
        v4[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
    operator delete(v3);
  }
}

