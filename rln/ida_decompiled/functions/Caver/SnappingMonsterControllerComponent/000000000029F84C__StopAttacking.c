/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F84C
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent13StopAttackingEv
 * Demangled: Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *
 * Callers: 1
 *   0x0000000000202F50  Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *
 * Callees: 2
 *   0x00000000001F4290  Caver::SoundEffectComponent::CancelDelayed(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 16
 *   insn=0x000000000029F858 string=0x000000000029F85C "`"
 *   insn=0x000000000029F860 string=0x000000000029F864 "`"
 *   insn=0x000000000029F860 string=0x000000000029F874 ""
 *   insn=0x000000000029F86C string=0x000000000029F870 "`"
 *   insn=0x000000000029F86C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029F874 string=0x000000000029F878 ""
 *   insn=0x000000000029F884 string=0x000000000029F888 "`"
 *   insn=0x000000000029F88C string=0x000000000029F890 "`"
 *   insn=0x000000000029F88C string=0x000000000029F8A0 ""
 *   insn=0x000000000029F898 string=0x000000000029F89C "`"
 *   insn=0x000000000029F8A0 string=0x000000000029F8A4 ""
 *   insn=0x000000000029F8AC string=0x000000000029F8B0 "`"
 *   insn=0x000000000029F8BC string=0x000000000029F8C0 "`"
 *   insn=0x000000000029F8C8 string=0x000000000029F8CC "`"
 *   insn=0x000000000029F8D8 string=0x000000000029F8DC "mR"
 *   insn=0x000000000029F8DC string=0x00000000001F4290 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SnappingMonsterControllerComponent::StopAttacking(
        Caver::SnappingMonsterControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  Caver::SoundEffectComponent *v4; // x0

  v2 = *((_QWORD *)this + 34);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 256), this);
    v2 = *((_QWORD *)this + 34);
  }
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2) + 44) = 1;
  v3 = *((_QWORD *)this + 34);
  if ( !v3 )
  {
    Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 256), this);
    v3 = *((_QWORD *)this + 34);
  }
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) + 45) = 1;
  v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 40);
  *((_BYTE *)this + 328) = 0;
  *((_DWORD *)this + 83) = 0;
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 304), this),
        (v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 40)) != 0) )
  {
    Caver::SoundEffectComponent::CancelDelayed(v4);
  }
}

