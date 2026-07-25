/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C91E8
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent6UpdateEf
 * Demangled: Caver::SwingableWeaponControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7B90  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Referenced strings: 14
 *   insn=0x00000000002C91F8 string=0x00000000002C91FC "`N@"
 *   insn=0x00000000002C91FC string=0x00000000002C9200 ""
 *   insn=0x00000000002C9204 string=0x00000000002C9208 ""
 *   insn=0x00000000002C9210 string=0x00000000002C9214 "_"
 *   insn=0x00000000002C9214 string=0x00000000002C9218 "hR@"
 *   insn=0x00000000002C9214 string=0x00000000001F7B90 "0'"
 *   insn=0x00000000002C921C string=0x00000000002C9220 "`N@"
 *   insn=0x00000000002C922C string=0x00000000002C9230 ""
 *   insn=0x00000000002C9238 string=0x00000000002C923C " "
 *   insn=0x00000000002C9240 string=0x00000000002C9244 "@"
 *   insn=0x00000000002C9244 string=0x00000000002C9248 ""
 *   insn=0x00000000002C9248 string=0x00000000002C924C ""
 *   insn=0x00000000002C9250 string=0x00000000002C9264 ""
 *   insn=0x00000000002C9274 string=0x00000000002C9278 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::Update(
        Caver::SwingableWeaponControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  int v5; // w8

  result = *((_QWORD *)this + 19);
  if ( result )
  {
    if ( *(_QWORD *)(result + 40) )
    {
      result = Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(this);
      if ( *((_QWORD *)this + 20) )
        return (*(__int64 (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 19) + 200LL))(
                 *((_QWORD *)this + 19),
                 a2);
    }
    else
    {
      *((_QWORD *)this + 19) = 0;
      v5 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v5;
      if ( !v5 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

