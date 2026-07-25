/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1898
 * Mangled: _ZNK5Caver33WalkingMonsterControllerComponent5CloneEv
 * Demangled: Caver::WalkingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A1760  Caver::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6CF0  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002A1924  Caver::WalkingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002A18A8 string=0x00000000002A18AC "MO"
 *   insn=0x00000000002A18AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A18B4 string=0x00000000001F6CF0 "0'"
 *   insn=0x00000000002A18C0 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002A18C4 string=0x00000000002A18C8 "i"
 *   insn=0x00000000002A18C8 string=0x00000000002A18CC "?"
 *   insn=0x00000000002A18D0 string=0x00000000002A18D4 "`r@"
 *   insn=0x00000000002A18D4 string=0x00000000002A18D8 "h"
 *   insn=0x00000000002A18E0 string=0x00000000002A18E4 "@"
 *   insn=0x00000000002A18E4 string=0x00000000002A18E8 ""
 *   insn=0x00000000002A18E8 string=0x00000000002A18EC ""
 *   insn=0x00000000002A18F0 string=0x00000000002A18F4 ""
 *   insn=0x00000000002A18F4 string=0x00000000002A18F8 ""
 *   insn=0x00000000002A1914 string=0x00000000002A1918 "fV"
 *   insn=0x00000000002A1918 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::Clone(Caver::WalkingMonsterControllerComponent *this)
{
  __int64 v2; // x19
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8

  v2 = operator new(0xF0u);
  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent((Caver::WalkingMonsterControllerComponent *)v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  v3 = *((_DWORD *)this + 54);
  if ( *(_DWORD *)(v2 + 216) != v3 )
  {
    v4 = *(_DWORD **)(v2 + 224);
    *(_DWORD *)(v2 + 216) = v3;
    *(_QWORD *)(v2 + 224) = 0;
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return v2;
}

