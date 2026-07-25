/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037E0F0
 * Mangled: _ZNSt3setISsSt4lessISsESaISsEE6insertERKSs
 * Demangled: std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Callers: 1
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F7300  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *   0x00000000001FABB0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 14
 *   insn=0x000000000037E10C string=0x00000000001FABB0 "0'"
 *   insn=0x000000000037E114 string=0x000000000037E118 "u"
 *   insn=0x000000000037E118 string=0x000000000037E11C "v""
 *   insn=0x000000000037E120 string=0x000000000037E124 "w"
 *   insn=0x000000000037E128 string=0x000000000037E12C " "
 *   insn=0x000000000037E134 string=0x000000000037E138 ""
 *   insn=0x000000000037E138 string=0x000000000037E13C ")"
 *   insn=0x000000000037E140 string=0x000000000037E144 """
 *   insn=0x000000000037E148 string=0x00000000001F5190 "P'"
 *   insn=0x000000000037E174 string=0x000000000037E178 "b"
 *   insn=0x000000000037E178 string=0x00000000001F7300 "0'"
 *   insn=0x000000000037E190 string=0x000000000037E194 "h"
 *   insn=0x000000000037E198 string=0x000000000037E19C ""
 *   insn=0x000000000037E19C string=0x000000000037E1A0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::set<std::string>::insert(__int64 a1, const void **a2)
{
  __int64 insert_unique_pos; // x0
  __int64 v5; // x1
  __int64 node; // x23
  __int64 v7; // x21
  unsigned int v8; // w24
  _QWORD *v9; // x1
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  __int64 v12; // x23
  size_t v13; // x2
  unsigned int v14; // w0

  insert_unique_pos = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos();
  node = insert_unique_pos;
  v7 = v5;
  if ( v5 )
  {
    v8 = 1;
    if ( !insert_unique_pos && a1 + 8 != v5 )
    {
      v9 = *(_QWORD **)(v5 + 32);
      v10 = *((_QWORD *)*a2 - 3);
      v11 = *(v9 - 3);
      v12 = v10 - v11;
      if ( v10 <= v11 )
        v13 = *((_QWORD *)*a2 - 3);
      else
        v13 = *(v9 - 3);
      v14 = memcmp(*a2, v9, v13);
      if ( !v14 )
      {
        v14 = 0x7FFFFFFF;
        if ( v12 <= 0x7FFFFFFF )
        {
          if ( v12 <= (__int64)0xFFFFFFFF80000000LL )
            v14 = 0x80000000;
          else
            v14 = v12;
        }
      }
      v8 = v14 >> 31;
    }
    node = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node();
    sub_54C8A0(v8, node, v7, a1 + 8);
    ++*(_QWORD *)(a1 + 40);
  }
  return node;
}

