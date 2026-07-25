/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047474C
 * Mangled: _ZNK5Caver11SceneObject16GetAllComponentsEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 1
 *   0x00000000001F47D0  Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 11
 *   insn=0x0000000000474764 string=0x0000000000474768 "`"
 *   insn=0x000000000047476C string=0x0000000000474770 "?"
 *   insn=0x0000000000474770 string=0x0000000000474774 "@"
 *   insn=0x0000000000474774 string=0x0000000000474778 "h"
 *   insn=0x0000000000474778 string=0x000000000047477C "("
 *   insn=0x0000000000474780 string=0x0000000000474784 "\t\t@"
 *   insn=0x0000000000474780 string=0x0000000000474790 "( "
 *   insn=0x0000000000474784 string=0x0000000000474788 ")"
 *   insn=0x0000000000474788 string=0x000000000047478C "\t\t"
 *   insn=0x0000000000474798 string=0x00000000004747A8 "s""
 *   insn=0x00000000004747A4 string=0x00000000001F3A10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetAllComponents(__int64 result, __int64 a2)
{
  __int64 *v2; // x19
  __int64 *i; // x21
  __int64 *v5; // x1
  __int64 v6; // x8

  v2 = *(__int64 **)(result + 192);
  for ( i = *(__int64 **)(result + 200); i != v2; ++v2 )
  {
    v5 = *(__int64 **)(a2 + 8);
    if ( v5 == *(__int64 **)(a2 + 16) )
    {
      result = std::vector<boost::intrusive_ptr<Caver::Component>>::_M_insert_aux();
    }
    else
    {
      v6 = *v2;
      *v5 = *v2;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      *(_QWORD *)(a2 + 8) = v5 + 1;
    }
  }
  return result;
}

