/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566784
 * Mangled: sub_566784
 * Demangled: sub_566784
 *
 * Callers: 9
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000004B504C  Caver::LastPathComponent(std::string const&)
 *   0x00000000004B50F0  Caver::StringByRemovingLastPathComponent(std::string const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000005687B0  sub_5687B0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 23
 *   insn=0x000000000056678C string=0x0000000000566790 "5"
 *   insn=0x00000000005667A4 string=0x00000000005667A8 "_"
 *   insn=0x00000000005667BC string=0x00000000005667C0 "s"
 *   insn=0x00000000005667D8 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x00000000005667E4 string=0x00000000005667E8 "s"
 *   insn=0x00000000005667E8 string=0x00000000005667EC " "
 *   insn=0x00000000005667F0 string=0x00000000005667F4 ""
 *   insn=0x00000000005667F4 string=0x00000000005667F8 "`"
 *   insn=0x00000000005667FC string=0x0000000000566800 "\t"
 *   insn=0x0000000000566800 string=0x0000000000566880 "`f"
 *   insn=0x0000000000566804 string=0x0000000000566808 "t"
 *   insn=0x0000000000566814 string=0x0000000000566818 "!"
 *   insn=0x0000000000566820 string=0x0000000000566824 "4"
 *   insn=0x000000000056682C string=0x0000000000566830 "l;"
 *   insn=0x0000000000566830 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000566860 string=0x0000000000566864 "A"
 *   insn=0x0000000000566880 string=0x0000000000566884 "W;"
 *   insn=0x0000000000566898 string=0x000000000056689C "A"
 *   insn=0x00000000005668DC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005668E0 string=0x000000000059F960 "basic_string::basic_string"
 *   insn=0x00000000005668E4 string=0x00000000005668E8 "!"
 *   insn=0x00000000005668EC string=0x00000000005668F0 "q"
 *   insn=0x00000000005668F4 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_566784(_QWORD *result, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x4
  _QWORD *v7; // x24
  unsigned __int64 v8; // x4
  _BYTE *v9; // x23
  unsigned __int64 v10; // x19
  _BYTE *v11; // x19
  size_t v12; // x19
  __int64 v13; // x20
  __int64 v14; // x22
  void *v15; // x3
  __int64 v16; // x0

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  v7 = result;
  if ( a3 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v5);
  v8 = v5 - a3;
  v9 = (_BYTE *)(v4 + a3);
  if ( v8 > a4 )
    v10 = a4;
  else
    v10 = v8;
  v11 = (_BYTE *)(v4 + v10 + a3);
  if ( v9 == v11 )
  {
    *result = &byte_6FD2F8;
    return result;
  }
  if ( v11 && !v9 )
    sub_565330("basic_string::_S_construct null not valid");
  v12 = v11 - v9;
  if ( v12 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v12 + 57 > 0x1000 && v12 )
  {
    v13 = 0x3FFFFFFFFFFFFFF9LL;
    if ( v12 + 4096 - (((_WORD)v12 + 57) & 0xFFF) <= 0x3FFFFFFFFFFFFFF9LL )
      v13 = v12 + 4096 - (((_WORD)v12 + 57) & 0xFFF);
    v14 = operator new(v13 + 25);
    v15 = (void *)(v14 + 24);
    *(_QWORD *)(v14 + 8) = v13;
    *(_DWORD *)(v14 + 16) = 0;
  }
  else
  {
    v16 = operator new(v12 + 25);
    *(_QWORD *)(v16 + 8) = v12;
    *(_DWORD *)(v16 + 16) = 0;
    v14 = v16;
    v15 = (void *)(v16 + 24);
    if ( v12 == 1 )
    {
      result = (_QWORD *)*(unsigned __int8 *)(v4 + a3);
      *(_BYTE *)(v14 + 24) = (_BYTE)result;
      goto LABEL_16;
    }
  }
  result = memcpy(v15, v9, v12);
  v15 = result;
LABEL_16:
  if ( (__int64 *)v14 != &qword_6FD2E0 )
  {
    result = (_QWORD *)(v14 + v12);
    *(_QWORD *)v14 = v12;
    *(_BYTE *)(v14 + v12 + 24) = 0;
  }
  *v7 = v15;
  return result;
}

