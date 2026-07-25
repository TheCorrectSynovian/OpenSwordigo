/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DBC4
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent7PrepareEv
 * Demangled: Caver::SkellyMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB040  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *
 * Referenced strings: 12
 *   insn=0x000000000029DBD0 string=0x000000000029DBD4 "hr@"
 *   insn=0x000000000029DBD8 string=0x000000000029DBDC "`B"
 *   insn=0x000000000029DBE4 string=0x000000000029DBE8 "hr@"
 *   insn=0x000000000029DBE4 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029DBF4 string=0x000000000029DBF8 "hr@"
 *   insn=0x000000000029DBF4 string=0x00000000001FB040 "0'"
 *   insn=0x000000000029DBF8 string=0x000000000029DBFC "h"
 *   insn=0x000000000029DBFC string=0x000000000029DC08 "tB"
 *   insn=0x000000000029DC04 string=0x000000000029DC34 "iB"
 *   insn=0x000000000029DC14 string=0x000000000029DC18 "hr@"
 *   insn=0x000000000029DC2C string=0x000000000029DC30 "hr@"
 *   insn=0x000000000029DC34 string=0x000000000029DC38 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkellyMonsterControllerComponent::Prepare(Caver::SkellyMonsterControllerComponent *this)
{
  __int64 result; // x0
  __int64 v3; // x8

  if ( *((_QWORD *)this + 28)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                   this),
        *((_QWORD *)this + 28)) )
  {
    result = Caver::SkellyMonsterControllerComponent::CreateWeapons(this);
    v3 = *((_QWORD *)this + 28);
    if ( v3 )
    {
      *(_BYTE *)(v3 + 581) = 0;
    }
    else
    {
      result = Caver::ComponentOutletBase::Connect(
                 (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                 this);
      v3 = *((_QWORD *)this + 28);
      *(_BYTE *)(v3 + 581) = 0;
      if ( !v3 )
      {
        result = Caver::ComponentOutletBase::Connect(
                   (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                   this);
        v3 = *((_QWORD *)this + 28);
      }
    }
    *((_DWORD *)this + 72) = *(_DWORD *)(v3 + 616);
  }
  return result;
}

