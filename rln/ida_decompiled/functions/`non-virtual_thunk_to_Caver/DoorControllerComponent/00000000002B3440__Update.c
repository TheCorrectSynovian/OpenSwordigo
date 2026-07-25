/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3440
 * Mangled: _ZThn24_N5Caver23DoorControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::DoorControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 6
 *   insn=0x00000000002B3454 string=0x00000000002B3458 ""
 *   insn=0x00000000002B345C string=0x00000000002B3478 ""
 *   insn=0x00000000002B3460 string=0x00000000002B3464 "`"
 *   insn=0x00000000002B346C string=0x00000000002B3470 "`B@"
 *   insn=0x00000000002B346C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B348C string=0x00000000002B3490 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DoorControllerComponent::Update(
        Caver::DoorControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  char *v5; // x19

  result = *((_QWORD *)this + 13);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  v5 = (char *)this - 24;
  Caver::ComponentOutletBase::Connect(
    (Caver::DoorControllerComponent *)((char *)this + 88),
    (Caver::DoorControllerComponent *)((char *)this - 24));
  result = *((_QWORD *)v5 + 16);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  return result;
}

