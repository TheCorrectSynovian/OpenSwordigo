/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E9D8
 * Mangled: _ZN5Caver23CharControllerComponent14CanDoSomethingEv
 * Demangled: Caver::CharControllerComponent::CanDoSomething(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 11
 *   insn=0x000000000025E9E4 string=0x000000000025E9E8 "("
 *   insn=0x000000000025E9E8 string=0x000000000025E9EC "`"
 *   insn=0x000000000025E9E8 string=0x0000000000583944 "\n"
 *   insn=0x000000000025E9F4 string=0x000000000025E9F8 "m"
 *   insn=0x000000000025E9F8 string=0x000000000025EA04 "hB@"
 *   insn=0x000000000025E9FC string=0x000000000025EA00 "\n"
 *   insn=0x000000000025EA08 string=0x000000000025EA0C "`"
 *   insn=0x000000000025EA08 string=0x000000000025EA1C "UD9"
 *   insn=0x000000000025EA10 string=0x000000000025EA14 "3d"
 *   insn=0x000000000025EA14 string=0x000000000025EA18 "hB@"
 *   insn=0x000000000025EA14 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanDoSomething(Caver::CharControllerComponent *this)
{
  __int64 v3; // x8

  if ( *((float *)this + 190) > 0.01 )
    return 0;
  v3 = *((_QWORD *)this + 16);
  if ( !v3 )
  {
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
    v3 = *((_QWORD *)this + 16);
  }
  return *(_BYTE *)(v3 + 277) == 0;
}

