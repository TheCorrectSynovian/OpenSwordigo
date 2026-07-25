/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004831CC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *
 * Callers: 1
 *   0x00000000001F6F00  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000004831E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004831E4 string=0x00000000004831E8 "`"
 *   insn=0x00000000004831F4 string=0x00000000004831F8 "h"
 *   insn=0x00000000004831FC string=0x0000000000483200 "h"
 *   insn=0x0000000000483204 string=0x0000000000483208 "\t"
 *   insn=0x0000000000483208 string=0x000000000048320C ")"
 *   insn=0x000000000048320C string=0x0000000000483210 "\t"
 *   insn=0x0000000000483224 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000483228 string=0x000000000048322C "!"
 *   insn=0x000000000048322C string=0x0000000000483230 "P"
 *   insn=0x000000000048322C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000483238 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000483240 string=0x0000000000483244 "B,"
 *   insn=0x0000000000483264 string=0x0000000000483268 ")"
 *   insn=0x0000000000483268 string=0x000000000048326C ")"
 *   insn=0x0000000000483278 string=0x000000000048327C "(A"
 *   insn=0x0000000000483280 string=0x0000000000483284 ""
 *   insn=0x00000000004832A8 string=0x00000000004832AC "h"
 *   insn=0x00000000004832A8 string=0x00000000004832BC "-"
 *   insn=0x00000000004832AC string=0x00000000004832B0 ""
 *   insn=0x00000000004832C8 string=0x00000000004832CC "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(
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

