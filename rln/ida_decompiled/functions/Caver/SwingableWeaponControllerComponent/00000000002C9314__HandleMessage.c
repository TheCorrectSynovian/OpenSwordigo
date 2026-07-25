/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9314
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent13HandleMessageEiPv
 * Demangled: Caver::SwingableWeaponControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000002C9328 string=0x00000000002C932C "@"
 *   insn=0x00000000002C932C string=0x00000000002C9330 ""
 *   insn=0x00000000002C9330 string=0x00000000002C9334 ""
 *   insn=0x00000000002C9334 string=0x00000000002C9338 "`"
 *   insn=0x00000000002C9348 string=0x00000000002C934C ""
 *   insn=0x00000000002C934C string=0x00000000002C9350 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::HandleMessage(
        Caver::SwingableWeaponControllerComponent *this,
        int a2,
        void *a3)
{
  _DWORD *v4; // x0
  int v5; // w8

  if ( a2 != 2 )
    return 0;
  v4 = (_DWORD *)*((_QWORD *)this + 19);
  if ( !v4 )
    return 0;
  *((_QWORD *)this + 19) = 0;
  v5 = v4[2] - 1;
  v4[2] = v5;
  if ( v5 )
    return 0;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  return 0;
}

