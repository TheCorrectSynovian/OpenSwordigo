/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474690
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceElPSt6vectorIPNS_9ComponentESaIS3_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *
 * Callers: 1
 *   0x00000000001F95A0  Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB810  std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *
 * Referenced strings: 13
 *   insn=0x00000000004746A4 string=0x00000000004746A8 "U"
 *   insn=0x00000000004746CC string=0x00000000004746D0 ""
 *   insn=0x00000000004746D0 string=0x00000000004746D4 "Q@"
 *   insn=0x00000000004746E4 string=0x00000000004746E8 "a"
 *   insn=0x00000000004746E8 string=0x00000000004746EC "?"
 *   insn=0x00000000004746F0 string=0x00000000004746F4 "("
 *   insn=0x00000000004746F4 string=0x00000000004746F8 "h"
 *   insn=0x00000000004746F8 string=0x00000000004746FC "!"
 *   insn=0x00000000004746FC string=0x0000000000474700 "h"
 *   insn=0x000000000047470C string=0x0000000000474710 "@"
 *   insn=0x0000000000474710 string=0x00000000001FB810 "0'"
 *   insn=0x0000000000474718 string=0x000000000047471C "a"
 *   insn=0x0000000000474748 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetComponentsWithInterface(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD *v5; // x22
  _QWORD *i; // x23
  _QWORD *v7; // x1

  _ReadStatusReg(TPIDR_EL0);
  v5 = *(_QWORD **)(result + 192);
  for ( i = *(_QWORD **)(result + 200); i != v5; ++v5 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 160LL))(*v5, a2);
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD **)(a3 + 8);
      if ( v7 == *(_QWORD **)(a3 + 16) )
      {
        result = std::vector<Caver::Component *>::_M_insert_aux(a3, v7);
      }
      else
      {
        *v7 = *v5;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
    }
  }
  return result;
}

