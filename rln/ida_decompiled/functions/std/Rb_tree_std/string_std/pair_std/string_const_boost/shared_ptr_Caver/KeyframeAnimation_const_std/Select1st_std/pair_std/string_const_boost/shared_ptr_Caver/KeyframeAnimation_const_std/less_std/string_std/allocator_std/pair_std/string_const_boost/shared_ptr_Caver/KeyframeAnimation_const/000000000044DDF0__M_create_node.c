/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044DDF0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEESt10_Select1stIS8_ESt4lessISsESaIS8_EE14_M_create_nodeERKS8_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>> const&)
 *
 * Callers: 1
 *   0x00000000001FCCC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>> const&)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000044DE04 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044DE08 string=0x000000000044DE0C "`"
 *   insn=0x000000000044DE18 string=0x000000000044DE1C "h"
 *   insn=0x000000000044DE20 string=0x000000000044DE24 "h"
 *   insn=0x000000000044DE28 string=0x000000000044DE2C "\t"
 *   insn=0x000000000044DE2C string=0x000000000044DE30 ")"
 *   insn=0x000000000044DE30 string=0x000000000044DE34 "\t"
 *   insn=0x000000000044DE48 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000044DE50 string=0x000000000044DE54 "G"
 *   insn=0x000000000044DE50 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044DE5C string=0x00000000001FD590 "0'"
 *   insn=0x000000000044DE64 string=0x000000000044DE68 "9"
 *   insn=0x000000000044DE88 string=0x000000000044DE8C " "
 *   insn=0x000000000044DE8C string=0x000000000044DE90 " "
 *   insn=0x000000000044DE9C string=0x000000000044DEA0 ""
 *   insn=0x000000000044DEA8 string=0x000000000044DEAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x38u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  return v3;
}

