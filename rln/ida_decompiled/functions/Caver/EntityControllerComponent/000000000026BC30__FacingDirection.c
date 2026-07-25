/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026BC30
 * Mangled: _ZN5Caver25EntityControllerComponent15FacingDirectionEv
 * Demangled: Caver::EntityControllerComponent::FacingDirection(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 4
 *   insn=0x000000000026BC3C string=0x000000000026BC40 "hB@"
 *   insn=0x000000000026BC44 string=0x000000000026BC48 "`"
 *   insn=0x000000000026BC50 string=0x000000000026BC54 "hB@"
 *   insn=0x000000000026BC50 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::FacingDirection(Caver::EntityControllerComponent *this)
{
  __int64 v2; // x8

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    return *(unsigned int *)(v2 + 112);
  Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    return *(unsigned int *)(v2 + 112);
  else
    return 0;
}

