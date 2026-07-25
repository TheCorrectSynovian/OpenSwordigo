/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F4E4
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent7PrepareEv
 * Demangled: Caver::SnappingMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA4E0  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000029F4F4 string=0x000000000029F4F8 "hB@"
 *   insn=0x000000000029F4F4 string=0x00000000001FA4E0 "0'"
 *   insn=0x000000000029F4FC string=0x000000000029F500 "`"
 *   insn=0x000000000029F504 string=0x000000000029F508 "va"
 *   insn=0x000000000029F508 string=0x000000000029F50C "hB@"
 *   insn=0x000000000029F508 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029F50C string=0x000000000029F510 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SnappingMonsterControllerComponent::Prepare(Caver::SnappingMonsterControllerComponent *this)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = Caver::SnappingMonsterControllerComponent::RegisterLibrary(this);
  v3 = *((_QWORD *)this + 16);
  if ( v3
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::SnappingMonsterControllerComponent *)((char *)this + 112),
                   this),
        (v3 = *((_QWORD *)this + 16)) != 0) )
  {
    *(_BYTE *)(v3 + 236) = 0;
  }
  return result;
}

