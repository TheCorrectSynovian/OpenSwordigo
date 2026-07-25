/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B88A8
 * Mangled: _ZN5Caver19GroundMeshComponent12GetAllMeshesEPSt6vectorIN5boost10shared_ptrINS_12MeshInstanceEEESaIS5_EE
 * Demangled: Caver::GroundMeshComponent::GetAllMeshes(std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203730  std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MeshInstance>*,std::vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>>,boost::shared_ptr<Caver::MeshInstance> const&)
 *
 * Referenced strings: 19
 *   insn=0x00000000002B88C8 string=0x00000000002B88CC "a"
 *   insn=0x00000000002B88CC string=0x00000000002B88D0 "?"
 *   insn=0x00000000002B88D8 string=0x00000000002B88DC "("
 *   insn=0x00000000002B88E0 string=0x00000000002B88E4 "("
 *   insn=0x00000000002B88E8 string=0x00000000002B88EC "\t"
 *   insn=0x00000000002B88E8 string=0x00000000002B88F8 "(@"
 *   insn=0x00000000002B88EC string=0x00000000002B88F0 ")"
 *   insn=0x00000000002B88F0 string=0x00000000002B88F4 "\t"
 *   insn=0x00000000002B88F8 string=0x00000000002B88FC "h"
 *   insn=0x00000000002B8924 string=0x00000000002B8928 "a"
 *   insn=0x00000000002B8928 string=0x00000000002B892C "?"
 *   insn=0x00000000002B8934 string=0x00000000002B8938 "("
 *   insn=0x00000000002B893C string=0x00000000002B8940 "("
 *   insn=0x00000000002B8944 string=0x00000000002B8948 "\t"
 *   insn=0x00000000002B8944 string=0x00000000002B8954 "(@"
 *   insn=0x00000000002B8948 string=0x00000000002B894C ")"
 *   insn=0x00000000002B894C string=0x00000000002B8950 "\t"
 *   insn=0x00000000002B8954 string=0x00000000002B8958 "h"
 *   insn=0x00000000002B8964 string=0x00000000002B8968 "r+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::GetAllMeshes(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // x21
  _QWORD *i; // x22
  _QWORD *v6; // x1
  __int64 v7; // x8
  _QWORD *j; // x20
  _QWORD *v9; // x21
  _QWORD *v10; // x1
  __int64 v11; // x8

  v3 = (_QWORD *)a1[14];
  for ( i = (_QWORD *)a1[15]; i != v3; v3 += 2 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<boost::shared_ptr<Caver::MeshInstance>>::_M_insert_aux();
    }
    else
    {
      *v6 = *v3;
      v7 = v3[1];
      v6[1] = v7;
      if ( v7 )
        ++*(_QWORD *)(v7 + 8);
      *(_QWORD *)(a2 + 8) = v6 + 2;
    }
  }
  v9 = (_QWORD *)a1[17];
  for ( j = (_QWORD *)a1[18]; j != v9; v9 += 2 )
  {
    v10 = *(_QWORD **)(a2 + 8);
    if ( v10 == *(_QWORD **)(a2 + 16) )
    {
      std::vector<boost::shared_ptr<Caver::MeshInstance>>::_M_insert_aux();
    }
    else
    {
      *v10 = *v9;
      v11 = v9[1];
      v10[1] = v11;
      if ( v11 )
        ++*(_QWORD *)(v11 + 8);
      *(_QWORD *)(a2 + 8) = v10 + 2;
    }
  }
}

