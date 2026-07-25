/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468C5C
 * Mangled: _ZN5Caver5Scene12GetAllGroupsEPSt6vectorIN5boost13intrusive_ptrINS_16SceneObjectGroupEEESaIS5_EE
 * Demangled: Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *
 * Callers: 1
 *   0x00000000001F9FC0  Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *
 * Callees: 2
 *   0x00000000001F97B0  std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObjectGroup>*,std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>>>,boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 12
 *   insn=0x0000000000468C7C string=0x0000000000468C80 "a"
 *   insn=0x0000000000468C84 string=0x0000000000468C88 "?"
 *   insn=0x0000000000468C88 string=0x0000000000468C8C "@"
 *   insn=0x0000000000468C8C string=0x0000000000468C90 "H"
 *   insn=0x0000000000468C90 string=0x0000000000468C94 "("
 *   insn=0x0000000000468C98 string=0x0000000000468C9C "\t\t@"
 *   insn=0x0000000000468C98 string=0x0000000000468CA8 "( "
 *   insn=0x0000000000468C9C string=0x0000000000468CA0 ")"
 *   insn=0x0000000000468CA0 string=0x0000000000468CA4 "\t\t"
 *   insn=0x0000000000468CA8 string=0x0000000000468CAC "h"
 *   insn=0x0000000000468CB8 string=0x00000000001F97B0 "0'"
 *   insn=0x0000000000468CBC string=0x0000000000468CC0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::GetAllGroups(__int64 result, __int64 a2)
{
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 *v5; // x1
  __int64 *v6; // x2
  __int64 v7; // x8

  v2 = *(_QWORD *)(result + 248);
  v3 = result + 232;
  if ( result + 232 != v2 )
  {
    do
    {
      v5 = *(__int64 **)(a2 + 8);
      v6 = (__int64 *)(v2 + 40);
      if ( v5 == *(__int64 **)(a2 + 16) )
      {
        std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>>::_M_insert_aux();
      }
      else
      {
        v7 = *v6;
        *v5 = *v6;
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        *(_QWORD *)(a2 + 8) = v5 + 1;
      }
      result = sub_54C640(v2);
      v2 = result;
    }
    while ( v3 != result );
  }
  return result;
}

