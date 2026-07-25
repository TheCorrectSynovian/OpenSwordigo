/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C927C
 * Mangled: _ZThn24_N5Caver34SwingableWeaponControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::SwingableWeaponControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7B90  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Referenced strings: 13
 *   insn=0x00000000002C9290 string=0x00000000002C9294 ""
 *   insn=0x00000000002C9298 string=0x00000000002C929C "\t"
 *   insn=0x00000000002C92A8 string=0x00000000002C92AC "9"
 *   insn=0x00000000002C92AC string=0x00000000002C92B0 "hR@"
 *   insn=0x00000000002C92AC string=0x00000000001F7B90 "0'"
 *   insn=0x00000000002C92B4 string=0x00000000002C92B8 "`N@"
 *   insn=0x00000000002C92C4 string=0x00000000002C92C8 ""
 *   insn=0x00000000002C92D0 string=0x00000000002C92D4 " "
 *   insn=0x00000000002C92D8 string=0x00000000002C92DC "@"
 *   insn=0x00000000002C92DC string=0x00000000002C92E0 ""
 *   insn=0x00000000002C92E0 string=0x00000000002C92E4 ""
 *   insn=0x00000000002C92E8 string=0x00000000002C92FC ""
 *   insn=0x00000000002C930C string=0x00000000002C9310 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SwingableWeaponControllerComponent::Update(
        Caver::SwingableWeaponControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  char *v5; // x19
  int v6; // w8

  result = *((_QWORD *)this + 16);
  if ( result )
  {
    v5 = (char *)this - 24;
    if ( *(_QWORD *)(result + 40) )
    {
      result = Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform((Caver::SwingableWeaponControllerComponent *)((char *)this - 24));
      if ( *((_QWORD *)v5 + 20) )
        return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)v5 + 19) + 200LL))(
                 *((_QWORD *)v5 + 19),
                 a2);
    }
    else
    {
      *((_QWORD *)this + 16) = 0;
      v6 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v6;
      if ( !v6 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

