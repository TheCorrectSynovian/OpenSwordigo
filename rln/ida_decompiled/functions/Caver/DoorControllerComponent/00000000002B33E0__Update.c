/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B33E0
 * Mangled: _ZN5Caver23DoorControllerComponent6UpdateEf
 * Demangled: Caver::DoorControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 7
 *   insn=0x00000000002B33F0 string=0x00000000002B33F4 "`B@"
 *   insn=0x00000000002B33F4 string=0x00000000002B33F8 ""
 *   insn=0x00000000002B33FC string=0x00000000002B3400 "`"
 *   insn=0x00000000002B33FC string=0x00000000002B3414 ""
 *   insn=0x00000000002B3408 string=0x00000000002B340C "`B@"
 *   insn=0x00000000002B3408 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B3428 string=0x00000000002B342C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::Update(Caver::DoorControllerComponent *this, long double a2)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 16);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 112), this);
  result = *((_QWORD *)this + 16);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  return result;
}

