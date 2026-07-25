/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002575C8
 * Mangled: _ZN5Caver27CharAnimControllerComponent10StopMovingEv
 * Demangled: Caver::CharAnimControllerComponent::StopMoving(void)
 *
 * Callers: 1
 *   0x0000000000203780  Caver::CharAnimControllerComponent::StopMoving(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 19
 *   insn=0x00000000002575D4 string=0x00000000002575D8 "h"
 *   insn=0x00000000002575D8 string=0x00000000002575DC "("
 *   insn=0x00000000002575DC string=0x00000000002575E0 "`f@"
 *   insn=0x00000000002575E4 string=0x00000000002575E8 "`"
 *   insn=0x00000000002575E4 string=0x00000000002575FC ""
 *   insn=0x00000000002575EC string=0x00000000002575F0 "<"
 *   insn=0x00000000002575F0 string=0x00000000002575F4 "`f@"
 *   insn=0x00000000002575F0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002575F8 string=0x0000000000257634 "h"
 *   insn=0x00000000002575FC string=0x0000000000257600 ""
 *   insn=0x0000000000257604 string=0x0000000000257608 "`"
 *   insn=0x0000000000257608 string=0x000000000025760C "`f@"
 *   insn=0x0000000000257610 string=0x0000000000257614 "`"
 *   insn=0x0000000000257610 string=0x0000000000257624 ""
 *   insn=0x0000000000257618 string=0x000000000025761C "1"
 *   insn=0x000000000025761C string=0x0000000000257620 "`f@"
 *   insn=0x0000000000257624 string=0x0000000000257628 ""
 *   insn=0x0000000000257634 string=0x0000000000257638 ") "
 *   insn=0x0000000000257638 string=0x000000000025763C "\tY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::StopMoving(__int64 this)
{
  _QWORD *v1; // x19
  __int64 v2; // x0

  v1 = (_QWORD *)this;
  if ( *(_QWORD *)(this + 328) )
  {
    this = *(_QWORD *)(this + 200);
    if ( this
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 23), (const Caver::Component *)v1),
          (this = v1[25]) != 0) )
    {
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 264LL))(this);
      if ( this )
      {
        v2 = v1[25];
        if ( !v2 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 23), (const Caver::Component *)v1);
          v2 = v1[25];
        }
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
        *(_DWORD *)(this + 12) = 0;
      }
    }
    *(_WORD *)(v1[41] + 44LL) = 257;
  }
  return this;
}

