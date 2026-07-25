/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025D00C
 * Mangled: _ZN5Caver23CharControllerComponent8CanSwingEv
 * Demangled: Caver::CharControllerComponent::CanSwing(void)
 *
 * Callers: 1
 *   0x00000000001FEEF0  Caver::CharControllerComponent::CanSwing(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 13
 *   insn=0x000000000025D018 string=0x000000000025D01C "("
 *   insn=0x000000000025D01C string=0x000000000025D020 "`"
 *   insn=0x000000000025D01C string=0x0000000000583944 "\n"
 *   insn=0x000000000025D02C string=0x000000000025D030 "hB@"
 *   insn=0x000000000025D034 string=0x000000000025D038 "UD9("
 *   insn=0x000000000025D034 string=0x000000000025D048 "`"
 *   insn=0x000000000025D038 string=0x000000000025D03C "("
 *   insn=0x000000000025D03C string=0x000000000025D060 "h"G9"
 *   insn=0x000000000025D040 string=0x000000000025D044 "\n"
 *   insn=0x000000000025D050 string=0x000000000025D054 "hB@"
 *   insn=0x000000000025D050 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025D054 string=0x000000000025D058 "UD9("
 *   insn=0x000000000025D058 string=0x000000000025D05C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharControllerComponent::CanSwing(Caver::CharControllerComponent *this)
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
  return *((_BYTE *)this + 456) == 0;
}

