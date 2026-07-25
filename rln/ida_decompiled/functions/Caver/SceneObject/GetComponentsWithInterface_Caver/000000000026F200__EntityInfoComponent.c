/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F200
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_19EntityInfoComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Callers: 2
 *   0x00000000001F92A0  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F90C0  Caver::GameData::EntityDamageMultiplierAtLevel(int)
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *   0x00000000001FE890  std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000026F214 string=0x000000000026F218 "V"
 *   insn=0x000000000026F240 string=0x000000000026F244 "h\n@"
 *   insn=0x000000000026F240 string=0x000000000026F250 "h"
 *   insn=0x000000000026F244 string=0x000000000026F248 ""
 *   insn=0x000000000026F248 string=0x000000000026F24C "h\n"
 *   insn=0x000000000026F250 string=0x000000000026F254 "Q@"
 *   insn=0x000000000026F264 string=0x000000000026F298 "h\n@"
 *   insn=0x000000000026F26C string=0x000000000026F270 "?"
 *   insn=0x000000000026F274 string=0x000000000026F278 "3"
 *   insn=0x000000000026F27C string=0x000000000026F280 "!"
 *   insn=0x000000000026F298 string=0x000000000026F29C ""
 *   insn=0x000000000026F29C string=0x000000000026F2A0 "h\n"
 *   insn=0x000000000026F2A4 string=0x000000000026F2A8 "h"
 *   insn=0x000000000026F2AC string=0x000000000026F2B0 ""
 *   insn=0x000000000026F2EC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026F2F0 string=0x000000000026F2F4 "h\n@"
 *   insn=0x000000000026F2F8 string=0x000000000026F2FC ""
 *   insn=0x000000000026F2FC string=0x000000000026F300 "h\n"
 *   insn=0x000000000026F304 string=0x000000000026F308 "h"
 *   insn=0x000000000026F308 string=0x000000000026F30C ""
 *   insn=0x000000000026F318 string=0x000000000026F31C "jI"
 *   insn=0x000000000026F31C string=0x000000000026F320 "|"
 *   insn=0x000000000026F344 string=0x000000000026F348 "V"
 *   insn=0x000000000026F34C string=0x000000000026F350 "!(B"
 *   insn=0x000000000026F350 string=0x000000000021C13C "@&"
 *   insn=0x000000000026F368 string=0x000000000026F36C "a"
 *   insn=0x000000000026F36C string=0x000000000026F370 ""
 *   insn=0x000000000026F370 string=0x000000000026F374 "7"
 *   insn=0x000000000026F374 string=0x00000000001FCF90 "0'"
 *   insn=0x000000000026F37C string=0x000000000026F380 ""
 *   insn=0x000000000026F384 string=0x000000000026F388 "i"
 *   insn=0x000000000026F388 string=0x000000000026F38C "}"
 *   insn=0x000000000026F394 string=0x000000000026F398 "!hF"
 *   insn=0x000000000026F398 string=0x000000000021C148 "@&"
 *   insn=0x000000000026F3A4 string=0x000000000026F3A8 "T"
 *   insn=0x000000000026F3AC string=0x000000000026F3B0 "a"
 *   insn=0x000000000026F3B0 string=0x000000000026F3B4 "C'"
 *   insn=0x000000000026F3B4 string=0x00000000001F90C0 "0'"
 *   insn=0x000000000026F3B8 string=0x000000000026F3BC "!"
 *   insn=0x000000000026F3BC string=0x000000000026F3C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(
        __int64 result,
        __int64 a2)
{
  _DWORD **v3; // x23
  _DWORD **i; // x24
  _DWORD *v5; // x19
  _QWORD *v6; // x1
  int v7; // w8

  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_DWORD ***)(result + 192);
  for ( i = *(_DWORD ***)(result + 200); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( *v3 )
      ++v5[2];
    result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD (*)(Caver::EntityInfoComponent *__hidden)))(*(_QWORD *)v5 + 160LL))(
               v5,
               Caver::EntityInfoComponent::Interface);
    if ( (result & 1) != 0 )
    {
      v6 = *(_QWORD **)(a2 + 8);
      if ( v6 == *(_QWORD **)(a2 + 16) )
      {
        result = std::vector<Caver::EntityInfoComponent *>::_M_insert_aux(a2, v6);
      }
      else
      {
        *v6 = v5;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v7 = v5[2] - 1;
    v5[2] = v7;
    if ( !v7 )
      result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}

