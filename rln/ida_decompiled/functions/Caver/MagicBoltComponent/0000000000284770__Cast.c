/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284770
 * Mangled: _ZN5Caver18MagicBoltComponent4CastEv
 * Demangled: Caver::MagicBoltComponent::Cast(void)
 *
 * Callers: 1
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA3D0  Caver::SpellComponent::Cast(void)
 *
 * Referenced strings: 10
 *   insn=0x0000000000284780 string=0x0000000000284784 "hBH"
 *   insn=0x0000000000284780 string=0x00000000001FA3D0 "0'"
 *   insn=0x0000000000284784 string=0x0000000000284788 "jr"
 *   insn=0x0000000000284788 string=0x000000000028478C "i"
 *   insn=0x000000000028478C string=0x0000000000284790 "H"
 *   insn=0x0000000000284790 string=0x0000000000284794 "hj@"
 *   insn=0x0000000000284794 string=0x0000000000284798 "i&"
 *   insn=0x000000000028479C string=0x00000000002847A0 "`"
 *   insn=0x00000000002847A8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002847AC string=0x00000000002847B0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::Cast(Caver::MagicBoltComponent *this)
{
  __int64 result; // x0
  int v3; // w9
  __int64 v4; // x8

  result = Caver::SpellComponent::Cast(this);
  v3 = *((_DWORD *)this + 35);
  *(_QWORD *)((char *)this + 284) = *(_QWORD *)((char *)this + 132);
  v4 = *((_QWORD *)this + 26);
  *((_DWORD *)this + 73) = v3;
  if ( !v4 )
    result = Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)this + 192), this);
  *((_BYTE *)this + 184) = 1;
  return result;
}

