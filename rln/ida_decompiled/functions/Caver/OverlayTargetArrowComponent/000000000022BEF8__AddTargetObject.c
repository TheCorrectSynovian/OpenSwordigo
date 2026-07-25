/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BEF8
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent15AddTargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x00000000001FE5D0  Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000022BEF8 string=0x000000000022BEFC "\t"
 *   insn=0x000000000022BEFC string=0x000000000022BF00 ")"
 *   insn=0x000000000022BF04 string=0x000000000022BF08 "?"
 *   insn=0x000000000022BF0C string=0x000000000022BF10 ")"
 *   insn=0x000000000022BF10 string=0x000000000022BF14 "(\t@"
 *   insn=0x000000000022BF14 string=0x000000000022BF18 ""
 *   insn=0x000000000022BF18 string=0x000000000022BF1C "(\t"
 *   insn=0x000000000022BF30 string=0x00000000001F7F30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTargetArrowComponent::AddTargetObject(__int64 result, __int64 *a2)
{
  __int64 v2; // x9
  _QWORD *v3; // x1

  v2 = *a2;
  if ( *a2 )
  {
    v3 = *(_QWORD **)(result + 128);
    if ( v3 == *(_QWORD **)(result + 136) )
    {
      return std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux();
    }
    else
    {
      *v3 = v2;
      ++*(_DWORD *)(v2 + 8);
      *(_QWORD *)(result + 128) = v3 + 1;
    }
  }
  return result;
}

