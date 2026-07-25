/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002574F0
 * Mangled: _ZN5Caver27CharAnimControllerComponent11StartMovingEv
 * Demangled: Caver::CharAnimControllerComponent::StartMoving(void)
 *
 * Callers: 1
 *   0x00000000001F8CF0  Caver::CharAnimControllerComponent::StartMoving(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 26
 *   insn=0x0000000000257500 string=0x0000000000257504 "h"
 *   insn=0x0000000000257508 string=0x000000000025750C "`r@"
 *   insn=0x0000000000257510 string=0x0000000000257514 "`B"
 *   insn=0x0000000000257510 string=0x0000000000257528 ""
 *   insn=0x0000000000257518 string=0x000000000025751C "q"
 *   insn=0x000000000025751C string=0x0000000000257520 "`r@"
 *   insn=0x000000000025751C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000257520 string=0x0000000000257524 "@"
 *   insn=0x0000000000257524 string=0x00000000002575AC "h"
 *   insn=0x0000000000257528 string=0x000000000025752C ""
 *   insn=0x0000000000257534 string=0x0000000000257538 "`r@"
 *   insn=0x000000000025753C string=0x0000000000257540 "uB"
 *   insn=0x000000000025753C string=0x0000000000257558 ""
 *   insn=0x0000000000257548 string=0x000000000025754C "e"
 *   insn=0x000000000025754C string=0x0000000000257550 "`r@"
 *   insn=0x0000000000257550 string=0x0000000000257554 " "
 *   insn=0x0000000000257558 string=0x000000000025755C ""
 *   insn=0x0000000000257560 string=0x0000000000257564 "hr@"
 *   insn=0x0000000000257568 string=0x000000000025756C ""
 *   insn=0x000000000025756C string=0x0000000000257570 "uB"
 *   insn=0x000000000025756C string=0x000000000025758C "\t"
 *   insn=0x0000000000257580 string=0x0000000000257584 "W"
 *   insn=0x0000000000257584 string=0x0000000000257588 "hr@"
 *   insn=0x0000000000257590 string=0x0000000000257594 ")"
 *   insn=0x0000000000257594 string=0x0000000000257598 " "
 *   insn=0x00000000002575B0 string=0x00000000002575B4 "\tY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::CharAnimControllerComponent::StartMoving(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x0
  Caver::ComponentOutletBase *v3; // x21
  __int64 v4; // x0
  _QWORD *v5; // x8
  __int64 v6; // x20

  v1 = this;
  if ( this[41] )
  {
    this = (_QWORD *)this[28];
    if ( !this )
    {
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 26), (const Caver::Component *)v1);
      this = (_QWORD *)v1[28];
      if ( !this )
        goto LABEL_12;
    }
    this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*this + 264LL))(this);
    if ( !this )
      goto LABEL_12;
    v2 = v1[28];
    if ( v2
      || (v3 = (Caver::ComponentOutletBase *)(v1 + 26),
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 26), (const Caver::Component *)v1),
          (v2 = v1[28]) != 0) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
      v5 = (_QWORD *)v1[28];
      v6 = v4;
      if ( v5 )
      {
LABEL_11:
        this = (*(_QWORD *(__fastcall **)(_QWORD *__return_ptr, _QWORD *))(*v5 + 264LL))(v5, v5);
        *(float *)(v6 + 12) = *((float *)this + 10) * 0.25;
LABEL_12:
        *(_WORD *)(v1[41] + 44LL) = 256;
        return this;
      }
      v3 = (Caver::ComponentOutletBase *)(v1 + 26);
    }
    else
    {
      v6 = 0;
    }
    Caver::ComponentOutletBase::Connect(v3, (const Caver::Component *)v1);
    v5 = (_QWORD *)v1[28];
    goto LABEL_11;
  }
  return this;
}

