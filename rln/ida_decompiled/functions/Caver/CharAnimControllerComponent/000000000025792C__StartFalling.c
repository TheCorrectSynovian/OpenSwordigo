/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025792C
 * Mangled: _ZN5Caver27CharAnimControllerComponent12StartFallingEv
 * Demangled: Caver::CharAnimControllerComponent::StartFalling(void)
 *
 * Callers: 1
 *   0x00000000001FAE40  Caver::CharAnimControllerComponent::StartFalling(void)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 20
 *   insn=0x0000000000257938 string=0x000000000025793C "h"
 *   insn=0x0000000000257940 string=0x0000000000257944 "`"
 *   insn=0x0000000000257948 string=0x000000000025794C "`b"
 *   insn=0x0000000000257948 string=0x0000000000257960 ""
 *   insn=0x0000000000257950 string=0x0000000000257954 "c"
 *   insn=0x0000000000257954 string=0x0000000000257958 "`"
 *   insn=0x0000000000257954 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025795C string=0x0000000000257998 "i"
 *   insn=0x0000000000257960 string=0x0000000000257964 ""
 *   insn=0x0000000000257968 string=0x000000000025796C "`"
 *   insn=0x000000000025796C string=0x0000000000257970 "`"
 *   insn=0x0000000000257974 string=0x0000000000257978 "`b"
 *   insn=0x0000000000257974 string=0x0000000000257988 ""
 *   insn=0x000000000025797C string=0x0000000000257980 "X"
 *   insn=0x0000000000257980 string=0x0000000000257984 "`"
 *   insn=0x0000000000257988 string=0x000000000025798C ""
 *   insn=0x000000000025799C string=0x00000000002579A0 "(Y"
 *   insn=0x00000000002579A0 string=0x00000000002579A4 "i"
 *   insn=0x00000000002579A4 string=0x00000000002579A8 "I"
 *   insn=0x00000000002579A8 string=0x00000000002579AC "(Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::StartFalling(__int64 this)
{
  _QWORD *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x9

  v1 = (_QWORD *)this;
  if ( *(_QWORD *)(this + 344) )
  {
    this = *(_QWORD *)(this + 296);
    if ( this
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 35), (const Caver::Component *)v1),
          (this = v1[37]) != 0) )
    {
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 264LL))(this);
      if ( this )
      {
        v2 = v1[37];
        if ( !v2 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v1 + 35), (const Caver::Component *)v1);
          v2 = v1[37];
        }
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
        *(_DWORD *)(this + 12) = 0;
      }
    }
    *(_WORD *)(v1[43] + 44LL) = 256;
    v3 = v1[42];
    if ( v3 )
      *(_WORD *)(v3 + 44) = 256;
  }
  return this;
}

