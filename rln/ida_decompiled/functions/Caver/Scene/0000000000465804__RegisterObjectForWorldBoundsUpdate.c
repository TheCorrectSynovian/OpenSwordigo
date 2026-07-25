/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000465804
 * Mangled: _ZN5Caver5Scene34RegisterObjectForWorldBoundsUpdateERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001F4630  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 10
 *   insn=0x0000000000465804 string=0x0000000000465808 "\t"
 *   insn=0x0000000000465810 string=0x0000000000465814 "@"
 *   insn=0x0000000000465814 string=0x0000000000465818 ")"
 *   insn=0x0000000000465818 string=0x000000000046581C "\t"
 *   insn=0x0000000000465820 string=0x0000000000465824 "*\t@"
 *   insn=0x0000000000465820 string=0x0000000000465830 "!"
 *   insn=0x0000000000465824 string=0x0000000000465828 "J"
 *   insn=0x0000000000465828 string=0x000000000046582C "*\t"
 *   insn=0x0000000000465830 string=0x0000000000465834 ""
 *   insn=0x0000000000465848 string=0x00000000001F7F30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::RegisterObjectForWorldBoundsUpdate(__int64 result, __int64 *a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9

  v2 = *(__int64 **)(result + 840);
  if ( v2 == *(__int64 **)(result + 848) )
    return std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux();
  v3 = *a2;
  *v2 = *a2;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *(_QWORD *)(result + 840) = v2 + 1;
  return result;
}

