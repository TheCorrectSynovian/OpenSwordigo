/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044CB50
 * Mangled: _ZNSt8_Rb_treeIPKN5Caver5ModelESt4pairIKS3_N5boost10shared_ptrINS0_9PODLoaderEEEESt10_Select1stISA_ESt4lessIS3_ESaISA_EE8_M_eraseEPSt13_Rb_tree_nodeISA_E
 * Demangled: std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *
 * Callers: 1
 *   0x00000000001F49B0  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *
 * Callees: 2
 *   0x00000000001F49B0  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 8
 *   insn=0x000000000044CB64 string=0x000000000044CB68 "t"
 *   insn=0x000000000044CB78 string=0x00000000001F49B0 "P'"
 *   insn=0x000000000044CB80 string=0x000000000044CB84 "6"
 *   insn=0x000000000044CB88 string=0x000000000044CB8C ""
 *   insn=0x000000000044CB9C string=0x000000000044CBA0 "\t@"
 *   insn=0x000000000044CBA8 string=0x000000000044CBAC ""
 *   insn=0x000000000044CBBC string=0x000000000044CBC0 "@"
 *   insn=0x000000000044CBCC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(
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
    std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase();
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

