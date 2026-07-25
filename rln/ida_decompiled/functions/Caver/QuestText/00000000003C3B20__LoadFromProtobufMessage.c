/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3B20
 * Mangled: _ZN5Caver9QuestText23LoadFromProtobufMessageERKNS_5Proto9QuestTextE
 * Demangled: Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *
 * Callers: 1
 *   0x00000000001FE820  Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *
 * Callees: 3
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x00000000003C3B30 string=0x00000000003C3B34 "a\n@"
 *   insn=0x00000000003C3B3C string=0x00000000003C3B40 "h"@"
 *   insn=0x00000000003C3B50 string=0x00000000003C3B54 "i"
 *   insn=0x00000000003C3B58 string=0x00000000003C3B5C ")yv"
 *   insn=0x00000000003C3B6C string=0x00000000003C3B70 "n"
 *   insn=0x00000000003C3B74 string=0x00000000003C3B78 "!"
 *   insn=0x00000000003C3B80 string=0x00000000003C3B94 "h""
 *   insn=0x00000000003C3B90 string=0x00000000001F83A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::QuestText::LoadFromProtobufMessage(Caver::QuestText *this, const Caver::Proto::QuestText *a2)
{
  __int64 v4; // x22

  sub_56A6A8(this);
  if ( *((int *)a2 + 8) >= 1 )
  {
    v4 = 0;
    do
    {
      if ( *((_QWORD *)this + 2) == *((_QWORD *)this + 3) )
      {
        std::vector<std::string>::_M_insert_aux();
      }
      else
      {
        sub_56A528(*((_QWORD *)this + 2), *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v4));
        *((_QWORD *)this + 2) += 8LL;
      }
      ++v4;
    }
    while ( v4 < *((int *)a2 + 8) );
  }
}

