/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004872D4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Callers: 1
 *   0x00000000001FA780  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCFF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x00000000004872E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004872EC string=0x00000000004872F0 "`"
 *   insn=0x00000000004872FC string=0x0000000000487300 "h"
 *   insn=0x0000000000487304 string=0x0000000000487308 "\t\t@"
 *   insn=0x0000000000487308 string=0x000000000048730C ")"
 *   insn=0x000000000048730C string=0x0000000000487310 "\t\t"
 *   insn=0x0000000000487324 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000048732C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000487338 string=0x00000000001FD590 "0'"
 *   insn=0x000000000048733C string=0x0000000000487340 "a"
 *   insn=0x0000000000487370 string=0x0000000000487374 "`"
 *   insn=0x0000000000487378 string=0x000000000048737C "w"
 *   insn=0x0000000000487390 string=0x0000000000487394 """
 *   insn=0x0000000000487394 string=0x0000000000487398 "~"
 *   insn=0x0000000000487398 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004873A0 string=0x0000000000487434 ":"
 *   insn=0x00000000004873C0 string=0x00000000004873C4 ""
 *   insn=0x00000000004873CC string=0x00000000004873D0 "p"
 *   insn=0x00000000004873D8 string=0x00000000004873DC "c"
 *   insn=0x00000000004873F0 string=0x00000000004873F4 ")"
 *   insn=0x00000000004873F4 string=0x00000000004873F8 ""
 *   insn=0x00000000004873FC string=0x0000000000487400 """
 *   insn=0x0000000000487400 string=0x0000000000487404 "c"
 *   insn=0x0000000000487408 string=0x000000000048740C "@\t"
 *   insn=0x000000000048740C string=0x0000000000487410 "="
 *   insn=0x0000000000487414 string=0x0000000000487418 "_"
 *   insn=0x0000000000487420 string=0x0000000000487424 "_"
 *   insn=0x0000000000487428 string=0x000000000048742C "@"
 *   insn=0x0000000000487440 string=0x0000000000487444 "S"
 *   insn=0x0000000000487454 string=0x0000000000487458 "`"
 *   insn=0x000000000048745C string=0x0000000000487460 "x"
 *   insn=0x000000000048746C string=0x0000000000487470 "("
 *   insn=0x0000000000487478 string=0x000000000048747C "E"
 *   insn=0x0000000000487484 string=0x0000000000487488 "?"
 *   insn=0x0000000000487488 string=0x000000000048748C "L"
 *   insn=0x0000000000487490 string=0x0000000000487494 "?"
 *   insn=0x0000000000487498 string=0x000000000048749C " "
 *   insn=0x00000000004874A0 string=0x00000000004874A4 "h"
 *   insn=0x00000000004874AC string=0x00000000004874B0 "w"
 *   insn=0x00000000004874B4 string=0x00000000004874B8 "$"
 *   insn=0x00000000004874BC string=0x00000000004874C0 "_"
 *   insn=0x00000000004874C8 string=0x00000000004874CC "_"
 *   insn=0x00000000004874D0 string=0x00000000004874D4 "@"
 *   insn=0x00000000004874E8 string=0x00000000004874EC "L"
 *   insn=0x00000000004874F8 string=0x00000000004874FC "`"
 *   insn=0x0000000000487514 string=0x0000000000487518 "?"
 *   insn=0x0000000000487520 string=0x0000000000487524 "?"
 *   insn=0x0000000000487528 string=0x000000000048752C " "
 *   insn=0x000000000048753C string=0x00000000001FCFF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 40) = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return v3;
}

