/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048BA8C
 * Mangled: _ZNSt3mapIjN5boost10shared_ptrIN5Caver16RenderingProgramEEESt4lessIjESaISt4pairIKjS4_EEEixERS8_
 * Demangled: std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *
 * Callers: 1
 *   0x00000000001F5310  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *
 * Callees: 7
 *   0x00000000001F5310  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200990  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000048BAA0 string=0x000000000048BAA4 "X"
 *   insn=0x000000000048BAA4 string=0x000000000048BAA8 ""
 *   insn=0x000000000048BAB8 string=0x000000000048BABC "H"
 *   insn=0x000000000048BABC string=0x000000000048BAC0 ")"
 *   insn=0x000000000048BAC4 string=0x000000000048BAC8 "\n!@"
 *   insn=0x000000000048BAC8 string=0x000000000048BACC "a"
 *   insn=0x000000000048BAD0 string=0x000000000048BAD4 "_"
 *   insn=0x000000000048BAD4 string=0x000000000048BAD8 "j1"
 *   insn=0x000000000048BAD8 string=0x000000000048BADC "s2"
 *   insn=0x000000000048BADC string=0x000000000048BAE0 "H"
 *   insn=0x000000000048BAE0 string=0x000000000048BAE4 "("
 *   insn=0x000000000048BAE8 string=0x000000000048BAEC " "
 *   insn=0x000000000048BAEC string=0x000000000048BAF0 "("
 *   insn=0x000000000048BAEC string=0x000000000048BB10 "("
 *   insn=0x000000000048BAF0 string=0x000000000048BAF4 "i"@"
 *   insn=0x000000000048BAFC string=0x000000000048BB00 ";"
 *   insn=0x000000000048BB00 string=0x000000000048BBEC ""
 *   insn=0x000000000048BB08 string=0x000000000048BB0C "!"
 *   insn=0x000000000048BB5C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048BB68 string=0x000000000048BB6C "i""
 *   insn=0x000000000048BB6C string=0x000000000048BB70 "j"
 *   insn=0x000000000048BB74 string=0x000000000048BB78 "\t"
 *   insn=0x000000000048BB78 string=0x000000000048BB7C ")"
 *   insn=0x000000000048BB7C string=0x000000000048BB80 "\t"
 *   insn=0x000000000048BB90 string=0x000000000048BB94 "C"
 *   insn=0x000000000048BB98 string=0x000000000048BB9C ""
 *   insn=0x000000000048BBA4 string=0x000000000048BBA8 "4"
 *   insn=0x000000000048BBAC string=0x000000000048BBB0 ""
 *   insn=0x000000000048BBBC string=0x000000000048BBC0 "\t@"
 *   insn=0x000000000048BBCC string=0x000000000048BBD0 ""
 *   insn=0x000000000048BBDC string=0x000000000048BBE0 "@"
 *   insn=0x000000000048BBF8 string=0x000000000048BBFC "`"
 *   insn=0x000000000048BC18 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048BC24 string=0x000000000048BC28 "4"
 *   insn=0x000000000048BC2C string=0x000000000048BC30 ""
 *   insn=0x000000000048BC3C string=0x000000000048BC40 "\t@"
 *   insn=0x000000000048BC4C string=0x000000000048BC50 ""
 *   insn=0x000000000048BC5C string=0x000000000048BC60 "@"
 *   insn=0x000000000048BC84 string=0x000000000048BC88 "T"
 *   insn=0x000000000048BCA4 string=0x000000000048BCA8 ""
 *   insn=0x000000000048BCA4 string=0x00000000001F5310 "P'"
 *   insn=0x000000000048BCA8 string=0x000000000048BCAC "h"
 *   insn=0x000000000048BCAC string=0x000000000048BCB0 ""
 *   insn=0x000000000048BCB0 string=0x000000000048BCB4 "h"
 *   insn=0x000000000048BCB8 string=0x000000000048BCBC "\t"
 *   insn=0x000000000048BCBC string=0x000000000048BCC0 ")"
 *   insn=0x000000000048BCC0 string=0x000000000048BCC4 "\t"
 *   insn=0x000000000048BCD4 string=0x000000000048BCE8 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<unsigned int,boost::shared_ptr<Caver::RenderingProgram>>::operator[](
        __int64 a1,
        unsigned int *a2)
{
  __int64 v3; // x21
  __int64 v4; // x8
  unsigned int v5; // w9
  __int64 v6; // x19
  unsigned int v7; // w10
  bool v8; // cf
  __int64 *v9; // x10
  unsigned int v10; // w8
  __int64 insert_hint_unique_pos; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL4 v14; // w23
  unsigned int v16; // [xsp+2Ch] [xbp-50h]

  v3 = a1 + 8;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_13;
  v5 = *a2;
  v6 = a1 + 8;
  do
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = v7 >= v5;
    if ( v7 >= v5 )
      v9 = (__int64 *)(v4 + 16);
    else
      v9 = (__int64 *)(v4 + 24);
    if ( v8 )
      v6 = v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( v6 == v3 )
  {
LABEL_13:
    v10 = *a2;
  }
  else
  {
    v10 = *a2;
    if ( *a2 >= *(_DWORD *)(v6 + 32) )
      return v6 + 40;
  }
  v16 = v10;
  insert_hint_unique_pos = std::_Rb_tree<unsigned int,std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos();
  v6 = insert_hint_unique_pos;
  v13 = v12;
  if ( v12 )
  {
    v14 = 1;
    if ( !insert_hint_unique_pos && v3 != v12 )
      v14 = v16 < *(_DWORD *)(v12 + 32);
    v6 = operator new(0x38u);
    *(_DWORD *)(v6 + 32) = v16;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    sub_54C8A0(v14, v6, v13, v3);
    ++*(_QWORD *)(a1 + 40);
  }
  return v6 + 40;
}

