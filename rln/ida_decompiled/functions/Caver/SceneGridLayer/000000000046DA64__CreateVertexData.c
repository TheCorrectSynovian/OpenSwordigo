/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046DA64
 * Mangled: _ZN5Caver14SceneGridLayer16CreateVertexDataEv
 * Demangled: Caver::SceneGridLayer::CreateVertexData(void)
 *
 * Callers: 1
 *   0x00000000001F8D70  Caver::SceneGridLayer::CreateVertexData(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202BB0  std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*,std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>>,Caver::Vector3 const&)
 *
 * Referenced strings: 58
 *   insn=0x000000000046DA78 string=0x000000000046DA7C "U"
 *   insn=0x000000000046DA9C string=0x000000000046DB6C "h*@"
 *   insn=0x000000000046DAA0 string=0x000000000046DAA4 ""
 *   insn=0x000000000046DAA8 string=0x000000000046DAB4 "a"
 *   insn=0x000000000046DAB4 string=0x000000000046DAB8 "b"
 *   insn=0x000000000046DAB8 string=0x000000000046DABC "`"
 *   insn=0x000000000046DABC string=0x000000000046DAC0 "i\n@"
 *   insn=0x000000000046DAC4 string=0x000000000046DAC8 "!$"
 *   insn=0x000000000046DAC8 string=0x000000000046DACC "B(#"
 *   insn=0x000000000046DACC string=0x000000000046DAD0 "\t(!"
 *   insn=0x000000000046DAD0 string=0x000000000046DAD4 "@("
 *   insn=0x000000000046DADC string=0x000000000046DAE0 "h2@"
 *   insn=0x000000000046DAE0 string=0x000000000046DAE4 "?"
 *   insn=0x000000000046DAE8 string=0x000000000046DAEC "!"
 *   insn=0x000000000046DAEC string=0x000000000046DAF0 ")"
 *   insn=0x000000000046DAF0 string=0x000000000046DAF4 ")0"
 *   insn=0x000000000046DAF4 string=0x000000000046DAF8 ")"
 *   insn=0x000000000046DAF8 string=0x000000000046DAFC "i."
 *   insn=0x000000000046DAFC string=0x000000000046DB00 "\t"
 *   insn=0x000000000046DB00 string=0x000000000046DB24 "b"
 *   insn=0x000000000046DB08 string=0x000000000046DB0C ")T"
 *   insn=0x000000000046DB0C string=0x000000000046DB10 "b"
 *   insn=0x000000000046DB10 string=0x000000000046DB14 "`"
 *   insn=0x000000000046DB14 string=0x000000000046DB18 "i"
 *   insn=0x000000000046DB24 string=0x000000000046DB28 "?"
 *   insn=0x000000000046DB2C string=0x000000000046DB30 "!(""
 *   insn=0x000000000046DB38 string=0x000000000046DB3C "(1"
 *   insn=0x000000000046DB3C string=0x000000000046DB40 "!%"
 *   insn=0x000000000046DB40 string=0x000000000046DB44 " \t"
 *   insn=0x000000000046DB44 string=0x000000000046DB48 "h."
 *   insn=0x000000000046DB4C string=0x000000000046DB60 "h.@"
 *   insn=0x000000000046DB64 string=0x000000000046DB68 "+"
 *   insn=0x000000000046DB68 string=0x000000000046DAAC "a.@"
 *   insn=0x000000000046DB74 string=0x000000000046DB78 ""
 *   insn=0x000000000046DB78 string=0x000000000046DB7C "`"
 *   insn=0x000000000046DB7C string=0x000000000046DB80 "a\n@-c\n@"
 *   insn=0x000000000046DB80 string=0x000000000046DB84 "c\n@"
 *   insn=0x000000000046DB88 string=0x000000000046DB8C "i"
 *   insn=0x000000000046DB94 string=0x000000000046DB98 "!(""
 *   insn=0x000000000046DB98 string=0x000000000046DB9C "i( "
 *   insn=0x000000000046DB9C string=0x000000000046DBA0 " ("
 *   insn=0x000000000046DBAC string=0x000000000046DBB0 "h"
 *   insn=0x000000000046DBB8 string=0x000000000046DBBC "\t"
 *   insn=0x000000000046DBBC string=0x000000000046DBC0 "\t"
 *   insn=0x000000000046DBC4 string=0x000000000046DBC8 "1"
 *   insn=0x000000000046DBC8 string=0x000000000046DBCC "!"
 *   insn=0x000000000046DBCC string=0x000000000046DBD0 "h."
 *   insn=0x000000000046DBD0 string=0x000000000046DBD4 "\n"
 *   insn=0x000000000046DBD4 string=0x000000000046DBFC "b"
 *   insn=0x000000000046DBE4 string=0x000000000046DBE8 "`\n@-a"
 *   insn=0x000000000046DBE8 string=0x000000000046DBEC "a"
 *   insn=0x000000000046DBEC string=0x000000000046DBF0 "h"
 *   insn=0x000000000046DC04 string=0x000000000046DC08 "!(""
 *   insn=0x000000000046DC10 string=0x000000000046DC14 "\t"
 *   insn=0x000000000046DC18 string=0x000000000046DC1C "1"
 *   insn=0x000000000046DC1C string=0x000000000046DC20 "h."
 *   insn=0x000000000046DC24 string=0x000000000046DC34 "h*@"
 *   insn=0x000000000046DC6C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::CreateVertexData(__int64 this)
{
  __int64 v1; // x19
  float *v2; // x1
  int v3; // w8
  int i; // w22
  float v5; // s9
  float v6; // s0
  float *v7; // x8
  float v8; // s1
  float *v9; // x9
  float v10; // s1
  int v11; // w22
  float v12; // w9
  float v13; // s9
  float v14; // s0
  float *v15; // x1
  float *v16; // x8
  float *v17; // x8
  float v18; // s1
  float v19; // s1

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  v2 = *(float **)(this + 80);
  v3 = *(_DWORD *)(this + 44);
  *(_QWORD *)(this + 88) = v2;
  if ( (v3 & 0x80000000) == 0 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *(float *)(v1 + 12) + (float)(*(float *)(v1 + 28) * (float)i);
      v6 = (float)(*(float *)v1 + *(float *)(v1 + 4)) * 0.5;
      v7 = *(float **)(v1 + 96);
      if ( v2 == v7 )
      {
        this = std::vector<Caver::Vector3>::_M_insert_aux();
        v8 = *(float *)(v1 + 8);
        v9 = *(float **)(v1 + 88);
        v7 = *(float **)(v1 + 96);
        v6 = (float)(*(float *)v1 + *(float *)(v1 + 4)) * 0.5;
      }
      else
      {
        v8 = *(float *)(v1 + 8);
        *v2 = v8;
        v9 = v2 + 3;
        v2[1] = v5;
        v2[2] = v6;
        *(_QWORD *)(v1 + 88) = v2 + 3;
      }
      v10 = v8 + *(float *)(v1 + 16);
      if ( v9 == v7 )
      {
        this = std::vector<Caver::Vector3>::_M_insert_aux();
      }
      else
      {
        *v9 = v10;
        v9[1] = v5;
        v9[2] = v6;
        *(_QWORD *)(v1 + 88) = v9 + 3;
      }
      if ( i >= *(_DWORD *)(v1 + 44) )
        break;
      v2 = *(float **)(v1 + 88);
    }
  }
  if ( (*(_DWORD *)(v1 + 40) & 0x80000000) == 0 )
  {
    v11 = -1;
    do
    {
      v12 = *(float *)(v1 + 12);
      v13 = *(float *)(v1 + 8) + (float)(*(float *)(v1 + 24) * (float)(v11 + 1));
      v14 = (float)(*(float *)v1 + *(float *)(v1 + 4)) * 0.5;
      v16 = *(float **)(v1 + 88);
      v15 = *(float **)(v1 + 96);
      if ( v16 == v15 )
      {
        this = std::vector<Caver::Vector3>::_M_insert_aux();
        v18 = *(float *)(v1 + 12);
        v17 = *(float **)(v1 + 88);
        v15 = *(float **)(v1 + 96);
        v14 = (float)(*(float *)v1 + *(float *)(v1 + 4)) * 0.5;
      }
      else
      {
        *v16 = v13;
        v16[1] = v12;
        v16[2] = v14;
        v17 = v16 + 3;
        v18 = v12;
        *(_QWORD *)(v1 + 88) = v17;
      }
      v19 = v18 + *(float *)(v1 + 20);
      if ( v17 == v15 )
      {
        this = std::vector<Caver::Vector3>::_M_insert_aux();
      }
      else
      {
        *v17 = v13;
        v17[1] = v19;
        v17[2] = v14;
        *(_QWORD *)(v1 + 88) = v17 + 3;
      }
      ++v11;
    }
    while ( v11 < *(_DWORD *)(v1 + 40) );
  }
  return this;
}

