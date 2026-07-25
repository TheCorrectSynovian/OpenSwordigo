/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044F994
 * Mangled: _ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_
 * Demangled: std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *
 * Callers: 1
 *   0x00000000001FFC60  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE770  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 24
 *   insn=0x000000000044F9A8 string=0x000000000044F9AC "X"
 *   insn=0x000000000044F9AC string=0x000000000044F9B0 ""
 *   insn=0x000000000044F9B4 string=0x000000000044F9B8 "t""
 *   insn=0x000000000044F9BC string=0x000000000044F9C0 "h\n@"
 *   insn=0x000000000044F9C0 string=0x000000000044F9C4 "H"
 *   insn=0x000000000044F9C4 string=0x000000000044F9C8 ")"
 *   insn=0x000000000044F9CC string=0x000000000044F9D0 "\n!@"
 *   insn=0x000000000044F9D0 string=0x000000000044F9D4 "a"
 *   insn=0x000000000044F9D8 string=0x000000000044F9DC "_"
 *   insn=0x000000000044F9DC string=0x000000000044F9E0 "j"
 *   insn=0x000000000044F9E4 string=0x000000000044F9E8 "H"
 *   insn=0x000000000044F9E8 string=0x000000000044F9EC "("
 *   insn=0x000000000044F9F0 string=0x000000000044F9F4 " "
 *   insn=0x000000000044F9F4 string=0x000000000044F9F8 "("
 *   insn=0x000000000044F9F4 string=0x000000000044FA18 "("
 *   insn=0x000000000044FA04 string=0x000000000044FA08 """
 *   insn=0x000000000044FA08 string=0x000000000044FA90 ""
 *   insn=0x000000000044FA10 string=0x000000000044FA14 "!"
 *   insn=0x000000000044FA28 string=0x000000000044FA2C "Q"
 *   insn=0x000000000044FA60 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044FA80 string=0x000000000044FA84 "h"
 *   insn=0x000000000044FA84 string=0x000000000044FA88 ""
 *   insn=0x000000000044FA88 string=0x000000000044FA8C "h"
 *   insn=0x000000000044FABC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<int,int>::operator[](__int64 a1, unsigned int *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  int v5; // w9
  __int64 v6; // x21
  int v7; // w10
  bool v8; // cc
  __int64 *v9; // x10
  unsigned int v10; // w8
  __int64 insert_hint_unique_pos; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL4 v14; // w23
  __int64 v16; // [xsp+0h] [xbp-40h]

  v3 = a1 + 8;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_12;
  v5 = *a2;
  v6 = a1 + 8;
  do
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = v7 < v5;
    if ( v7 >= v5 )
      v9 = (__int64 *)(v4 + 16);
    else
      v9 = (__int64 *)(v4 + 24);
    if ( !v8 )
      v6 = v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( v6 == v3 )
  {
LABEL_12:
    v10 = *a2;
  }
  else
  {
    v10 = *a2;
    if ( (signed int)*a2 >= *(_DWORD *)(v6 + 32) )
      return v6 + 36;
  }
  v16 = v10;
  insert_hint_unique_pos = std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos();
  v6 = insert_hint_unique_pos;
  v13 = v12;
  if ( v12 )
  {
    v14 = 1;
    if ( !insert_hint_unique_pos && v3 != v12 )
      v14 = (int)v16 < *(_DWORD *)(v12 + 32);
    v6 = operator new(0x28u);
    *(_QWORD *)(v6 + 32) = v16;
    sub_54C8A0(v14, v6, v13, v3);
    ++*(_QWORD *)(a1 + 40);
  }
  return v6 + 36;
}

