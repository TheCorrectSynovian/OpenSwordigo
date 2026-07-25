/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474844
 * Mangled: _ZNK5Caver11SceneObject21GetInstanceComponentsEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::SceneObject::GetInstanceComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 12
 *   insn=0x0000000000474860 string=0x0000000000474864 "h"
 *   insn=0x0000000000474864 string=0x0000000000474868 "\t"
 *   insn=0x000000000047486C string=0x00000000004748A8 "s""
 *   insn=0x0000000000474870 string=0x0000000000474874 "?"
 *   insn=0x0000000000474874 string=0x0000000000474878 " "
 *   insn=0x0000000000474878 string=0x000000000047487C "("
 *   insn=0x0000000000474880 string=0x0000000000474884 "\t\t@"
 *   insn=0x0000000000474880 string=0x0000000000474890 "( "
 *   insn=0x0000000000474884 string=0x0000000000474888 ")"
 *   insn=0x0000000000474888 string=0x000000000047488C "\t\t"
 *   insn=0x00000000004748A0 string=0x00000000004748A4 "["
 *   insn=0x00000000004748A4 string=0x00000000001F3A10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetInstanceComponents(__int64 result, __int64 a2)
{
  __int64 *v2; // x19
  __int64 *i; // x21
  __int64 v5; // x8
  _QWORD *v6; // x1

  v2 = *(__int64 **)(result + 192);
  for ( i = *(__int64 **)(result + 200); i != v2; ++v2 )
  {
    v5 = *v2;
    if ( !*(_BYTE *)(*v2 + 48) )
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

