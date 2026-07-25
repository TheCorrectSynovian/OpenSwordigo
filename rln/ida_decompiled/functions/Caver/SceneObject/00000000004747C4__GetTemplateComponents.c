/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004747C4
 * Mangled: _ZNK5Caver11SceneObject21GetTemplateComponentsEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::SceneObject::GetTemplateComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 12
 *   insn=0x00000000004747E0 string=0x00000000004747E4 "h"
 *   insn=0x00000000004747E4 string=0x00000000004747E8 "\t"
 *   insn=0x00000000004747EC string=0x0000000000474828 "s""
 *   insn=0x00000000004747F0 string=0x00000000004747F4 "?"
 *   insn=0x00000000004747F4 string=0x00000000004747F8 " "
 *   insn=0x00000000004747F8 string=0x00000000004747FC "("
 *   insn=0x0000000000474800 string=0x0000000000474804 "\t\t@"
 *   insn=0x0000000000474800 string=0x0000000000474810 "( "
 *   insn=0x0000000000474804 string=0x0000000000474808 ")"
 *   insn=0x0000000000474808 string=0x000000000047480C "\t\t"
 *   insn=0x0000000000474820 string=0x0000000000474824 "{"
 *   insn=0x0000000000474824 string=0x00000000001F3A10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetTemplateComponents(__int64 result, __int64 a2)
{
  __int64 *v2; // x19
  __int64 *i; // x21
  __int64 v5; // x8
  _QWORD *v6; // x1

  v2 = *(__int64 **)(result + 192);
  for ( i = *(__int64 **)(result + 200); i != v2; ++v2 )
  {
    v5 = *v2;
    if ( *(_BYTE *)(*v2 + 48) )
    {
      v6 = *(_QWORD **)(a2 + 8);
      if ( v6 == *(_QWORD **)(a2 + 16) )
      {
        result = std::vector<boost::intrusive_ptr<Caver::Component>>::_M_insert_aux();
      }
      else
      {
        *v6 = v5;
        if ( v5 )
          ++*(_DWORD *)(v5 + 8);
        *(_QWORD *)(a2 + 8) = v6 + 1;
      }
    }
  }
  return result;
}

