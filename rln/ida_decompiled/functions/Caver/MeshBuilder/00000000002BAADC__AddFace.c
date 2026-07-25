/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BAADC
 * Mangled: _ZN5Caver11MeshBuilder7AddFaceEiii
 * Demangled: Caver::MeshBuilder::AddFace(int,int,int)
 *
 * Callers: 1
 *   0x00000000001F8200  Caver::MeshBuilder::AddFace(int,int,int)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Referenced strings: 54
 *   insn=0x00000000002BAAEC string=0x00000000002BAAF0 "V"
 *   insn=0x00000000002BAB08 string=0x00000000002BAB0C "a&D"
 *   insn=0x00000000002BAB10 string=0x00000000002BAB14 "?"
 *   insn=0x00000000002BAB18 string=0x00000000002BAB1C "(D"
 *   insn=0x00000000002BAB18 string=0x00000000002BAB28 "`"
 *   insn=0x00000000002BAB1C string=0x00000000002BAB20 "a""
 *   insn=0x00000000002BAB24 string=0x00000000002BAB34 "h2@"
 *   insn=0x00000000002BAB2C string=0x00000000002BAB30 "\"
 *   insn=0x00000000002BAB30 string=0x00000000001FC4A0 "0'"
 *   insn=0x00000000002BAB38 string=0x00000000002BAB40 ""
 *   insn=0x00000000002BAB40 string=0x00000000002BAB44 "\t})"
 *   insn=0x00000000002BAB44 string=0x00000000002BAB48 "*"
 *   insn=0x00000000002BAB48 string=0x00000000002BAB4C ")"
 *   insn=0x00000000002BAB4C string=0x00000000002BAB50 ")"
 *   insn=0x00000000002BAB50 string=0x00000000002BAB54 ")"
 *   insn=0x00000000002BAB58 string=0x00000000002BAB5C "h2"
 *   insn=0x00000000002BAB60 string=0x00000000002BAB64 "hR@"
 *   insn=0x00000000002BAB64 string=0x00000000002BAB68 ""
 *   insn=0x00000000002BAB68 string=0x00000000002BAB6C "hR"
 *   insn=0x00000000002BAB70 string=0x00000000002BAB74 "a"D"
 *   insn=0x00000000002BAB74 string=0x00000000002BAB78 "?"
 *   insn=0x00000000002BAB7C string=0x00000000002BAB80 "5D"
 *   insn=0x00000000002BAB7C string=0x00000000002BAB8C "`"
 *   insn=0x00000000002BAB80 string=0x00000000002BAB84 "a""
 *   insn=0x00000000002BAB88 string=0x00000000002BAB98 "h2@"
 *   insn=0x00000000002BAB90 string=0x00000000002BAB94 "C"
 *   insn=0x00000000002BAB9C string=0x00000000002BABA4 ""
 *   insn=0x00000000002BABA4 string=0x00000000002BABA8 "\t})"
 *   insn=0x00000000002BABA8 string=0x00000000002BABAC "*"
 *   insn=0x00000000002BABAC string=0x00000000002BABB0 ")"
 *   insn=0x00000000002BABB0 string=0x00000000002BABB4 ")"
 *   insn=0x00000000002BABB4 string=0x00000000002BABB8 ")"
 *   insn=0x00000000002BABBC string=0x00000000002BABC0 "h2"
 *   insn=0x00000000002BABC4 string=0x00000000002BABC8 "hR@"
 *   insn=0x00000000002BABC8 string=0x00000000002BABCC ""
 *   insn=0x00000000002BABCC string=0x00000000002BABD0 "hR"
 *   insn=0x00000000002BABD4 string=0x00000000002BABD8 "a"D"
 *   insn=0x00000000002BABD8 string=0x00000000002BABDC "?"
 *   insn=0x00000000002BABE0 string=0x00000000002BABE4 "4D"
 *   insn=0x00000000002BABE0 string=0x00000000002BABF0 "`"
 *   insn=0x00000000002BABE4 string=0x00000000002BABE8 "a""
 *   insn=0x00000000002BABEC string=0x00000000002BABFC "h2@"
 *   insn=0x00000000002BABF4 string=0x00000000002BABF8 "*"
 *   insn=0x00000000002BAC00 string=0x00000000002BAC08 ""
 *   insn=0x00000000002BAC08 string=0x00000000002BAC0C "\t})"
 *   insn=0x00000000002BAC0C string=0x00000000002BAC10 "*"
 *   insn=0x00000000002BAC10 string=0x00000000002BAC14 ")"
 *   insn=0x00000000002BAC14 string=0x00000000002BAC18 ")"
 *   insn=0x00000000002BAC18 string=0x00000000002BAC1C ")"
 *   insn=0x00000000002BAC20 string=0x00000000002BAC24 "h2"
 *   insn=0x00000000002BAC28 string=0x00000000002BAC2C "hR@"
 *   insn=0x00000000002BAC2C string=0x00000000002BAC30 ""
 *   insn=0x00000000002BAC30 string=0x00000000002BAC34 "hR"
 *   insn=0x00000000002BAC5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::AddFace(__int64 this, int a2, int a3, int a4)
{
  __int64 v5; // x19
  _DWORD *v7; // x1
  int v9; // w8
  _DWORD *v10; // x1
  int v11; // w8
  _DWORD *v12; // x1
  int v13; // w8

  v5 = this;
  _ReadStatusReg(TPIDR_EL0);
  v7 = *(_DWORD **)(this + 64);
  if ( v7 == *(_DWORD **)(this + 72) )
  {
    this = std::vector<int>::_M_insert_aux((int)this + 56, v7);
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(this + 64) = v7 + 1;
  }
  v9 = *(_DWORD *)(v5 + 48) + 1;
  *(_DWORD *)(v5 + 48) = v9;
  if ( v9 == 3 * (v9 / 3) )
    ++*(_DWORD *)(v5 + 80);
  v10 = *(_DWORD **)(v5 + 64);
  if ( v10 == *(_DWORD **)(v5 + 72) )
  {
    this = std::vector<int>::_M_insert_aux((int)v5 + 56, v10);
  }
  else
  {
    *v10 = a3;
    *(_QWORD *)(v5 + 64) = v10 + 1;
  }
  v11 = *(_DWORD *)(v5 + 48) + 1;
  *(_DWORD *)(v5 + 48) = v11;
  if ( v11 == 3 * (v11 / 3) )
    ++*(_DWORD *)(v5 + 80);
  v12 = *(_DWORD **)(v5 + 64);
  if ( v12 == *(_DWORD **)(v5 + 72) )
  {
    this = std::vector<int>::_M_insert_aux((int)v5 + 56, v12);
  }
  else
  {
    *v12 = a4;
    *(_QWORD *)(v5 + 64) = v12 + 1;
  }
  v13 = *(_DWORD *)(v5 + 48) + 1;
  *(_DWORD *)(v5 + 48) = v13;
  if ( v13 == 3 * (v13 / 3) )
    ++*(_DWORD *)(v5 + 80);
  return this;
}

