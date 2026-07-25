/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025EA34
 * Mangled: _ZN5Caver23CharControllerComponent7CanJumpEv
 * Demangled: Caver::CharControllerComponent::CanJump(void)
 *
 * Callers: 1
 *   0x00000000001F84E0  Caver::CharControllerComponent::CanJump(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 13
 *   insn=0x000000000025EA40 string=0x000000000025EA44 "("
 *   insn=0x000000000025EA44 string=0x000000000025EA48 "`"
 *   insn=0x000000000025EA44 string=0x0000000000583944 "\n"
 *   insn=0x000000000025EA54 string=0x000000000025EA58 "hB@"
 *   insn=0x000000000025EA5C string=0x000000000025EA60 "UD9("
 *   insn=0x000000000025EA5C string=0x000000000025EA70 "`"
 *   insn=0x000000000025EA60 string=0x000000000025EA64 "("
 *   insn=0x000000000025EA64 string=0x000000000025EA88 "h"
 *   insn=0x000000000025EA68 string=0x000000000025EA6C "\n"
 *   insn=0x000000000025EA78 string=0x000000000025EA7C "hB@"
 *   insn=0x000000000025EA78 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025EA7C string=0x000000000025EA80 "UD9("
 *   insn=0x000000000025EA80 string=0x000000000025EA84 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanJump(Caver::CharControllerComponent *this)
{
  __int64 v2; // x8

  if ( *((float *)this + 190) > 0.01 )
    return 0;
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 277) )
      return 0;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
    if ( *(_BYTE *)(*((_QWORD *)this + 16) + 277LL) )
      return 0;
  }
  return *((_BYTE *)this + 748) == 0;
}

