/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002579D0
 * Mangled: _ZN5Caver27CharAnimControllerComponent13IsReadyToJumpEv
 * Demangled: Caver::CharAnimControllerComponent::IsReadyToJump(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 8
 *   insn=0x00000000002579DC string=0x00000000002579E0 "`~@"
 *   insn=0x00000000002579E4 string=0x00000000002579E8 "`"
 *   insn=0x00000000002579E4 string=0x00000000002579F8 ""
 *   insn=0x00000000002579EC string=0x00000000002579F0 "<"
 *   insn=0x00000000002579F0 string=0x00000000002579F4 "`~@"
 *   insn=0x00000000002579F0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002579F8 string=0x00000000002579FC ""
 *   insn=0x0000000000257A14 string=0x0000000000257A18 "   "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharAnimControllerComponent::IsReadyToJump(Caver::CharAnimControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  v2 = *((_QWORD *)this + 31);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 232), this);
    v2 = *((_QWORD *)this + 31);
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
  return *(float *)(v3 + 12) > (float)(*(float *)(v3 + 40) * 0.5);
}

