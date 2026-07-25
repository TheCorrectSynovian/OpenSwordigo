/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CCF4
 * Mangled: _ZN5Caver25EntityControllerComponent26ShouldReverseMoveAnimationEv
 * Demangled: Caver::EntityControllerComponent::ShouldReverseMoveAnimation(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 7
 *   insn=0x000000000026CD00 string=0x000000000026CD04 "hB@"
 *   insn=0x000000000026CD04 string=0x000000000026CD08 "t\nA"
 *   insn=0x000000000026CD0C string=0x000000000026CD10 "`"
 *   insn=0x000000000026CD0C string=0x000000000026CD20 "q@"
 *   insn=0x000000000026CD14 string=0x000000000026CD18 "r+"
 *   insn=0x000000000026CD18 string=0x000000000026CD1C "hB@"
 *   insn=0x000000000026CD18 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityControllerComponent::ShouldReverseMoveAnimation(Caver::EntityControllerComponent *this)
{
  __int64 v2; // x8
  int v3; // w20

  v2 = *((_QWORD *)this + 16);
  v3 = *((_DWORD *)this + 66);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
    v2 = *((_QWORD *)this + 16);
  }
  return v3 != *(_DWORD *)(v2 + 112);
}

