/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299B44
 * Mangled: _ZN5Caver26MonsterControllerComponent16FindNearestEnemyEv
 * Demangled: Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *
 * Callers: 1
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *
 * Callees: 2
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x000000000026E668  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Referenced strings: 15
 *   insn=0x0000000000299B48 string=0x0000000000299B4C ""
 *   insn=0x0000000000299B4C string=0x0000000000299B50 "a""
 *   insn=0x0000000000299B50 string=0x0000000000299B54 ""
 *   insn=0x0000000000299B54 string=0x0000000000299B58 "!"
 *   insn=0x0000000000299B5C string=0x0000000000299B60 ""
 *   insn=0x0000000000299B60 string=0x0000000000299B64 "$@"
 *   insn=0x0000000000299B64 string=0x0000000000299B68 "?"
 *   insn=0x0000000000299B6C string=0x0000000000299B70 ""
 *   insn=0x0000000000299B6C string=0x0000000000299B80 "\n"
 *   insn=0x0000000000299B70 string=0x0000000000299B8C "?"
 *   insn=0x0000000000299B74 string=0x0000000000299B78 "?"
 *   insn=0x0000000000299B80 string=0x0000000000299B84 "J"
 *   insn=0x0000000000299B84 string=0x0000000000299B88 "j"
 *   insn=0x0000000000299B88 string=0x0000000000299B74 "!"
 *   insn=0x0000000000299B90 string=0x0000000000299B94 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterControllerComponent::FindNearestEnemy(Caver::MonsterControllerComponent *this)
{
  __int64 *v1; // x0
  __int64 v2; // x8
  __int64 v3; // x9

  v1 = (__int64 *)Caver::ComponentManager::ComponentCollectionForInterface(
                    (Caver::ComponentManager *)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 384LL),
                    (__int64)Caver::HeroEntityComponent::Interface);
  v2 = *v1;
  v3 = v1[1];
  if ( v3 != *v1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)v2 + 40LL) )
        break;
      v2 += 8;
    }
    while ( v3 != v2 );
  }
  if ( v3 == v2 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)v2 + 40LL);
}

