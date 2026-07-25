/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004876C0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver11AudioBufferEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *
 * Callers: 1
 *   0x00000000001FB700  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201C80  Caver::AudioBuffer::~AudioBuffer()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000004876D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004876D8 string=0x00000000004876DC "`"
 *   insn=0x00000000004876E8 string=0x00000000004876EC "h"
 *   insn=0x00000000004876F0 string=0x00000000004876F4 "h"
 *   insn=0x00000000004876F8 string=0x00000000004876FC "\t\t@"
 *   insn=0x00000000004876FC string=0x0000000000487700 ")"
 *   insn=0x0000000000487700 string=0x0000000000487704 "\t\t"
 *   insn=0x0000000000487718 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000487720 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048772C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000487730 string=0x0000000000487734 "d"
 *   insn=0x0000000000487758 string=0x000000000048775C "\t"
 *   insn=0x000000000048775C string=0x0000000000487760 ")]D"
 *   insn=0x000000000048776C string=0x0000000000487770 "(A"
 *   insn=0x0000000000487774 string=0x0000000000487778 ""
 *   insn=0x0000000000487794 string=0x0000000000487798 ":"
 *   insn=0x00000000004877B4 string=0x00000000004877BC "u"
 *   insn=0x00000000004877C0 string=0x00000000004877C4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(
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
    ++*(_QWORD *)(v4 + 16);
  return v3;
}

