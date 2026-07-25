/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0788
 * Mangled: _ZN5Caver8GameData11ItemForNameERKSs
 * Demangled: Caver::GameData::ItemForName(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F7730  Caver::GameData::ItemForName(std::string const&)
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000001F9D20  std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *
 * Referenced strings: 12
 *   insn=0x00000000003B0790 string=0x00000000003B0794 ")"
 *   insn=0x00000000003B0798 string=0x00000000003B079C ")"
 *   insn=0x00000000003B079C string=0x00000000003B07A0 "i"
 *   insn=0x00000000003B07A0 string=0x00000000003B07A4 "_%"
 *   insn=0x00000000003B07A4 string=0x00000000003B07A8 ""
 *   insn=0x00000000003B07A4 string=0x00000000001F9D20 "0'"
 *   insn=0x00000000003B07A8 string=0x00000000003B07AC "h"
 *   insn=0x00000000003B07AC string=0x00000000003B07B0 ""
 *   insn=0x00000000003B07B0 string=0x00000000003B07B4 "h"
 *   insn=0x00000000003B07B8 string=0x00000000003B07BC "\t"
 *   insn=0x00000000003B07BC string=0x00000000003B07C0 ")"
 *   insn=0x00000000003B07C0 string=0x00000000003B07C4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameData::ItemForName(_QWORD *a1@<X1>, _QWORD *a2@<X8>)
{
  _QWORD *v3; // x0
  __int64 v4; // x8

  if ( *(_QWORD *)(*a1 - 24LL) )
  {
    v3 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::Item>>::operator[]();
    *a2 = *v3;
    v4 = v3[1];
    a2[1] = v4;
    if ( v4 )
      ++*(_QWORD *)(v4 + 8);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
}

