/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2484
 * Mangled: _ZN5Caver3MapD2Ev
 * Demangled: Caver::Map::~Map()
 *
 * Callers: 1
 *   0x00000000001F9660  Caver::Map::~Map()
 *
 * Callees: 6
 *   0x00000000001F3500  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>> *)
 *   0x00000000001F3510  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C2638  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000003C2498 string=0x00000000003C249C "a.@"
 *   insn=0x00000000003C249C string=0x00000000003C24A0 "`""
 *   insn=0x00000000003C24A0 string=0x00000000003C24A4 ""
 *   insn=0x00000000003C24A4 string=0x00000000003C24A8 "a"
 *   insn=0x00000000003C24A4 string=0x00000000001F3510 "P'"
 *   insn=0x00000000003C24A8 string=0x00000000003C24AC "`b"
 *   insn=0x00000000003C24B0 string=0x00000000003C24B4 "tZ@"
 *   insn=0x00000000003C24B0 string=0x00000000001F3500 "P'"
 *   insn=0x00000000003C24C0 string=0x00000000003C24C4 "5"
 *   insn=0x00000000003C24C8 string=0x00000000003C24CC ""
 *   insn=0x00000000003C24D8 string=0x00000000003C24DC "\t@"
 *   insn=0x00000000003C24E8 string=0x00000000003C24EC ""
 *   insn=0x00000000003C24F8 string=0x00000000003C24FC "@"
 *   insn=0x00000000003C2510 string=0x00000000003C2514 "t"
 *   insn=0x00000000003C252C string=0x00000000003C2530 "`"
 *   insn=0x00000000003C2530 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C254C string=0x00000000003C2560 "t"@"
 *   insn=0x00000000003C2554 string=0x00000000003C2558 "`b"
 *   insn=0x00000000003C2568 string=0x00000000003C256C "@"
 *   insn=0x00000000003C256C string=0x00000000003C25D4 "t"
 *   insn=0x00000000003C2574 string=0x00000000003C2578 "u"
 *   insn=0x00000000003C257C string=0x00000000003C2580 ")"
 *   insn=0x00000000003C258C string=0x00000000003C2590 "\t@"
 *   insn=0x00000000003C25A0 string=0x00000000003C25A4 ")"
 *   insn=0x00000000003C25B0 string=0x00000000003C25B4 "@"
 *   insn=0x00000000003C25C8 string=0x00000000003C25CC "A"
 *   insn=0x00000000003C25CC string=0x00000000003C25D0 "t"
 *   insn=0x00000000003C25D8 string=0x00000000003C25DC "5"
 *   insn=0x00000000003C25F0 string=0x00000000003C25F4 "V/"
 *   insn=0x00000000003C25F4 string=0x00000000003C25F8 "h"
 *   insn=0x00000000003C25FC string=0x00000000003C2600 "h"
 *   insn=0x00000000003C2604 string=0x00000000003C2608 "Q/"
 *   insn=0x00000000003C260C string=0x00000000003C2610 "("
 *   insn=0x00000000003C2614 string=0x00000000003C2618 "M/"
 *   insn=0x00000000003C2618 string=0x00000000003C261C "h"
 *   insn=0x00000000003C2620 string=0x00000000003C2624 "h"
 *   insn=0x00000000003C2628 string=0x00000000003C262C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Map::~Map(Caver::Map *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase();
  v2 = *(_QWORD **)this;
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  if ( *(_QWORD **)this != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
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
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = *(_QWORD **)this;
  }
  if ( v2 )
    operator delete(v2);
}

